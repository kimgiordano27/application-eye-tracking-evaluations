/*
FUNCTION_NAME: OVRManager$$RegisterEventListener
ENTRY_POINT: 05ff4600
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__RegisterEventListener(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar5;
  
  *(undefined1 *)(unaff_x21 + 0x88a) = in_w8;
  plVar1 = (long *)(unaff_x19 + 0x168);
  lVar3 = FUN_05e4761c(*(undefined8 *)(unaff_x19 + 0x168));
  puVar2 = PTR_DAT_075d9e08;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_075d9e08;
    lVar4 = thunk_FUN_0322f04c(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_0322f04c(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_05ff4668;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2730(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_05ff4668:
  thunk_FUN_0329bf60(plVar1,lVar4);
  return;
}


