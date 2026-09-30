/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetStringTrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 04317fc4
PROGRAM: m3ar-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetStringTrackedDeviceProperty__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  undefined8 *unaff_x21;
  
  do {
    if ((bool)in_ZR) {
                    /* catch() { ... } // from try @ 04317f4c with catch @ 04317fd0
                       catch() { ... } // from try @ 04317fc0 with catch @ 04317fd0 */
      puVar1 = (undefined8 *)FUN_0406ae20();
                    /* try { // try from 04317fd4 to 04417fd7 has its CatchHandler @ 04317fe0 */
LAB_04317fe8:
      (*(code *)*puVar1)();
      if (unaff_x21 != (undefined8 *)0x0) {
        FUN_0892ab8c(*unaff_x21);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_04317fe8;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


