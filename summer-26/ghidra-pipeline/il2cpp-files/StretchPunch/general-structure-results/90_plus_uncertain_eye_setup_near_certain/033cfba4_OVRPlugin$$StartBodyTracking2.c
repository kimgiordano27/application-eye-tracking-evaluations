/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 033cfba4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 124
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 OVRPlugin__StartBodyTracking2(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  int *piVar23;
  uint unaff_w19;
  long *plVar24;
  long unaff_x20;
  long *plVar25;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  long lVar26;
  long unaff_x28;
  int iStack000000000000004c;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_000000c0;
  undefined *puVar14;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_8954);
  FUN_01d7d918(StringLiteral_8955);
  FUN_01d7d918(StringLiteral_5420);
  FUN_01d7d918(StringLiteral_6207);
  FUN_01d7d918(StringLiteral_1554);
  FUN_01d7d918(StringLiteral_6208);
  FUN_01d7d918(StringLiteral_1171);
  FUN_01d7d918(StringLiteral_1183);
  FUN_01d7d918(StringLiteral_5177);
  FUN_01d7d918(StringLiteral_1157);
  FUN_01d7d918(StringLiteral_1291);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_8956);
  FUN_01d7d918(StringLiteral_8957);
  *(undefined1 *)(unaff_x20 + 0xa18) = 1;
  in_stack_00000050 = 0;
  uVar6 = (**(code **)(*unaff_x24 + 0x388))();
  lVar8 = in_stack_000000c0;
  if ((uVar6 & 1) != 0) {
    uVar13 = thunk_FUN_01dd295c(StringLiteral_8961);
    uVar13 = FUN_033d6e4c(uVar13,0);
    thunk_FUN_01dd295c(StringLiteral_1244);
    uVar15 = thunk_FUN_01de27b8();
    FUN_03393770(uVar15,uVar13,0);
    goto LAB_033d0c4c;
  }
  puVar14 = StringLiteral_8962;
  if ((unaff_w19 & 0xff00) == 0) goto LAB_033d0b0c;
  uVar17 = 0x1c;
  if ((unaff_w19 & 0x200) != 0) {
    uVar17 = 0x14;
  }
  if ((unaff_w19 & 0xff) != 0) {
    uVar17 = 0;
  }
  if (in_stack_000000c0 == 0) {
LAB_033cfcd0:
    if (unaff_x28 == 0) {
      iStack000000000000004c = 0;
    }
    else {
      iStack000000000000004c = *(int *)(unaff_x28 + 0x18);
    }
    if (unaff_x23 == (long *)0x0) {
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      unaff_x23 = (long *)FUN_033ad654(0);
    }
    if ((unaff_w19 >> 9 & 1) != 0) {
      puVar14 = StringLiteral_8965;
      if ((unaff_w19 & 0x3d00) == 0) {
        uVar13 = FUN_033bb810();
        return uVar13;
      }
      goto LAB_033d0b0c;
    }
    uVar18 = uVar17 | unaff_w19;
    if ((unaff_w19 & 0xc000) != 0) {
      uVar18 = uVar17 | unaff_w19 | 0x2000;
    }
    if (unaff_x22 == 0) {
      thunk_FUN_01dd295c(StringLiteral_1111);
      uVar13 = thunk_FUN_01de27b8();
      puVar14 = StringLiteral_2573;
LAB_033d0a8c:
      uVar15 = thunk_FUN_01dd295c(puVar14);
      FUN_032870b8(uVar13,uVar15,0);
      uVar15 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,uVar15);
    }
    if ((*(int *)(unaff_x22 + 0x10) == 0) || (uVar6 = FUN_03278c78(), (uVar6 & 1) != 0)) {
      lVar7 = FUN_033d0c98();
      unaff_x22 = *(long *)StringLiteral_8956;
      if (lVar7 != 0) {
        unaff_x22 = lVar7;
      }
    }
    if ((uVar18 >> 10 & 1) == 0 && (uVar18 & 0x800) == 0) {
LAB_033d0068:
      uVar17 = uVar18 & 0x2000;
      uVar19 = uVar18 >> 0xc & 1;
      if (uVar19 != 0 || uVar17 != 0) {
        puVar14 = StringLiteral_8971;
        uVar5 = uVar17;
        if ((uVar18 >> 0xc & 1) == 0) {
          puVar14 = StringLiteral_8960;
          uVar5 = uVar18 >> 8 & 1;
        }
        if (uVar5 != 0) goto LAB_033d0b0c;
      }
      if ((uVar18 >> 8 & 1) == 0) {
        plVar24 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      else {
        uVar13 = (**(code **)(*unaff_x24 + 0x6c8))();
        lVar7 = thunk_FUN_01de26bc(uVar13,*(undefined8 *)StringLiteral_6207);
        puVar2 = StringLiteral_1291;
        puVar14 = StringLiteral_1157;
        if (lVar7 == 0) goto LAB_033d0900;
        if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
          plVar24 = (long *)0x0;
        }
        else {
          lVar26 = 0;
          uVar6 = 0;
          uVar20 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          plVar10 = (long *)0x0;
          do {
            if (uVar20 <= uVar6) goto LAB_033d0904;
            plVar12 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
            uVar13 = FUN_01d7d9bc(*(undefined8 *)puVar2,iStack000000000000004c);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)puVar14);
            }
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)StringLiteral_5177)) goto LAB_033d0908;
            }
            uVar20 = FUN_033cab78(plVar12,uVar18,3,uVar13);
            plVar24 = plVar10;
            if (((uVar20 & 1) != 0) &&
               (uVar20 = FUN_03308b18(plVar10,0,0), plVar24 = plVar12, (uVar20 & 1) == 0)) {
              if (lVar26 == 0) {
                lVar26 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
                FUN_031987ac(lVar26,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)StringLiteral_8954)
                ;
                if (lVar26 == 0) goto LAB_033d0900;
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)StringLiteral_5417;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_033d0900;
                uVar5 = *(uint *)(lVar26 + 0x18);
                if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                  *plVar24 = (long)plVar10;
                  thunk_FUN_01e10808(plVar24,plVar10);
                }
                else {
                  FUN_03198f70(lVar26,plVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar9 = *(long *)(lVar26 + 0x10);
              lVar22 = *(long *)StringLiteral_5417;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_033d0900;
              uVar5 = *(uint *)(lVar26 + 0x18);
              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                *puVar11 = plVar12;
                thunk_FUN_01e10808(puVar11,plVar12);
                plVar24 = plVar10;
              }
              else {
                FUN_03198f70(lVar26,plVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                plVar24 = plVar10;
              }
            }
            uVar20 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar6 = uVar6 + 1;
            plVar10 = plVar24;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          if (lVar26 != 0) {
            plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_03199424(lVar26,plVar10,*(undefined8 *)StringLiteral_8953);
            goto LAB_033d0360;
          }
        }
        plVar10 = (long *)0x0;
      }
