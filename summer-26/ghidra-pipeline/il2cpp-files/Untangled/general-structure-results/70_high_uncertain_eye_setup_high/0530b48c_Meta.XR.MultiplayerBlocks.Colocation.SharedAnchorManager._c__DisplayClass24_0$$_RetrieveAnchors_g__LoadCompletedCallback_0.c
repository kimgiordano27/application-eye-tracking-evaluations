/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<>c__DisplayClass24_0$$<RetrieveAnchors>g__LoadCompletedCallback|0
ENTRY_POINT: 0530b48c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0__<RetrieveAnchors>g__LoadCompletedCallback_0
               (void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c();
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar4 = (long *)(unaff_x19 + 0xa0);
  if (*plVar4 == 0) {
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d094f8);
    FUN_066a0464(lVar3,0);
    *plVar4 = lVar3;
    thunk_FUN_02f411dc(plVar4,lVar3);
  }
  if (*(int *)(unaff_x19 + 0xa8) == 0) {
    uVar1 = FUN_066a0664(*(undefined8 *)PTR_DAT_06d09518,0);
    *(undefined4 *)(unaff_x19 + 0xa8) = uVar1;
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0x68) + 0x120) != '\0') {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(uVar5,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x40);
        if (lVar3 == 0) goto LAB_0530b538;
        goto LAB_0530b554;
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 != 0) {
LAB_0530b554:
      FUN_0530bd8c(*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                   *(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24));
      return;
    }
  }
LAB_0530b538:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


