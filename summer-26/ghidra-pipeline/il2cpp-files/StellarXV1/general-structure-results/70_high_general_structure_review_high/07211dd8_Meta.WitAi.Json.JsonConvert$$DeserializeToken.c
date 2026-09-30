/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 07211dd8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeToken(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x20;
  int iVar24;
  long *unaff_x25;
  long unaff_x28;
  undefined4 *unaff_x29;
  undefined4 *in_stack_00000010;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  uint in_stack_00000058;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000d0;
  
  do {
    FUN_0895edf0(param_1,2,0);
    lVar14 = *(long *)(unaff_x28 + 0x18);
    in_stack_000000d0._4_4_ = 0;
    while( true ) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)in_stack_000000d0._4_4_) break;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_000000d0._4_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar14 = *(long *)(lVar14 + (long)(int)in_stack_000000d0._4_4_ * 8 + 0x20);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar3 = *(uint *)(lVar14 + 0x10);
      if ((int)uVar3 < 0) {
LAB_07211fc4:
        plVar10 = *(long **)(unaff_x20 + 0x130);
        if (plVar10 != (long *)0x0) {
          lVar14 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
          uVar9 = FUN_07676bc4((long)&stack0x000000d0 + 4,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          *(undefined8 *)(lVar14 + 0x20) = uVar9;
          thunk_FUN_040ec700();
          lVar16 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x25) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_072120fc;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*unaff_x25,0);
LAB_072120fc:
          (*(code *)*puVar11)(plVar10,5,lVar14,puVar11[1]);
        }
      }
      else {
        lVar16 = *(long *)(unaff_x28 + 0x20);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar16 + 0x18) <= (int)uVar3) goto LAB_07211fc4;
        if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar7 = *(int *)(*(long *)(lVar14 + 0x18) + 0x10);
        if (iVar7 < 0) {
LAB_07212058:
          plVar10 = *(long **)(unaff_x20 + 0x130);
          if (plVar10 != (long *)0x0) {
            lVar14 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
            uVar9 = FUN_07676bc4((long)&stack0x000000d0 + 4,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            *(undefined8 *)(lVar14 + 0x20) = uVar9;
            thunk_FUN_040ec700();
            lVar16 = *plVar10;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x25) {
                  puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_07212120;
                }
                uVar17 = uVar17 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*unaff_x25,0);
LAB_07212120:
            (*(code *)*puVar11)(plVar10,4,lVar14,puVar11[1]);
          }
        }
        else {
          if (*(long *)(unaff_x20 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar19 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x68);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(lVar19 + 0x18) <= iVar7) goto LAB_07212058;
          lVar16 = *(long *)(lVar16 + (ulong)uVar3 * 8 + 0x20);
          uVar9 = FUN_071f4b64(iVar7,*(undefined8 *)(unaff_x20 + 0x100),in_stack_00000048,0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar19 = *(long *)(unaff_x20 + 0x60);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar16 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar10 = *(long **)(lVar19 + (long)(int)*(uint *)(lVar16 + 0x10) * 8 + 0x20);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          bVar4 = *(byte *)(*(long *)PTR_DAT_092bdb30 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)PTR_DAT_092bdb30)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0();
          }
          if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar19 = plVar10[2];
          lVar21 = plVar10[3];
          iVar7 = FUN_07212d80(*(long *)(lVar14 + 0x18));
          unaff_x25 = (long *)PTR_DAT_092bc2c8;
          if (iVar7 < 4) {
            if (iVar7 == 2) {
              lVar14 = *(long *)(unaff_x20 + 0x60);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar16 + 0x24)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar10 = *(long **)(lVar14 + (long)(int)*(uint *)(lVar16 + 0x24) * 8 + 0x20);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar4 = *(byte *)(*(long *)PTR_DAT_092bd980 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)PTR_DAT_092bd980)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0();
              }
              lVar14 = *(long *)(unaff_x20 + 0x120);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar14 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar15 = plVar10[2];
              lVar18 = plVar10[3];
              uVar22 = *(undefined8 *)(lVar14 + in_stack_00000050 * 8 + 0x20);
              uVar8 = FUN_07212f18(lVar16);
              unaff_x25 = (long *)PTR_DAT_092bc2c8;
              FUN_071f3890(uVar22,uVar9,lVar19,lVar21,lVar15,lVar18,uVar8,0);
            }
            else if (iVar7 == 3) {
              lVar14 = *(long *)(unaff_x20 + 0x60);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar16 + 0x24)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar10 = *(long **)(lVar14 + (long)(int)*(uint *)(lVar16 + 0x24) * 8 + 0x20);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar4 = *(byte *)(*(long *)PTR_DAT_092bd988 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)PTR_DAT_092bd988)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0();
              }
              lVar14 = *(long *)(unaff_x20 + 0x120);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar14 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar15 = plVar10[2];
              lVar18 = plVar10[3];
              uVar22 = *(undefined8 *)(lVar14 + in_stack_00000050 * 8 + 0x20);
              uVar8 = FUN_07212f18(lVar16);
              unaff_x25 = (long *)PTR_DAT_092bc2c8;
              FUN_071f41b4(uVar22,uVar9,lVar19,lVar21,lVar15,lVar18,uVar8,0);
            }
            else {
LAB_07212470:
              plVar10 = *(long **)(unaff_x20 + 0x130);
              if (plVar10 != (long *)0x0) {
                lVar16 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
                if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                in_stack_000000a0 = FUN_07212d80();
                in_stack_00000090 = *(undefined8 *)PTR_DAT_092bdf30;
                in_stack_00000098 = 0xffffffffffffffff;
                uVar9 = FUN_076b01b4(&stack0x00000090,0);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                *(undefined8 *)(lVar16 + 0x20) = uVar9;
                thunk_FUN_040ec700();
                lVar14 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar17 != 0) {
                  piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_092bc2c8) {
                      puVar11 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_07212568;
                    }
                    uVar17 = uVar17 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar17 != 0);
                }
                puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092bc2c8,0);
