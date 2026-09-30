/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 01b30a10
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation
               (long param_1,long param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong in_x9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *__dest;
  size_t unaff_x22;
  long *unaff_x23;
  undefined1 *__dest_00;
  void *pvVar13;
  undefined1 *__dest_01;
  void *pvVar14;
  ulong uVar15;
  long unaff_x29;
  
  uVar15 = (ulong)*(uint *)(**(long **)(param_2 + 0xc0) + 0xfc);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_0103c244(param_1);
  }
  uVar10 = uVar15 + 0xf & 0x1fffffff0;
  uVar11 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  __dest_00 = &stack0x00000000 + -uVar10;
  __dest = __dest_00 + -uVar10;
  uVar10 = uVar11 + 0xf & 0x1fffffff0;
  __dest_01 = __dest + -uVar10;
  lVar9 = (long)__dest_01 - uVar10;
  *(long *)(unaff_x29 + -0x28) = lVar9;
  *(ulong *)(unaff_x29 + -0x20) = uVar11;
  uVar10 = unaff_x22 + 0xf & 0x1fffffff0;
  pvVar13 = (void *)(lVar9 - uVar10);
  pvVar14 = (void *)((long)pvVar13 - uVar10);
  memset(pvVar14,0,unaff_x22);
  if (unaff_x23 == (long *)0x0) {
    lVar9 = *(long *)(unaff_x29 + -0x10);
    uVar4 = 1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244();
    }
    if (*unaff_x23 != lVar9) {
      memcpy(pvVar13,*(void **)(unaff_x29 + -0x18),unaff_x22);
      lVar9 = FUN_00e5db00(*(undefined8 *)(unaff_x19 + 0x20));
      uVar4 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 8),pvVar13);
      plVar6 = (long *)thunk_FUN_0105d828(uVar4,0);
      FUN_00e5db80();
      uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar7 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
      uVar4 = FUN_01c42574(uVar7,uVar4,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar7 = thunk_FUN_010400dc();
      uVar8 = thunk_FUN_010303a8(PTR_DAT_0234d120);
      FUN_01c5e198(uVar7,uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar7);
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244(lVar9);
    }
    if (*(long *)(*unaff_x23 + 0x40) != *(long *)(lVar9 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
    pvVar2 = (void *)thunk_FUN_01040230();
    memcpy(pvVar14,pvVar2,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244();
    }
    pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    memcpy(__dest_00,pvVar2,uVar15);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(**(undefined8 **)(lVar9 + 0xc0),__dest_00);
    memcpy(pvVar13,pvVar14,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244();
    }
    pvVar2 = (void *)thunk_FUN_01023220(pvVar13,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    memcpy(__dest,pvVar2,uVar15);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(**(undefined8 **)(lVar9 + 0xc0),__dest);
    puVar1 = PTR_DAT_0234d9d8;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar9 = *unaff_x20;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0234d9d8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01b30c5c;
        }
        uVar15 = uVar15 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar15 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348();
LAB_01b30c5c:
    uVar4 = (*(code *)*puVar3)();
    lVar9 = *(long *)(unaff_x29 + -0x10);
    if ((int)uVar4 == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) +
                                          0x20);
      memcpy(__dest_01,pvVar2,*(size_t *)(unaff_x29 + -0x20));
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),__dest_01);
      memcpy(pvVar13,pvVar14,unaff_x22);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      pvVar14 = *(void **)(unaff_x29 + -0x28);
      pvVar13 = (void *)thunk_FUN_01023220(pvVar13,*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8)
                                                            + 0x80) + 0x20);
      memcpy(pvVar14,pvVar13,*(size_t *)(unaff_x29 + -0x20));
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),pvVar14);
      lVar5 = *unaff_x20;
      uVar15 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar15 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01b30d90;
          }
          uVar15 = uVar15 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar15 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348();
LAB_01b30d90:
      uVar4 = (*(code *)*puVar3)();
    }
  }
  if (*(long *)(lVar9 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


