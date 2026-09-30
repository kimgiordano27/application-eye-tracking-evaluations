/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 01db630c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0234bbd0;
  if ((DAT_0247da1e & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbd0);
    DAT_0247da1e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d7d550(param_1,param_2,param_3,param_4,0);
  return;
}


