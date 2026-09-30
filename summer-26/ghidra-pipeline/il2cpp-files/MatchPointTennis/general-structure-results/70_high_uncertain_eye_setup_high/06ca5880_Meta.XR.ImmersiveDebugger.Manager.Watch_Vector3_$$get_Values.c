/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Values
ENTRY_POINT: 06ca5880
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


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Values
               (undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  void *__dest;
  void *pvVar20;
  void *__s;
  void *pvStack_40;
  void *pvStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long *plStack_20;
  undefined8 uStack_18;
  long lStack_10;
  long lStack_8;
  
  lVar6 = tpidr_el0;
  lStack_8 = *(long *)(lVar6 + 0x28);
  uStack_18 = param_1;
  if ((DAT_0a521144 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f25788);
    DAT_0a521144 = 1;
  }
  lVar12 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar5 = lVar12;
  lStack_10 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_04481fb8(lVar12);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0xfc);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar6 = *(long *)(param_4 + 0x20);
  }
  uVar19 = (ulong)*(uint *)(**(long **)(lVar5 + 0xc0) + 0xfc);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_04481fb8(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  uVar15 = (ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
  plStack_20 = param_3;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
  }
  uVar13 = uVar19 + 0xf & 0x1fffffff0;
  uStack_30 = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0xfc);
  pvVar9 = (void *)((long)&pvStack_40 - uVar13);
  pvVar20 = (void *)((long)pvVar9 - uVar13);
  uVar13 = uVar15 + 0xf & 0x1fffffff0;
  pvVar16 = (void *)((long)pvVar20 - uVar13);
  pvVar17 = (void *)((long)pvVar16 - uVar13);
  uVar13 = uStack_30 + 0xf & 0x1fffffff0;
  pvStack_40 = (void *)((long)pvVar17 - uVar13);
  pvStack_38 = (void *)((long)pvStack_40 - uVar13);
  uVar13 = uVar18 + 0xf & 0x1fffffff0;
  __dest = (void *)((long)pvStack_38 - uVar13);
  __s = (void *)((long)__dest - uVar13);
  uStack_28 = uVar15;
  memset(__s,0,uVar18);
  if (param_2 != (long *)0x0) {
    lVar6 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8();
    }
    if (*param_2 == lVar6) {
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8(lVar6);
      }
      if (*(long *)(*param_2 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(param_2);
      }
      pvVar7 = (void *)thunk_FUN_04485360();
      memcpy(__s,pvVar7,uVar18);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      pvVar7 = (void *)thunk_FUN_044a5a9c(uStack_18,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
      memcpy(pvVar9,pvVar7,uVar19);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      uVar8 = thunk_FUN_04484e3c(**(undefined8 **)(lVar6 + 0xc0),pvVar9);
      memcpy(__dest,__s,uVar18);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      plVar3 = plStack_20;
      pvVar9 = (void *)thunk_FUN_044a5a9c(__dest,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
      memcpy(pvVar20,pvVar9,uVar19);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04481fb8();
      }
      uVar10 = thunk_FUN_04484e3c(**(undefined8 **)(lVar6 + 0xc0),pvVar20);
      puVar2 = PTR_DAT_09f25788;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar6 = *plVar3;
      uVar19 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar19 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f25788) {
            puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06ca5bbc;
          }
          uVar19 = uVar19 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f25788,0);
LAB_06ca5bbc:
      uVar19 = (*(code *)*puVar11)(plVar3,uVar8,uVar10,puVar11[1]);
      if ((uVar19 & 1) != 0) {
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04481fb8();
        }
        pvVar20 = (void *)thunk_FUN_044a5a9c(uStack_18,
                                             *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80
                                                      ) + 0x20);
        memcpy(pvVar16,pvVar20,uStack_28);
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04481fb8();
        }
        uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),pvVar16);
        memcpy(__dest,__s,uVar18);
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04481fb8();
        }
        pvVar16 = (void *)thunk_FUN_044a5a9c(__dest,*(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8)
                                                             + 0x80) + 0x20);
        memcpy(pvVar17,pvVar16,uStack_28);
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04481fb8();
        }
        uVar10 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),pvVar17);
        lVar5 = *plVar3;
        lVar6 = *(long *)puVar2;
        uVar19 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar19 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar11 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06ca5ce8;
            }
            uVar19 = uVar19 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar19 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(plVar3,lVar6,0);
LAB_06ca5ce8:
        uVar19 = (*(code *)*puVar11)(plVar3,uVar8,uVar10,puVar11[1]);
        if ((uVar19 & 1) != 0) {
          lVar6 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04481fb8();
          }
          pvVar16 = pvStack_40;
          pvVar17 = (void *)thunk_FUN_044a5a9c(uStack_18,
                                               *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) +
                                                        0x80) + 0x40);
          memcpy(pvVar16,pvVar17,uStack_30);
          lVar6 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04481fb8();
          }
          uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),pvVar16);
          memcpy(__dest,__s,uVar18);
          lVar6 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04481fb8();
          }
          lVar5 = lStack_10;
          pvVar16 = pvStack_38;
          pvVar17 = (void *)thunk_FUN_044a5a9c(__dest,*(long *)(*(long *)(*(long *)(lVar6 + 0xc0) +
                                                                         8) + 0x80) + 0x40);
          memcpy(pvVar16,pvVar17,uStack_30);
          lVar6 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04481fb8();
          }
          uVar10 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),pvVar16);
          lVar12 = *plVar3;
          lVar6 = *(long *)puVar2;
          uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar18 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar6) {
                puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_06ca5e5c;
              }
              uVar18 = uVar18 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar18 != 0);
          }
          puVar11 = (undefined8 *)FUN_044822ac(plVar3,lVar6,0);
LAB_06ca5e5c:
          uVar4 = (*(code *)*puVar11)(plVar3,uVar8,uVar10,puVar11[1]);
          goto LAB_06ca5e1c;
        }
      }
    }
  }
  uVar4 = 0;
  lVar5 = lStack_10;
LAB_06ca5e1c:
  if (*(long *)(lVar5 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


