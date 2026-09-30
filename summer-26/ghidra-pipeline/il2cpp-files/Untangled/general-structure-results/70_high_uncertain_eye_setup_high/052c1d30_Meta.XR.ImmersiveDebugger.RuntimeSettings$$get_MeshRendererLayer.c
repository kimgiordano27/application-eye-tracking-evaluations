/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_MeshRendererLayer
ENTRY_POINT: 052c1d30
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_RuntimeSettings__get_MeshRendererLayer(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  uint unaff_w26;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  for (; unaff_w26 != unaff_w22; unaff_w22 = unaff_w22 + 1) {
    if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_052c1da4;
    uVar1 = FUN_066cd398(*(long *)(unaff_x21 + 0x10),0);
    lVar3 = *(long *)(unaff_x19 + 0x60);
    if (lVar3 == 0) goto LAB_052c1da4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)unaff_w22 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_052c1da4;
    uVar2 = FUN_066cd398(lVar3,0);
    uVar1 = FUN_05465414(uVar1,*unaff_x23,uVar2,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
    FUN_06693690(uVar1,0);
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    FUN_066d3f5c(*(long *)(unaff_x21 + 0x10),0);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      FUN_066d4bec(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                   *(long *)(unaff_x21 + 0x10),0);
      return 1;
    }
  }
LAB_052c1da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


