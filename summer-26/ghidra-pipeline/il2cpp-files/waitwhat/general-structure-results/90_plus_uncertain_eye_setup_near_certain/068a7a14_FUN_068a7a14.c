/*
FUNCTION_NAME: FUN_068a7a14
ENTRY_POINT: 068a7a14
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068a7a14(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((DAT_075590c5 & 1) == 0) {
    FUN_03188a78(OVRPlugin_HandStatus_TypeInfo);
    DAT_075590c5 = 1;
  }
  puVar1 = OVRPlugin_HandStatus_TypeInfo;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  if ((param_6 | 2) != 3) {
    return;
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    UnityEngine_GraphicsBuffer__IsValidBuffer_Injected
              (*(undefined4 *)(param_4 + 0x14),param_5,*(undefined8 *)(param_4 + 0x38),param_7);
    return;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar2 = FUN_05268174(*(long *)(param_4 + 0x40),param_5,
                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    local_50 = CONCAT44(param_2,uVar2);
    local_48 = param_3;
    if (*(long *)(param_4 + 0x48) != 0) {
      uVar2 = FUN_05268174(*(long *)(param_4 + 0x48),param_5,*(undefined8 *)puVar1);
      local_60 = CONCAT44(param_2,uVar2);
      local_58 = param_3;
      uVar2 = FUN_068a7cac(param_4,param_5,&local_50);
      local_70 = CONCAT44(param_2,uVar2);
      local_68 = param_3;
      FUN_068a7dd4(*(undefined4 *)(param_4 + 0x14),param_5,*(undefined8 *)(param_4 + 0x38),&local_50
                   ,&local_60,&local_70,param_7,param_8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


