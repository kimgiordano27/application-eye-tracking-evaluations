/*
FUNCTION_NAME: FUN_07a37de0
ENTRY_POINT: 07a37de0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07a37de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_08a47e28(&local_68,*(long *)(param_4 + 0x20),0);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    uVar1 = FUN_08982440(param_1,param_2,param_3,&local_50,0);
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


