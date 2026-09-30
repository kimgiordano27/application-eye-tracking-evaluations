/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$ComputeNumberOfChildren
ENTRY_POINT: 05693c38
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<__Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>__ComputeNumberOfChildren
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_03d8f26c(param_3);
  }
  puVar1 = (undefined8 *)FUN_03d2d438();
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  puVar2 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x50),lVar5);
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  puVar3 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x48),lVar5);
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  puVar4 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x40),lVar5);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if (-1 < *(int *)(*(long *)(lVar5 + 0x50) + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0x78);
  if (-1 < *(int *)(*(long *)(lVar5 + 0x60) + 0x28)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  uVar7 = *puVar6;
  if (-1 < *(int *)(*(long *)(lVar5 + 0x68) + 0x28)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  if (-1 < *(int *)(*(long *)(lVar5 + 0x70) + 0x28)) {
    puVar4 = (undefined8 *)*puVar4;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x30) = puVar1;
  *(undefined8 **)(unaff_x29 + -0x28) = puVar2;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  (*(code *)puVar6[2])(uVar7);
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


