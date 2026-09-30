/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResLevel
ENTRY_POINT: 07a22cf0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tiledMultiResLevel(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x21 + 0x195) = 1;
  plVar4 = (long *)(unaff_x19 + 0x68);
  lVar2 = FUN_076c071c(*plVar4);
  puVar1 = PTR_DAT_092efbf0;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_092efbf0;
    lVar3 = thunk_FUN_040b4e00(lVar2,uVar5);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)puVar1;
      *plVar4 = lVar3;
      lVar3 = thunk_FUN_040b4e00(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_07a22d5c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_07a22d5c:
  thunk_FUN_040ec700(plVar4,lVar3);
  return;
}


