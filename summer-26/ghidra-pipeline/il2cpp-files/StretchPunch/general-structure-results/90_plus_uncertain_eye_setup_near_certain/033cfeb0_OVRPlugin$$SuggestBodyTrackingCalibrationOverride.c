/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 033cfeb0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__SuggestBodyTrackingCalibrationOverride(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  code *pcVar18;
  int *piVar19;
  long *unaff_x19;
  long *plVar20;
  undefined8 unaff_x22;
  undefined8 uVar21;
  long *unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  undefined8 unaff_x27;
  long lVar22;
  long unaff_x28;
  long *plVar23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  uVar6 = FUN_03306e90();
  if ((uVar6 & 1) == 0) {
    if ((unaff_w25 & 0xfff300) == 0) {
      uVar21 = (**(code **)(*unaff_x24 + 0x2c8))();
      thunk_FUN_01dd295c(StringLiteral_8807);
      uVar14 = thunk_FUN_01de27b8();
      OVRManager_<>c___ctor(uVar14,uVar21);
      goto LAB_033d0c4c;
    }
    uVar2 = unaff_w25 & 0x2000;
    uVar16 = unaff_w25 >> 0xc & 1;
    if (uVar16 == 0 && uVar2 == 0) {
LAB_033d0090:
      if ((unaff_w25 >> 8 & 1) == 0) {
        plVar10 = (long *)0x0;
        plVar23 = (long *)0x0;
      }
      else {
        uVar21 = (**(code **)(*unaff_x24 + 0x6c8))();
        lVar7 = thunk_FUN_01de26bc(uVar21,*(undefined8 *)StringLiteral_6207);
        puVar3 = StringLiteral_1291;
        puVar13 = StringLiteral_1157;
        if (lVar7 == 0) goto LAB_033d0900;
        if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
          plVar10 = (long *)0x0;
        }
        else {
          lVar8 = 0;
          uVar6 = 0;
          uVar17 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          plVar23 = (long *)0x0;
          do {
            if (uVar17 <= uVar6) goto LAB_033d0904;
            plVar12 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
            uVar21 = FUN_01d7d9bc(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)puVar13);
            }
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)StringLiteral_5177)) goto LAB_033d0908;
            }
            uVar17 = FUN_033cab78(plVar12,unaff_w25,3,uVar21);
            plVar10 = plVar23;
            if (((uVar17 & 1) != 0) &&
               (uVar17 = FUN_03308b18(plVar23,0,0), plVar10 = plVar12, (uVar17 & 1) == 0)) {
              if (lVar8 == 0) {
                lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
                FUN_031987ac(lVar8,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)StringLiteral_8954);
                if (lVar8 == 0) goto LAB_033d0900;
                lVar22 = *(long *)(lVar8 + 0x10);
                lVar9 = *(long *)StringLiteral_5417;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_033d0900;
                uVar5 = *(uint *)(lVar8 + 0x18);
                if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar5 + 1;
                  plVar10 = (long *)(lVar22 + (long)(int)uVar5 * 8 + 0x20);
                  *plVar10 = (long)plVar23;
                  thunk_FUN_01e10808(plVar10,plVar23);
                }
                else {
                  FUN_03198f70(lVar8,plVar23,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar22 = *(long *)(lVar8 + 0x10);
              lVar9 = *(long *)StringLiteral_5417;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_033d0900;
              uVar5 = *(uint *)(lVar8 + 0x18);
              if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar5 + 1;
                puVar11 = (undefined8 *)(lVar22 + (long)(int)uVar5 * 8 + 0x20);
                *puVar11 = plVar12;
                thunk_FUN_01e10808(puVar11,plVar12);
                plVar10 = plVar23;
              }
              else {
                FUN_03198f70(lVar8,plVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                plVar10 = plVar23;
              }
            }
            uVar17 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar6 = uVar6 + 1;
            plVar23 = plVar10;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          if (lVar8 != 0) {
            plVar23 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                           *(undefined4 *)(lVar8 + 0x18));
            FUN_03199424(lVar8,plVar23,*(undefined8 *)StringLiteral_8953);
            goto LAB_033d0360;
          }
        }
        plVar23 = (long *)0x0;
      }
