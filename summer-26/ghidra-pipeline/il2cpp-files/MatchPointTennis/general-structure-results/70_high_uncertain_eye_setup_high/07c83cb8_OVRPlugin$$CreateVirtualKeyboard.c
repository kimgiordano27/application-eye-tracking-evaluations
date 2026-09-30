/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboard
ENTRY_POINT: 07c83cb8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateVirtualKeyboard(void)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  long lVar2;
  
  if (in_w8 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x38);
  uVar1 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f28bd8);
  FUN_073a72a8();
  if (lVar2 != 0) {
    FUN_0574631c(lVar2,uVar1,*(undefined8 *)PTR_DAT_09f50198);
    FUN_07c83d40(0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_094da31c(*(long *)(unaff_x19 + 0x40),0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


