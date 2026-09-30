/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 06ca5938
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


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined1 *__dest;
  void *__dest_00;
  long unaff_x20;
  undefined1 *__dest_01;
  size_t unaff_x22;
  size_t unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  void *pvVar15;
  undefined1 *__dest_02;
  void *pvVar16;
  undefined1 *__dest_03;
  long *plVar17;
  long unaff_x29;
  
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar11 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x25;
  uVar14 = (ulong)*(uint *)(*(long *)(lVar11 + 0x10) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_04481fb8(lVar8);
  }
  uVar10 = unaff_x23 + 0xf & 0x1fffffff0;
  uVar12 = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0xfc);
  __dest_03 = &stack0x00000000 + -uVar10;
  __dest_02 = __dest_03 + -uVar10;
  uVar10 = uVar14 + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x30) = uVar12;
  *(ulong *)(unaff_x29 + -0x28) = uVar14;
  __dest = __dest_02 + -uVar10;
  __dest_01 = __dest + -uVar10;
  uVar14 = uVar12 + 0xf & 0x1fffffff0;
  lVar8 = (long)__dest_01 - uVar14;
  *(long *)(unaff_x29 + -0x40) = lVar8;
  lVar8 = lVar8 - uVar14;
  *(long *)(unaff_x29 + -0x38) = lVar8;
  uVar14 = unaff_x22 + 0xf & 0x1fffffff0;
  pvVar15 = (void *)(lVar8 - uVar14);
  pvVar16 = (void *)((long)pvVar15 - uVar14);
  memset(pvVar16,0,unaff_x22);
  if (unaff_x24 != (long *)0x0) {
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    if (*unaff_x24 == lVar8) {
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
      }
      if (*(long *)(*unaff_x24 + 0x40) != *(long *)(lVar8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      pvVar4 = (void *)thunk_FUN_04485360();
      memcpy(pvVar16,pvVar4,unaff_x22);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      pvVar4 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
      memcpy(__dest_03,pvVar4,unaff_x23);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      uVar5 = thunk_FUN_04484e3c(**(undefined8 **)(lVar8 + 0xc0),__dest_03);
      memcpy(pvVar15,pvVar16,unaff_x22);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar17 = *(long **)(unaff_x29 + -0x20);
      pvVar4 = (void *)thunk_FUN_044a5a9c(pvVar15,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
      memcpy(__dest_02,pvVar4,unaff_x23);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      uVar6 = thunk_FUN_04484e3c(**(undefined8 **)(lVar8 + 0xc0),__dest_02);
      puVar2 = PTR_DAT_09f25788;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar8 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f25788) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06ca5bbc;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac(plVar17,*(long *)PTR_DAT_09f25788,0);
LAB_06ca5bbc:
      uVar14 = (*(code *)*puVar7)(plVar17,uVar5,uVar6,puVar7[1]);
      if ((uVar14 & 1) != 0) {
        lVar8 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        pvVar4 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                            *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80)
                                            + 0x20);
        memcpy(__dest,pvVar4,*(size_t *)(unaff_x29 + -0x28));
        lVar8 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10),__dest);
        memcpy(pvVar15,pvVar16,unaff_x22);
        lVar8 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        pvVar4 = (void *)thunk_FUN_044a5a9c(pvVar15,*(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8)
                                                             + 0x80) + 0x20);
        memcpy(__dest_01,pvVar4,*(size_t *)(unaff_x29 + -0x28));
        lVar8 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10),__dest_01);
        lVar11 = *plVar17;
        lVar8 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06ca5ce8;
            }
            uVar14 = uVar14 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(plVar17,lVar8,0);
LAB_06ca5ce8:
        uVar14 = (*(code *)*puVar7)(plVar17,uVar5,uVar6,puVar7[1]);
        if ((uVar14 & 1) != 0) {
          lVar8 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          __dest_00 = *(void **)(unaff_x29 + -0x40);
          pvVar4 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                              *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) +
                                                       0x80) + 0x40);
          memcpy(__dest_00,pvVar4,*(size_t *)(unaff_x29 + -0x30));
          lVar8 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8();
          }
          uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18),__dest_00);
          memcpy(pvVar15,pvVar16,unaff_x22);
          lVar11 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_04481fb8();
          }
          lVar8 = *(long *)(unaff_x29 + -0x10);
          pvVar16 = *(void **)(unaff_x29 + -0x38);
          pvVar15 = (void *)thunk_FUN_044a5a9c(pvVar15,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0)
                                                                          + 8) + 0x80) + 0x40);
          memcpy(pvVar16,pvVar15,*(size_t *)(unaff_x29 + -0x30));
          lVar11 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_04481fb8();
          }
          uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18),pvVar16);
          lVar9 = *plVar17;
          lVar11 = *(long *)puVar2;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_06ca5e5c;
              }
              uVar14 = uVar14 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_044822ac(plVar17,lVar11,0);
LAB_06ca5e5c:
          uVar3 = (*(code *)*puVar7)(plVar17,uVar5,uVar6,puVar7[1]);
          goto LAB_06ca5e1c;
        }
      }
    }
  }
  lVar8 = *(long *)(unaff_x29 + -0x10);
  uVar3 = 0;
LAB_06ca5e1c:
  if (*(long *)(lVar8 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


