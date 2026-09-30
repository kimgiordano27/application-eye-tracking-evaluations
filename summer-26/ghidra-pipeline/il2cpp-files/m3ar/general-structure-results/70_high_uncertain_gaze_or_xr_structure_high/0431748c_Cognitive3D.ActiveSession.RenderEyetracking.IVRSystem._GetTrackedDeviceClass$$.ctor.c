/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetTrackedDeviceClass$$.ctor
ENTRY_POINT: 0431748c
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


bool Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetTrackedDeviceClass___ctor
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  
  do {
    if ((bool)in_ZR) {
      lVar2 = FUN_0406ae20();
                    /* try { // try from 0431749c to 0441749f has its CatchHandler @ 04317900 */
LAB_043174b8:
                    /* try { // try from 043174bc to 044174c7 has its CatchHandler @ 0431788c */
      lVar2 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar2 + 8));
      iVar1 = (**(code **)(lVar2 + 8))();
      return iVar1 == *(int *)(unaff_x19 + 100);
    }
    if (*(long *)(in_x10 + 2) == param_3) {
                    /* try { // try from 043174a8 to 044174ab has its CatchHandler @ 043178e8 */
                    /* try { // try from 043174b0 to 044174bb has its CatchHandler @ 04317890 */
      lVar2 = param_1 + (long)(in_x10[4] + param_4) * 0x10 + 0x138;
      goto LAB_043174b8;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


