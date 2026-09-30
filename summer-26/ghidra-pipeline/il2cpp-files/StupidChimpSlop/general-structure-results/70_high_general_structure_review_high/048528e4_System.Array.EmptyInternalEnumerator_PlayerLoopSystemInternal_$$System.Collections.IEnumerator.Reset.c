/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<PlayerLoopSystemInternal>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 048528e4
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


void System_Array_EmptyInternalEnumerator<PlayerLoopSystemInternal>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  int *piVar14;
  void *pvVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *__dest;
  ulong __n;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long unaff_x29;
  undefined1 auVar24 [16];
  
  lVar9 = tpidr_el0;
  *(long *)(unaff_x29 + -0x98) = lVar9;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar9 + 0x28);
  if ((DAT_06a4d470 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066488c0);
    FUN_02d4dc40(PTR_DAT_066488c8);
    FUN_02d4dc40(PTR_DAT_06647b18);
    FUN_02d4dc40(PTR_DAT_0664c6b0);
    FUN_02d4dc40(PTR_DAT_066488d0);
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4d470 = 1;
  }
  lVar23 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar23 + 0x135);
  lVar9 = lVar23;
  if ((uVar3 & 1) == 0) {
    lVar23 = FUN_02d8720c(lVar23);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar9 = *(long *)(param_2 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar23 + 0xc0) + 0x20) + 0xfc);
  uVar18 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(&stack0x00000000 + -uVar18);
  puVar21 = (undefined8 *)((long)__dest - uVar18);
  *(void **)(unaff_x29 + -0xa0) = (void *)((long)puVar21 - uVar18);
  memset((void *)((long)puVar21 - uVar18),0,__n);
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined4 *)(unaff_x29 + -0x68) = 0;
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_02d8720c(lVar9);
  }
  puVar10 = (uint *)thunk_FUN_02dac2f0(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80));
  uVar1 = *puVar10;
  if (1 < uVar1) {
    lVar9 = *(long *)(param_2 + 0x20);
    if (uVar1 == 2) {
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      puVar21 = (undefined8 *)
                thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1c0);
      lVar9 = *(long *)(param_2 + 0x20);
      uVar20 = *puVar21;
      uVar3 = *(ushort *)(lVar9 + 0x135);
      *(undefined8 *)(unaff_x29 + -0x58) = puVar21[1];
      *(undefined8 *)(unaff_x29 + -0x60) = uVar20;
      if ((uVar3 & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      puVar21 = (undefined8 *)
                thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1c0);
      *puVar21 = 0;
      puVar21[1] = 0;
      lVar9 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),0xffffffff);
      goto LAB_04852aa4;
    }
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    puVar11 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x40);
    lVar9 = *(long *)(param_2 + 0x20);
    plVar22 = (long *)*puVar11;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    puVar11 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x60);
    if (plVar22 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar9 = *(long *)(param_2 + 0x20);
    uVar20 = *puVar11;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c(lVar9);
    }
    lVar23 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar18 != 0) {
      piVar14 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar23 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04852bf4;
        }
        uVar18 = uVar18 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d87540(plVar22,lVar9,0);
LAB_04852bf4:
    uVar20 = (*(code *)*puVar11)(plVar22,uVar20,puVar11[1]);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0,uVar20);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xe0,0);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_0291e7a8(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x100,0);
  }
  puVar6 = PTR_DAT_066488d0;
  puVar5 = PTR_DAT_066488c8;
  lVar9 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar9 + 0x135);
  if (uVar1 == 0) {
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    puVar11 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1a0);
    lVar9 = *(long *)(param_2 + 0x20);
    uVar20 = *puVar11;
    uVar3 = *(ushort *)(lVar9 + 0x135);
    *(undefined8 *)(unaff_x29 + -0x48) = puVar11[1];
    *(undefined8 *)(unaff_x29 + -0x50) = uVar20;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    puVar11 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1a0);
    *puVar11 = 0;
    puVar11[1] = 0;
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),0xffffffff);
    goto LAB_0485331c;
  }
  if (uVar1 != 1) {
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x140
                                        );
    memset(pvVar15,0,__n);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_0291e4d4(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x160,0);
    goto LAB_04852e98;
  }
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  puVar11 = (undefined8 *)
            thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1a0);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar20 = *puVar11;
  uVar3 = *(ushort *)(lVar9 + 0x135);
  *(undefined8 *)(unaff_x29 + -0x48) = puVar11[1];
  *(undefined8 *)(unaff_x29 + -0x50) = uVar20;
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  puVar11 = (undefined8 *)
            thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1a0);
  *puVar11 = 0;
  puVar11[1] = 0;
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),0xffffffff);
  do {
    plVar22 = *(long **)(unaff_x29 + -0x50);
    if (plVar22 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x48) == '\0') goto LAB_04853030;
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x46);
      lVar9 = *(long *)(*(long *)PTR_DAT_066488c0 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c(lVar9);
      }
      lVar23 = *plVar22;
      uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar18 != 0) {
        piVar14 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar23 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_048530a8;
          }
          uVar18 = uVar18 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(plVar22,lVar9,0);
