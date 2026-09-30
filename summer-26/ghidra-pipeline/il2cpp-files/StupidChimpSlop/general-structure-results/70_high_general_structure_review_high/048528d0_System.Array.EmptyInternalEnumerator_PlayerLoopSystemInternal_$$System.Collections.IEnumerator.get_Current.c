/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<PlayerLoopSystemInternal>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 048528d0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<PlayerLoopSystemInternal>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  void *pvVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *__dest;
  ulong __n;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  void *pvStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined8 *puStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_18 [16];
  long lStack_8;
  
  lStack_98 = tpidr_el0;
  lStack_8 = *(long *)(lStack_98 + 0x28);
  if ((DAT_06a4d470 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066488c0);
    FUN_02d4dc40(PTR_DAT_066488c8);
    FUN_02d4dc40(PTR_DAT_06647b18);
    FUN_02d4dc40(PTR_DAT_0664c6b0);
    FUN_02d4dc40(PTR_DAT_066488d0);
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4d470 = 1;
  }
  lVar21 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar21 + 0x135);
  lVar8 = lVar21;
  if ((uVar3 & 1) == 0) {
    lVar21 = FUN_02d8720c(lVar21);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar8 = *(long *)(param_2 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x20) + 0xfc);
  uVar17 = __n + 0xf & 0x1fffffff0;
  __dest = (long *)((long)&pvStack_a0 - uVar17);
  puVar20 = (undefined8 *)((long)__dest - uVar17);
  pvStack_a0 = (void *)((long)puVar20 - uVar17);
  memset(pvStack_a0,0,__n);
  auStack_50._0_8_ = (long *)0x0;
  auStack_50._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_68 = 0;
  if ((uVar3 & 1) == 0) {
    lVar8 = FUN_02d8720c(lVar8);
  }
  puVar9 = (uint *)thunk_FUN_02dac2f0(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80));
  uVar1 = *puVar9;
  if (1 < uVar1) {
    lVar8 = *(long *)(param_2 + 0x20);
    if (uVar1 == 2) {
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      puVar20 = (undefined8 *)
                thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1c0);
      lVar8 = *(long *)(param_2 + 0x20);
      auStack_60._8_8_ = puVar20[1];
      auStack_60._0_8_ = *puVar20;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      puVar20 = (undefined8 *)
                thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1c0);
      *puVar20 = 0;
      puVar20[1] = 0;
      lVar8 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80),0xffffffff);
      goto LAB_04852aa4;
    }
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    puVar10 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x40);
    lVar8 = *(long *)(param_2 + 0x20);
    plVar13 = (long *)*puVar10;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    puVar10 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x60);
    if (plVar13 == (long *)0x0) {
      if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar8 = *(long *)(param_2 + 0x20);
    uVar18 = *puVar10;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c(lVar8);
    }
    lVar21 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar14 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar21 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04852bf4;
        }
        uVar17 = uVar17 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d87540(plVar13,lVar8,0);
LAB_04852bf4:
    uVar18 = (*(code *)*puVar10)(plVar13,uVar18,puVar10[1]);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xc0,uVar18);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xe0,0);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_0291e7a8(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x100,0);
  }
  puVar5 = PTR_DAT_066488d0;
  puVar4 = PTR_DAT_066488c8;
  lVar8 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar8 + 0x135);
  if (uVar1 == 0) {
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    puVar10 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1a0);
    lVar8 = *(long *)(param_2 + 0x20);
    auStack_50._8_8_ = puVar10[1];
    auStack_50._0_8_ = *puVar10;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    puVar10 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1a0);
    *puVar10 = 0;
    puVar10[1] = 0;
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80),0xffffffff);
    goto LAB_0485331c;
  }
  if (uVar1 != 1) {
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x140
                                        );
    memset(pvVar15,0,__n);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_0291e4d4(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x160,0);
    goto LAB_04852e98;
  }
  if ((uVar3 & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  puVar10 = (undefined8 *)
            thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1a0);
  lVar8 = *(long *)(param_2 + 0x20);
  auStack_50._8_8_ = puVar10[1];
  auStack_50._0_8_ = *puVar10;
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  puVar10 = (undefined8 *)
            thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1a0);
  *puVar10 = 0;
  puVar10[1] = 0;
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80),0xffffffff);
  do {
    uVar18 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ == (long *)0x0) {
      if (auStack_50[8] == '\0') goto LAB_04853030;
    }
    else {
      uVar6 = auStack_50._10_2_;
      lVar8 = *(long *)(*(long *)PTR_DAT_066488c0 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
      }
      lVar21 = *(long *)uVar18;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar14 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_048530a8;
          }
          uVar17 = uVar17 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(uVar18,lVar8,0);
