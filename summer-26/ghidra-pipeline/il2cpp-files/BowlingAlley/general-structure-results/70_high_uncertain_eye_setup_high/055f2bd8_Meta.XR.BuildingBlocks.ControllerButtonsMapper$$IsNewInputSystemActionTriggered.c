/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsNewInputSystemActionTriggered
ENTRY_POINT: 055f2bd8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsNewInputSystemActionTriggered(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  uint unaff_w19;
  long unaff_x22;
  int unaff_w23;
  long lVar4;
  long unaff_x24;
  long lVar5;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fd48);
    *(undefined1 *)(unaff_x24 + 0x7dc) = 1;
  }
  puVar1 = PTR_DAT_0727fd48;
  if ((int)unaff_w19 < (int)(unaff_w23 + unaff_w19)) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = unaff_x22 + (long)(int)unaff_w19 * 8 + 0x20;
    lVar5 = (long)(int)(unaff_w23 + unaff_w19) - (long)(int)unaff_w19;
    do {
      uVar3 = *(uint *)(unaff_x22 + 0x18);
      if (uVar3 <= unaff_w19) {
LAB_055f2c88:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        uVar3 = *(uint *)(unaff_x22 + 0x18);
      }
      if (uVar3 <= unaff_w19) goto LAB_055f2c88;
      uVar2 = FUN_03e69bfc(lVar4);
      if ((uVar2 & 1) != 0) {
        return unaff_w19;
      }
      unaff_w19 = unaff_w19 + 1;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 8;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