LAB_033d0360:
      uVar5 = FUN_03308b18(plVar24,0,0);
      if ((uVar5 & uVar19) != 0 || (uVar18 >> 0xd & 1) != 0) {
        uVar13 = (**(code **)(*unaff_x24 + 0x6c8))
                           (unaff_x24,unaff_x22,0x10,uVar18,*(undefined8 *)(*unaff_x24 + 0x6d0));
        lVar7 = thunk_FUN_01de26bc(uVar13,*(undefined8 *)StringLiteral_6208);
        puVar2 = StringLiteral_1291;
        puVar14 = StringLiteral_1157;
        if (lVar7 == 0) goto LAB_033d0900;
        uVar19 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar19) {
          uVar5 = 0;
          lVar26 = 0;
          plVar25 = plVar24;
          do {
            if (uVar19 <= uVar5) goto LAB_033d0904;
            plVar24 = *(long **)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
            if (plVar24 == (long *)0x0) goto LAB_033d0900;
            lVar9 = *plVar24;
            if (uVar17 == 0) {
              pcVar21 = *(code **)(lVar9 + 0x2a8);
              uVar13 = *(undefined8 *)(lVar9 + 0x2b0);
            }
            else {
              pcVar21 = *(code **)(lVar9 + 0x2d8);
              uVar13 = *(undefined8 *)(lVar9 + 0x2e0);
            }
            plVar12 = (long *)(*pcVar21)(plVar24,1,uVar13);
            uVar6 = FUN_03308b18(plVar12,0,0);
            plVar24 = plVar25;
            if ((uVar6 & 1) == 0) {
              uVar13 = FUN_01d7d9bc(*(undefined8 *)puVar2,iStack000000000000004c);
              if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                thunk_FUN_01dc4f30(*(long *)puVar14);
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
              uVar6 = FUN_033cab78(plVar12,uVar18,3,uVar13);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = FUN_03308b18(plVar25,0,0), plVar24 = plVar12, (uVar6 & 1) == 0)) {
                if (lVar26 == 0) {
                  lVar26 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
                  FUN_031987ac(lVar26,*(undefined4 *)(lVar7 + 0x18),
                               *(undefined8 *)StringLiteral_8954);
                  if (lVar26 == 0) goto LAB_033d0900;
                  lVar9 = *(long *)(lVar26 + 0x10);
                  lVar22 = *(long *)StringLiteral_5417;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar9 == 0) goto LAB_033d0900;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar24 = (long)plVar25;
                    thunk_FUN_01e10808(plVar24,plVar25);
                  }
                  else {
                    FUN_03198f70(lVar26,plVar25,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)StringLiteral_5417;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_033d0900;
                uVar19 = *(uint *)(lVar26 + 0x18);
                if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                  *plVar24 = (long)plVar12;
                  thunk_FUN_01e10808(plVar24,plVar12);
                  plVar24 = plVar25;
                }
                else {
                  FUN_03198f70(lVar26,plVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                  plVar24 = plVar25;
                }
              }
            }
            uVar19 = *(uint *)(lVar7 + 0x18);
            uVar5 = uVar5 + 1;
            plVar25 = plVar24;
          } while ((int)uVar5 < (int)uVar19);
          if (lVar26 != 0) {
            plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_03199424(lVar26,plVar10,*(undefined8 *)StringLiteral_8953);
          }
        }
      }
      uVar6 = FUN_03308adc(plVar24,0,0);
      if ((uVar6 & 1) != 0) {
        if ((iStack000000000000004c == 0) && (plVar10 == (long *)0x0)) {
          if ((plVar24 == (long *)0x0) ||
             (lVar7 = (**(code **)(*plVar24 + 0x3b8))(plVar24,*(undefined8 *)(*plVar24 + 0x3c0)),
             lVar7 == 0)) goto LAB_033d0900;
          if (((uVar18 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
            uVar13 = (**(code **)(*plVar24 + 0x348))
                               (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                                *(undefined8 *)(*plVar24 + 0x350));
            return uVar13;
          }
        }
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,1);
          if (plVar10 == (long *)0x0) goto LAB_033d0900;
          if ((plVar24 != (long *)0x0) &&
             (lVar7 = thunk_FUN_01de26bc(plVar24,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
            uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar13,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_033d0904:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar10[4] = (long)plVar24;
          thunk_FUN_01e10808(plVar10 + 4,plVar24);
        }
        if (in_stack_00000058 == 0) {
          lVar26 = *(long *)StringLiteral_886;
          lVar7 = *(long *)(lVar26 + 0x38);
          if (lVar7 == 0) {
            FUN_01dde854(lVar26);
            lVar7 = *(long *)(lVar26 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01dde7f8();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar7 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
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
        plVar24 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                    (unaff_x23,uVar18,plVar10,&stack0x00000058,unaff_x25,unaff_x27,
                                     lVar8,&stack0x00000050);
        uVar6 = FUN_03308638(plVar24,0,0);
        if ((uVar6 & 1) == 0) {
          if (plVar24 == (long *)0x0) {
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          lVar8 = *plVar24;
          bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_1554)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar24);
          }
          uVar13 = (**(code **)(lVar8 + 0x348))
                             (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                              *(undefined8 *)(lVar8 + 0x350));
          if (in_stack_00000050 != 0) {
            if (unaff_x23 == (long *)0x0) goto LAB_033d0900;
            (**(code **)(*unaff_x23 + 0x1a8))
                      (unaff_x23,&stack0x00000058,in_stack_00000050,
                       *(undefined8 *)(*unaff_x23 + 0x1b0));
          }
          return uVar13;
        }
      }
      uVar13 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar15 = thunk_FUN_01de27b8();
      FUN_03395900(uVar15,uVar13,unaff_x22,0);
      goto LAB_033d0c4c;
    }
    uVar17 = uVar18 & 0x400;
    if (uVar17 == 0) {
      if (unaff_x28 == 0) {
        thunk_FUN_01dd295c(StringLiteral_1111);
        uVar13 = thunk_FUN_01de27b8();
        puVar14 = StringLiteral_8966;
        goto LAB_033d0a8c;
      }
      puVar14 = StringLiteral_8969;
      if ((uVar18 >> 0xc & 1) == 0) {
        uVar19 = uVar18 >> 8;
        puVar14 = StringLiteral_8958;
        goto joined_r0x033cfde4;
      }
    }
    else {
      puVar14 = StringLiteral_8968;
      if ((uVar18 & 0x800) == 0) {
        uVar19 = uVar18 >> 0xd;
        puVar14 = StringLiteral_8970;
joined_r0x033cfde4:
        if ((uVar19 & 1) == 0) {
          uVar13 = (**(code **)(*unaff_x24 + 0x6c8))();
          lVar7 = thunk_FUN_01de26bc(uVar13,*(undefined8 *)StringLiteral_5446);
          puVar14 = StringLiteral_8804;
          if (lVar7 == 0) goto LAB_033d0900;
          if ((int)*(long *)(lVar7 + 0x18) == 1) {
            plVar24 = *(long **)(lVar7 + 0x20);
OVRPlugin__SuggestBodyTrackingCalibrationOverride:
            uVar6 = FUN_03306e90(plVar24,0,0);
            if ((uVar6 & 1) != 0) {
              if ((plVar24 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240))
                 , lVar8 == 0)) goto LAB_033d0900;
              uVar6 = FUN_033ac038(lVar8,0);
              if ((uVar6 & 1) == 0) {
                lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240));
                uVar13 = *(undefined8 *)StringLiteral_1171;
                if (*(int *)(*(long *)
                              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                            + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)
                                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                                    );
                }
                lVar7 = FUN_033a87c8(uVar13,0);
                if (lVar8 == lVar7) goto LAB_033cff40;
              }
              else {
LAB_033cff40:
                uVar19 = iStack000000000000004c - (uint)(uVar17 == 0);
                if (0 < (int)uVar19) {
                  lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar19);
                  puVar14 = StringLiteral_4730;
                  if (unaff_x28 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(uint *)(unaff_x28 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db78();
                      }
                      lVar26 = (long)(int)uVar18;
                      lVar7 = *(long *)(unaff_x28 + lVar26 * 8 + 0x20);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db70();
                      }
                      uVar13 = *(undefined8 *)puVar14;
                      lVar9 = thunk_FUN_01de26bc(lVar7,uVar13);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(lVar7,uVar13);
                      }
                      lVar9 = *(long *)puVar14;
                      plVar10 = (long *)thunk_FUN_01de26bc(lVar7,lVar9);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(lVar7,lVar9);
                      }
                      lVar7 = *plVar10;
                      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar6 != 0) {
                        piVar23 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == lVar9) {
                            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar23 + 7) * 0x10 + 0x138);
                            goto LAB_033d0018;
                          }
                          uVar6 = uVar6 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_01dde8fc(plVar10,lVar9,7);
