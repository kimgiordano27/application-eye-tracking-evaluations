/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeTokenAsync
ENTRY_POINT: 07211ccc
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


void Meta_WitAi_Json_JsonConvert__DeserializeTokenAsync(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined8 unaff_x19;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x20;
  int iVar24;
  long unaff_x21;
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
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    puVar9 = (undefined8 *)(unaff_x21 + in_stack_00000050 * 8 + 0x20);
    *puVar9 = unaff_x19;
    lVar10 = thunk_FUN_040ec700(puVar9,unaff_x19);
    lVar15 = *(long *)(unaff_x20 + 0x120);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar21 = *(long *)(lVar15 + in_stack_00000050 * 8 + 0x20);
    lVar15 = *(long *)(unaff_x28 + 0x10);
    if (*(long *)(unaff_x28 + 0x10) == 0) {
      in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,in_stack_00000058);
      uVar11 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x00000090);
      lVar10 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092bdf58,uVar11,0);
      lVar15 = lVar10;
    }
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(lVar10,lVar15);
    }
    thunk_FUN_089d053c(lVar21,lVar15,0);
    lVar10 = *(long *)(unaff_x20 + 0x120);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar10 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *(long *)(lVar10 + in_stack_00000050 * 8 + 0x20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0895ef68(lVar10,*(int *)(*(long *)(unaff_x20 + 0x28) + 0x14) == 1,0);
    lVar10 = *(long *)(unaff_x20 + 0x120);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar10 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar10 = *(long *)(lVar10 + in_stack_00000050 * 8 + 0x20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0895edf0(lVar10,2,0);
    lVar10 = *(long *)(unaff_x28 + 0x18);
    in_stack_000000d0._4_4_ = 0;
    while( true ) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)in_stack_000000d0._4_4_) break;
      if (*(uint *)(lVar10 + 0x18) <= in_stack_000000d0._4_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar10 = *(long *)(lVar10 + (long)(int)in_stack_000000d0._4_4_ * 8 + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar3 = *(uint *)(lVar10 + 0x10);
      if ((int)uVar3 < 0) {
LAB_07211fc4:
        plVar12 = *(long **)(unaff_x20 + 0x130);
        if (plVar12 != (long *)0x0) {
          lVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
          uVar11 = FUN_07676bc4((long)&stack0x000000d0 + 4,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          *(undefined8 *)(lVar10 + 0x20) = uVar11;
          thunk_FUN_040ec700();
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_072120fc;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar12,*unaff_x25,0);
LAB_072120fc:
          (*(code *)*puVar9)(plVar12,5,lVar10,puVar9[1]);
        }
      }
      else {
        lVar15 = *(long *)(unaff_x28 + 0x20);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar15 + 0x18) <= (int)uVar3) goto LAB_07211fc4;
        if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar7 = *(int *)(*(long *)(lVar10 + 0x18) + 0x10);
        if (iVar7 < 0) {
LAB_07212058:
          plVar12 = *(long **)(unaff_x20 + 0x130);
          if (plVar12 != (long *)0x0) {
            lVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
            uVar11 = FUN_07676bc4((long)&stack0x000000d0 + 4,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            *(undefined8 *)(lVar10 + 0x20) = uVar11;
            thunk_FUN_040ec700();
            lVar15 = *plVar12;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *unaff_x25) {
                  puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_07212120;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar12,*unaff_x25,0);
LAB_07212120:
            (*(code *)*puVar9)(plVar12,4,lVar10,puVar9[1]);
          }
        }
        else {
          if (*(long *)(unaff_x20 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x68);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(lVar21 + 0x18) <= iVar7) goto LAB_07212058;
          lVar15 = *(long *)(lVar15 + (ulong)uVar3 * 8 + 0x20);
          uVar11 = FUN_071f4b64(iVar7,*(undefined8 *)(unaff_x20 + 0x100),in_stack_00000048,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = *(long *)(unaff_x20 + 0x60);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(lVar15 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar12 = *(long **)(lVar21 + (long)(int)*(uint *)(lVar15 + 0x10) * 8 + 0x20);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          bVar4 = *(byte *)(*(long *)PTR_DAT_092bdb30 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)PTR_DAT_092bdb30)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0();
          }
          if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = plVar12[2];
          lVar20 = plVar12[3];
          iVar7 = FUN_07212d80(*(long *)(lVar10 + 0x18));
          unaff_x25 = (long *)PTR_DAT_092bc2c8;
          if (iVar7 < 4) {
            if (iVar7 == 2) {
              lVar10 = *(long *)(unaff_x20 + 0x60);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar10 + 0x18) <= *(uint *)(lVar15 + 0x24)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar12 = *(long **)(lVar10 + (long)(int)*(uint *)(lVar15 + 0x24) * 8 + 0x20);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar4 = *(byte *)(*(long *)PTR_DAT_092bd980 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)PTR_DAT_092bd980)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0();
              }
              lVar10 = *(long *)(unaff_x20 + 0x120);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar10 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar16 = plVar12[2];
              lVar18 = plVar12[3];
              uVar22 = *(undefined8 *)(lVar10 + in_stack_00000050 * 8 + 0x20);
              uVar8 = FUN_07212f18(lVar15);
              unaff_x25 = (long *)PTR_DAT_092bc2c8;
              FUN_071f3890(uVar22,uVar11,lVar21,lVar20,lVar16,lVar18,uVar8,0);
            }
            else if (iVar7 == 3) {
              lVar10 = *(long *)(unaff_x20 + 0x60);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar10 + 0x18) <= *(uint *)(lVar15 + 0x24)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar12 = *(long **)(lVar10 + (long)(int)*(uint *)(lVar15 + 0x24) * 8 + 0x20);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar4 = *(byte *)(*(long *)PTR_DAT_092bd988 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)PTR_DAT_092bd988)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0();
              }
              lVar10 = *(long *)(unaff_x20 + 0x120);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar10 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar16 = plVar12[2];
              lVar18 = plVar12[3];
              uVar22 = *(undefined8 *)(lVar10 + in_stack_00000050 * 8 + 0x20);
              uVar8 = FUN_07212f18(lVar15);
              unaff_x25 = (long *)PTR_DAT_092bc2c8;
              FUN_071f41b4(uVar22,uVar11,lVar21,lVar20,lVar16,lVar18,uVar8,0);
            }
            else {
LAB_07212470:
              plVar12 = *(long **)(unaff_x20 + 0x130);
              if (plVar12 != (long *)0x0) {
                lVar15 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
                if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                in_stack_000000a0 = FUN_07212d80();
                in_stack_00000090 = *(undefined8 *)PTR_DAT_092bdf30;
                in_stack_00000098 = 0xffffffffffffffff;
                uVar11 = FUN_076b01b4(&stack0x00000090,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                *(undefined8 *)(lVar15 + 0x20) = uVar11;
                thunk_FUN_040ec700();
                lVar10 = *plVar12;
                uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bc2c8) {
                      puVar9 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_07212568;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar9 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092bc2c8,0);
LAB_07212568:
                (*(code *)*puVar9)(plVar12,7,lVar15,puVar9[1]);
                unaff_x25 = (long *)PTR_DAT_092bc2c8;
              }
            }
          }
          else if (iVar7 == 4) {
            lVar10 = *(long *)(unaff_x20 + 0x60);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar10 + 0x18) <= *(uint *)(lVar15 + 0x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar12 = *(long **)(lVar10 + (long)(int)*(uint *)(lVar15 + 0x24) * 8 + 0x20);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            bVar4 = *(byte *)(*(long *)PTR_DAT_092bd980 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_092bd980)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0();
            }
            lVar10 = *(long *)(unaff_x20 + 0x120);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar10 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar16 = plVar12[2];
            lVar18 = plVar12[3];
            uVar22 = *(undefined8 *)(lVar10 + in_stack_00000050 * 8 + 0x20);
            uVar8 = FUN_07212f18(lVar15);
            unaff_x25 = (long *)PTR_DAT_092bc2c8;
            FUN_071f40fc(uVar22,uVar11,lVar21,lVar20,lVar16,lVar18,uVar8,0);
          }
          else if (iVar7 == 5) {
            lVar16 = *(long *)(unaff_x20 + 0x60);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar15 + 0x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar12 = *(long **)(lVar16 + (long)(int)*(uint *)(lVar15 + 0x24) * 8 + 0x20);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            bVar4 = *(byte *)(*(long *)PTR_DAT_092bdb30 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_092bdb30)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0();
            }
            lVar16 = *(long *)(unaff_x20 + 0xe8);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar18 = *(long *)(lVar16 + 0x68);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar3 = *(uint *)(*(long *)(lVar10 + 0x18) + 0x10);
            if (*(uint *)(lVar18 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar10 = *(long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar3 = *(uint *)(lVar10 + 0x20);
            if (-1 < (int)uVar3) {
              lVar16 = *(long *)(lVar16 + 0x60);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if ((int)uVar3 < *(int *)(lVar16 + 0x18)) {
                lVar18 = *(long *)(unaff_x20 + 0x120);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar18 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar1 = plVar12[2];
                lVar2 = plVar12[3];
                lVar16 = *(long *)(lVar16 + (ulong)uVar3 * 8 + 0x20);
                uVar22 = *(undefined8 *)(lVar18 + in_stack_00000050 * 8 + 0x20);
                uVar8 = FUN_07212f18(lVar15);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar16 + 0x28) == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0x28) + 0x10);
                }
                FUN_071f4c50(uVar22,uVar11,lVar21,lVar20,lVar1,lVar2,uVar8,uVar13);
                uVar17 = FUN_074e5d94(*(undefined8 *)(lVar16 + 0x10),0);
                lVar18 = *(long *)(unaff_x20 + 0x110);
                puVar9 = (undefined8 *)PTR_DAT_092bd9b8;
                if ((uVar17 & 1) == 0) {
                  puVar9 = (undefined8 *)(lVar16 + 0x10);
                }
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar3 = *(uint *)(lVar10 + 0x20);
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
                  uVar22 = *puVar9;
                  iVar24 = 1;
                  do {
                    in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,iVar24);
                    uVar13 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),
                                                &stack0x00000090);
                    uVar13 = FUN_074e74a4(*(undefined8 *)PTR_DAT_092bd798,uVar22,uVar13,0);
                    lVar10 = *(long *)(unaff_x20 + 0x120);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    if (*(uint *)(lVar10 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077838();
                    }
                    uVar23 = *(undefined8 *)(lVar10 + in_stack_00000050 * 8 + 0x20);
                    uVar13 = FUN_074e691c(uVar11,*(undefined8 *)PTR_DAT_09287f68,uVar13,0);
                    uVar8 = FUN_07212f18(lVar15);
                    if (*(long *)(lVar16 + 0x28) == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = *(undefined8 *)(*(long *)(lVar16 + 0x28) + 0x10);
                    }
                    FUN_071f4c50(uVar23,uVar13,lVar21,lVar20,lVar1,lVar2,uVar8,uVar14);
                    iVar24 = iVar24 + 1;
                    unaff_x25 = (long *)PTR_DAT_092bc2c8;
                  } while (iVar7 != iVar24);
                }
              }
            }
          }
          else {
            if (iVar7 != 6) goto LAB_07212470;
            plVar12 = *(long **)(unaff_x20 + 0x130);
            if (plVar12 != (long *)0x0) {
              lVar15 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
              if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              in_stack_000000a0 = FUN_07212d80();
              in_stack_00000090 = *(undefined8 *)PTR_DAT_092bdf30;
              in_stack_00000098 = 0xffffffffffffffff;
              uVar11 = FUN_076b01b4(&stack0x00000090,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              *(undefined8 *)(lVar15 + 0x20) = uVar11;
              thunk_FUN_040ec700();
              lVar10 = *plVar12;
              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bc2c8) {
                    puVar9 = (undefined8 *)(lVar10 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_07212540;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092bc2c8,1);
LAB_07212540:
              (*(code *)*puVar9)(plVar12,7,lVar15,puVar9[1]);
              unaff_x25 = (long *)PTR_DAT_092bc2c8;
            }
          }
        }
      }
      lVar10 = *(long *)(unaff_x28 + 0x18);
      in_stack_000000d0._4_4_ = in_stack_000000d0._4_4_ + 1;
    }
    in_stack_00000058 = in_stack_00000058 + 1;
    if (*(long *)(unaff_x20 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x28);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((int)*(uint *)(lVar10 + 0x18) <= (int)in_stack_00000058) {
      lVar10 = *(long *)(unaff_x20 + 0x60);
      if (lVar10 != 0) {
        lVar15 = 8;
        lVar21 = 0x20;
        while( true ) {
          uVar17 = lVar15 - 8;
          if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar17) break;
          lVar20 = *(long *)(unaff_x20 + 0x68);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar20 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          if ((*(uint *)(lVar20 + lVar15 * 4) >> 0xe & 1) == 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar12 = *(long **)(lVar10 + lVar21);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
              lVar10 = *(long *)(unaff_x20 + 0x60);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            *(undefined8 *)(lVar10 + lVar21) = 0;
            thunk_FUN_040ec700(lVar10 + lVar21,0);
            lVar10 = *(long *)(unaff_x20 + 0x60);
          }
          lVar15 = lVar15 + 1;
          lVar21 = lVar21 + 8;
          if (lVar10 == 0) {
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
    if (*(uint *)(lVar10 + 0x18) <= in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    in_stack_00000050 = (long)(int)in_stack_00000058;
    unaff_x21 = *(long *)(unaff_x20 + 0x120);
    unaff_x28 = *(long *)(lVar10 + in_stack_00000050 * 8 + 0x20);
    unaff_x19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09287678);
    FUN_0895e41c(unaff_x19,0);
  } while( true );
}