LAB_07212568:
                (*(code *)*puVar11)(plVar10,7,lVar16,puVar11[1]);
                unaff_x25 = (long *)PTR_DAT_092bc2c8;
              }
            }
          }
          else if (iVar7 == 4) {
            lVar14 = *(long *)(unaff_x20 + 0x60);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar16 + 0x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar10 = *(long **)(lVar14 + (long)(int)*(uint *)(lVar16 + 0x24) * 8 + 0x20);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            bVar4 = *(byte *)(*(long *)PTR_DAT_092bd980 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_092bd980)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0();
            }
            lVar14 = *(long *)(unaff_x20 + 0x120);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar14 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar15 = plVar10[2];
            lVar18 = plVar10[3];
            uVar22 = *(undefined8 *)(lVar14 + in_stack_00000050 * 8 + 0x20);
            uVar8 = FUN_07212f18(lVar16);
            unaff_x25 = (long *)PTR_DAT_092bc2c8;
            FUN_071f40fc(uVar22,uVar9,lVar19,lVar21,lVar15,lVar18,uVar8,0);
          }
          else if (iVar7 == 5) {
            lVar15 = *(long *)(unaff_x20 + 0x60);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar16 + 0x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar10 = *(long **)(lVar15 + (long)(int)*(uint *)(lVar16 + 0x24) * 8 + 0x20);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            bVar4 = *(byte *)(*(long *)PTR_DAT_092bdb30 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_092bdb30)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0();
            }
            lVar15 = *(long *)(unaff_x20 + 0xe8);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar18 = *(long *)(lVar15 + 0x68);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar3 = *(uint *)(*(long *)(lVar14 + 0x18) + 0x10);
            if (*(uint *)(lVar18 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar14 = *(long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar3 = *(uint *)(lVar14 + 0x20);
            if (-1 < (int)uVar3) {
              lVar15 = *(long *)(lVar15 + 0x60);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if ((int)uVar3 < *(int *)(lVar15 + 0x18)) {
                lVar18 = *(long *)(unaff_x20 + 0x120);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar18 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar1 = plVar10[2];
                lVar2 = plVar10[3];
                lVar15 = *(long *)(lVar15 + (ulong)uVar3 * 8 + 0x20);
                uVar22 = *(undefined8 *)(lVar18 + in_stack_00000050 * 8 + 0x20);
                uVar8 = FUN_07212f18(lVar16);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar15 + 0x28) == 0) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = *(undefined8 *)(*(long *)(lVar15 + 0x28) + 0x10);
                }
                FUN_071f4c50(uVar22,uVar9,lVar19,lVar21,lVar1,lVar2,uVar8,uVar12);
                uVar17 = FUN_074e5d94(*(undefined8 *)(lVar15 + 0x10),0);
                lVar18 = *(long *)(unaff_x20 + 0x110);
                puVar11 = (undefined8 *)PTR_DAT_092bd9b8;
                if ((uVar17 & 1) == 0) {
                  puVar11 = (undefined8 *)(lVar15 + 0x10);
                }
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar3 = *(uint *)(lVar14 + 0x20);
                if (*(uint *)(lVar18 + 0x18) <= uVar3 + 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(uint *)(lVar18 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                iVar7 = *(int *)(lVar18 + 0x20 + (long)(int)(uVar3 + 1) * 4) -
                        *(int *)(lVar18 + 0x20 + (long)(int)uVar3 * 4);
                unaff_x25 = (long *)PTR_DAT_092bc2c8;
                unaff_x29 = in_stack_00000010;
                if (1 < iVar7) {
                  uVar22 = *puVar11;
                  iVar24 = 1;
                  do {
                    in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,iVar24);
                    uVar12 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),
                                                &stack0x00000090);
                    uVar12 = FUN_074e74a4(*(undefined8 *)PTR_DAT_092bd798,uVar22,uVar12,0);
                    lVar14 = *(long *)(unaff_x20 + 0x120);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077838();
                    }
                    uVar23 = *(undefined8 *)(lVar14 + in_stack_00000050 * 8 + 0x20);
                    uVar12 = FUN_074e691c(uVar9,*(undefined8 *)PTR_DAT_09287f68,uVar12,0);
                    uVar8 = FUN_07212f18(lVar16);
                    if (*(long *)(lVar15 + 0x28) == 0) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = *(undefined8 *)(*(long *)(lVar15 + 0x28) + 0x10);
                    }
                    FUN_071f4c50(uVar23,uVar12,lVar19,lVar21,lVar1,lVar2,uVar8,uVar13);
                    iVar24 = iVar24 + 1;
                    unaff_x25 = (long *)PTR_DAT_092bc2c8;
                  } while (iVar7 != iVar24);
                }
              }
            }
          }
          else {
            if (iVar7 != 6) goto LAB_07212470;
            plVar10 = *(long **)(unaff_x20 + 0x130);
            if (plVar10 != (long *)0x0) {
              lVar16 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
              if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              in_stack_000000a0 = FUN_07212d80();
              in_stack_00000090 = *(undefined8 *)PTR_DAT_092bdf30;
              in_stack_00000098 = 0xffffffffffffffff;
              uVar9 = FUN_076b01b4(&stack0x00000090,0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              *(undefined8 *)(lVar16 + 0x20) = uVar9;
              thunk_FUN_040ec700();
              lVar14 = *plVar10;
              uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar17 != 0) {
                piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_092bc2c8) {
                    puVar11 = (undefined8 *)(lVar14 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_07212540;
                  }
                  uVar17 = uVar17 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar17 != 0);
              }
              puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092bc2c8,1);
