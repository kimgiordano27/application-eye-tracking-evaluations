/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<Scene,-object,-object>$$ComputeNeedsRefresh
ENTRY_POINT: 05693b1c
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


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<Scene,_object,_object>__ComputeNeedsRefresh
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  long lStack_10;
  long lStack_8;
  
  lStack_58 = tpidr_el0;
  lStack_8 = *(long *)(lStack_58 + 0x28);
  lVar8 = *(long *)(*(long *)(param_7 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar8 + 0x50);
  uVar1 = *(uint *)(lVar6 + 0xfc);
  lVar11 = (long)(auStack_60 + -((ulong)uVar1 + 0xf & 0x1fffffff0)) -
           ((ulong)*(uint *)(*(long *)(lVar8 + 0x58) + 0xfc) + 0xf & 0x1fffffff0);
  lVar10 = lVar11 - ((ulong)*(uint *)(*(long *)(lVar8 + 0x60) + 0xfc) + 0xf & 0x1fffffff0);
  lVar13 = lVar10 - ((ulong)*(uint *)(*(long *)(lVar8 + 0x68) + 0xfc) + 0xf & 0x1fffffff0);
  lVar12 = lVar13 - ((ulong)*(uint *)(*(long *)(lVar8 + 0x70) + 0xfc) + 0xf & 0x1fffffff0);
  lVar8 = lVar12 - ((ulong)*(uint *)(*(long *)(lVar8 + 0x80) + 0xfc) + 0xf & 0x1fffffff0);
  lVar9 = *(long *)(param_1 + 0x20);
  uStack_50 = param_4;
  uStack_48 = param_5;
  uStack_40 = param_6;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puVar2 = (undefined8 *)
           FUN_03d2d438(param_2,lVar6,auStack_60 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
  lVar6 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puVar3 = (undefined8 *)FUN_03d2d438(param_3,lVar6,lVar11);
  lVar6 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puVar4 = (undefined8 *)FUN_03d2d438(uStack_50,lVar6,lVar10);
  lVar6 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x68);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puVar5 = (undefined8 *)FUN_03d2d438(uStack_48,lVar6,lVar13);
  lVar6 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  puStack_18 = (undefined8 *)FUN_03d2d438(uStack_40,lVar6,lVar12);
  if (lVar9 != 0) {
    lVar6 = *(long *)(*(long *)(param_7 + 0x20) + 0xc0);
    if (-1 < *(int *)(*(long *)(lVar6 + 0x50) + 0x28)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (-1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x28)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    puVar7 = *(undefined8 **)(lVar6 + 0x78);
    if (-1 < *(int *)(*(long *)(lVar6 + 0x60) + 0x28)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if (-1 < *(int *)(*(long *)(lVar6 + 0x68) + 0x28)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    if (-1 < *(int *)(*(long *)(lVar6 + 0x70) + 0x28)) {
      puStack_18 = (undefined8 *)*puStack_18;
    }
    puStack_38 = puVar2;
    puStack_30 = puVar3;
    puStack_28 = puVar4;
    puStack_20 = puVar5;
    lStack_10 = lVar8;
    (*(code *)puVar7[2])(*puVar7,puVar7,lVar9,&puStack_38,lVar8);
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x80),lVar8);
    if (*(long *)(lStack_58 + 0x28) == lStack_8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