LAB_033d0360:
      uVar5 = FUN_03308b18(plVar10,0,0);
      if ((uVar5 & uVar16) != 0 || (unaff_w25 >> 0xd & 1) != 0) {
        uVar21 = (**(code **)(*unaff_x24 + 0x6c8))
                           (unaff_x24,unaff_x22,0x10,unaff_w25,*(undefined8 *)(*unaff_x24 + 0x6d0));
        lVar7 = thunk_FUN_01de26bc(uVar21,*(undefined8 *)StringLiteral_6208);
        puVar3 = StringLiteral_1291;
        puVar13 = StringLiteral_1157;
        if (lVar7 == 0) goto LAB_033d0900;
        uVar16 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar16) {
          uVar5 = 0;
          lVar8 = 0;
          plVar20 = plVar10;
          do {
            if (uVar16 <= uVar5) goto LAB_033d0904;
            plVar10 = *(long **)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
            if (plVar10 == (long *)0x0) goto LAB_033d0900;
            lVar22 = *plVar10;
            if (uVar2 == 0) {
              pcVar18 = *(code **)(lVar22 + 0x2a8);
              uVar21 = *(undefined8 *)(lVar22 + 0x2b0);
            }
            else {
              pcVar18 = *(code **)(lVar22 + 0x2d8);
              uVar21 = *(undefined8 *)(lVar22 + 0x2e0);
            }
            plVar12 = (long *)(*pcVar18)(plVar10,1,uVar21);
            uVar6 = FUN_03308b18(plVar12,0,0);
            plVar10 = plVar20;
            if ((uVar6 & 1) == 0) {
              uVar21 = FUN_01d7d9bc(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
              if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                thunk_FUN_01dc4f30(*(long *)puVar13);
              }
              if (plVar12 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)StringLiteral_5177)) {
LAB_033d0908:
                    /* WARNING: Subroutine does not return */
                  FUN_01d7df0c(plVar12);
                }
              }
              uVar6 = FUN_033cab78(plVar12,unaff_w25,3,uVar21);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = FUN_03308b18(plVar20,0,0), plVar10 = plVar12, (uVar6 & 1) == 0)) {
                if (lVar8 == 0) {
                  lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
                  FUN_031987ac(lVar8,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)StringLiteral_8954
                              );
                  if (lVar8 == 0) goto LAB_033d0900;
                  lVar22 = *(long *)(lVar8 + 0x10);
                  lVar9 = *(long *)StringLiteral_5417;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar22 == 0) goto LAB_033d0900;
                  uVar16 = *(uint *)(lVar8 + 0x18);
                  if (uVar16 < *(uint *)(lVar22 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar16 + 1;
                    plVar10 = (long *)(lVar22 + (long)(int)uVar16 * 8 + 0x20);
                    *plVar10 = (long)plVar20;
                    thunk_FUN_01e10808(plVar10,plVar20);
                  }
                  else {
                    FUN_03198f70(lVar8,plVar20,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                lVar22 = *(long *)(lVar8 + 0x10);
                lVar9 = *(long *)StringLiteral_5417;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_033d0900;
                uVar16 = *(uint *)(lVar8 + 0x18);
                if (uVar16 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar16 + 1;
                  plVar10 = (long *)(lVar22 + (long)(int)uVar16 * 8 + 0x20);
                  *plVar10 = (long)plVar12;
                  thunk_FUN_01e10808(plVar10,plVar12);
                  plVar10 = plVar20;
                }
                else {
                  FUN_03198f70(lVar8,plVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  plVar10 = plVar20;
                }
              }
            }
            uVar16 = *(uint *)(lVar7 + 0x18);
            uVar5 = uVar5 + 1;
            plVar20 = plVar10;
          } while ((int)uVar5 < (int)uVar16);
          if (lVar8 != 0) {
            plVar23 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                           *(undefined4 *)(lVar8 + 0x18));
            FUN_03199424(lVar8,plVar23,*(undefined8 *)StringLiteral_8953);
          }
        }
      }
      uVar6 = FUN_03308adc(plVar10,0,0);
      if ((uVar6 & 1) != 0) {
        if ((in_stack_00000048._4_4_ == 0) && (plVar23 == (long *)0x0)) {
          if ((plVar10 == (long *)0x0) ||
             (lVar7 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0)),
             lVar7 == 0)) goto LAB_033d0900;
          if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
            uVar21 = (**(code **)(*plVar10 + 0x348))
                               (plVar10,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,
                                unaff_x27,*(undefined8 *)(*plVar10 + 0x350));
            return uVar21;
          }
        }
        if (plVar23 == (long *)0x0) {
          plVar23 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,1);
          if (plVar23 == (long *)0x0) goto LAB_033d0900;
          if ((plVar10 != (long *)0x0) &&
             (lVar7 = thunk_FUN_01de26bc(plVar10,*(undefined8 *)(*plVar23 + 0x40)), lVar7 == 0)) {
            uVar21 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar21,0);
          }
          if ((int)plVar23[3] == 0) goto LAB_033d0904;
          plVar23[4] = (long)plVar10;
          thunk_FUN_01e10808(plVar23 + 4,plVar10);
        }
        if (in_stack_00000058 == 0) {
          lVar8 = *(long *)StringLiteral_886;
          lVar7 = *(long *)(lVar8 + 0x38);
          if (lVar7 == 0) {
            FUN_01dde854(lVar8);
            lVar7 = *(long *)(lVar8 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01dde7f8();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01dde7f8();
          }
          in_stack_00000058 = **(long **)(lVar7 + 0xb8);
        }
        in_stack_00000050 = 0;
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        plVar10 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                    (unaff_x23,unaff_w25,plVar23,&stack0x00000058,in_stack_00000020,
                                     unaff_x27,in_stack_00000038,&stack0x00000050);
        uVar6 = FUN_03308638(plVar10,0,0);
        if ((uVar6 & 1) == 0) {
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
            if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1554)) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(plVar10);
            }
            uVar21 = (**(code **)(lVar7 + 0x348))
                               (plVar10,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,
                                unaff_x27,*(undefined8 *)(lVar7 + 0x350));
            if (in_stack_00000050 == 0) {
              return uVar21;
            }
            if (unaff_x23 != (long *)0x0) {
              (**(code **)(*unaff_x23 + 0x1a8))
                        (unaff_x23,&stack0x00000058,in_stack_00000050,
                         *(undefined8 *)(*unaff_x23 + 0x1b0));
              return uVar21;
            }
          }
          goto LAB_033d0900;
        }
      }
      uVar21 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar14 = thunk_FUN_01de27b8();
      FUN_03395900(uVar14,uVar21,unaff_x22,0);
      goto LAB_033d0c4c;
    }
    puVar13 = StringLiteral_8971;
    uVar5 = uVar2;
    if ((unaff_w25 >> 0xc & 1) == 0) {
      puVar13 = StringLiteral_8960;
      uVar5 = unaff_w25 >> 8 & 1;
    }
    if (uVar5 == 0) goto LAB_033d0090;
  }
  else {
    if ((unaff_x19 == (long *)0x0) || (lVar7 = (**(code **)(*unaff_x19 + 0x238))(), lVar7 == 0))
    goto LAB_033d0900;
    uVar6 = FUN_033ac038(lVar7,0);
    if ((uVar6 & 1) == 0) {
      lVar7 = (**(code **)(*unaff_x19 + 0x238))();
      uVar21 = *(undefined8 *)StringLiteral_1171;
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      lVar8 = FUN_033a87c8(uVar21,0);
      if (lVar7 == lVar8) goto LAB_033cff40;
    }
    else {
LAB_033cff40:
      uVar2 = in_stack_00000048._4_4_ - (uint)(unaff_w26 == 0);
      if (0 < (int)uVar2) {
        lVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar2);
        puVar13 = StringLiteral_4730;
        if (unaff_x28 != 0) {
          uVar16 = 0;
          do {
            if (*(uint *)(unaff_x28 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            lVar22 = (long)(int)uVar16;
            lVar8 = *(long *)(unaff_x28 + lVar22 * 8 + 0x20);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            uVar21 = *(undefined8 *)puVar13;
            lVar9 = thunk_FUN_01de26bc(lVar8,uVar21);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(lVar8,uVar21);
            }
            lVar9 = *(long *)puVar13;
            plVar10 = (long *)thunk_FUN_01de26bc(lVar8,lVar9);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(lVar8,lVar9);
            }
            lVar8 = *plVar10;
            uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar6 != 0) {
              piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar9) {
                  puVar11 = (undefined8 *)(lVar8 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                  goto LAB_033d0018;
                }
                uVar6 = uVar6 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)FUN_01dde8fc(plVar10,lVar9,7);
LAB_033d0018:
            uVar4 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            uVar16 = uVar16 + 1;
            *(undefined4 *)(lVar7 + lVar22 * 4 + 0x20) = uVar4;
            if (uVar16 == uVar2) {
              plVar10 = (long *)(**(code **)(*unaff_x19 + 0x2d8))();
              if (plVar10 == (long *)0x0) {
                if (unaff_w26 != 0) goto LAB_033d0900;
              }
              else {
                bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7df0c();
                }
                if (unaff_w26 != 0) {
                  uVar21 = thunk_FUN_01dff4ec(plVar10,lVar7,0);
                  return uVar21;
                }
              }
              if (in_stack_00000058 == 0) goto LAB_033d0900;
              if (*(uint *)(in_stack_00000058 + 0x18) <= uVar2) goto LAB_033d0904;
              if (plVar10 != (long *)0x0) {
                thunk_FUN_01dff68c(plVar10,*(undefined8 *)
                                            (in_stack_00000058 + (long)(int)uVar2 * 8 + 0x20),lVar7,
                                   0);
                return 0;
              }
              goto LAB_033d0900;
            }
            unaff_x28 = in_stack_00000058;
          } while (in_stack_00000058 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    if (unaff_w26 == 0) {
      puVar13 = StringLiteral_8972;
      if (in_stack_00000048._4_4_ == 1) {
        if (unaff_x28 != 0) {
          if (*(int *)(unaff_x28 + 0x18) != 0) {
            (**(code **)(*unaff_x19 + 0x2f8))();
            return 0;
          }
LAB_033d0904:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    else {
      puVar13 = StringLiteral_8973;
      if (in_stack_00000048._4_4_ == 0) {
        uVar21 = (**(code **)(*unaff_x19 + 0x2d8))();
        return uVar21;
      }
    }
  }
  uVar21 = thunk_FUN_01dd295c(puVar13);
  uVar21 = FUN_033d6e4c(uVar21,0);
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar14 = thunk_FUN_01de27b8();
  uVar15 = thunk_FUN_01dd295c(StringLiteral_8974);
  FUN_03287130(uVar14,uVar21,uVar15,0);
LAB_033d0c4c:
  uVar21 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar14,uVar21);
}


