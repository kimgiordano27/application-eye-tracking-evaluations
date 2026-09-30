/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 032185e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long *unaff_x24;
  
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = FUN_0321886c();
  if ((unaff_w19 >> 9 & 1) == 0) {
    if (uVar1 == (int)(short)uVar1) {
      return;
    }
  }
  else if (uVar1 < 0x10000) {
    return;
  }
  thunk_FUN_0159f088(PTR_DAT_06dabe18);
  uVar2 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  uVar3 = thunk_FUN_0159f088(PTR_DAT_06df8f68);
  FUN_031c8b6c(uVar2,uVar3,0);
  uVar3 = thunk_FUN_0159f088(PTR_DAT_06e46768);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar2,uVar3);
}


