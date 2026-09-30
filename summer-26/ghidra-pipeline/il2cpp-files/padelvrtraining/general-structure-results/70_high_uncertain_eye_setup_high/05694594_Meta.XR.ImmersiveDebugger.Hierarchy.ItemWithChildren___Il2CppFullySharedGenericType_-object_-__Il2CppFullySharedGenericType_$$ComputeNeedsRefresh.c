/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$ComputeNeedsRefresh
ENTRY_POINT: 05694594
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<__Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>__ComputeNeedsRefresh
               (long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong in_x9;
  long in_x10;
  long unaff_x19;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x29;
  
  lVar13 = in_x10 - (in_x9 & 0x1fffffff0);
  lVar12 = lVar13 - ((ulong)*(uint *)(*(long *)(param_1 + 0x78) + 0xfc) + 0xf & 0x1fffffff0);
  lVar14 = lVar12 - ((ulong)*(uint *)(*(long *)(param_1 + 0x80) + 0xfc) + 0xf & 0x1fffffff0);
  lVar11 = lVar14 - ((ulong)*(uint *)(*(long *)(param_1 + 0x90) + 0xfc) + 0xf & 0x1fffffff0);
  bVar1 = *(byte *)(param_3 + 0x135);
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(param_2 + 0x20);
  if ((bVar1 & 1) == 0) {
    FUN_03d8f26c(param_3);
  }
  puVar2 = (undefined8 *)FUN_03d2d438();
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_03d8f26c(lVar8);
  }
  puVar3 = (undefined8 *)FUN_03d2d438();
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
  }
  puVar4 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x68),lVar8);
                    /* try { // try from 05694680 to 057946a7 has its CatchHandler @ 056949b4 */
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
  }
  puVar5 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x60),lVar8,lVar13);
  lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78);
                    /* try { // try from 056946c0 to 05794723 has its CatchHandler @ 056949b8 */
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_03d8f26c(lVar13);
  }
  puVar6 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x58),lVar13,lVar12);
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c(lVar12);
  }
  puVar7 = (undefined8 *)FUN_03d2d438(*(undefined8 *)(unaff_x29 + -0x50),lVar12,lVar14);
  if (*(long *)(unaff_x29 + -0x48) != 0) {
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if (-1 < *(int *)(*(long *)(lVar12 + 0x58) + 0x28)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (-1 < *(int *)(*(long *)(lVar12 + 0x60) + 0x28)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if (-1 < *(int *)(*(long *)(lVar12 + 0x68) + 0x28)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    puVar9 = *(undefined8 **)(lVar12 + 0x88);
    if (-1 < *(int *)(*(long *)(lVar12 + 0x70) + 0x28)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    uVar10 = *puVar9;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x78) + 0x28)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    if (-1 < *(int *)(*(long *)(lVar12 + 0x80) + 0x28)) {
      puVar7 = (undefined8 *)*puVar7;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar2;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x30) = puVar4;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar5;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    *(long *)(unaff_x29 + -0x10) = lVar11;
    (*(code *)puVar9[2])(uVar10,puVar9,*(long *)(unaff_x29 + -0x48),unaff_x29 + -0x40,lVar11);
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90),lVar11)
    ;
    if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