LAB_048530a8:
      uVar18 = (*(code *)*puVar11)(plVar22,uVar4,puVar11[1]);
      if ((uVar18 & 1) == 0) {
LAB_04853030:
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        pcVar12 = (char *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) +
                                                     0xa0);
        lVar9 = *(long *)(param_2 + 0x20);
        if (*pcVar12 == '\0') {
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02d8720c();
          }
          pcVar12 = (char *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) +
                                                       0x160);
          if (*pcVar12 == '\0') {
            uVar20 = FUN_0419c8ac(0);
            if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4ddac(uVar20,param_2);
            }
            goto LAB_048540c4;
          }
          lVar9 = *(long *)(param_2 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02d8720c();
          }
          pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) +
                                                       0x140);
        }
        else {
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02d8720c();
          }
          pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) +
                                                       0x140);
        }
        memcpy(__dest,pvVar15,__n);
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        FUN_02d4dc68(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x120,__dest,__n);
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        FUN_0291e7a8(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x100,1);
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        plVar22 = (long *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) +
                                                     0xc0);
        if (*plVar22 == 0) goto LAB_04853804;
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        puVar21 = (undefined8 *)
                  thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0);
        plVar22 = (long *)*puVar21;
        if (plVar22 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          goto LAB_048540c4;
        }
        lVar9 = *plVar22;
        uVar18 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar18 == 0) goto LAB_048537f4;
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_048537dc;
      }
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    puVar11 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0);
    plVar22 = (long *)*puVar11;
    if (plVar22 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c(lVar9);
    }
    lVar23 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar18 != 0) {
      piVar14 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar9) {
          lVar9 = lVar23 + (long)*piVar14 * 0x10 + 0x138;
          goto LAB_0485316c;
        }
        uVar18 = uVar18 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar18 != 0);
    }
    lVar9 = FUN_02d87540(plVar22,lVar9,0);
LAB_0485316c:
    lVar9 = *(long *)(lVar9 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = __dest;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar22,unaff_x29 + -0x30,__dest);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_02d4dc68(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x180,__dest,__n);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    plVar22 = (long *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x80)
    ;
    lVar9 = *(long *)(param_2 + 0x20);
    lVar23 = *plVar22;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x180
                                        );
    memcpy(puVar21,pvVar15,__n);
    if (lVar23 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar13 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar13 + 0x135);
    lVar9 = lVar13;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_02d8720c();
      lVar13 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
    }
    uVar20 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar9 = lVar13;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_02d8720c();
      lVar13 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar13 = FUN_02d8720c();
    }
    puVar11 = puVar21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x20) + 0x28)) {
      puVar11 = (undefined8 *)*puVar21;
    }
    pcVar17 = *(code **)(lVar9 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x38) = puVar11;
    (*pcVar17)(uVar20,lVar9,lVar23,unaff_x29 + -0x38,unaff_x29 + -0x30);
    lVar9 = *(long *)puVar6;
    uVar16 = *(undefined8 *)(unaff_x29 + -0x28);
    uVar20 = *(undefined8 *)(unaff_x29 + -0x30);
    *(undefined8 *)(unaff_x29 + -0x30) = 0;
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    lVar9 = *(long *)(lVar9 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x88) = uVar16;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar20;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x90);
    thunk_FUN_02dc1ef0(unaff_x29 + -0x30,0);
    uVar20 = *(undefined8 *)puVar5;
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x28);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x30);
    uVar18 = FUN_02ee4294(unaff_x29 + -0x50,uVar20);
    if ((uVar18 & 1) == 0) {
      lVar9 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),0);
      lVar9 = *(long *)(param_2 + 0x20);
      uVar20 = *(undefined8 *)(unaff_x29 + -0x50);
      uVar16 = *(undefined8 *)(unaff_x29 + -0x48);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      FUN_0291e754(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1a0,uVar20,uVar16);
      lVar23 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar23 + 0x135);
      lVar9 = lVar23;
      if ((uVar3 & 1) == 0) {
        lVar9 = FUN_02d8720c();
        lVar23 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar23 + 0x135);
      }
      pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x48);
      if ((uVar3 & 1) == 0) {
        lVar23 = FUN_02d8720c();
      }
      uVar20 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar23 + 0xc0) + 0x80) + 0x20);
      lVar9 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      (*pcVar17)(uVar20,unaff_x29 + -0x50,param_1,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48));
      goto LAB_04853ae4;
    }
