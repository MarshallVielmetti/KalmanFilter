#ifndef KALMANFILTER_H
#define KALMANFILTER_H

template <typename PREDICTOR, typename STATE> class KalmanFilter {
public:
  KalmanFilter(STATE inititalState, double timestep,
               PREDICTOR predictionFunction)
      : {} // CONSTRUCTOR

  STATE getState(); // return state;

  void predict() {}

private:
  PREDICTOR pred; // function you pass in state to outputs predicted next state
  STATE state;    // struct
  double dt;      // time between loops
};

#endif