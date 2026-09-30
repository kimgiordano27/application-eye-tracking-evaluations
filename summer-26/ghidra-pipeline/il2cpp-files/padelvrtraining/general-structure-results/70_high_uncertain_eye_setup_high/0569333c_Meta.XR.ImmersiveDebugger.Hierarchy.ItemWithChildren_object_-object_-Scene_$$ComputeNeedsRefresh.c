/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-Scene>$$ComputeNeedsRefresh
ENTRY_POINT: 0569333c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_Scene>__ComputeNeedsRefresh
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long unaff_x29;
  
  puVar1 = (undefined8 *)FUN_03d2d438();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_03d8f26c(lVar4);
  }
  puVar2 = (undefined8 *)FUN_03d2d438();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 05693398 to 057933bf has its CatchHandler @ 056935e0 */
    lVar4 = FUN_03d8f26c(lVar4);
  }
  puVar3 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x38),lVar4);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if (-1 < *(int *)(*(long *)(lVar4 + 0x48) + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x68);
  if (-1 < *(int *)(*(long *)(lVar4 + 0x50) + 0x28)) {
                    /* try { // try from 056933d8 to 0579343b has its CatchHandler @ 056935e4 */
    puVar1 = (undefined8 *)*puVar1;
  }
  uVar6 = *puVar5;
  if (-1 < *(int *)(*(long *)(lVar4 + 0x58) + 0x28)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  if (-1 < *(int *)(*(long *)(lVar4 + 0x60) + 0x28)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x28) = puVar1;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar2;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  (*(code *)puVar5[2])(uVar6);
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


