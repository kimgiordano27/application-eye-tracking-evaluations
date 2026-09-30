/*
FUNCTION_NAME: FUN_068a8354
ENTRY_POINT: 068a8354
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_068a8354(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((DAT_075590c8 & 1) == 0) {
    FUN_03188a78(OVRPlugin_LogLevel_TypeInfo);
    FUN_03188a78(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_075590c8 = 1;
  }
  local_28 = 0;
  local_30 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = FUN_05269c4c(*(long *)(param_1 + 0x40),param_2,&local_30,
                         *(undefined8 *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    if ((uVar2 & 1) == 0) {
      return;
    }
    FUN_065b2ee8((undefined4)local_30,local_30._4_4_,local_28,0);
    if (param_2 != 0) {
      FUN_068dece0(param_2,0);
      puVar1 = OVRPlugin_LogLevel_TypeInfo;
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_05269688(*(long *)(param_1 + 0x40),param_2,*(undefined8 *)OVRPlugin_LogLevel_TypeInfo);
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_05269688(*(long *)(param_1 + 0x48),param_2,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


