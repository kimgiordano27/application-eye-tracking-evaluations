/*
FUNCTION_NAME: FUN_06815598
ENTRY_POINT: 06815598
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_06815598(undefined1 param_1 [16],undefined4 param_2,float param_3,float param_4,
                 long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auStack_5f0 [80];
  undefined1 auStack_5a0 [16];
  int iStack_590;
  int iStack_58c;
  undefined1 auStack_580 [200];
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  int iStack_4a8;
  int iStack_4a4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_344;
  undefined8 uStack_33c;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2a8 [200];
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [80];
  
  if ((bRam00000000071d68dd & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d39720);
    FUN_02f07e70(PTR_DAT_06d382e0);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_Pelvis_TypeInfo);
    FUN_02f07e70(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                );
    FUN_02f07e70(System_Net_FtpWebRequest_RequestStage_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39ca8);
    bRam00000000071d68dd = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  memset(&uStack_1e0,0,0x130);
  memset(auStack_2a8,0,0xc4);
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  memset(&uStack_3f0,0,0x130);
  if (*(long *)(param_5 + 0x110) != 0) {
    FUN_068c6510(*(long *)(param_5 + 0x110),0);
    fVar15 = DAT_013f6a48;
    if (param_3 <= DAT_013f6a48) {
      return;
    }
    if (*(long *)(param_5 + 0x110) != 0) {
      FUN_068c6510(*(long *)(param_5 + 0x110),0);
      if (param_4 <= fVar15) {
        return;
      }
      if (*(long *)(param_5 + 0x110) != 0) {
        plVar6 = (long *)FUN_068c2b14(*(long *)(param_5 + 0x110),0);
        FUN_068b6a38(*(undefined8 *)(param_5 + 0x110),&uStack_98,&uStack_a8,&uStack_a0,&uStack_b0,0)
        ;
        puVar2 = PTR_DAT_06d382e0;
        if (plVar6 != (long *)0x0) {
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06d382e0) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                goto LAB_0681571c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d382e0,0xc);
LAB_0681571c:
          fVar15 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                goto LAB_0681577c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,6);
LAB_0681577c:
          fVar16 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_068157dc;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,4);
LAB_068157dc:
          fVar17 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                goto UnityEngine_UIElements_PanelEventHandler_PointerEvent__get_button;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,8);
UnityEngine_UIElements_PanelEventHandler_PointerEvent__get_button:
          fVar18 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          memset(&uStack_3f0,0,0x130);
          if (*(long *)(param_5 + 0x110) != 0) {
            uStack_3f0 = FUN_068c778c(*(long *)(param_5 + 0x110),0);
            auVar19 = NEON_fmov(0x3f800000,4);
            uStack_3c8 = auVar19._8_8_;
            uStack_3d0 = auVar19._0_8_;
            uStack_3ec = param_2;
            fStack_3e8 = param_3;
            fStack_3e4 = param_4;
            if (DAT_071bac5e == '\0') {
              FUN_02f07e70(PTR_DAT_06d03888);
              DAT_071bac5e = '\x01';
            }
            lVar10 = *(long *)PTR_DAT_06d03888;
            fStack_334 = **(float **)(lVar10 + 0xb8);
            fStack_330 = (*(float **)(lVar10 + 0xb8))[1];
            if (fStack_334 <= (float)uStack_98 - fVar16) {
              fStack_334 = (float)uStack_98 - fVar16;
            }
            if (fStack_330 <= uStack_98._4_4_ - fVar15) {
              fStack_330 = uStack_98._4_4_ - fVar15;
            }
            fStack_32c = **(float **)(lVar10 + 0xb8);
            fStack_328 = (*(float **)(lVar10 + 0xb8))[1];
            if (fStack_32c <= (float)uStack_a0 - fVar18) {
              fStack_32c = (float)uStack_a0 - fVar18;
            }
            if (fStack_328 <= uStack_a0._4_4_ - fVar15) {
              fStack_328 = uStack_a0._4_4_ - fVar15;
            }
            fStack_31c = **(float **)(lVar10 + 0xb8);
            fStack_318 = (*(float **)(lVar10 + 0xb8))[1];
            if (fStack_31c <= (float)uStack_a8 - fVar16) {
              fStack_31c = (float)uStack_a8 - fVar16;
            }
            if (fStack_318 <= uStack_a8._4_4_ - fVar17) {
              fStack_318 = uStack_a8._4_4_ - fVar17;
            }
            fStack_324 = **(float **)(lVar10 + 0xb8);
            fStack_320 = (*(float **)(lVar10 + 0xb8))[1];
            if (fStack_324 <= (float)uStack_b0 - fVar18) {
              fStack_324 = (float)uStack_b0 - fVar18;
            }
            if (fStack_320 <= uStack_b0._4_4_ - fVar17) {
              fStack_320 = uStack_b0._4_4_ - fVar17;
            }
            if ((*(long *)(param_5 + 0x110) != 0) &&
               (plVar8 = (long *)FUN_068c603c(*(long *)(param_5 + 0x110),0), plVar8 != (long *)0x0))
            {
              lVar10 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06d39720) {
                    puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_068159e8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d39720,2);
LAB_068159e8:
              iVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
              puVar3 = PTR_DAT_06d39ca8;
              if (iVar4 == 1) {
                lVar10 = *(long *)PTR_DAT_06d39ca8;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                  lVar10 = *(long *)puVar3;
                }
                auVar19 = *(undefined1 (*) [16])(*(long *)(lVar10 + 0xb8) + 0x18);
              }
              uStack_33c = auVar19._8_8_;
              uStack_344 = auVar19._0_8_;
              memcpy(&uStack_1e0,&uStack_3f0,0x130);
              fVar20 = fVar16 + (float)uStack_1e0;
              uStack_1e0 = CONCAT44(fVar15 + (float)((ulong)uStack_1e0 >> 0x20),fVar20);
              fStack_1d8 = fStack_1d8 - (fVar16 + fVar18);
              fStack_1d4 = fStack_1d4 - (fVar15 + fVar17);
              if (*(long *)(param_5 + 0x110) != 0) {
                uVar9 = FUN_068c2b24(*(long *)(param_5 + 0x110),0);
                iVar4 = FUN_0689b4f0(uVar9,0);
                if (iVar4 == 1) {
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1d) * 0x10 + 0x138);
                        goto LAB_06815ae8;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0x1d);
LAB_06815ae8:
                  fVar16 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                  fVar15 = uStack_1e0._4_4_;
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,fVar20 + fVar16);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1f) * 0x10 + 0x138);
                        goto LAB_06815b54;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0x1f);
LAB_06815b54:
                  fVar17 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                  fVar16 = fStack_1d8;
                  uStack_1e0 = CONCAT44(fVar15 + fVar17,(undefined4)uStack_1e0);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1d) * 0x10 + 0x138);
                        goto LAB_06815bbc;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0x1d);
LAB_06815bbc:
                  fVar15 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1e) * 0x10 + 0x138);
                        goto LAB_06815c1c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0x1e);
LAB_06815c1c:
                  fVar18 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                  fVar17 = fStack_1d4;
                  fStack_1d8 = fVar16 - (fVar15 + fVar18);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1f) * 0x10 + 0x138);
                        goto LAB_06815c88;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0x1f);
LAB_06815c88:
                  fVar15 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1c) * 0x10 + 0x138);
                        goto LAB_06815ce8;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0x1c);
LAB_06815ce8:
                  fVar16 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                  fStack_1d4 = fVar17 - (fVar15 + fVar16);
                }
                uVar9 = NEON_rev64(*(undefined8 *)(param_5 + 0xb8),4);
                *(undefined8 *)(param_5 + 0x68) = *(undefined8 *)(param_5 + 0xc0);
                *(undefined8 *)(param_5 + 0x78) = uVar9;
                puVar7 = (undefined8 *)(param_5 + 0x30);
                *(undefined1 *)(param_5 + 0x76) = 1;
                FUN_068b852c(&uStack_4b8,ZEXT816(0),0,0x3f800000,0x3f800000,&uStack_1e0,0);
                memcpy(auStack_2a8,&uStack_4b8,0xc4);
                memcpy(auStack_580,auStack_2a8,0xc4);
                FUN_06894474(&uStack_4b8,auStack_580,0);
                uStack_2b8 = uStack_4b0;
                uStack_2c0 = uStack_4b8;
                if ((iStack_4a8 < 1) || (iStack_4a4 < 1)) {
LAB_06815eb0:
                  *(undefined8 *)(param_5 + 0x68) = 0;
                  *(undefined8 *)(param_5 + 0x60) = 0;
                  *(undefined8 *)(param_5 + 0x78) = 0;
                  *(undefined8 *)(param_5 + 0x70) = 0;
                  *(undefined8 *)(param_5 + 0x48) = 0;
                  *(undefined8 *)(param_5 + 0x40) = 0;
                  *(undefined8 *)(param_5 + 0x58) = 0;
                  *(undefined8 *)(param_5 + 0x50) = 0;
                  *(undefined8 *)(param_5 + 0x38) = 0;
                  *puVar7 = 0;
                  return;
                }
                iStack_590 = iStack_4a8;
                iStack_58c = iStack_4a4;
                FUN_068106c0(param_5,auStack_5a0);
                lVar10 = *(long *)(param_5 + 0x18);
                memcpy(auStack_5f0,puVar7,0x50);
                if (lVar10 != 0) {
                  lVar14 = *(long *)RootMotion_FinalIK_Grounding_Pelvis_TypeInfo;
                  memcpy(auStack_90,auStack_5f0,0x50);
                  lVar11 = *(long *)(lVar10 + 0x10);
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar11 != 0) {
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                      lVar11 = lVar11 + (long)(int)uVar1 * 0x50;
                      memcpy((void *)(lVar11 + 0x20),auStack_90,0x50);
                      thunk_FUN_02f411dc(lVar11 + 0x40,0);
                    }
                    else {
                      uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
                      memcpy(&uStack_4b8,auStack_90,0x50);
                      FUN_04168070(lVar10,&uStack_4b8,uVar9);
                    }
                    iVar4 = *(int *)(param_5 + 0x118);
                    iVar5 = FUN_042e0d5c(puVar7,*(undefined8 *)
                                                 System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                                        );
                    *(int *)(param_5 + 0x118) = iVar5 + iVar4;
                    iVar4 = *(int *)(param_5 + 0x11c);
                    iVar5 = FUN_042dd880(param_5 + 0x40,
                                         *(undefined8 *)
                                          System_Net_FtpWebRequest_RequestStage_TypeInfo);
                    *(int *)(param_5 + 0x11c) = iVar5 + iVar4;
                    *(undefined1 *)(param_5 + 0x80) = 1;
                    goto LAB_06815eb0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


