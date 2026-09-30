/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Value
ENTRY_POINT: 06ca5904
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Value(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined1 *__dest;
  void *__dest_00;
  long unaff_x20;
  undefined1 *__dest_01;
  size_t unaff_x22;
  ulong uVar15;
  long *unaff_x24;
  undefined8 unaff_x25;
  void *pvVar16;
  undefined1 *__dest_02;
  void *pvVar17;
  undefined1 *__dest_03;
  long *plVar18;
  long unaff_x29;
  
  lVar4 = FUN_04481fb8(param_1);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  uVar15 = (ulong)*(uint *)(**(long **)(lVar4 + 0xc0) + 0xfc);
  lVar4 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_04481fb8(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  lVar9 = *(long *)(lVar9 + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x25;
  uVar14 = (ulong)*(uint *)(*(long *)(lVar9 + 0x10) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_04481fb8(lVar4);
  }
  uVar11 = uVar15 + 0xf & 0x1fffffff0;
  uVar12 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 0xfc);
  __dest_03 = &stack0x00000000 + -uVar11;
  __dest_02 = __dest_03 + -uVar11;
  uVar11 = uVar14 + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x30) = uVar12;
  *(ulong *)(unaff_x29 + -0x28) = uVar14;
  __dest = __dest_02 + -uVar11;
  __dest_01 = __dest + -uVar11;
  uVar14 = uVar12 + 0xf & 0x1fffffff0;
  lVar4 = (long)__dest_01 - uVar14;
  *(long *)(unaff_x29 + -0x40) = lVar4;
  lVar4 = lVar4 - uVar14;
  *(long *)(unaff_x29 + -0x38) = lVar4;
  uVar14 = unaff_x22 + 0xf & 0x1fffffff0;
  pvVar16 = (void *)(lVar4 - uVar14);
  pvVar17 = (void *)((long)pvVar16 - uVar14);
  memset(pvVar17,0,unaff_x22);
  if (unaff_x24 != (long *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    if (*unaff_x24 == lVar4) {
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8(lVar4);
      }
      if (*(long *)(*unaff_x24 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      pvVar5 = (void *)thunk_FUN_04485360();
      memcpy(pvVar17,pvVar5,unaff_x22);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      pvVar5 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
      memcpy(__dest_03,pvVar5,uVar15);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      uVar6 = thunk_FUN_04484e3c(**(undefined8 **)(lVar4 + 0xc0),__dest_03);
      memcpy(pvVar16,pvVar17,unaff_x22);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar18 = *(long **)(unaff_x29 + -0x20);
      pvVar5 = (void *)thunk_FUN_044a5a9c(pvVar16,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
      memcpy(__dest_02,pvVar5,uVar15);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      uVar7 = thunk_FUN_04484e3c(**(undefined8 **)(lVar4 + 0xc0),__dest_02);
      puVar2 = PTR_DAT_09f25788;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar4 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f25788) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06ca5bbc;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar18,*(long *)PTR_DAT_09f25788,0);
LAB_06ca5bbc:
      uVar15 = (*(code *)*puVar8)(plVar18,uVar6,uVar7,puVar8[1]);
      if ((uVar15 & 1) != 0) {
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        pvVar5 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                            *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                            + 0x20);
        memcpy(__dest,pvVar5,*(size_t *)(unaff_x29 + -0x28));
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),__dest);
        memcpy(pvVar16,pvVar17,unaff_x22);
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        pvVar5 = (void *)thunk_FUN_044a5a9c(pvVar16,*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8)
                                                             + 0x80) + 0x20);
        memcpy(__dest_01,pvVar5,*(size_t *)(unaff_x29 + -0x28));
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        uVar7 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),__dest_01);
        lVar9 = *plVar18;
        lVar4 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06ca5ce8;
            }
            uVar15 = uVar15 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar18,lVar4,0);
LAB_06ca5ce8:
        uVar15 = (*(code *)*puVar8)(plVar18,uVar6,uVar7,puVar8[1]);
        if ((uVar15 & 1) != 0) {
          lVar4 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_04481fb8();
          }
          __dest_00 = *(void **)(unaff_x29 + -0x40);
          pvVar5 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                              *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) +
                                                       0x80) + 0x40);
          memcpy(__dest_00,pvVar5,*(size_t *)(unaff_x29 + -0x30));
          lVar4 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_04481fb8();
          }
          uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),__dest_00);
          memcpy(pvVar16,pvVar17,unaff_x22);
          lVar4 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_04481fb8();
          }
          lVar9 = *(long *)(unaff_x29 + -0x10);
          pvVar17 = *(void **)(unaff_x29 + -0x38);
          pvVar16 = (void *)thunk_FUN_044a5a9c(pvVar16,*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) +
                                                                          8) + 0x80) + 0x40);
          memcpy(pvVar17,pvVar16,*(size_t *)(unaff_x29 + -0x30));
          lVar4 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_04481fb8();
          }
          uVar7 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),pvVar17);
          lVar10 = *plVar18;
          lVar4 = *(long *)puVar2;
          uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar15 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar4) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_06ca5e5c;
              }
              uVar15 = uVar15 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_044822ac(plVar18,lVar4,0);
LAB_06ca5e5c:
          uVar3 = (*(code *)*puVar8)(plVar18,uVar6,uVar7,puVar8[1]);
          goto LAB_06ca5e1c;
        }
      }
    }
  }
  lVar9 = *(long *)(unaff_x29 + -0x10);
  uVar3 = 0;
LAB_06ca5e1c:
  if (*(long *)(lVar9 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


