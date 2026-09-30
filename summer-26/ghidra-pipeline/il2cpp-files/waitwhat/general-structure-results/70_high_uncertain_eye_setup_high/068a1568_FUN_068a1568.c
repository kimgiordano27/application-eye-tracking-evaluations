/*
FUNCTION_NAME: FUN_068a1568
ENTRY_POINT: 068a1568
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068a1568(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((DAT_07559099 & 1) == 0) {
    FUN_03188a78(OVRManager_EventListener_TypeInfo);
    FUN_03188a78(OVRManager_SystemHeadsetType_TypeInfo);
    DAT_07559099 = 1;
  }
  puVar2 = OVRManager_SystemHeadsetType_TypeInfo;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x1c0) != 0)) {
    lVar3 = FUN_050718a8(*(long *)(param_2 + 0x1c0),*(undefined8 *)OVRManager_EventListener_TypeInfo
                        );
    puVar1 = (undefined8 *)(param_1 + 0x90);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(param_2 + 0x1c0);
    }
    FUN_0507197c(*puVar1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