LAB_0485331c:
    plVar22 = *(long **)(unaff_x29 + -0x50);
    if (plVar22 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x48) != '\0') goto LAB_048533d0;
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x46);
      lVar9 = *(long *)(*(long *)PTR_DAT_066488c0 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c(lVar9);
      }
      lVar23 = *plVar22;
      uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar18 != 0) {
        piVar14 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar23 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_048533bc;
          }
          uVar18 = uVar18 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(plVar22,lVar9,0);
LAB_048533bc:
      uVar18 = (*(code *)*puVar11)(plVar22,uVar4,puVar11[1]);
      if ((uVar18 & 1) != 0) {
LAB_048533d0:
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        FUN_0291e4d4(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x160,1);
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) +
                                                     0x180);
        memcpy(__dest,pvVar15,__n);
        lVar9 = *(long *)(param_2 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d8720c();
        }
        FUN_02d4dc68(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x140,__dest,__n);
      }
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x180
                                        );
    memset(pvVar15,0,__n);
LAB_04852e98:
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    puVar11 = (undefined8 *)
              thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0);
    plVar22 = (long *)*puVar11;
    if (plVar22 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c(lVar9);
    }
    lVar23 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar18 != 0) {
      piVar14 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar23 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<PostProcessingPass>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar18 = uVar18 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d87540(plVar22,lVar9,1);
System_Array_EmptyInternalEnumerator<PostProcessingPass>__System_Collections_IEnumerator_get_Current
    :
    auVar24 = (*(code *)*puVar11)(plVar22,puVar11[1]);
    lVar9 = *(long *)puVar6;
    *(undefined8 *)(unaff_x29 + -0x30) = 0;
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar24;
    thunk_FUN_02dc1ef0(unaff_x29 + -0x30,0);
    uVar20 = *(undefined8 *)puVar5;
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x28);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x30);
    uVar18 = FUN_02ee4294(unaff_x29 + -0x50,uVar20);
  } while ((uVar18 & 1) != 0);
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),1);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x29 + -0x50);
  uVar16 = *(undefined8 *)(unaff_x29 + -0x48);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  FUN_0291e754(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1a0,uVar20,uVar16);
  lVar23 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar23 + 0x135);
  lVar9 = lVar23;
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_02d8720c();
    lVar23 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar23 + 0x135);
  }
  pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x48);
  if ((uVar3 & 1) == 0) {
    lVar23 = FUN_02d8720c();
  }
  uVar20 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar23 + 0xc0) + 0x80) + 0x20);
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  (*pcVar17)(uVar20,unaff_x29 + -0x50,param_1,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48));
  goto LAB_04853ae4;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar14 = piVar14 + 4;
    if (uVar18 == 0) break;
LAB_048537dc:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664c6b0) {
      puVar21 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04853b24;
    }
  }
LAB_048537f4:
  puVar21 = (undefined8 *)FUN_02d87540(plVar22,*(long *)PTR_DAT_0664c6b0,0);
LAB_04853b24:
  auVar24 = (*(code *)*puVar21)(plVar22,puVar21[1]);
  puVar5 = PTR_DAT_06648868;
  if (*(int *)(*(long *)PTR_DAT_06648868 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar24;
  thunk_FUN_02dc1ef0(unaff_x29 + -0x18,0);
  cVar7 = DAT_06a4963a;
  plVar22 = *(long **)(unaff_x29 + -0x18);
  uVar18 = *(ulong *)(unaff_x29 + -0x10);
  *(long **)(unaff_x29 + -0x60) = plVar22;
  *(ulong *)(unaff_x29 + -0x58) = uVar18;
  if (cVar7 == '\0') {
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4963a = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a4963b == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963b = '\x01';
  }
  if (plVar22 != (long *)0x0) {
    lVar9 = *plVar22;
    uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar19 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
          puVar21 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04853c10;
        }
        uVar19 = uVar19 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar19 != 0);
    }
    puVar21 = (undefined8 *)FUN_02d87540(plVar22,*(long *)PTR_DAT_06648890,0);
