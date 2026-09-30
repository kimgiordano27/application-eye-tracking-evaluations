/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 01d7f4f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetAppCpuStartToGpuEndTime(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14(param_1);
  }
  uVar1 = FUN_01d7f284();
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    if (unaff_x19 != 0) {
      (**(code **)(*unaff_x20 + 0x2a8))();
      uVar1 = FUN_01c458dc();
      if ((uVar1 & 1) != 0) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


