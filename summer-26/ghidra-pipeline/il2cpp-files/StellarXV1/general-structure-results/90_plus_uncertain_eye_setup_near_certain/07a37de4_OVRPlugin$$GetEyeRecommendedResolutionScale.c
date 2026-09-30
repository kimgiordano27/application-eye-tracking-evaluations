/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 07a37de4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetEyeRecommendedResolutionScale
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_08a47e28(&stack0x00000008,*(long *)(param_4 + 0x20),0);
    uStack0000000000000028 = in_stack_00000010;
    uStack0000000000000020 = in_stack_00000008;
    uStack0000000000000030 = in_stack_00000018;
    uVar1 = FUN_08982440(param_1,param_2,param_3,&stack0x00000020,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_4 + 0x20) == 0) goto OVRPlugin__GetAppCpuStartToGpuEndTime;
      param_1 = FUN_08a48460(param_1,param_2,param_3,*(long *)(param_4 + 0x20),0);
    }
    if (*(long *)(param_4 + 0x20) != 0) {
      FUN_08a47d30(param_1,param_2,param_3,*(long *)(param_4 + 0x20),0);
      return;
    }
  }
OVRPlugin__GetAppCpuStartToGpuEndTime:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