LAB_04853c10:
    iVar8 = (*(code *)*puVar21)(plVar22,uVar18 & 0xffffffff,puVar21[1]);
    if (iVar8 == 0) {
      lVar9 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),2);
      lVar9 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      FUN_0291e754(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x1c0,plVar22,uVar18);
      lVar23 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar23 + 0x135);
      lVar9 = lVar23;
      if ((uVar3 & 1) == 0) {
        lVar9 = FUN_02d8720c();
        lVar23 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar23 + 0x135);
      }
      pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x68);
      if ((uVar3 & 1) == 0) {
        lVar23 = FUN_02d8720c();
      }
      uVar20 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar23 + 0xc0) + 0x80) + 0x20);
      lVar9 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      (*pcVar17)(uVar20,unaff_x29 + -0x60,param_1,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x68));
      goto LAB_04853ae4;
    }
  }
LAB_04852aa4:
  if (DAT_06a4963c == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963c = '\x01';
  }
  plVar22 = *(long **)(unaff_x29 + -0x60);
  if (plVar22 != (long *)0x0) {
    lVar9 = *plVar22;
    uVar4 = *(undefined2 *)(unaff_x29 + -0x58);
    uVar18 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar18 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
          puVar21 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto FUN_04852e48;
        }
        uVar18 = uVar18 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar18 != 0);
    }
    puVar21 = (undefined8 *)FUN_02d87540(plVar22,*(long *)PTR_DAT_06648890,2);
FUN_04852e48:
    (*(code *)*puVar21)(plVar22,uVar4,puVar21[1]);
  }
LAB_04853804:
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  plVar22 = (long *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xe0);
  plVar22 = (long *)*plVar22;
  if (plVar22 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06647b18))
    {
      if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(plVar22,param_2);
      }
      goto LAB_048540c4;
    }
    lVar9 = FUN_04f2e80c(plVar22,0);
    if (lVar9 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_048540c4;
    }
    FUN_04f2e8cc(lVar9,0);
  }
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  piVar14 = (int *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x100);
  lVar9 = *(long *)(param_2 + 0x20);
  if (*piVar14 == 1) {
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x120
                                        );
    memcpy(__dest,pvVar15,__n);
    memcpy(*(void **)(unaff_x29 + -0xa0),pvVar15,__n);
  }
  else {
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xe0,0);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    pvVar15 = (void *)thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x120
                                        );
    memset(pvVar15,0,__n);
    lVar9 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_0291e530(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0,0);
  }
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  FUN_0291e7a8(param_1,*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),0xfffffffe);
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  FUN_0291e530(param_1,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0,0);
  memcpy(__dest,*(void **)(unaff_x29 + -0xa0),__n);
  lVar23 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar23 + 0x135);
  lVar9 = lVar23;
  if ((uVar3 & 1) == 0) {
    lVar23 = FUN_02d8720c(lVar23);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar9 = *(long *)(param_2 + 0x20);
  }
  uVar20 = **(undefined8 **)(*(long *)(lVar23 + 0xc0) + 0x78);
  lVar23 = lVar9;
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_02d8720c(lVar9);
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar23 = *(long *)(param_2 + 0x20);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x78);
  if ((uVar3 & 1) == 0) {
    lVar23 = FUN_02d8720c(lVar23);
  }
  uVar16 = thunk_FUN_02dac2f0(param_1,*(long *)(**(long **)(lVar23 + 0xc0) + 0x80) + 0x20);
  lVar23 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar23 + 0x135) & 1) == 0) {
    lVar23 = FUN_02d8720c(lVar23);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar23 + 0xc0) + 0x20) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  pcVar17 = *(code **)(lVar9 + 0x10);
  *(undefined8 **)(unaff_x29 + -0x18) = __dest;
  (*pcVar17)(uVar20,lVar9,uVar16,unaff_x29 + -0x18,__dest);
LAB_04853ae4:
  if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_048540c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


