/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorAdded$$BeginInvoke
ENTRY_POINT: 04a6d9dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorAdded__BeginInvoke(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  lVar1 = thunk_FUN_02b79548();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x20);
    *(long *)(unaff_x19 + 0x18) = lVar1;
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar1);
    }
    if (unaff_x23 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = thunk_FUN_02b79548();
      if (lVar1 == 0) goto LAB_04a6da38;
    }
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar1);
    *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
    *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
    return;
  }
LAB_04a6da38:
                    /* WARNING: Subroutine does not return */
  FUN_02b3ce44();
}


