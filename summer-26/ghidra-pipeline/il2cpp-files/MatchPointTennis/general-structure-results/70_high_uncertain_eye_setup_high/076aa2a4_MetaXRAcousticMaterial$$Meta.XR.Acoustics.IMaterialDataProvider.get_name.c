/*
FUNCTION_NAME: MetaXRAcousticMaterial$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 076aa2a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MetaXRAcousticMaterial__Meta_XR_Acoustics_IMaterialDataProvider_get_name
               (undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined **in_x9;
  ulong uVar16;
  int *piVar17;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined8 uVar18;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  
code_r0x076aa2a4:
  uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(in_x9[0xb7] + 0x48),param_2);
  lVar9 = FUN_078b5afc(unaff_x19,unaff_x25,uVar8,0);
  if (unaff_x27 == 0) goto LAB_076aa3ac;
LAB_076aa2d0:
  lVar14 = *(long *)(unaff_x27 + 0x10);
  if (lVar14 != 0) {
    iVar1 = *(int *)(lVar14 + 0x14);
    iVar6 = *(int *)(lVar14 + 0x18);
    in_stack_00000190 = 0;
    in_stack_00000198 = 0;
    in_stack_000001a0 = 0;
    in_stack_00000180 = 0;
    in_stack_00000188 = 0;
    in_stack_00000170 = 0;
    in_stack_00000178 = 0;
    in_stack_00000160 = 0;
    in_stack_00000168 = 0;
    if (*(int *)(lVar14 + 0x10) < 0) {
      uVar7 = 0;
    }
    else {
      if (((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(unaff_x27 + 0x10) == 0)) ||
         (lVar14 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar14 == 0)) goto LAB_076aaa9c;
      uVar4 = *(uint *)(*(long *)(unaff_x27 + 0x10) + 0x10);
      if (*(uint *)(lVar14 + 0x18) <= uVar4) goto LAB_076aaaa0;
      plVar10 = *(long **)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_076aaa9c;
      bVar3 = *(byte *)(*(long *)PTR_DAT_09f2d350 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_09f2d350)
         ) goto LAB_076aaaa4;
      FUN_0612fdb4(&stack0x00000190,plVar10[2],plVar10[3],*(undefined8 *)PTR_DAT_09f2d370);
      FUN_0612fdcc(&stack0x00000190,*(undefined8 *)PTR_DAT_09f2d380);
      uVar7 = extraout_x1;
    }
    if (-1 < iVar1) {
      if (((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(unaff_x27 + 0x10) == 0)) ||
         (lVar14 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar14 == 0)) goto LAB_076aaa9c;
      uVar4 = *(uint *)(*(long *)(unaff_x27 + 0x10) + 0x14);
      if (*(uint *)(lVar14 + 0x18) <= uVar4) goto LAB_076aaaa0;
      plVar10 = *(long **)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_076aaa9c;
      bVar3 = *(byte *)(*(long *)PTR_DAT_09f2d358 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_09f2d358)
         ) goto LAB_076aaaa4;
      FUN_0612e4fc(&stack0x00000178,plVar10[2],plVar10[3],*(undefined8 *)PTR_DAT_09f2d368);
      FUN_0612e514(&stack0x00000178,*(undefined8 *)PTR_DAT_09f2d378);
      uVar7 = extraout_x1_00;
    }
    if (-1 < iVar6) {
      if (((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(unaff_x27 + 0x10) == 0)) ||
         (lVar14 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar14 == 0)) goto LAB_076aaa9c;
      uVar4 = *(uint *)(*(long *)(unaff_x27 + 0x10) + 0x18);
      if (*(uint *)(lVar14 + 0x18) <= uVar4) goto LAB_076aaaa0;
      plVar10 = *(long **)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_076aaa9c;
      bVar3 = *(byte *)(*(long *)PTR_DAT_09f2d350 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_09f2d350)
         ) {
LAB_076aaaa4:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      FUN_0612fdb4(&stack0x00000160,plVar10[2],plVar10[3],*(undefined8 *)PTR_DAT_09f2d370);
      FUN_0612fdcc(&stack0x00000160,*(undefined8 *)PTR_DAT_09f2d380);
      uVar7 = extraout_x1_01;
    }
    uVar5 = in_stack_00000170;
    uVar18 = in_stack_00000168;
    uVar8 = in_stack_00000160;
    if ((*(long *)(unaff_x20 + 0x10) != 0) &&
       (lVar14 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x108), lVar14 != 0)) {
      if (*(uint *)(lVar14 + 0x18) <= unaff_w22) {
LAB_076aaaa0:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar10 = *(long **)(unaff_x20 + 0x18);
      if (plVar10 != (long *)0x0) {
        lVar14 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2d348) {
              puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
              goto LAB_076aa664;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d348,5);
LAB_076aa664:
        in_stack_000001e0 = uVar5;
        in_stack_000001d8 = uVar18;
        in_stack_000001d0 = uVar8;
        (*(code *)*puVar12)(plVar10,uStack000000000000002c,lVar9,&stack0x00000230,uVar7 & 0xffffffff
                            ,&stack0x00000210,&stack0x000001f0,&stack0x000001d0);
        lVar9 = unaff_x21;
        do {
          unaff_w23 = unaff_w23 + 1;
          if (unaff_w23 == iStack0000000000000028) {
            plVar10 = *(long **)(unaff_x20 + 0x18);
            if (plVar10 == (long *)0x0) break;
            lVar14 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar7 == 0) goto LAB_076aa814;
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_076aa7fc;
          }
          unaff_w22 = unaff_w22 + 1;
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (lVar14 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x108), lVar14 == 0)) break;
          if (*(uint *)(lVar14 + 0x18) <= unaff_w22) goto LAB_076aaaa0;
          lVar14 = lVar14 + (long)(int)unaff_w22 * 0x20;
          in_stack_000001c0 = *(undefined8 *)(lVar14 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x38);
          in_stack_000001b8 = *(undefined8 *)(lVar14 + 0x28);
          in_stack_000001b0 = *(undefined8 *)(lVar14 + 0x20);
          if (lVar15 == 0) break;
          uVar8 = thunk_FUN_0952ff6c(lVar15,0);
          uVar7 = FUN_078b4450(uVar8,0);
          lVar14 = 0;
          if ((uVar7 & 1) == 0) {
            lVar14 = thunk_FUN_0952ff6c(lVar15,0);
          }
          unaff_x21 = lVar14;
          if (lVar9 != 0) {
            unaff_x21 = lVar9;
          }
          in_stack_000001a8 = 0;
          uVar7 = FUN_094f150c(lVar15,0xd,0);
          if ((uVar7 & 1) == 0) {
LAB_076aa1a0:
            unaff_x26 = 0;
          }
          else if ((int)unaff_x29[9] < 0) {
            if (*(long *)(unaff_x20 + 0x10) == 0) break;
            plVar10 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x130);
            if (plVar10 == (long *)0x0) goto LAB_076aa1a0;
            lVar15 = *(long *)PTR_DAT_09f24cf0;
            lVar9 = *(long *)(lVar15 + 0x38);
            if (lVar9 == 0) {
              FUN_04482014(lVar15);
              lVar9 = *(long *)(lVar15 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_04481fb8();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_04481fb8();
            }
            if (plVar10 == (long *)0x0) break;
            lVar15 = *plVar10;
            uVar8 = **(undefined8 **)(lVar9 + 0xb8);
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2ac68) {
                  puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_076aa224;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2ac68,1);
LAB_076aa224:
            (*(code *)*puVar12)(plVar10,0x29,uVar8,puVar12[1]);
            unaff_x26 = 0;
          }
          else {
            plVar10 = *(long **)(unaff_x20 + 0x20);
            if ((plVar10 == (long *)0x0) ||
               (plVar10 = (long *)(**(code **)(*plVar10 + 0x238))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x240)),
               plVar10 == (long *)0x0)) break;
            lVar13 = *plVar10;
            lVar9 = unaff_x29[9];
            uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2d000) {
                  puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_076aa1b4;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d000,0);
LAB_076aa1b4:
            lVar9 = (*(code *)*puVar12)(plVar10,(int)lVar9,puVar12[1]);
            if (*(long *)(unaff_x20 + 0x10) == 0) break;
            uVar8 = FUN_076a1fa4(*(long *)(unaff_x20 + 0x10),(int)unaff_x29[9]);
            FUN_094f3f5c(lVar15,uVar8,0);
            if (lVar9 == 0) break;
            if (-1 < *(int *)(lVar9 + 0x1c)) {
              FUN_06147c30(&stack0x000001a8,*(int *)(lVar9 + 0x1c),*(undefined8 *)PTR_DAT_09f2d360);
            }
            unaff_x26 = *(undefined8 *)(lVar9 + 0x20);
          }
          lVar9 = (**(code **)(*unaff_x29 + 0x178))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x180));
          if (lVar9 == 0) {
            unaff_x27 = 0;
          }
          else {
            if (lVar9 == 0) break;
            unaff_x27 = *(long *)(lVar9 + 0x10);
          }
          if (0 < unaff_w23) {
            param_2 = &stack0x00000230;
            unaff_x25 = *(long *)PTR_DAT_09f2d388;
            if (lVar14 != 0) {
              unaff_x25 = lVar14;
            }
            unaff_x19 = *(undefined8 *)PTR_DAT_09f2d168;
            in_x9 = &PTR_DAT_09f1e000;
            goto code_r0x076aa2a4;
          }
          lVar9 = *(long *)PTR_DAT_09f2d388;
          if (lVar14 != 0) {
            lVar9 = lVar14;
          }
          if (unaff_x27 != 0) goto LAB_076aa2d0;
LAB_076aa3ac:
          uVar8 = in_stack_000001a8;
          plVar10 = *(long **)(unaff_x20 + 0x18);
          plVar11 = *(long **)(unaff_x20 + 0x20);
          if ((plVar11 == (long *)0x0) ||
             (plVar11 = (long *)(**(code **)(*plVar11 + 0x1f8))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x200)),
             plVar11 == (long *)0x0)) break;
          lVar15 = *plVar11;
          lVar14 = unaff_x29[4];
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_076aa6e0;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f2d160,0);
LAB_076aa6e0:
          lVar14 = (*(code *)*puVar12)(plVar11,(int)lVar14,puVar12[1]);
          if ((lVar14 == 0) || (plVar10 == (long *)0x0)) break;
          uVar18 = *(undefined8 *)(lVar14 + 0x18);
          lVar14 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2d348) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_076aa764;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d348,4);
LAB_076aa764:
          (*(code *)*puVar12)(plVar10,uStack000000000000002c,lVar9,&stack0x00000230,unaff_x26,uVar8,
                              uVar18,unaff_w23);
          lVar9 = unaff_x21;
        } while( true );
      }
    }
  }
  goto LAB_076aaa9c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar17 = piVar17 + 4;
    if (uVar7 == 0) break;
LAB_076aa7fc:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2d348) {
      puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
      goto LAB_076aa834;
    }
  }
LAB_076aa814:
  puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d348,3);
LAB_076aa834:
  (*(code *)*puVar12)(plVar10,uStack000000000000002c,lVar9,puVar12[1]);
  if (-1 < *(int *)((long)unaff_x29 + 0x4c)) {
    plVar10 = *(long **)(unaff_x20 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_076aaa9c;
    lVar9 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
    if (lVar9 != 0) {
      plVar10 = *(long **)(unaff_x20 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_076aaa9c;
      iVar1 = *(int *)((long)unaff_x29 + 0x4c);
      plVar10 = (long *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      if (plVar10 == (long *)0x0) goto LAB_076aaa9c;
      lVar9 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2cfb0) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_076aa8dc;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2cfb0,0);
LAB_076aa8dc:
      iVar6 = (*(code *)*puVar12)(plVar10,puVar12[1]);
      if (iVar1 < iVar6) {
        plVar10 = *(long **)(unaff_x20 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_076aaa9c;
        lVar9 = *plVar10;
        uVar2 = *(undefined4 *)((long)unaff_x29 + 0x4c);
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2d348) {
              puVar12 = (undefined8 *)(lVar9 + (long)(*piVar17 + 6) * 0x10 + 0x138);
              goto LAB_076aa954;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d348,6);
LAB_076aa954:
        (*(code *)*puVar12)(plVar10,uStack000000000000002c,uVar2,puVar12[1]);
      }
    }
  }
  lVar9 = (**(code **)(*unaff_x29 + 0x178))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x180));
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
    return;
  }
  plVar10 = *(long **)(unaff_x20 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar9 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    if (lVar9 == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar9 + 0x10) + 0x10) == 0) {
      return;
    }
    lVar9 = (**(code **)(*unaff_x29 + 0x178))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x180));
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) &&
       (plVar10 = *(long **)(unaff_x20 + 0x20), plVar10 != (long *)0x0)) {
      iVar1 = *(int *)(*(long *)(lVar9 + 0x18) + 0x10);
      lVar9 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x10), lVar9 != 0)) {
        if (*(int *)(lVar9 + 0x18) <= iVar1) {
          return;
        }
        plVar10 = *(long **)(unaff_x20 + 0x18);
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f2d348) {
                puVar12 = (undefined8 *)(lVar9 + (long)(*piVar17 + 7) * 0x10 + 0x138);
                goto LAB_076aaa68;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f2d348,7);
LAB_076aaa68:
          (*(code *)*puVar12)(plVar10,uStack000000000000002c,iVar1,puVar12[1]);
          return;
        }
      }
    }
  }
LAB_076aaa9c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