LAB_048530a8:
      uVar17 = (*(code *)*puVar10)(uVar18,uVar6,puVar10[1]);
      if ((uVar17 & 1) == 0) {
LAB_04853030:
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        pcVar11 = (char *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) +
                                                     0xa0);
        lVar8 = *(long *)(param_2 + 0x20);
        if (*pcVar11 == '\0') {
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02d8720c();
          }
          pcVar11 = (char *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) +
                                                       0x160);
          if (*pcVar11 == '\0') {
            uVar18 = FUN_0419c8ac(0);
            if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4ddac(uVar18,param_2);
            }
            goto LAB_048540c4;
          }
          lVar8 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02d8720c();
          }
          pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) +
                                                       0x140);
        }
        else {
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02d8720c();
          }
          pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) +
                                                       0x140);
        }
        memcpy(__dest,pvVar15,__n);
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        FUN_02d4dc68(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x120,__dest,__n);
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        FUN_0291e7a8(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x100,1);
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        plVar13 = (long *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) +
                                                     0xc0);
        if (*plVar13 == 0) goto LAB_04853804;
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        puVar20 = (undefined8 *)
                  thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xc0);
        plVar13 = (long *)*puVar20;
        if (plVar13 == (long *)0x0) {
          if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          goto LAB_048540c4;
        }
        lVar8 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar17 == 0) goto LAB_048537f4;
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_048537dc;
      }
    }
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    puVar10 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xc0);
    plVar13 = (long *)*puVar10;
    if (plVar13 == (long *)0x0) {
      if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c(lVar8);
    }
    lVar21 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar14 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          lVar8 = lVar21 + (long)*piVar14 * 0x10 + 0x138;
          goto LAB_0485316c;
        }
        uVar17 = uVar17 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar17 != 0);
    }
    lVar8 = FUN_02d87540(plVar13,lVar8,0);
LAB_0485316c:
    lVar8 = *(long *)(lVar8 + 8);
    auStack_30._0_8_ = __dest;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar13,auStack_30,__dest);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_02d4dc68(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x180,__dest,__n);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    plVar13 = (long *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x80)
    ;
    lVar8 = *(long *)(param_2 + 0x20);
    lVar21 = *plVar13;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x180
                                        );
    memcpy(puVar20,pvVar15,__n);
    if (lVar21 == 0) {
      if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar12 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar8 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_02d8720c();
      lVar12 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
    }
    uVar18 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_02d8720c();
      lVar12 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    puStack_38 = puVar20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x20) + 0x28)) {
      puStack_38 = (undefined8 *)*puVar20;
    }
    (**(code **)(lVar8 + 0x10))(uVar18,lVar8,lVar21,&puStack_38,auStack_30);
    uStack_88 = auStack_30._8_8_;
    plStack_90 = (long *)auStack_30._0_8_;
    auStack_30._0_8_ = 0;
    auStack_30._8_8_ = 0;
    if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    auStack_30._8_8_ = uStack_88;
    auStack_30._0_8_ = plStack_90;
    thunk_FUN_02dc1ef0(auStack_30,0);
    auStack_50._8_8_ = auStack_30._8_8_;
    auStack_50._0_8_ = auStack_30._0_8_;
    uVar17 = FUN_02ee4294(auStack_50,*(undefined8 *)puVar4);
    if ((uVar17 & 1) == 0) {
      lVar8 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80),0);
      uVar16 = auStack_50._8_8_;
      uVar18 = auStack_50._0_8_;
      lVar8 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      FUN_0291e754(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1a0,uVar18,uVar16);
      lVar21 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar21 + 0x135);
      lVar8 = lVar21;
      if ((uVar3 & 1) == 0) {
        lVar8 = FUN_02d8720c();
        lVar21 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar21 + 0x135);
      }
      pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x48);
      if ((uVar3 & 1) == 0) {
        lVar21 = FUN_02d8720c();
      }
      uVar18 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar21 + 0xc0) + 0x80) + 0x20);
      lVar8 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      (*pcVar19)(uVar18,auStack_50,param_1,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48));
      goto LAB_04853ae4;
    }
