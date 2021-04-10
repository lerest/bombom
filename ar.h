#ifndef AR_H
#define AR_H
class Cube {
public:
  int *side;
  int plosha_kvadrata(int side) {
    int answer;
    answer = side * side;
    return answer;
  }
  int perimetr_kvadrata(int side) {
    int answer;
    answer = 4 * side;
    return answer;
  }
};
#endif // AR_H