LAB_07212540:
              (*(code *)*puVar11)(plVar10,7,lVar16,puVar11[1]);
              unaff_x25 = (long *)PTR_DAT_092bc2c8;
            }
          }
        }
      }
      lVar14 = *(long *)(unaff_x28 + 0x18);
      in_stack_000000d0._4_4_ = in_stack_000000d0._4_4_ + 1;
    }
    in_stack_00000058 = in_stack_00000058 + 1;
    if (*(long *)(unaff_x20 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x28);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((int)*(uint *)(lVar14 + 0x18) <= (int)in_stack_00000058) {
      lVar14 = *(long *)(unaff_x20 + 0x60);
      if (lVar14 != 0) {
        lVar16 = 8;
        lVar19 = 0x20;
        while( true ) {
          uVar17 = lVar16 - 8;
          if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar17) break;
          lVar21 = *(long *)(unaff_x20 + 0x68);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar21 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          if ((*(uint *)(lVar21 + lVar16 * 4) >> 0xe & 1) == 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar10 = *(long **)(lVar14 + lVar19);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
              lVar14 = *(long *)(unaff_x20 + 0x60);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            *(undefined8 *)(lVar14 + lVar19) = 0;
            thunk_FUN_040ec700(lVar14 + lVar19,0);
            lVar14 = *(long *)(unaff_x20 + 0x60);
          }
          lVar16 = lVar16 + 1;
          lVar19 = lVar19 + 8;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
        }
      }
      puVar6 = PTR_DAT_09289990;
      *unaff_x29 = 0xfffffffe;
      cVar5 = *(char *)(unaff_x29 + 10);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_065d0838(unaff_x29 + 2,cVar5 != '\0',*(undefined8 *)PTR_DAT_092899f8);
      return;
    }
    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    in_stack_00000050 = (long)(int)in_stack_00000058;
    lVar16 = *(long *)(unaff_x20 + 0x120);
    unaff_x28 = *(long *)(lVar14 + in_stack_00000050 * 8 + 0x20);
    uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09287678);
    FUN_0895e41c(uVar9,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    puVar11 = (undefined8 *)(lVar16 + in_stack_00000050 * 8 + 0x20);
    *puVar11 = uVar9;
    lVar14 = thunk_FUN_040ec700(puVar11,uVar9);
    lVar16 = *(long *)(unaff_x20 + 0x120);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar19 = *(long *)(lVar16 + in_stack_00000050 * 8 + 0x20);
    lVar16 = *(long *)(unaff_x28 + 0x10);
    if (*(long *)(unaff_x28 + 0x10) == 0) {
      in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,in_stack_00000058);
      uVar9 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x00000090);
      lVar14 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092bdf58,uVar9,0);
      lVar16 = lVar14;
    }
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(lVar14,lVar16);
    }
    thunk_FUN_089d053c(lVar19,lVar16,0);
    lVar14 = *(long *)(unaff_x20 + 0x120);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *(long *)(lVar14 + in_stack_00000050 * 8 + 0x20);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0895ef68(lVar14,*(int *)(*(long *)(unaff_x20 + 0x28) + 0x14) == 1,0);
    lVar14 = *(long *)(unaff_x20 + 0x120);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    param_1 = *(long *)(lVar14 + in_stack_00000050 * 8 + 0x20);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while( true );
}


