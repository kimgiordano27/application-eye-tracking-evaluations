/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._ResetSeatedZeroPose$$Invoke
ENTRY_POINT: 04316b98
PROGRAM: m3ar-libil2cpp.so
SCORE: 134
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_4
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__ResetSeatedZeroPose__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  long in_x10;
  int *piVar2;
  
  piVar2 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 4) * 0x10 + 0x138);
      goto 
      Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose___ctor
      ;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_0406ae20();

  Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose___ctor
  :
                    /* WARNING: Could not recover jumptable at 0x04316be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


