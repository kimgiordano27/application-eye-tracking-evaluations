/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 01b37b2c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation
               (long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ushort in_w9;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x19;
  ulong __n;
  size_t unaff_x21;
  undefined8 *puVar9;
  code *pcVar10;
  size_t __n_00;
  ulong __n_01;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *__dest;
  undefined8 *__dest_00;
  long unaff_x29;
  
  __n_01 = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 8) + 0xfc);
  lVar3 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_0103c244(param_1);
    in_w9 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  lVar4 = lVar3;
  if ((in_w9 & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
    in_w9 = *(ushort *)(*unaff_x19 + 0x135);
    lVar4 = *unaff_x19;
  }
  uVar7 = unaff_x21 + 0xf & 0x1fffffff0;
  uVar8 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0xfc);
  puVar11 = (undefined8 *)(&stack0x00000000 + -uVar7);
  puVar9 = (undefined8 *)((long)puVar11 - uVar7);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)puVar9 - uVar7);
  __dest_00 = (undefined8 *)((long)__dest - uVar7);
  uVar7 = uVar8 + 0xf & 0x1fffffff0;
  lVar3 = (long)__dest_00 - uVar7;
  *(long *)(unaff_x29 + -0x40) = lVar3;
  lVar3 = lVar3 - uVar7;
  *(ulong *)(unaff_x29 + -0x50) = uVar8;
  *(long *)(unaff_x29 + -0x48) = lVar3;
  pvVar12 = (void *)(lVar3 - (__n_01 + 0xf & 0x1fffffff0));
  lVar3 = lVar4;
  if ((in_w9 & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
    in_w9 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x98);
  if ((in_w9 & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  plVar5 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  pvVar6 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80)
                                     );
  memcpy(puVar11,pvVar6,unaff_x21);
  memcpy(pvVar12,*(void **)(unaff_x29 + -0x28),__n_01);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  pvVar6 = (void *)thunk_FUN_01023220(pvVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
  memcpy(puVar9,pvVar6,unaff_x21);
  if (plVar5 == (long *)0x0) {
LAB_01b3802c:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar11 = (undefined8 *)*puVar11;
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  lVar3 = *plVar5;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
  lVar3 = *(long *)(lVar3 + 0x1a0);
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)(lVar3 + 8),lVar3,plVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
  iVar2 = *(int *)(unaff_x29 + -0xc);
  if (iVar2 == 0) {
    lVar4 = *unaff_x19;
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
      lVar3 = *unaff_x19;
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xb8);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    plVar5 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb8));
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    pvVar6 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(__dest,pvVar6,__n);
    memcpy(pvVar12,*(void **)(unaff_x29 + -0x28),__n_01);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    pvVar6 = (void *)thunk_FUN_01023220(pvVar12,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) +
                                                         0x80) + 0x20);
    memcpy(__dest_00,pvVar6,__n);
    if (plVar5 == (long *)0x0) goto LAB_01b3802c;
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    lVar3 = *plVar5;
    *(undefined8 **)(unaff_x29 + -0x20) = __dest;
    *(undefined8 **)(unaff_x29 + -0x18) = __dest_00;
    lVar3 = *(long *)(lVar3 + 0x1a0);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,plVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
    iVar2 = *(int *)(unaff_x29 + -0xc);
    if (iVar2 == 0) {
      lVar4 = *unaff_x19;
      uVar1 = *(ushort *)(lVar4 + 0x135);
      lVar3 = lVar4;
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_0103c244(lVar4);
        uVar1 = *(ushort *)(*unaff_x19 + 0x135);
        lVar3 = *unaff_x19;
      }
      puVar9 = *(undefined8 **)(unaff_x29 + -0x48);
      puVar11 = *(undefined8 **)(unaff_x29 + -0x40);
      __n_00 = *(size_t *)(unaff_x29 + -0x50);
      pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xd8);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      plVar5 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd8));
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      pvVar6 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(puVar11,pvVar6,__n_00);
      memcpy(pvVar12,*(void **)(unaff_x29 + -0x28),__n_01);
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      pvVar12 = (void *)thunk_FUN_01023220(pvVar12,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8)
                                                            + 0x80) + 0x40);
      memcpy(puVar9,pvVar12,__n_00);
      if (plVar5 == (long *)0x0) goto LAB_01b3802c;
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      lVar3 = *plVar5;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      lVar3 = *(long *)(lVar3 + 0x1a0);
      (**(code **)(lVar3 + 0x10))
                (*(undefined8 *)(lVar3 + 8),lVar3,plVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
      iVar2 = *(int *)(unaff_x29 + -0xc);
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