LAB_033d0018:
                      uVar4 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db70();
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db78();
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(lVar8 + lVar26 * 4 + 0x20) = uVar4;
                      if (uVar18 == uVar19) {
                        plVar24 = (long *)(**(code **)(*plVar24 + 0x2d8))
                                                    (plVar24,unaff_x21,
                                                     *(undefined8 *)(*plVar24 + 0x2e0));
                        if (plVar24 == (long *)0x0) {
                          if (uVar17 != 0) goto LAB_033d0900;
                        }
                        else {
                          bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                          if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
                             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
                              *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01d7df0c();
                          }
                          if (uVar17 != 0) {
                            uVar13 = thunk_FUN_01dff4ec(plVar24,lVar8,0);
                            return uVar13;
                          }
                        }
                        if (in_stack_00000058 == 0) goto LAB_033d0900;
                        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar19) goto LAB_033d0904;
                        if (plVar24 != (long *)0x0) {
                          thunk_FUN_01dff68c(plVar24,*(undefined8 *)
                                                      (in_stack_00000058 + (long)(int)uVar19 * 8 +
                                                      0x20),lVar8,0);
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
              if (uVar17 == 0) {
                puVar14 = StringLiteral_8972;
                if (iStack000000000000004c == 1) {
                  if (unaff_x28 != 0) {
                    if (*(int *)(unaff_x28 + 0x18) != 0) {
                      (**(code **)(*plVar24 + 0x2f8))
                                (plVar24,unaff_x21,*(undefined8 *)(unaff_x28 + 0x20),uVar18,
                                 unaff_x23);
                      return 0;
                    }
                    goto LAB_033d0904;
                  }
                  goto LAB_033d0900;
                }
              }
              else {
                puVar14 = StringLiteral_8973;
                if (iStack000000000000004c == 0) {
                  uVar13 = (**(code **)(*plVar24 + 0x2d8))
                                     (plVar24,unaff_x21,*(undefined8 *)(*plVar24 + 0x2e0));
                  return uVar13;
                }
              }
              goto LAB_033d0b0c;
            }
          }
          else {
            if (*(long *)(lVar7 + 0x18) != 0) {
              if (uVar17 == 0) {
                if (unaff_x28 == 0) goto LAB_033d0900;
                if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_033d0904;
                puVar11 = (undefined8 *)(unaff_x28 + 0x20);
              }
              else {
                lVar26 = *(long *)StringLiteral_8804;
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar26 = *(long *)puVar14;
                }
                puVar11 = *(undefined8 **)(lVar26 + 0xb8);
              }
              if (unaff_x23 == (long *)0x0) goto LAB_033d0900;
              plVar24 = (long *)(**(code **)(*unaff_x23 + 0x178))(unaff_x23,uVar18,lVar7,*puVar11);
              goto OVRPlugin__SuggestBodyTrackingCalibrationOverride;
            }
            uVar6 = FUN_03306e90(0,0,0);
            if ((uVar6 & 1) != 0) goto LAB_033d0900;
          }
          if ((uVar18 & 0xfff300) == 0) {
            uVar13 = (**(code **)(*unaff_x24 + 0x2c8))();
            thunk_FUN_01dd295c(StringLiteral_8807);
            uVar15 = thunk_FUN_01de27b8();
            OVRManager_<>c___ctor(uVar15,uVar13,unaff_x22,0);
            goto LAB_033d0c4c;
          }
          goto LAB_033d0068;
        }
      }
    }
