/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 01db63a0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0234bca8;
  if ((DAT_0247da1f & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    DAT_0247da1f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01db642c(param_1);
    return;
  }
  return;
}


