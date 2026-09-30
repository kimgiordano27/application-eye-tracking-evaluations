/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._IsTrackedDeviceConnected$$Invoke
ENTRY_POINT: 0431763c
PROGRAM: m3ar-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__IsTrackedDeviceConnected__Invoke
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long in_x9;
  int *in_x10;
  
  do {
                    /* try { // try from 04317640 to 0441765b has its CatchHandler @ 043178ec */
    if ((bool)in_ZR) {
      lVar1 = FUN_0406ae20();
LAB_04317660:
      lVar1 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar1 + 8));
      (**(code **)(lVar1 + 8))();
      FUN_04313bd4();
      return;
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      lVar1 = param_1 + (long)(in_x10[4] + param_4) * 0x10 + 0x138;
      goto LAB_04317660;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


