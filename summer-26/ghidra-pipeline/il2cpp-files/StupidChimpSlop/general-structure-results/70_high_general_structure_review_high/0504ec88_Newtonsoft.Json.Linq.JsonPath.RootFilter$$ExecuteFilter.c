/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.RootFilter$$ExecuteFilter
ENTRY_POINT: 0504ec88
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long * Newtonsoft_Json_Linq_JsonPath_RootFilter__ExecuteFilter(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  int iVar18;
  ulong unaff_x22;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lStack0000000000000000;
  long in_stack_00000008;
  
  if ((*(byte *)(unaff_x20 + 0x2f7) & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0665c2f0);
    FUN_02d4dc40(PTR_DAT_0665b5d0);
    FUN_02d4dc40(PTR_DAT_0665c2f8);
    FUN_02d4dc40(PTR_DAT_0665c300);
    FUN_02d4dc40(PTR_DAT_0665c308);
    FUN_02d4dc40(PTR_DAT_0665c310);
    FUN_02d4dc40(PTR_DAT_066536a0);
    FUN_02d4dc40(PTR_DAT_0665c318);
    FUN_02d4dc40(PTR_DAT_0665c320);
    FUN_02d4dc40(PTR_DAT_0665c328);
    FUN_02d4dc40(PTR_DAT_06653690);
    FUN_02d4dc40(PTR_DAT_06646780);
    FUN_02d4dc40(PTR_DAT_0665c330);
    FUN_02d4dc40(PTR_DAT_06654d78);
    FUN_02d4dc40(PTR_DAT_066463a0);
    *(undefined1 *)(unaff_x20 + 0x2f7) = 1;
  }
  puVar14 = PTR_DAT_066462a0;
  in_stack_00000008 = 0;
  if (param_1 == 0) {
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar17 = thunk_FUN_02d8a638();
    puVar14 = PTR_DAT_06653230;
  }
  else {
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar7 = FUN_0501afe8();
    puVar2 = PTR_DAT_06654d78;
    if ((uVar7 & 1) == 0) {
      uVar17 = *(undefined8 *)PTR_DAT_0665c330;
      if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_050121a8(uVar17,0);
      uVar7 = FUN_0501afe8();
      plVar12 = (long *)0x0;
      if ((uVar7 & 1) == 0) {
        plVar12 = unaff_x19;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar8 = FUN_0504eabc(param_1,plVar12,0);
      if ((unaff_x22 & 1) == 0) {
        if (lVar8 == 0) goto LAB_0504f1a8;
        if (*(int *)(lVar8 + 0x18) == 1) {
          if (*(long *)(lVar8 + 0x20) != 0) {
            if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar7 = FUN_0501bc88(plVar12,0,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0504f5ec;
              if (*(long *)(lVar8 + 0x20) == 0) goto LAB_0504f1a8;
              plVar12 = (long *)FUN_02d5dae8();
            }
            else {
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0504f5ec;
              if ((*(long *)(lVar8 + 0x20) == 0) ||
                 (uVar17 = FUN_02d5dae8(), plVar12 == (long *)0x0)) goto LAB_0504f1a8;
              uVar7 = (**(code **)(*plVar12 + 0x298))
                                (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x2a0));
              if ((uVar7 & 1) == 0) {
                lVar8 = FUN_05028a08(plVar12,0,0);
                if (lVar8 == 0) {
                  return (long *)0x0;
                }
                uVar17 = *(undefined8 *)PTR_DAT_066463a0;
                plVar12 = (long *)thunk_FUN_02d8a53c(lVar8,uVar17);
                if (plVar12 != (long *)0x0) {
                  return plVar12;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268(lVar8,uVar17);
              }
            }
            lVar9 = FUN_05028a08(plVar12,1,0);
            if (lVar9 != 0) {
              uVar17 = *(undefined8 *)PTR_DAT_066463a0;
              plVar12 = (long *)thunk_FUN_02d8a53c(lVar9,uVar17);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268(lVar9,uVar17);
              }
              if (*(int *)(lVar8 + 0x18) != 0) {
                lVar8 = *(long *)(lVar8 + 0x20);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
                {
                  uVar17 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
                  FUN_02d4ddac(uVar17,0);
                }
                if ((int)plVar12[3] != 0) {
                  plVar12[4] = lVar8;
                  thunk_FUN_02dc1ef0(plVar12 + 4,lVar8);
                  return plVar12;
                }
              }
LAB_0504f5ec:
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0504f5ec;
            goto LAB_0504f1a8;
          }
LAB_0504f548:
          thunk_FUN_02db45e8(PTR_DAT_0665c338);
          uVar17 = thunk_FUN_02d8a638();
          uVar13 = thunk_FUN_02db45e8(PTR_DAT_0665c340);
          FUN_04f3e250(uVar17,uVar13,0);
          goto 
          Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          ;
        }
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar9 = FUN_0504f608(param_1);
        bVar4 = lVar9 != 0;
      }
      if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar7 = FUN_0501bc88(plVar12,0,0);
      if ((uVar7 & 1) != 0) {
        if (plVar12 == (long *)0x0) goto LAB_0504f1a8;
        bVar5 = FUN_0501ce84(plVar12,0);
        if ((bVar4 & bVar5) == 1) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar9 = FUN_0504f974(plVar12);
          if (lVar9 == 0) goto LAB_0504f1a8;
          bVar4 = *(char *)(lVar9 + 0x15) != '\0';
        }
      }
      if (lVar8 != 0) {
        if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar6 = FUN_05003fd0(*(undefined4 *)(lVar8 + 0x18),0x10,0);
        if (bVar4 != false) {
          lVar9 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665c310);
          FUN_0483b4c0(lVar9,uVar6,*(undefined8 *)PTR_DAT_0665c308);
          lVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06653690);
          FUN_036a5618(lVar10,uVar6,*(undefined8 *)PTR_DAT_0665c320);
          puVar2 = PTR_DAT_0665c300;
          iVar18 = 0;
          lStack0000000000000000 = param_1;
          do {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar1) {
              uVar21 = 0;
              do {
                if (uVar1 <= uVar21) goto LAB_0504f5ec;
                lVar19 = *(long *)(lVar8 + (long)(int)uVar21 * 8 + 0x20);
                if (lVar19 == 0) goto LAB_0504f548;
                uVar17 = FUN_02d5dae8(lVar19);
                if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dabd98(*(long *)(puVar14 + 0xe0));
                }
                uVar7 = FUN_0501bc88(plVar12,0,0);
                if ((uVar7 & 1) == 0) {
LAB_0504f00c:
                  if (lVar9 == 0) goto LAB_0504f1a8;
                  uVar7 = FUN_0483dd8c(lVar9,uVar17,&stack0x00000008,*(undefined8 *)puVar2);
                  if ((uVar7 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_06654d78 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    lVar20 = FUN_0504f974(uVar17);
                    if (iVar18 != 0) goto LAB_0504f068;
LAB_0504f038:
                    if (lVar20 == 0) goto LAB_0504f1a8;
LAB_0504f074:
                    if (((*(char *)(lVar20 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                       (*(int *)(in_stack_00000008 + 0x18) == iVar18)) {
                      if (lVar10 == 0) goto LAB_0504f1a8;
                      lVar15 = *(long *)(lVar10 + 0x10);
                      lVar16 = *(long *)PTR_DAT_066536a0;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_0504f1a8;
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar11 = lVar19;
                        thunk_FUN_02dc1ef0(plVar11,lVar19);
                      }
                      else {
                        FUN_036a5e08(lVar10,lVar19,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  else {
                    if (in_stack_00000008 == 0) goto LAB_0504f1a8;
                    lVar20 = *(long *)(in_stack_00000008 + 0x10);
                    if (iVar18 == 0) goto LAB_0504f038;
LAB_0504f068:
                    if (lVar20 == 0) goto LAB_0504f1a8;
                    if (*(char *)(lVar20 + 0x15) != '\0') goto LAB_0504f074;
                  }
                  if (in_stack_00000008 == 0) {
                    lVar19 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665c2f0);
                    *(long *)(lVar19 + 0x10) = lVar20;
                    thunk_FUN_02dc1ef0((long *)(lVar19 + 0x10),lVar20);
                    puVar3 = PTR_DAT_0665c2f8;
                    *(int *)(lVar19 + 0x18) = iVar18;
                    FUN_0483c224(lVar9,uVar17,lVar19,*(undefined8 *)puVar3);
                  }
                }
                else {
                  if (plVar12 == (long *)0x0) goto LAB_0504f1a8;
                  uVar7 = (**(code **)(*plVar12 + 0x298))
                                    (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x2a0));
                  if ((uVar7 & 1) != 0) goto LAB_0504f00c;
                }
                uVar1 = *(uint *)(lVar8 + 0x18);
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < (int)uVar1);
            }
            puVar3 = PTR_DAT_06654d78;
            if (*(int *)(*(long *)PTR_DAT_06654d78 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lStack0000000000000000 = FUN_0504f608(lStack0000000000000000);
            if (lStack0000000000000000 == 0) {
              if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar7 = FUN_0501afe8(plVar12,0,0);
              if ((uVar7 & 1) == 0) {
                if (plVar12 == (long *)0x0) break;
                uVar7 = FUN_0501ceec(plVar12,0);
                if ((uVar7 & 1) == 0) {
                  if (lVar10 != 0) {
                    uVar17 = FUN_05028a08(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
                    plVar12 = (long *)thunk_FUN_02d8a53c(uVar17,*(undefined8 *)PTR_DAT_066463a0);
                    goto LAB_0504f508;
                  }
                  break;
                }
              }
              if (lVar10 != 0) {
                plVar12 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_0665b5d0,
                                               *(undefined4 *)(lVar10 + 0x18));
                goto LAB_0504f508;
              }
              break;
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            iVar18 = iVar18 + 1;
            lVar8 = FUN_0504eabc(lStack0000000000000000,plVar12,1);
          } while (lVar8 != 0);
          goto LAB_0504f1a8;
        }
        if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar7 = FUN_0501afe8(plVar12,0,0);
        if ((uVar7 & 1) != 0) {
          iVar18 = *(int *)(lVar8 + 0x18);
          if (0 < iVar18) {
            plVar12 = (long *)(lVar8 + 0x20);
            do {
              if (*plVar12 == 0) goto LAB_0504f548;
              iVar18 = iVar18 + -1;
              plVar12 = plVar12 + 1;
            } while (iVar18 != 0);
          }
          plVar12 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_0665b5d0);
          FUN_0502588c(lVar8,plVar12,0,0);
          return plVar12;
        }
        lVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06653690);
        FUN_036a5618(lVar10,uVar6,*(undefined8 *)PTR_DAT_0665c320);
        puVar2 = PTR_DAT_066536a0;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          lVar9 = 0;
          do {
            if (uVar1 <= (uint)lVar9) goto LAB_0504f5ec;
            lVar19 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
            if (lVar19 == 0) goto LAB_0504f548;
            uVar17 = FUN_02d5dae8(lVar19);
            if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dabd98(*(long *)(puVar14 + 0xe0));
            }
            uVar7 = FUN_0501bc88(plVar12,0,0);
            if ((uVar7 & 1) == 0) {
LAB_0504f320:
              if (lVar10 == 0) goto LAB_0504f1a8;
              lVar20 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)puVar2;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_0504f1a8;
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar20 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar19;
                thunk_FUN_02dc1ef0(plVar11,lVar19);
              }
              else {
                FUN_036a5e08(lVar10,lVar19,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (plVar12 == (long *)0x0) goto LAB_0504f1a8;
              uVar7 = (**(code **)(*plVar12 + 0x298))
                                (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x2a0));
              if ((uVar7 & 1) != 0) goto LAB_0504f320;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar1);
        }
        if (*(int *)(*(long *)(puVar14 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar7 = FUN_0501afe8(plVar12,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_0504f1a8;
          uVar7 = FUN_0501ceec(plVar12,0);
          if ((uVar7 & 1) == 0) {
            if (lVar10 == 0) goto LAB_0504f1a8;
            uVar17 = FUN_05028a08(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
            plVar12 = (long *)thunk_FUN_02d8a53c(uVar17,*(undefined8 *)PTR_DAT_066463a0);
            goto LAB_0504f508;
          }
        }
        if (lVar10 != 0) {
          plVar12 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_0665b5d0,
                                         *(undefined4 *)(lVar10 + 0x18));
LAB_0504f508:
          FUN_036a63cc(lVar10,plVar12,0,*(undefined8 *)PTR_DAT_0665c318);
          return plVar12;
        }
      }
LAB_0504f1a8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar17 = thunk_FUN_02d8a638();
    puVar14 = PTR_DAT_06655120;
  }
  uVar13 = thunk_FUN_02db45e8(puVar14);
  FUN_04f681bc(uVar17,uVar13,0);
Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose:
  uVar13 = thunk_FUN_02db45e8(PTR_DAT_0665c348);
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar17,uVar13);
}


