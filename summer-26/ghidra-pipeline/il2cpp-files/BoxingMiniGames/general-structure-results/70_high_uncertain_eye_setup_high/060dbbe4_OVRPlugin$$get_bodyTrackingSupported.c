/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 060dbbe4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x50));
  FUN_03642964(PTR_DAT_07a24838);
  FUN_03642964(PTR_DAT_07a24830);
  *(undefined1 *)(unaff_x20 + 0xb06) = 1;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5050);
    FUN_05d84434(lVar4,uVar5,*(undefined8 *)PTR_DAT_07a24838,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar4;
    thunk_FUN_036b7ad0(plVar2,lVar4);
  }
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x20) = lVar4;
    thunk_FUN_036b7ad0((long *)(unaff_x19 + 0x20),lVar4);
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
    thunk_FUN_071bca40();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