LAB_033d0b0c:
    uVar13 = thunk_FUN_01dd295c(puVar14);
    uVar13 = FUN_033d6e4c(uVar13,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar15 = thunk_FUN_01de27b8();
    puVar14 = StringLiteral_8974;
  }
  else {
    puVar14 = StringLiteral_8959;
    if (unaff_x28 == 0) {
      if (*(long *)(in_stack_000000c0 + 0x18) == 0) goto LAB_033cfcb0;
    }
    else if ((int)*(long *)(in_stack_000000c0 + 0x18) <= *(int *)(unaff_x28 + 0x18)) {
LAB_033cfcb0:
      iVar3 = FUN_02194140(in_stack_000000c0,0,*(undefined8 *)StringLiteral_8952);
      puVar14 = StringLiteral_8963;
      if (iVar3 == -1) goto LAB_033cfcd0;
    }
    uVar13 = thunk_FUN_01dd295c(puVar14);
    uVar13 = FUN_033d6e4c(uVar13,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar15 = thunk_FUN_01de27b8();
    puVar14 = StringLiteral_8964;
  }
  uVar16 = thunk_FUN_01dd295c(puVar14);
  FUN_03287130(uVar15,uVar13,uVar16,0);
LAB_033d0c4c:
  uVar13 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar15,uVar13);
}


