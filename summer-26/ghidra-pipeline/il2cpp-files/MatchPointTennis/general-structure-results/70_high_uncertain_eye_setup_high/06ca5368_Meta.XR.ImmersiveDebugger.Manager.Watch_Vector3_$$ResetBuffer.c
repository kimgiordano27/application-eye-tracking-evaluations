/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ResetBuffer
ENTRY_POINT: 06ca5368
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ResetBuffer(long param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ushort *in_x9;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x19;
  ulong __n;
  size_t unaff_x21;
  undefined8 *puVar9;
  code *pcVar10;
  size_t __n_00;
  size_t unaff_x24;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *__dest;
  undefined8 *__dest_00;
  long unaff_x29;
  
  uVar1 = *in_x9;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0xfc);
  lVar3 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_04481fb8(param_1);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar7 = unaff_x21 + 0xf & 0x1fffffff0;
  uVar8 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x18) + 0xfc);
  puVar11 = (undefined8 *)(&stack0x00000000 + -uVar7);
  puVar9 = (undefined8 *)((long)puVar11 - uVar7);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)puVar9 - uVar7);
  __dest_00 = (undefined8 *)((long)__dest - uVar7);
  uVar7 = uVar8 + 0xf & 0x1fffffff0;
  lVar6 = (long)__dest_00 - uVar7;
  *(long *)(unaff_x29 + -0x40) = lVar6;
  lVar6 = lVar6 - uVar7;
  *(ulong *)(unaff_x29 + -0x50) = uVar8;
  *(long *)(unaff_x29 + -0x48) = lVar6;
  pvVar12 = (void *)(lVar6 - (unaff_x24 + 0xf & 0x1fffffff0));
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar6 = *unaff_x19;
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_04481fb8(lVar6);
  }
  plVar4 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  pvVar5 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80)
                                     );
  memcpy(puVar11,pvVar5,unaff_x21);
  memcpy(pvVar12,*(void **)(unaff_x29 + -0x28),unaff_x24);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  pvVar5 = (void *)thunk_FUN_044a5a9c(pvVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
  memcpy(puVar9,pvVar5,unaff_x21);
  if (plVar4 == (long *)0x0) {
LAB_06ca5860:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar11 = (undefined8 *)*puVar11;
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  lVar3 = *plVar4;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
  lVar3 = *(long *)(lVar3 + 0x1c0);
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    lVar6 = *unaff_x19;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_04481fb8(lVar6);
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
      lVar3 = *unaff_x19;
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    plVar4 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x50));
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    pvVar5 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(__dest,pvVar5,__n);
    memcpy(pvVar12,*(void **)(unaff_x29 + -0x28),unaff_x24);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    pvVar5 = (void *)thunk_FUN_044a5a9c(pvVar12,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) +
                                                         0x80) + 0x20);
    memcpy(__dest_00,pvVar5,__n);
    if (plVar4 == (long *)0x0) goto LAB_06ca5860;
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    lVar3 = *plVar4;
    *(undefined8 **)(unaff_x29 + -0x20) = __dest;
    *(undefined8 **)(unaff_x29 + -0x18) = __dest_00;
    lVar3 = *(long *)(lVar3 + 0x1c0);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      lVar6 = *unaff_x19;
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_04481fb8(lVar6);
        uVar1 = *(ushort *)(*unaff_x19 + 0x135);
        lVar3 = *unaff_x19;
      }
      puVar9 = *(undefined8 **)(unaff_x29 + -0x40);
      __n_00 = *(size_t *)(unaff_x29 + -0x50);
      pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x70);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      plVar4 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      pvVar5 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x30),
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(puVar9,pvVar5,__n_00);
      memcpy(pvVar12,*(void **)(unaff_x29 + -0x28),unaff_x24);
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      puVar11 = *(undefined8 **)(unaff_x29 + -0x48);
      pvVar12 = (void *)thunk_FUN_044a5a9c(pvVar12,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8)
                                                            + 0x80) + 0x40);
      memcpy(puVar11,pvVar12,__n_00);
      if (plVar4 == (long *)0x0) goto LAB_06ca5860;
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      lVar6 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      lVar3 = *plVar4;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar9;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
      lVar3 = *(long *)(lVar3 + 0x1c0);
      (**(code **)(lVar3 + 0x10))
                (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
      bVar2 = *(char *)(unaff_x29 + -0xc) != '\0';
      goto LAB_06ca5830;
    }
  }
  lVar6 = *(long *)(unaff_x29 + -0x38);
  bVar2 = false;
LAB_06ca5830:
  if (*(long *)(lVar6 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


