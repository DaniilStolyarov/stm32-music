#include "Include/Player.h"

Player::Player(MCUFRIEND_kbv* _tft, Vector2f _position)
{
    updateTimestamp = millis();
    tft = _tft;
    position = _position;
    tft->drawCircle(position.x, position.y, radius, color);
}
void Vector2i_constrain(Vector2f& vec, Vector2f min, Vector2f max)
{
    vec.x = constrain(vec.x, min.x, max.x);
    vec.y = constrain(vec.y, min.y, max.y);
}
void Player::update(Vector2f movement)
{
    //Serial.printf("pos: {%d, %d}\n", (int)position.x, (int)position.y);
    float deltaTime = (millis() - updateTimestamp) / (float)1000;
    if (movement != Vector2f{0,0})
    {
        tft->fillCircle(position.x, position.y, radius, background);
    }
    
    position = position + movement * deltaTime * movementSpeed;
    Vector2i_constrain(position, Vector2f{0, 0}, Vector2f{(float)tft->width(), (float)tft->height() - 80});
    updateTimestamp = millis();

    if (true)
    {
        tft->fillCircle(position.x, position.y, radius, color);
    }
}

bool lineSegmentCircleCollision(Vector2f L0, Vector2f S, Vector2f R0, float radius)
{
    static const float Epsilon = 0.01f;
    Vector2f N = Vector2f{S.y, -S.x};
    float Nsize = sqrt(N.x * N.x + N.y * N.y);
    float dist = (N.x * (R0.x - L0.x) + N.y * (R0.y - L0.y)) / Nsize;
    
    Vector2f N_base = Vector2f{N.x / Nsize, N.y / Nsize};
    Vector2f R1 = R0 - N_base * 10;
    Vector2f L1 = L0 + S * 10;

    float x1 = L0.x, y1 = L0.y, x2 = L1.x, y2 = L1.y,
          x3 = R0.x, y3 = R0.y, x4 = R1.x, y4 = R1.y;
    Vector2f P;
    P.x = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2)*(x3 * y4 - y3 * x4)) / 
        ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));
        
    P.y = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2)*(x3 * y4 - y3 * x4)) / 
        ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));

    
    Vector2f B = L0 + S;

    float AB = (B - L0).size();
    float AP = (P - L0).size();
    float PB = (B - P).size();
    //Serial.print(AB); Serial.print(" "); Serial.println(AP + PB);

    return abs((AP + PB) - AB) < Epsilon && (P - R0).size() < radius;
}

bool Player::collide(Rectangle* rect)
{
    Vector2f A = rect->position - rect->size * 0.5f;
    Vector2f B = rect->position + Vector2f{rect->size.x * 0.5f, -rect->size.y * 0.5f};
    Vector2f C = rect->position + rect->size * 0.5f;
    Vector2f D = rect->position + Vector2f{-rect->size.x * 0.5f, +rect->size.y * 0.5f};

    bool collisionResult = 
    lineSegmentCircleCollision(A, B - A, position, radius) ||
    lineSegmentCircleCollision(B, C - B, position, radius) ||
    lineSegmentCircleCollision(C, D - C, position, radius) ||
    lineSegmentCircleCollision(D, A - D, position, radius);


    //Serial.println(collisionResult);
    return collisionResult;
}