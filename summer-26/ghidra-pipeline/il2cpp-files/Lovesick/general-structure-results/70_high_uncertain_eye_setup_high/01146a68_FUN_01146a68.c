/*
FUNCTION_NAME: FUN_01146a68
ENTRY_POINT: 01146a68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01146a68(undefined8 ****param_1,long param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong __n;
  void *pvVar17;
  int aiStack_c0 [2];
  long local_b8;
  long local_b0;
  ulong local_a8;
  void *local_a0;
  long local_98;
  long local_90;
  undefined8 ***local_88;
  int *local_80;
  int *piStack_78;
  int local_6c;
  long local_68;
  
                    /* catch() { ... } // from try @ 01146a58 with catch @ 01146a7c */
                    /* try { // try from 01146a84 to 01246a8b has its CatchHandler @ 01146aa4 */
  lVar6 = tpidr_el0;
                    /* try { // try from 01146a8c to 01246a9b has its CatchHandler @ 011467c8 */
  local_68 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 01146a9c to 01246aa3 has its CatchHandler @ 01146aa4 */
  plVar13 = (long *)(param_3 + 0x38);
  lVar8 = *plVar13;
                    /* catch() { ... } // from try @ 01146a30 with catch @ 01146aa4
                       catch() { ... } // from try @ 01146a84 with catch @ 01146aa4
                       catch() { ... } // from try @ 01146a9c with catch @ 01146aa4 */
  local_88 = param_1;
  if (lVar8 == 0) {
                    /* try { // try from 01146aa8 to 01246baf has its CatchHandler @ 01146aa8
                       catch() { ... } // from try @ 01146aa8 with catch @ 01146aa8
                       catch() { ... } // from try @ 01146c20 with catch @ 01146aa8
                       catch() { ... } // from try @ 01146cd4 with catch @ 01146aa8
                       catch() { ... } // from try @ 01146d9c with catch @ 01146aa8
                       catch() { ... } // from try @ 01146db0 with catch @ 01146aa8
                       catch() { ... } // from try @ 01146e0c with catch @ 01146aa8
                       catch() { ... } // from try @ 01146e44 with catch @ 01146aa8
                       catch() { ... } // from try @ 01146e60 with catch @ 01146aa8
                       catch() { ... } // from try @ 01146e90 with catch @ 01146aa8 */
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_ThrowIfExceptional__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Toggle>_Contains__);
    lVar8 = *plVar13;
    if (lVar8 == 0) {
      FUN_00d59478(param_3);
      lVar8 = *(long *)(param_3 + 0x38);
    }
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  if (*(int *)(lVar8 + 0x28) < 0) {
    iVar4 = thunk_FUN_00d42afc();
    uVar12 = iVar4 - 0x10;
  }
  else {
    uVar12 = 8;
  }
  lVar8 = *(long *)(*plVar13 + 0x10);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  if (*(int *)(lVar8 + 0x28) < 0) {
    uVar5 = thunk_FUN_00d42afc();
  }
  else {
    uVar5 = 0x18;
  }
  lVar9 = (long)aiStack_c0 - ((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar8 = *(long *)(*plVar13 + 0x20);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  local_98 = lVar6;
  if (*(int *)(lVar8 + 0x28) < 0) {
    uVar5 = thunk_FUN_00d42afc();
  }
  else {
    uVar5 = 0x18;
  }
  lVar8 = lVar9 - ((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar6 = *(long *)(*plVar13 + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    uVar5 = thunk_FUN_00d42afc();
  }
  else {
    uVar5 = 0x18;
  }
  lVar10 = lVar8 - ((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar6 = *(long *)(*plVar13 + 0x20);
  local_b8 = lVar10;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    iVar4 = thunk_FUN_00d42afc();
    uVar14 = iVar4 - 0x10;
  }
  else {
    uVar14 = 8;
  }
  lVar6 = *(long *)(*plVar13 + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0x28) < 0) {
    uVar5 = thunk_FUN_00d42afc();
  }
  else {
    uVar5 = 0x18;
  }
  local_b0 = lVar10 - ((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
  local_a8 = (ulong)uVar14;
  local_a0 = (void *)(local_b0 - (local_a8 + 0xf & 0x1fffffff0));
  __n = (ulong)uVar12;
  uVar5 = __n + 0xf & 0x1fffffff0;
  piVar16 = (int *)((long)local_a0 - uVar5);
  pvVar17 = (void *)((long)piVar16 - uVar5);
  memset(pvVar17,0,__n);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar7 = *(undefined8 **)(*plVar13 + 0x38);
  (*(code *)puVar7[2])(*puVar7,puVar7,param_2,0,&local_80);
  lVar6 = *plVar13;
  local_90 = param_2;
  if (0 < (int)local_80) {
    iVar4 = 0;
    do {
      puVar7 = *(undefined8 **)(lVar6 + 8);
      local_80 = &local_6c;
      piStack_78 = piVar16;
      local_6c = iVar4;
      (*(code *)puVar7[2])(*puVar7,puVar7,param_2,&local_80,piVar16);
      memcpy(pvVar17,piVar16,__n);
      lVar10 = *plVar13;
      lVar6 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c();
        lVar10 = *plVar13;
      }
      FUN_00da59dc(lVar6,*(undefined8 *)(lVar10 + 0x18),lVar9,pvVar17,0,&local_80);
      piVar3 = local_80;
      lVar11 = *plVar13;
      lVar10 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x132);
      lVar6 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_00d5941c(lVar10);
        lVar11 = *plVar13;
        lVar10 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x132);
      }
      uVar15 = *(undefined8 *)(lVar11 + 0x28);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_00d5941c(lVar10);
      }
      ppppuVar1 = (undefined8 ****)local_88;
      if (-1 < *(int *)(lVar10 + 0x28)) {
        ppppuVar1 = &local_88;
      }
      FUN_00da59dc(lVar6,uVar15,lVar8,ppppuVar1,0,&local_80);
      uVar5 = FUN_015fe7e8(piVar3,local_80,0);
      param_2 = local_90;
      if ((uVar5 & 1) == 0) {
        lVar9 = *plVar13;
        lVar8 = *(long *)(lVar9 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x132);
        lVar6 = lVar8;
        if ((uVar2 & 1) == 0) {
          lVar6 = FUN_00d5941c(lVar8);
          lVar9 = *plVar13;
          lVar8 = *(long *)(lVar9 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x132);
        }
        lVar10 = local_98;
        pvVar17 = local_a0;
        uVar15 = *(undefined8 *)(lVar9 + 0x28);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_00d5941c(lVar8);
        }
        ppppuVar1 = (undefined8 ****)local_88;
        if (-1 < *(int *)(lVar8 + 0x28)) {
          ppppuVar1 = &local_88;
        }
        FUN_00da59dc(lVar6,uVar15,local_b8,ppppuVar1,0,&local_80);
        uVar15 = FUN_01600424(*(undefined8 *)Method_System_Threading_Tasks_Task_ThrowIfExceptional__
                              ,local_80,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List<Toggle>_Contains__,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar15,0);
        lVar8 = *plVar13;
        lVar6 = *(long *)(lVar8 + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
          lVar8 = *plVar13;
        }
        ppppuVar1 = (undefined8 ****)local_88;
        if (-1 < *(int *)(lVar6 + 0x28)) {
          ppppuVar1 = &local_88;
        }
        memcpy(pvVar17,ppppuVar1,local_a8);
        lVar6 = *(long *)(lVar8 + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c();
        }
        uVar15 = thunk_FUN_00d61fa0(lVar6,pvVar17);
        lVar6 = *(long *)(*plVar13 + 0x10);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c(lVar6);
        }
        piVar16 = (int *)FUN_00da5060(uVar15,lVar6,piVar16);
        lVar6 = *(long *)(*plVar13 + 0x10);
        puVar7 = *(undefined8 **)(*plVar13 + 0x30);
        uVar15 = *puVar7;
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_00d5941c(lVar6);
        }
        if (-1 < *(int *)(lVar6 + 0x28)) {
          piVar16 = *(int **)piVar16;
        }
        local_80 = &local_6c;
        piStack_78 = piVar16;
        local_6c = iVar4;
        goto LAB_011470d8;
      }
      puVar7 = *(undefined8 **)(*plVar13 + 0x38);
      iVar4 = iVar4 + 1;
      (*(code *)puVar7[2])(*puVar7,puVar7,local_90,0,&local_80);
      lVar6 = *plVar13;
    } while (iVar4 < (int)local_80);
  }
  lVar9 = *(long *)(lVar6 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x132);
  lVar8 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_00d5941c(lVar9);
    lVar6 = *plVar13;
    lVar9 = *(long *)(lVar6 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x132);
  }
  lVar10 = local_98;
  pvVar17 = local_a0;
  uVar15 = *(undefined8 *)(lVar6 + 0x28);
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_00d5941c(lVar9);
  }
  ppppuVar1 = (undefined8 ****)local_88;
  if (-1 < *(int *)(lVar9 + 0x28)) {
    ppppuVar1 = &local_88;
  }
  FUN_00da59dc(lVar8,uVar15,local_b0,ppppuVar1,0,&local_80);
  piVar3 = local_80;
  if (*(int *)(*(long *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026fa308(piVar3,0);
  lVar8 = *plVar13;
  lVar6 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
    lVar8 = *plVar13;
  }
  ppppuVar1 = (undefined8 ****)local_88;
  if (-1 < *(int *)(lVar6 + 0x28)) {
    ppppuVar1 = &local_88;
  }
  memcpy(pvVar17,ppppuVar1,local_a8);
  lVar6 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  uVar15 = thunk_FUN_00d61fa0(lVar6,pvVar17);
  lVar6 = *(long *)(*plVar13 + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c(lVar6);
  }
  piVar16 = (int *)FUN_00da5060(uVar15,lVar6,piVar16);
  lVar6 = *(long *)(*plVar13 + 0x10);
  puVar7 = *(undefined8 **)(*plVar13 + 0x40);
  uVar15 = *puVar7;
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c(lVar6);
  }
  local_80 = piVar16;
  if (-1 < *(int *)(lVar6 + 0x28)) {
    piVar16 = *(int **)piVar16;
    local_80 = piVar16;
  }
LAB_011470d8:
  (*(code *)puVar7[2])(uVar15,puVar7,local_90,&local_80,piVar16);
  if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


