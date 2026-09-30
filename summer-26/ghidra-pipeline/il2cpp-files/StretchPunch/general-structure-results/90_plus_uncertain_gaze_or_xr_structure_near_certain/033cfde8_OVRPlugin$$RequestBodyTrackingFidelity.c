/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 033cfde8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__RequestBodyTrackingFidelity(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  code *pcVar19;
  int *piVar20;
  long *plVar21;
  long *plVar22;
  undefined8 unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  undefined8 unaff_x27;
  long lVar23;
  long unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  uVar6 = (**(code **)(*unaff_x24 + 0x6c8))();
  lVar7 = thunk_FUN_01de26bc(uVar6,*(undefined8 *)StringLiteral_5446);
  if (lVar7 == 0) goto LAB_033d0900;
  if ((int)*(long *)(lVar7 + 0x18) == 1) {
    plVar21 = *(long **)(lVar7 + 0x20);
OVRPlugin__SuggestBodyTrackingCalibrationOverride:
    uVar8 = FUN_03306e90(plVar21,0,0);
    if ((uVar8 & 1) == 0) goto LAB_033d0058;
    if ((plVar21 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240)),
       lVar7 == 0)) goto LAB_033d0900;
    uVar8 = FUN_033ac038(lVar7,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240));
      uVar6 = *(undefined8 *)StringLiteral_1171;
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      lVar9 = FUN_033a87c8(uVar6,0);
      if (lVar7 == lVar9) goto LAB_033cff40;
    }
    else {
LAB_033cff40:
      uVar2 = in_stack_00000048._4_4_ - (uint)(unaff_w26 == 0);
      if (0 < (int)uVar2) {
        lVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar2);
        puVar14 = StringLiteral_4730;
        if (unaff_x28 != 0) {
          uVar17 = 0;
          do {
            if (*(uint *)(unaff_x28 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            lVar23 = (long)(int)uVar17;
            lVar9 = *(long *)(unaff_x28 + lVar23 * 8 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            uVar6 = *(undefined8 *)puVar14;
            lVar10 = thunk_FUN_01de26bc(lVar9,uVar6);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(lVar9,uVar6);
            }
            lVar10 = *(long *)puVar14;
            plVar11 = (long *)thunk_FUN_01de26bc(lVar9,lVar10);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(lVar9,lVar10);
            }
            lVar9 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar10) {
                  puVar12 = (undefined8 *)(lVar9 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                  goto LAB_033d0018;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_01dde8fc(plVar11,lVar10,7);
LAB_033d0018:
            uVar4 = (*(code *)*puVar12)(plVar11,0,puVar12[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            uVar17 = uVar17 + 1;
            *(undefined4 *)(lVar7 + lVar23 * 4 + 0x20) = uVar4;
            if (uVar17 == uVar2) {
              plVar21 = (long *)(**(code **)(*plVar21 + 0x2d8))
                                          (plVar21,in_stack_00000040,
                                           *(undefined8 *)(*plVar21 + 0x2e0));
              if (plVar21 == (long *)0x0) {
                if (unaff_w26 != 0) goto LAB_033d0900;
              }
              else {
                bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7df0c();
                }
                if (unaff_w26 != 0) {
                  uVar6 = thunk_FUN_01dff4ec(plVar21,lVar7,0);
                  return uVar6;
                }
              }
              if (in_stack_00000058 == 0) goto LAB_033d0900;
              if (*(uint *)(in_stack_00000058 + 0x18) <= uVar2) goto LAB_033d0904;
              if (plVar21 != (long *)0x0) {
                thunk_FUN_01dff68c(plVar21,*(undefined8 *)
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
      puVar14 = StringLiteral_8972;
      if (in_stack_00000048._4_4_ == 1) {
        if (unaff_x28 != 0) {
          if (*(int *)(unaff_x28 + 0x18) != 0) {
            (**(code **)(*plVar21 + 0x2f8))
                      (plVar21,in_stack_00000040,*(undefined8 *)(unaff_x28 + 0x20),unaff_w25);
            return 0;
          }
          goto LAB_033d0904;
        }
        goto LAB_033d0900;
      }
    }
    else {
      puVar14 = StringLiteral_8973;
      if (in_stack_00000048._4_4_ == 0) {
        uVar6 = (**(code **)(*plVar21 + 0x2d8))
                          (plVar21,in_stack_00000040,*(undefined8 *)(*plVar21 + 0x2e0));
        return uVar6;
      }
    }
LAB_033d0b0c:
    uVar6 = thunk_FUN_01dd295c(puVar14);
    uVar6 = FUN_033d6e4c(uVar6,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar15 = thunk_FUN_01de27b8();
    uVar16 = thunk_FUN_01dd295c(StringLiteral_8974);
    FUN_03287130(uVar15,uVar6,uVar16,0);
    goto LAB_033d0c4c;
  }
  if (*(long *)(lVar7 + 0x18) != 0) {
    if (unaff_w26 == 0) {
      if (unaff_x28 == 0) goto LAB_033d0900;
      if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_033d0904;
    }
    else if (*(int *)(*(long *)StringLiteral_8804 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (unaff_x23 == (long *)0x0) goto LAB_033d0900;
    plVar21 = (long *)(**(code **)(*unaff_x23 + 0x178))();
    goto OVRPlugin__SuggestBodyTrackingCalibrationOverride;
  }
  uVar8 = FUN_03306e90(0,0,0);
  if ((uVar8 & 1) != 0) goto LAB_033d0900;
LAB_033d0058:
  if ((unaff_w25 & 0xfff300) == 0) {
    uVar6 = (**(code **)(*unaff_x24 + 0x2c8))();
    thunk_FUN_01dd295c(StringLiteral_8807);
    uVar15 = thunk_FUN_01de27b8();
    OVRManager_<>c___ctor(uVar15,uVar6);
    goto LAB_033d0c4c;
  }
  uVar2 = unaff_w25 & 0x2000;
  uVar17 = unaff_w25 >> 0xc & 1;
  if (uVar17 != 0 || uVar2 != 0) {
    puVar14 = StringLiteral_8971;
    uVar5 = uVar2;
    if ((unaff_w25 >> 0xc & 1) == 0) {
      puVar14 = StringLiteral_8960;
      uVar5 = unaff_w25 >> 8 & 1;
    }
    if (uVar5 != 0) goto LAB_033d0b0c;
  }
  if ((unaff_w25 >> 8 & 1) == 0) {
    plVar21 = (long *)0x0;
    plVar11 = (long *)0x0;
  }
  else {
    uVar6 = (**(code **)(*unaff_x24 + 0x6c8))();
    lVar7 = thunk_FUN_01de26bc(uVar6,*(undefined8 *)StringLiteral_6207);
    puVar3 = StringLiteral_1291;
    puVar14 = StringLiteral_1157;
    if (lVar7 == 0) goto LAB_033d0900;
    if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
      plVar21 = (long *)0x0;
    }
    else {
      lVar9 = 0;
      uVar8 = 0;
      uVar18 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar11 = (long *)0x0;
      do {
        if (uVar18 <= uVar8) goto LAB_033d0904;
        plVar13 = *(long **)(lVar7 + 0x20 + uVar8 * 8);
        uVar6 = FUN_01d7d9bc(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar14);
        }
        if (plVar13 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_5177)) goto LAB_033d0908;
        }
        uVar18 = FUN_033cab78(plVar13,unaff_w25,3,uVar6);
        plVar21 = plVar11;
        if (((uVar18 & 1) != 0) &&
           (uVar18 = FUN_03308b18(plVar11,0,0), plVar21 = plVar13, (uVar18 & 1) == 0)) {
          if (lVar9 == 0) {
            lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
            FUN_031987ac(lVar9,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)StringLiteral_8954);
            if (lVar9 == 0) goto LAB_033d0900;
            lVar23 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)StringLiteral_5417;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_033d0900;
            uVar5 = *(uint *)(lVar9 + 0x18);
            if (uVar5 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar5 + 1;
              plVar21 = (long *)(lVar23 + (long)(int)uVar5 * 8 + 0x20);
              *plVar21 = (long)plVar11;
              thunk_FUN_01e10808(plVar21,plVar11);
            }
            else {
              FUN_03198f70(lVar9,plVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar23 = *(long *)(lVar9 + 0x10);
          lVar10 = *(long *)StringLiteral_5417;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar23 == 0) goto LAB_033d0900;
          uVar5 = *(uint *)(lVar9 + 0x18);
          if (uVar5 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar5 + 1;
            puVar12 = (undefined8 *)(lVar23 + (long)(int)uVar5 * 8 + 0x20);
            *puVar12 = plVar13;
            thunk_FUN_01e10808(puVar12,plVar13);
            plVar21 = plVar11;
          }
          else {
            FUN_03198f70(lVar9,plVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            plVar21 = plVar11;
          }
        }
        uVar18 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
        plVar11 = plVar21;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
      if (lVar9 != 0) {
        plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                       *(undefined4 *)(lVar9 + 0x18));
        FUN_03199424(lVar9,plVar11,*(undefined8 *)StringLiteral_8953);
        goto LAB_033d0360;
      }
    }
    plVar11 = (long *)0x0;
  }
LAB_033d0360:
  uVar5 = FUN_03308b18(plVar21,0,0);
  if ((uVar5 & uVar17) != 0 || (unaff_w25 >> 0xd & 1) != 0) {
    uVar6 = (**(code **)(*unaff_x24 + 0x6c8))
                      (unaff_x24,unaff_x22,0x10,unaff_w25,*(undefined8 *)(*unaff_x24 + 0x6d0));
    lVar7 = thunk_FUN_01de26bc(uVar6,*(undefined8 *)StringLiteral_6208);
    puVar3 = StringLiteral_1291;
    puVar14 = StringLiteral_1157;
    if (lVar7 == 0) goto LAB_033d0900;
    uVar17 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar17) {
      uVar5 = 0;
      lVar9 = 0;
      plVar22 = plVar21;
      do {
        if (uVar17 <= uVar5) goto LAB_033d0904;
        plVar21 = *(long **)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar21 == (long *)0x0) goto LAB_033d0900;
        lVar23 = *plVar21;
        if (uVar2 == 0) {
          pcVar19 = *(code **)(lVar23 + 0x2a8);
          uVar6 = *(undefined8 *)(lVar23 + 0x2b0);
        }
        else {
          pcVar19 = *(code **)(lVar23 + 0x2d8);
          uVar6 = *(undefined8 *)(lVar23 + 0x2e0);
        }
        plVar13 = (long *)(*pcVar19)(plVar21,1,uVar6);
        uVar8 = FUN_03308b18(plVar13,0,0);
        plVar21 = plVar22;
        if ((uVar8 & 1) == 0) {
          uVar6 = FUN_01d7d9bc(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar14);
          }
          if (plVar13 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_5177)) {
LAB_033d0908:
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(plVar13);
            }
          }
          uVar8 = FUN_033cab78(plVar13,unaff_w25,3,uVar6);
          if (((uVar8 & 1) != 0) &&
             (uVar8 = FUN_03308b18(plVar22,0,0), plVar21 = plVar13, (uVar8 & 1) == 0)) {
            if (lVar9 == 0) {
              lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
              FUN_031987ac(lVar9,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)StringLiteral_8954);
              if (lVar9 == 0) goto LAB_033d0900;
              lVar23 = *(long *)(lVar9 + 0x10);
              lVar10 = *(long *)StringLiteral_5417;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_033d0900;
              uVar17 = *(uint *)(lVar9 + 0x18);
              if (uVar17 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar17 + 1;
                plVar21 = (long *)(lVar23 + (long)(int)uVar17 * 8 + 0x20);
                *plVar21 = (long)plVar22;
                thunk_FUN_01e10808(plVar21,plVar22);
              }
              else {
                FUN_03198f70(lVar9,plVar22,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar23 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)StringLiteral_5417;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_033d0900;
            uVar17 = *(uint *)(lVar9 + 0x18);
            if (uVar17 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar17 + 1;
              plVar21 = (long *)(lVar23 + (long)(int)uVar17 * 8 + 0x20);
              *plVar21 = (long)plVar13;
              thunk_FUN_01e10808(plVar21,plVar13);
              plVar21 = plVar22;
            }
            else {
              FUN_03198f70(lVar9,plVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              plVar21 = plVar22;
            }
          }
        }
        uVar17 = *(uint *)(lVar7 + 0x18);
        uVar5 = uVar5 + 1;
        plVar22 = plVar21;
      } while ((int)uVar5 < (int)uVar17);
      if (lVar9 != 0) {
        plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                       *(undefined4 *)(lVar9 + 0x18));
        FUN_03199424(lVar9,plVar11,*(undefined8 *)StringLiteral_8953);
      }
    }
  }
  uVar8 = FUN_03308adc(plVar21,0,0);
  if ((uVar8 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar11 == (long *)0x0)) {
      if ((plVar21 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar21 + 0x3b8))(plVar21,*(undefined8 *)(*plVar21 + 0x3c0)),
         lVar7 == 0)) goto LAB_033d0900;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
        uVar6 = (**(code **)(*plVar21 + 0x348))
                          (plVar21,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,unaff_x27
                           ,*(undefined8 *)(*plVar21 + 0x350));
        return uVar6;
      }
    }
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,1);
      if (plVar11 == (long *)0x0) goto LAB_033d0900;
      if ((plVar21 != (long *)0x0) &&
         (lVar7 = thunk_FUN_01de26bc(plVar21,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
        uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,0);
      }
      if ((int)plVar11[3] == 0) {
LAB_033d0904:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar11[4] = (long)plVar21;
      thunk_FUN_01e10808(plVar11 + 4,plVar21);
    }
    if (in_stack_00000058 == 0) {
      lVar9 = *(long *)StringLiteral_886;
      lVar7 = *(long *)(lVar9 + 0x38);
      if (lVar7 == 0) {
        FUN_01dde854(lVar9);
        lVar7 = *(long *)(lVar9 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
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
    plVar21 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                (unaff_x23,unaff_w25,plVar11,&stack0x00000058,in_stack_00000020,
                                 unaff_x27,in_stack_00000038,&stack0x00000050);
    uVar8 = FUN_03308638(plVar21,0,0);
    if ((uVar8 & 1) == 0) {
      if (plVar21 != (long *)0x0) {
        lVar7 = *plVar21;
        bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1554
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar21);
        }
        uVar6 = (**(code **)(lVar7 + 0x348))
                          (plVar21,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,unaff_x27
                           ,*(undefined8 *)(lVar7 + 0x350));
        if (in_stack_00000050 != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_033d0900;
          (**(code **)(*unaff_x23 + 0x1a8))
                    (unaff_x23,&stack0x00000058,in_stack_00000050,
                     *(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        return uVar6;
      }
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  uVar6 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
  thunk_FUN_01dd295c(StringLiteral_1159);
  uVar15 = thunk_FUN_01de27b8();
  FUN_03395900(uVar15,uVar6,unaff_x22,0);
LAB_033d0c4c:
  uVar6 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar15,uVar6);
}


