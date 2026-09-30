/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$IsMemberValidForWatch
ENTRY_POINT: 01b372ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


uint Meta_XR_ImmersiveDebugger_Manager_WatchManager__IsMemberValidForWatch(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ushort in_w9;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 *__dest;
  void *__dest_00;
  long unaff_x20;
  undefined1 *__dest_01;
  size_t unaff_x22;
  ulong uVar14;
  long *unaff_x24;
  undefined8 unaff_x25;
  void *pvVar15;
  undefined1 *__dest_02;
  void *pvVar16;
  undefined1 *__dest_03;
  long *plVar17;
  long unaff_x29;
  
  uVar14 = (ulong)*(uint *)(**(long **)(param_1 + 0xc0) + 0xfc);
  lVar3 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_0103c244(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
  lVar10 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x25;
  uVar13 = (ulong)*(uint *)(*(long *)(lVar10 + 0x10) + 0xfc);
  if ((in_w9 & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  uVar9 = uVar14 + 0xf & 0x1fffffff0;
  uVar11 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0xfc);
  __dest_03 = &stack0x00000000 + -uVar9;
  __dest_02 = __dest_03 + -uVar9;
  uVar9 = uVar13 + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x30) = uVar11;
  *(ulong *)(unaff_x29 + -0x28) = uVar13;
  __dest = __dest_02 + -uVar9;
  __dest_01 = __dest + -uVar9;
  uVar13 = uVar11 + 0xf & 0x1fffffff0;
  lVar3 = (long)__dest_01 - uVar13;
  *(long *)(unaff_x29 + -0x40) = lVar3;
  lVar3 = lVar3 - uVar13;
  *(long *)(unaff_x29 + -0x38) = lVar3;
  uVar13 = unaff_x22 + 0xf & 0x1fffffff0;
  pvVar15 = (void *)(lVar3 - uVar13);
  pvVar16 = (void *)((long)pvVar15 - uVar13);
  memset(pvVar16,0,unaff_x22);
  if (unaff_x24 != (long *)0x0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (*unaff_x24 == lVar3) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      if (*(long *)(*unaff_x24 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0();
      }
      pvVar4 = (void *)thunk_FUN_01040230();
      memcpy(pvVar16,pvVar4,unaff_x22);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
      memcpy(__dest_03,pvVar4,uVar14);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      uVar5 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar3 + 0xc0),__dest_03);
      memcpy(pvVar15,pvVar16,unaff_x22);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      plVar17 = *(long **)(unaff_x29 + -0x20);
      pvVar4 = (void *)thunk_FUN_01023220(pvVar15,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
      memcpy(__dest_02,pvVar4,uVar14);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      uVar6 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar3 + 0xc0),__dest_02);
      puVar1 = PTR_DAT_0234d9c0;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar3 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar14 != 0) {
        piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0234d9c0) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01b3758c;
          }
          uVar14 = uVar14 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_0103c348(plVar17,*(long *)PTR_DAT_0234d9c0,0);
LAB_01b3758c:
      uVar14 = (*(code *)*puVar7)(plVar17,uVar5,uVar6,puVar7[1]);
      if ((uVar14 & 1) != 0) {
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0103c244();
        }
        pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                            *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80)
                                            + 0x20);
        memcpy(__dest,pvVar4,*(size_t *)(unaff_x29 + -0x28));
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0103c244();
        }
        uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),__dest);
        memcpy(pvVar15,pvVar16,unaff_x22);
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0103c244();
        }
        pvVar4 = (void *)thunk_FUN_01023220(pvVar15,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8)
                                                             + 0x80) + 0x20);
        memcpy(__dest_01,pvVar4,*(size_t *)(unaff_x29 + -0x28));
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0103c244();
        }
        uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),__dest_01);
        lVar10 = *plVar17;
        lVar3 = *(long *)puVar1;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar3) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01b376b8;
            }
            uVar14 = uVar14 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_0103c348(plVar17,lVar3,0);
LAB_01b376b8:
        uVar14 = (*(code *)*puVar7)(plVar17,uVar5,uVar6,puVar7[1]);
        if ((uVar14 & 1) != 0) {
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0103c244();
          }
          __dest_00 = *(void **)(unaff_x29 + -0x40);
          pvVar4 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                              *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) +
                                                       0x80) + 0x40);
          memcpy(__dest_00,pvVar4,*(size_t *)(unaff_x29 + -0x30));
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0103c244();
          }
          uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),__dest_00);
          memcpy(pvVar15,pvVar16,unaff_x22);
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0103c244();
          }
          lVar10 = *(long *)(unaff_x29 + -0x10);
          pvVar16 = *(void **)(unaff_x29 + -0x38);
          pvVar15 = (void *)thunk_FUN_01023220(pvVar15,*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) +
                                                                          8) + 0x80) + 0x40);
          memcpy(pvVar16,pvVar15,*(size_t *)(unaff_x29 + -0x30));
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0103c244();
          }
          uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),pvVar16);
          lVar8 = *plVar17;
          lVar3 = *(long *)puVar1;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar3) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01b3782c;
              }
              uVar14 = uVar14 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_0103c348(plVar17,lVar3,0);
LAB_01b3782c:
          uVar2 = (*(code *)*puVar7)(plVar17,uVar5,uVar6,puVar7[1]);
          goto LAB_01b377ec;
        }
      }
    }
  }
  lVar10 = *(long *)(unaff_x29 + -0x10);
  uVar2 = 0;
LAB_01b377ec:
  if (*(long *)(lVar10 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


