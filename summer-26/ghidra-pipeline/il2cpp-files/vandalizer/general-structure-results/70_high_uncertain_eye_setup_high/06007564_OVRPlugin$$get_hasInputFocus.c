/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 06007564
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasInputFocus(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    uStack_28 = FUN_0600447c(param_2);
    if (lVar2 != 0) {
      FUN_060072e8(lVar2,&uStack_28);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar1 = FUN_06e5502c(*(long *)(param_1 + 0x20),0);
        FUN_05f9d090(uVar1,param_3,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


