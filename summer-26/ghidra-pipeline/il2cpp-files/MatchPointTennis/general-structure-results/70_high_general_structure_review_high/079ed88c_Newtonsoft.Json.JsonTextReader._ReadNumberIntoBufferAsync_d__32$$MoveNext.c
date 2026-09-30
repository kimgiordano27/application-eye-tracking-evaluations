/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ReadNumberIntoBufferAsync>d__32$$MoveNext
ENTRY_POINT: 079ed88c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ReadNumberIntoBufferAsync>d__32__MoveNext(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar10;
  uint uVar9;
  ulong uVar11;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *unaff_x28;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined6 uStack0000000000000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  
  _in_stack_00000040 =
       DG_Tweening_Core_TweenerCore<Vector3,_Vector3,_VectorOptions>__SetFrom(param_1,0);
  uVar11 = FUN_07140da4(&stack0x00000040,*(undefined8 *)PTR_DAT_09f435f0);
  if ((uVar11 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000040;
    thunk_FUN_044bb4b4(unaff_x19 + 0x1a,0);
    FUN_04e35d40(unaff_x19 + 2,&stack0x00000040);
  }
  else {
    iVar8 = FUN_07140df0(&stack0x00000040,*(undefined8 *)PTR_DAT_09f435e8);
    if (iVar8 == 0) {
      uVar10 = 0;
    }
    else {
      unaff_x19[0x12] = 0;
      *(undefined1 *)(unaff_x19 + 0x13) = 0;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      *(undefined8 *)(unaff_x19 + 0x14) = *(undefined8 *)(unaff_x20 + 0x30);
      thunk_FUN_044bb4b4();
      *(undefined8 *)(unaff_x19 + 0x16) = *(undefined8 *)(unaff_x20 + 0x18);
      thunk_FUN_044bb4b4();
      uVar9 = FUN_05f2d6c0(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_09f43618);
      unaff_x19[0x18] = uVar9;
      do {
        if ((int)uVar9 < 1) break;
        uVar12 = *(int *)(unaff_x20 + 0x44) - *(int *)(unaff_x20 + 0x40);
        unaff_x19[0x1e] = uVar12;
        if (uVar12 == 0) {
          *(undefined8 *)(unaff_x20 + 0x40) = 0;
          if (*(char *)(unaff_x20 + 0x55) == '\0') {
            *(undefined4 *)(unaff_x20 + 0x48) = 0;
          }
          *(bool *)(unaff_x19 + 0x13) = *(int *)(unaff_x20 + 0x50) <= (int)uVar9;
          do {
            puVar5 = PTR_DAT_09f43630;
            puVar4 = PTR_DAT_09f43608;
            puVar3 = PTR_DAT_09f435f8;
            if (*(char *)(unaff_x20 + 0x55) == '\0') {
              lVar14 = *(long *)(unaff_x19 + 0x14);
              plVar13 = *(long **)(unaff_x19 + 0x16);
              in_stack_00000018 = 0;
              if (lVar14 == 0) {
                in_stack_00000010 = 0;
                in_stack_00000018 = 0;
              }
              else {
                in_stack_00000010 = lVar14;
                thunk_FUN_044bb4b4(&stack0x00000010,lVar14);
                in_stack_00000018 = *(long *)(lVar14 + 0x18) << 0x20;
              }
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              auVar16 = (**(code **)(*plVar13 + 0x2f8))
                                  (plVar13,in_stack_00000010,in_stack_00000018,
                                   *(undefined8 *)(unaff_x19 + 0x10),
                                   *(undefined8 *)(*plVar13 + 0x300));
              lVar14 = *(long *)puVar5;
              in_stack_00000050 = 0;
              _uStack0000000000000058 = 0;
              if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              in_stack_00000050 = auVar16._0_8_;
              thunk_FUN_044bb4b4(&stack0x00000050,auVar16._0_8_);
              uVar7 = in_stack_00000050;
              uVar11 = _uStack0000000000000058 >> 0x30;
              uStack0000000000000058 = auVar16._8_6_;
              _uStack0000000000000058 =
                   CONCAT26((short)uVar11,uStack0000000000000058) & 0xff00ffffffffffff;
              uVar11 = _uStack0000000000000058;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0;
              if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              in_stack_00000068 = uVar11;
              in_stack_00000060 = uVar7;
              thunk_FUN_044bb4b4(&stack0x00000060,0);
              uVar11 = in_stack_00000068;
              uVar7 = in_stack_00000060;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0;
              if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              in_stack_00000060 = uVar7;
              in_stack_00000068 = uVar11;
              thunk_FUN_044bb4b4(&stack0x00000060,0);
              in_stack_00000030 = in_stack_00000060;
              in_stack_00000038 = in_stack_00000068;
              lVar14 = *(long *)(*(long *)puVar4 + 0x20);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_04481fb8();
              }
              uVar11 = FUN_06bd4270(&stack0x00000030,
                                    *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x10));
              if ((uVar11 & 1) == 0) {
                *unaff_x19 = 2;
                *(ulong *)(unaff_x19 + 0x22) = in_stack_00000038;
                *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
                thunk_FUN_044bb4b4(unaff_x19 + 0x20,0);
                FUN_04e35e50(unaff_x19 + 2,&stack0x00000030);
                return;
              }
              lVar14 = *(long *)(*(long *)PTR_DAT_09f43600 + 0x20);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_04481fb8();
              }
              iVar8 = FUN_06bd438c(&stack0x00000030,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x20)
                                  );
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              *(int *)(unaff_x20 + 0x48) = iVar8;
              if (iVar8 == 0) goto LAB_079edee8;
            }
            else {
              lVar14 = *(long *)(unaff_x19 + 0x14);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar9 = *(uint *)(unaff_x20 + 0x4c);
              plVar13 = *(long **)(unaff_x19 + 0x16);
              in_stack_00000010 = 0;
              in_stack_00000018 = 0;
              uVar12 = *(uint *)(lVar14 + 0x18);
              if (uVar12 < uVar9) {
                FUN_07a5ec1c(0);
              }
              in_stack_00000010 = lVar14;
              thunk_FUN_044bb4b4(&stack0x00000010,lVar14);
              in_stack_00000018 = CONCAT44(uVar12 - uVar9,uVar9);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              auVar16 = (**(code **)(*plVar13 + 0x2f8))
                                  (plVar13,in_stack_00000010,in_stack_00000018,
                                   *(undefined8 *)(unaff_x19 + 0x10),
                                   *(undefined8 *)(*plVar13 + 0x300));
              lVar14 = *(long *)puVar5;
              in_stack_00000050 = 0;
              _uStack0000000000000058 = 0;
              if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              in_stack_00000050 = auVar16._0_8_;
              thunk_FUN_044bb4b4(&stack0x00000050,auVar16._0_8_);
              uVar7 = in_stack_00000050;
              uVar11 = _uStack0000000000000058 >> 0x30;
              uStack0000000000000058 = auVar16._8_6_;
              _uStack0000000000000058 =
                   CONCAT26((short)uVar11,uStack0000000000000058) & 0xff00ffffffffffff;
              uVar11 = _uStack0000000000000058;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0;
              if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              in_stack_00000068 = uVar11;
              in_stack_00000060 = uVar7;
              thunk_FUN_044bb4b4(&stack0x00000060,0);
              uVar11 = in_stack_00000068;
              uVar7 = in_stack_00000060;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0;
              if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              in_stack_00000060 = uVar7;
              in_stack_00000068 = uVar11;
              thunk_FUN_044bb4b4(&stack0x00000060,0);
              in_stack_00000030 = in_stack_00000060;
              in_stack_00000038 = in_stack_00000068;
              lVar14 = *(long *)(*(long *)puVar4 + 0x20);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_04481fb8();
              }
              uVar11 = FUN_06bd4270(&stack0x00000030,
                                    *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x10));
              if ((uVar11 & 1) == 0) {
                *unaff_x19 = 1;
                *(ulong *)(unaff_x19 + 0x22) = in_stack_00000038;
                *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
                thunk_FUN_044bb4b4(unaff_x19 + 0x20,0);
                FUN_04e35e50(unaff_x19 + 2,&stack0x00000030);
                return;
              }
              lVar14 = *(long *)(*(long *)PTR_DAT_09f43600 + 0x20);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_04481fb8();
              }
              iVar8 = FUN_06bd438c(&stack0x00000030,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x20)
                                  );
              if (iVar8 == 0) {
                if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar9 = *(uint *)(unaff_x20 + 0x48);
                if (0 < (int)uVar9) {
                  plVar13 = *(long **)(unaff_x20 + 0x28);
                  lVar14 = *(long *)(unaff_x19 + 0x14);
                  if (*(char *)(unaff_x19 + 0x13) == '\0') {
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    iVar8 = (**(code **)(*plVar13 + 0x1b8))
                                      (plVar13,lVar14,0,uVar9,*(undefined8 *)(unaff_x20 + 0x38),0,
                                       *(undefined8 *)(*plVar13 + 0x1c0));
                    unaff_x19[0x1e] = iVar8;
                    *(int *)(unaff_x20 + 0x44) = *(int *)(unaff_x20 + 0x44) + iVar8;
                  }
                  else {
                    if (lVar14 == 0) {
                      FUN_07a5ec1c(0);
                      uVar9 = 0;
                      lVar14 = 0;
                    }
                    else {
                      if (*(uint *)(lVar14 + 0x18) < uVar9) {
                        FUN_07a5ec1c(0);
                      }
                      lVar14 = lVar14 + 0x20;
                    }
                    _in_stack_00000020 =
                         FUN_05f51088(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_09f43620);
                    auVar17 = in_stack_00000020._0_12_;
                    uVar12 = unaff_x19[0x12];
                    lVar15 = *unaff_x28;
                    if (in_stack_00000020._8_4_ < uVar12) {
                      FUN_07a5ec1c(0);
                      auVar16._8_8_ = in_stack_00000028 & 0xffffffff;
                      auVar16._0_8_ = in_stack_00000020;
                      auVar17 = auVar16._0_12_;
                    }
                    in_stack_00000020 = auVar17._0_8_;
                    lVar6 = in_stack_00000020;
                    if ((*(byte *)(*(long *)(lVar15 + 0x20) + 0x135) & 1) == 0) {
                      FUN_04481fb8();
                    }
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    uVar10 = (**(code **)(*plVar13 + 0x1e8))
                                       (plVar13,lVar14,uVar9,lVar6 + (long)(int)uVar12 * 2,
                                        auVar17._8_4_ - uVar12,0,*(undefined8 *)(*plVar13 + 0x1f0));
                    unaff_x19[0x1e] = uVar10;
                    *(undefined4 *)(unaff_x20 + 0x44) = 0;
                  }
                }
LAB_079edee8:
                *(undefined1 *)(unaff_x20 + 0x56) = 1;
                break;
              }
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              iVar8 = *(int *)(unaff_x20 + 0x48) + iVar8;
              *(int *)(unaff_x20 + 0x48) = iVar8;
            }
            if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            *(bool *)(unaff_x20 + 0x56) = iVar8 < *(int *)(*(long *)(unaff_x19 + 0x14) + 0x18);
            uVar11 = FUN_079ec8a0();
            if ((uVar11 & 1) == 0) {
              if ((*(char *)(unaff_x20 + 0x54) != '\0') && (1 < *(int *)(unaff_x20 + 0x48))) {
                FUN_079ec59c();
                *(bool *)(unaff_x19 + 0x13) = *(int *)(unaff_x20 + 0x50) <= (int)unaff_x19[0x18];
              }
              *(undefined4 *)(unaff_x20 + 0x40) = 0;
              if (*(char *)(unaff_x19 + 0x13) == '\0') {
                plVar13 = *(long **)(unaff_x20 + 0x28);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                iVar8 = (**(code **)(*plVar13 + 0x1b8))
                                  (plVar13,*(undefined8 *)(unaff_x19 + 0x14),0,
                                   *(undefined4 *)(unaff_x20 + 0x48),
                                   *(undefined8 *)(unaff_x20 + 0x38),0,
                                   *(undefined8 *)(*plVar13 + 0x1c0));
                unaff_x19[0x1e] = iVar8;
                *(int *)(unaff_x20 + 0x44) = *(int *)(unaff_x20 + 0x44) + iVar8;
              }
              else {
                iVar1 = unaff_x19[0x1e];
                plVar13 = *(long **)(unaff_x20 + 0x28);
                lVar14 = *(long *)(unaff_x19 + 0x14);
                uVar9 = *(uint *)(unaff_x20 + 0x48);
                if (lVar14 == 0) {
                  if (uVar9 == 0) {
                    lVar14 = 0;
                    uVar9 = 0;
                  }
                  else {
                    FUN_07a5ec1c(0);
                    lVar14 = 0;
                    uVar9 = 0;
                  }
                }
                else {
                  if (*(uint *)(lVar14 + 0x18) < uVar9) {
                    FUN_07a5ec1c(0);
                  }
                  lVar14 = lVar14 + 0x20;
                }
                _in_stack_00000020 = FUN_05f51088(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_09f43620);
                auVar17 = in_stack_00000020._0_12_;
                uVar12 = unaff_x19[0x12];
                lVar15 = *unaff_x28;
                if (in_stack_00000020._8_4_ < uVar12) {
                  FUN_07a5ec1c(0);
                  auVar2._8_8_ = in_stack_00000028 & 0xffffffff;
                  auVar2._0_8_ = in_stack_00000020;
                  auVar17 = auVar2._0_12_;
                }
                in_stack_00000020 = auVar17._0_8_;
                lVar6 = in_stack_00000020;
                if ((*(byte *)(*(long *)(lVar15 + 0x20) + 0x135) & 1) == 0) {
                  FUN_04481fb8();
                }
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                iVar8 = (**(code **)(*plVar13 + 0x1e8))
                                  (plVar13,lVar14,uVar9,lVar6 + (long)(int)uVar12 * 2,
                                   auVar17._8_4_ - uVar12,0,*(undefined8 *)(*plVar13 + 0x1f0));
                iVar8 = iVar8 + iVar1;
                unaff_x19[0x1e] = iVar8;
                *(undefined4 *)(unaff_x20 + 0x44) = 0;
              }
            }
            else {
              iVar8 = unaff_x19[0x1e];
            }
          } while (iVar8 == 0);
          uVar12 = unaff_x19[0x1e];
          if (uVar12 == 0) break;
          uVar9 = unaff_x19[0x18];
        }
        if ((int)uVar9 < (int)uVar12) {
          unaff_x19[0x1e] = uVar9;
          uVar12 = uVar9;
        }
        if (*(char *)(unaff_x19 + 0x13) == '\0') {
          lVar14 = *(long *)(unaff_x20 + 0x38);
          uVar9 = *(uint *)(unaff_x20 + 0x40);
          if (lVar14 == 0) {
            if (uVar12 != 0 || uVar9 != 0) {
              FUN_07a5ec1c(0);
            }
            in_stack_00000020 = 0;
            uVar12 = 0;
          }
          else {
            if ((*(uint *)(lVar14 + 0x18) < uVar9) || (*(uint *)(lVar14 + 0x18) - uVar9 < uVar12)) {
              FUN_07a5ec1c(0);
            }
            in_stack_00000020 = lVar14 + (long)(int)uVar9 * 2 + 0x20;
          }
          in_stack_00000028 = (ulong)uVar12;
          auVar17 = FUN_05f51088(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_09f43620);
          uVar9 = unaff_x19[0x12];
          lVar14 = *unaff_x28;
          if (auVar17._8_4_ < uVar9) {
            FUN_07a5ec1c(0);
          }
          if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_066b26dc(&stack0x00000020,auVar17._0_8_ + (long)(int)uVar9 * 2,auVar17._8_4_ - uVar9,
                       *(undefined8 *)PTR_DAT_09f3b9f0);
          uVar12 = unaff_x19[0x1e];
          *(uint *)(unaff_x20 + 0x40) = uVar12 + *(int *)(unaff_x20 + 0x40);
          uVar9 = unaff_x19[0x18];
        }
        uVar9 = uVar9 - uVar12;
        unaff_x19[0x18] = uVar9;
        unaff_x19[0x12] = uVar12 + unaff_x19[0x12];
      } while (*(char *)(unaff_x20 + 0x56) == '\0');
      uVar10 = unaff_x19[0x12];
    }
    puVar3 = PTR_DAT_09f435d8;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    thunk_FUN_044bb4b4(unaff_x19 + 0x14,0);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
    FUN_06a65650(unaff_x19 + 2,uVar10,*(undefined8 *)puVar3);
  }
  return;
}


