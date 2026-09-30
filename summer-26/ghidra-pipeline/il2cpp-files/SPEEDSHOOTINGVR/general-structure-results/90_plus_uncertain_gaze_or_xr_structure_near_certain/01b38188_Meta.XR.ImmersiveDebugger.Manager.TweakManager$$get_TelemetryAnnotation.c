/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 01b38188
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation(void)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long in_x10;
  int *piVar12;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  size_t sVar13;
  size_t unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  void *pvVar14;
  long *unaff_x26;
  void *pvVar15;
  void *unaff_x28;
  long unaff_x29;
  
                    /* try { // try from 01b38188 to 01c38197 has its CatchHandler @ 01b38198 */
  uVar11 = in_x10 + 0xfU & 0x1fffffff0;
  lVar10 = (long)&stack0x00000000 - uVar11;
                    /* catch() { ... } // from try @ 01b38138 with catch @ 01b38198
                       catch() { ... } // from try @ 01b38188 with catch @ 01b38198 */
  *(long *)(unaff_x29 + -0x40) = lVar10;
                    /* try { // try from 01b3819c to 01c3819f has its CatchHandler @ 01b381a8 */
                    /* try { // try from 01b381a0 to 01c381ab has its CatchHandler @ 01b37f20 */
  lVar10 = lVar10 - uVar11;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01b3819c with catch @ 01b381a8
                        */
  *(long *)(unaff_x29 + -0x38) = lVar10;
  uVar11 = unaff_x22 + 0xf & 0x1fffffff0;
  pvVar14 = (void *)(lVar10 - uVar11);
  pvVar15 = (void *)((long)pvVar14 - uVar11);
  memset(pvVar15,0,unaff_x22);
  if (unaff_x26 == (long *)0x0) {
    lVar10 = *(long *)(unaff_x29 + -0x10);
    uVar4 = 1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244();
    }
    if (*unaff_x26 != lVar10) {
      memcpy(pvVar14,*(void **)(unaff_x29 + -0x18),unaff_x22);
      lVar10 = FUN_00e5db00(*(undefined8 *)(unaff_x19 + 0x20));
      uVar4 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 8),pvVar14);
      plVar7 = (long *)thunk_FUN_0105d828(uVar4,0);
      FUN_00e5db80();
      uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar8 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
      uVar4 = FUN_01c42574(uVar8,uVar4,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar8 = thunk_FUN_010400dc();
      uVar9 = thunk_FUN_010303a8(PTR_DAT_0234d120);
      FUN_01c5e198(uVar8,uVar4,uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar8);
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244(lVar10);
    }
    if (*(long *)(*unaff_x26 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
    pvVar2 = (void *)thunk_FUN_01040230();
    memcpy(pvVar15,pvVar2,unaff_x22);
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244();
    }
    pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
    memcpy(unaff_x28,pvVar2,unaff_x24);
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(**(undefined8 **)(lVar10 + 0xc0));
    memcpy(pvVar14,pvVar15,unaff_x22);
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244();
    }
    pvVar2 = (void *)thunk_FUN_01023220(pvVar14,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80));
    memcpy(unaff_x20,pvVar2,unaff_x24);
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(**(undefined8 **)(lVar10 + 0xc0));
    puVar1 = PTR_DAT_0234d9d8;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar10 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0234d9d8) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01b38394;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348();
LAB_01b38394:
    uVar4 = (*(code *)*puVar3)();
    lVar10 = *(long *)(unaff_x29 + -0x10);
    if ((int)uVar4 == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) +
                                          0x20);
      memcpy(unaff_x23,pvVar2,*(size_t *)(unaff_x29 + -0x20));
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10));
      memcpy(pvVar14,pvVar15,unaff_x22);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x28);
      sVar13 = *(size_t *)(unaff_x29 + -0x20);
      pvVar6 = (void *)thunk_FUN_01023220(pvVar14,*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) +
                                                           0x80) + 0x20);
      memcpy(pvVar2,pvVar6,sVar13);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),pvVar2);
      lVar5 = *unaff_x21;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01b384c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348();
LAB_01b384c8:
      uVar4 = (*(code *)*puVar3)();
      if ((int)uVar4 == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0103c244();
        }
        sVar13 = *(size_t *)(unaff_x29 + -0x30);
        pvVar6 = *(void **)(unaff_x29 + -0x40);
        pvVar2 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                            *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80)
                                            + 0x40);
        memcpy(pvVar6,pvVar2,sVar13);
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0103c244();
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),pvVar6);
        memcpy(pvVar14,pvVar15,unaff_x22);
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0103c244();
        }
        pvVar15 = *(void **)(unaff_x29 + -0x38);
        pvVar14 = (void *)thunk_FUN_01023220(pvVar14,*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8
                                                                        ) + 0x80) + 0x40);
        memcpy(pvVar15,pvVar14,sVar13);
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0103c244();
        }
        thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),pvVar15);
        lVar5 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01b38600;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_0103c348();
LAB_01b38600:
        uVar4 = (*(code *)*puVar3)();
      }
    }
  }
  if (*(long *)(lVar10 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