LAB_0485331c:
    uVar18 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ == (long *)0x0) {
      if (auStack_50[8] != '\0') goto LAB_048533d0;
    }
    else {
      uVar6 = auStack_50._10_2_;
      lVar8 = *(long *)(*(long *)PTR_DAT_066488c0 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c(lVar8);
      }
      lVar21 = *(long *)uVar18;
      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar17 != 0) {
        piVar14 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_048533bc;
          }
          uVar17 = uVar17 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(uVar18,lVar8,0);
LAB_048533bc:
      uVar17 = (*(code *)*puVar10)(uVar18,uVar6,puVar10[1]);
      if ((uVar17 & 1) != 0) {
LAB_048533d0:
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        FUN_0291e4d4(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x160,1);
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) +
                                                     0x180);
        memcpy(__dest,pvVar15,__n);
        lVar8 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d8720c();
        }
        FUN_02d4dc68(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x140,__dest,__n);
      }
    }
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x180
                                        );
    memset(pvVar15,0,__n);
LAB_04852e98:
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    puVar10 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xc0);
    plVar13 = (long *)*puVar10;
    if (plVar13 == (long *)0x0) {
      if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c(lVar8);
    }
    lVar21 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar17 != 0) {
      piVar14 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar21 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<PostProcessingPass>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar17 = uVar17 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d87540(plVar13,lVar8,1);
System_Array_EmptyInternalEnumerator<PostProcessingPass>__System_Collections_IEnumerator_get_Current
    :
    auVar23 = (*(code *)*puVar10)(plVar13,puVar10[1]);
    auStack_30._0_8_ = 0;
    auStack_30._8_8_ = 0;
    if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    auStack_30 = auVar23;
    thunk_FUN_02dc1ef0(auStack_30,0);
    auStack_50 = auStack_30;
    uVar17 = FUN_02ee4294(auStack_50,*(undefined8 *)puVar4);
  } while ((uVar17 & 1) != 0);
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80),1);
  uVar16 = auStack_50._8_8_;
  uVar18 = auStack_50._0_8_;
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  FUN_0291e754(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1a0,uVar18,uVar16);
  lVar21 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar21 + 0x135);
  lVar8 = lVar21;
  if ((uVar3 & 1) == 0) {
    lVar8 = FUN_02d8720c();
    lVar21 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar21 + 0x135);
  }
  pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x48);
  if ((uVar3 & 1) == 0) {
    lVar21 = FUN_02d8720c();
  }
  uVar18 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar21 + 0xc0) + 0x80) + 0x20);
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  (*pcVar19)(uVar18,auStack_50,param_1,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48));
  goto LAB_04853ae4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar14 = piVar14 + 4;
    if (uVar17 == 0) break;
LAB_048537dc:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664c6b0) {
      puVar20 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04853b24;
    }
  }
LAB_048537f4:
  puVar20 = (undefined8 *)FUN_02d87540(plVar13,*(long *)PTR_DAT_0664c6b0,0);
LAB_04853b24:
  auStack_18 = (*(code *)*puVar20)(plVar13,puVar20[1]);
  puVar4 = PTR_DAT_06648868;
  if (*(int *)(*(long *)PTR_DAT_06648868 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  thunk_FUN_02dc1ef0(auStack_18,0);
  uVar16 = auStack_18._8_8_;
  uVar18 = auStack_18._0_8_;
  auStack_60 = auStack_18;
  if (DAT_06a4963a == '\0') {
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4963a = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a4963b == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963b = '\x01';
  }
  if ((long *)uVar18 != (long *)0x0) {
    lVar8 = *(long *)uVar18;
    uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar17 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
          puVar20 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04853c10;
        }
        uVar17 = uVar17 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar17 != 0);
    }
    puVar20 = (undefined8 *)FUN_02d87540(uVar18,*(long *)PTR_DAT_06648890,0);
