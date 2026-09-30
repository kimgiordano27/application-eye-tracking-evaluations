/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 01b36cb8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation
               (undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  long *plVar9;
  ulong __n;
  ulong __n_00;
  undefined8 *puVar10;
  code *pcVar11;
  size_t __n_01;
  ulong __n_02;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *__dest;
  undefined8 *__dest_00;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  plVar9 = (long *)(unaff_x19 + 0x20);
  lVar6 = *plVar9;
  *(undefined8 *)(unaff_x29 + -0x30) = param_2;
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar3 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
                    /* try { // try from 01b36cdc to 01c36d13 has its CatchHandler @ 01b36cdc
                       catch() { ... } // from try @ 01b36cdc with catch @ 01b36cdc
                       catch() { ... } // from try @ 01b36e24 with catch @ 01b36cdc
                       catch() { ... } // from try @ 01b36e6c with catch @ 01b36cdc
                       catch() { ... } // from try @ 01b36eac with catch @ 01b36cdc
                       catch() { ... } // from try @ 01b36efc with catch @ 01b36cdc */
    uVar1 = *(ushort *)(*plVar9 + 0x135);
    lVar3 = *plVar9;
  }
  __n_00 = (ulong)*(uint *)(**(long **)(lVar6 + 0xc0) + 0xfc);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
    uVar1 = *(ushort *)(*plVar9 + 0x135);
    lVar6 = *plVar9;
  }
  __n_02 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0xfc);
  lVar3 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
    uVar1 = *(ushort *)(*plVar9 + 0x135);
    lVar3 = *plVar9;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
    uVar1 = *(ushort *)(*plVar9 + 0x135);
    lVar6 = *plVar9;
  }
  uVar7 = __n_00 + 0xf & 0x1fffffff0;
  uVar8 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0xfc);
  puVar12 = (undefined8 *)(&stack0x00000000 + -uVar7);
  puVar10 = (undefined8 *)((long)puVar12 - uVar7);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)puVar10 - uVar7);
  __dest_00 = (undefined8 *)((long)__dest - uVar7);
  uVar7 = uVar8 + 0xf & 0x1fffffff0;
  lVar3 = (long)__dest_00 - uVar7;
  *(long *)(unaff_x29 + -0x40) = lVar3;
  lVar3 = lVar3 - uVar7;
  *(ulong *)(unaff_x29 + -0x50) = uVar8;
  *(long *)(unaff_x29 + -0x48) = lVar3;
  pvVar13 = (void *)(lVar3 - (__n_02 + 0xf & 0x1fffffff0));
  lVar3 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
    uVar1 = *(ushort *)(*plVar9 + 0x135);
    lVar3 = *plVar9;
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  plVar4 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30));
  lVar3 = *plVar9;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80)
                                     );
  memcpy(puVar12,pvVar5,__n_00);
  memcpy(pvVar13,*(void **)(unaff_x29 + -0x28),__n_02);
  lVar3 = *plVar9;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  pvVar5 = (void *)thunk_FUN_01023220(pvVar13,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
  memcpy(puVar10,pvVar5,__n_00);
  if (plVar4 == (long *)0x0) {
LAB_01b37230:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar3 = *plVar9;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar12 = (undefined8 *)*puVar12;
  }
  lVar3 = *plVar9;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  lVar3 = *plVar4;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar12;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
  lVar3 = *(long *)(lVar3 + 0x1c0);
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    lVar6 = *plVar9;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
      uVar1 = *(ushort *)(*plVar9 + 0x135);
      lVar3 = *plVar9;
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    plVar4 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x50));
    lVar3 = *plVar9;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(__dest,pvVar5,__n);
    memcpy(pvVar13,*(void **)(unaff_x29 + -0x28),__n_02);
    lVar3 = *plVar9;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    pvVar5 = (void *)thunk_FUN_01023220(pvVar13,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) +
                                                         0x80) + 0x20);
    memcpy(__dest_00,pvVar5,__n);
    if (plVar4 == (long *)0x0) goto LAB_01b37230;
    lVar3 = *plVar9;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar3 = *plVar9;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
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
      lVar6 = *plVar9;
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_0103c244(lVar6);
        uVar1 = *(ushort *)(*plVar9 + 0x135);
        lVar3 = *plVar9;
      }
      puVar10 = *(undefined8 **)(unaff_x29 + -0x40);
      __n_01 = *(size_t *)(unaff_x29 + -0x50);
      pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x70);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      plVar4 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
      lVar3 = *plVar9;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(puVar10,pvVar5,__n_01);
      memcpy(pvVar13,*(void **)(unaff_x29 + -0x28),__n_02);
      lVar3 = *plVar9;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      puVar12 = *(undefined8 **)(unaff_x29 + -0x48);
      pvVar13 = (void *)thunk_FUN_01023220(pvVar13,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8)
                                                            + 0x80) + 0x40);
      memcpy(puVar12,pvVar13,__n_01);
      if (plVar4 == (long *)0x0) goto LAB_01b37230;
      lVar3 = *plVar9;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      lVar3 = *plVar9;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      lVar6 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
        puVar12 = (undefined8 *)*puVar12;
      }
      lVar3 = *plVar4;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar12;
      lVar3 = *(long *)(lVar3 + 0x1c0);
      (**(code **)(lVar3 + 0x10))
                (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
      bVar2 = *(char *)(unaff_x29 + -0xc) != '\0';
      goto LAB_01b37200;
    }
  }
  lVar6 = *(long *)(unaff_x29 + -0x38);
  bVar2 = false;
LAB_01b37200:
  if (*(long *)(lVar6 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


