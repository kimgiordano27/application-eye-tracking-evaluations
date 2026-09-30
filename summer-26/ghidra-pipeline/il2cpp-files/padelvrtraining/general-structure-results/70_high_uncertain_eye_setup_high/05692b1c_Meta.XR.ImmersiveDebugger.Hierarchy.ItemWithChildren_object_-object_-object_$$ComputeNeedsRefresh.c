/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$ComputeNeedsRefresh
ENTRY_POINT: 05692b1c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__ComputeNeedsRefresh
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long unaff_x28;
  long unaff_x29;
  
  puVar1 = (undefined8 *)FUN_03d2d438();
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_03d8f26c(lVar3);
  }
  puVar2 = (undefined8 *)FUN_03d2d438();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  puVar4 = *(undefined8 **)(lVar3 + 0x58);
  if (-1 < *(int *)(*(long *)(lVar3 + 0x40) + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  uVar5 = *puVar4;
  if (-1 < *(int *)(*(long *)(lVar3 + 0x48) + 0x28)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  if (-1 < *(int *)(*(long *)(lVar3 + 0x50) + 0x28)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar1;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  (*(code *)puVar4[2])(uVar5);
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60));
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