LAB_04853c10:
    iVar7 = (*(code *)*puVar20)(uVar18,uVar16 & 0xffffffff,puVar20[1]);
    if (iVar7 == 0) {
      lVar8 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80),2);
      lVar8 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      FUN_0291e754(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x1c0,uVar18,uVar16);
      lVar21 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar21 + 0x135);
      lVar8 = lVar21;
      if ((uVar3 & 1) == 0) {
        lVar8 = FUN_02d8720c();
        lVar21 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar21 + 0x135);
      }
      pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x68);
      if ((uVar3 & 1) == 0) {
        lVar21 = FUN_02d8720c();
      }
      uVar18 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar21 + 0xc0) + 0x80) + 0x20);
      lVar8 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d8720c();
      }
      (*pcVar19)(uVar18,auStack_60,param_1,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x68));
      goto LAB_04853ae4;
    }
  }
LAB_04852aa4:
  if (DAT_06a4963c == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963c = '\x01';
  }
  uVar18 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_60._0_8_;
    uVar22 = auStack_60._8_8_ & 0xffff;
    uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar17 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
          puVar20 = (undefined8 *)(lVar8 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto FUN_04852e48;
        }
        uVar17 = uVar17 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar17 != 0);
    }
    puVar20 = (undefined8 *)FUN_02d87540(auStack_60._0_8_,*(long *)PTR_DAT_06648890,2);
FUN_04852e48:
    (*(code *)*puVar20)(uVar18,uVar22,puVar20[1]);
  }
LAB_04853804:
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  plVar13 = (long *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xe0);
  plVar13 = (long *)*plVar13;
  if (plVar13 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06647b18))
    {
      if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(plVar13,param_2);
      }
      goto LAB_048540c4;
    }
    lVar8 = FUN_04f2e80c(plVar13,0);
    if (lVar8 == 0) {
      if (*(long *)(lStack_98 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    FUN_04f2e8cc(lVar8,0);
  }
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  piVar14 = (int *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x100);
  lVar8 = *(long *)(param_2 + 0x20);
  if (*piVar14 == 1) {
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x120
                                        );
    memcpy(__dest,pvVar15,__n);
    memcpy(pvStack_a0,pvVar15,__n);
  }
  else {
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xe0,0);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x120
                                        );
    memset(pvVar15,0,__n);
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xc0,0);
  }
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar8 + 0xc0) + 0x80),0xfffffffe);
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d8720c();
  }
  FUN_0291e530(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0xc0,0);
  memcpy(__dest,pvStack_a0,__n);
  lVar21 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar21 + 0x135);
  lVar8 = lVar21;
  if ((uVar3 & 1) == 0) {
    lVar21 = FUN_02d8720c(lVar21);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar8 = *(long *)(param_2 + 0x20);
  }
  uVar18 = **(undefined8 **)(*(long *)(lVar21 + 0xc0) + 0x78);
  lVar21 = lVar8;
  if ((uVar3 & 1) == 0) {
    lVar8 = FUN_02d8720c(lVar8);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar21 = *(long *)(param_2 + 0x20);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x78);
  if ((uVar3 & 1) == 0) {
    lVar21 = FUN_02d8720c(lVar21);
  }
  uVar16 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar21 + 0xc0) + 0x80) + 0x20);
  lVar21 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = FUN_02d8720c(lVar21);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x20) + 0x28)) {
    __dest = (long *)*__dest;
  }
  auStack_18._0_8_ = __dest;
  (**(code **)(lVar8 + 0x10))(uVar18,lVar8,uVar16,auStack_18,__dest);
LAB_04853ae4:
  if (*(long *)(lStack_98 + 0x28) == lStack_8) {
    return;
  }
LAB_048540c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


