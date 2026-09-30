/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfValues
ENTRY_POINT: 06ca52cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfValues
               (undefined8 param_1,void *param_2,long param_3)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong __n;
  ulong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulong __n_00;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *__dest;
  undefined8 *__dest_00;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  void *pvStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  char acStack_c [4];
  long lStack_8;
  
  lStack_38 = tpidr_el0;
  lStack_8 = *(long *)(lStack_38 + 0x28);
  plVar8 = (long *)(param_3 + 0x20);
  lVar6 = *plVar8;
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar3 = lVar6;
  uStack_30 = param_1;
  pvStack_28 = param_2;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_04481fb8(lVar6);
    uVar1 = *(ushort *)(*plVar8 + 0x135);
    lVar3 = *plVar8;
  }
  uVar9 = (ulong)*(uint *)(**(long **)(lVar6 + 0xc0) + 0xfc);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
    uVar1 = *(ushort *)(*plVar8 + 0x135);
    lVar6 = *plVar8;
  }
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0xfc);
  lVar3 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_04481fb8(lVar6);
    uVar1 = *(ushort *)(*plVar8 + 0x135);
    lVar3 = *plVar8;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
    uVar1 = *(ushort *)(*plVar8 + 0x135);
    lVar6 = *plVar8;
  }
  uVar7 = uVar9 + 0xf & 0x1fffffff0;
  uStack_50 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0xfc);
  puVar12 = (undefined8 *)((long)&uStack_50 - uVar7);
  puVar10 = (undefined8 *)((long)puVar12 - uVar7);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)puVar10 - uVar7);
  __dest_00 = (undefined8 *)((long)__dest - uVar7);
  uVar7 = uStack_50 + 0xf & 0x1fffffff0;
  puStack_40 = (undefined8 *)((long)__dest_00 - uVar7);
  puStack_48 = (undefined8 *)((long)puStack_40 - uVar7);
  pvVar13 = (void *)((long)puStack_48 - (__n_00 + 0xf & 0x1fffffff0));
  lVar3 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_04481fb8(lVar6);
    uVar1 = *(ushort *)(*plVar8 + 0x135);
    lVar3 = *plVar8;
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  plVar4 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30));
  lVar3 = *plVar8;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  pvVar5 = (void *)thunk_FUN_044a5a9c(uStack_30,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80)
                                     );
  memcpy(puVar12,pvVar5,uVar9);
  memcpy(pvVar13,pvStack_28,__n_00);
  lVar3 = *plVar8;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  pvVar5 = (void *)thunk_FUN_044a5a9c(pvVar13,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
  memcpy(puVar10,pvVar5,uVar9);
  if (plVar4 == (long *)0x0) {
LAB_06ca5860:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar3 = *plVar8;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar12 = (undefined8 *)*puVar12;
  }
  lVar3 = *plVar8;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  lVar3 = *(long *)(*plVar4 + 0x1c0);
  puStack_20 = puVar12;
  puStack_18 = puVar10;
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar4,&puStack_20,acStack_c);
  if (acStack_c[0] != '\0') {
    lVar6 = *plVar8;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_04481fb8(lVar6);
      uVar1 = *(ushort *)(*plVar8 + 0x135);
      lVar3 = *plVar8;
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    plVar4 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x50));
    lVar3 = *plVar8;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    pvVar5 = (void *)thunk_FUN_044a5a9c(uStack_30,
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(__dest,pvVar5,__n);
    memcpy(pvVar13,pvStack_28,__n_00);
    lVar3 = *plVar8;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    pvVar5 = (void *)thunk_FUN_044a5a9c(pvVar13,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) +
                                                         0x80) + 0x20);
    memcpy(__dest_00,pvVar5,__n);
    if (plVar4 == (long *)0x0) goto LAB_06ca5860;
    lVar3 = *plVar8;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar3 = *plVar8;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    lVar3 = *(long *)(*plVar4 + 0x1c0);
    puStack_20 = __dest;
    puStack_18 = __dest_00;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar4,&puStack_20,acStack_c);
    if (acStack_c[0] != '\0') {
      lVar6 = *plVar8;
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_04481fb8(lVar6);
        uVar1 = *(ushort *)(*plVar8 + 0x135);
        lVar3 = *plVar8;
      }
      puVar10 = puStack_40;
      uVar9 = uStack_50;
      pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x70);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      plVar4 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
      lVar3 = *plVar8;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      pvVar5 = (void *)thunk_FUN_044a5a9c(uStack_30,
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(puVar10,pvVar5,uVar9);
      memcpy(pvVar13,pvStack_28,__n_00);
      lVar3 = *plVar8;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      puVar12 = puStack_48;
      pvVar13 = (void *)thunk_FUN_044a5a9c(pvVar13,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8)
                                                            + 0x80) + 0x40);
      memcpy(puVar12,pvVar13,uVar9);
      if (plVar4 == (long *)0x0) goto LAB_06ca5860;
      lVar3 = *plVar8;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      lVar3 = *plVar8;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      lVar6 = lStack_38;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar12 = (undefined8 *)*puVar12;
      }
      lVar3 = *(long *)(*plVar4 + 0x1c0);
      puStack_20 = puVar10;
      puStack_18 = puVar12;
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar4,&puStack_20,acStack_c);
      bVar2 = acStack_c[0] != '\0';
      goto LAB_06ca5830;
    }
  }
  bVar2 = false;
  lVar6 = lStack_38;
LAB_06ca5830:
  if (*(long *)(lVar6 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


