/*
FUNCTION_NAME: FUN_033cfafc
ENTRY_POINT: 033cfafc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_033cfafc(long *param_1,long param_2,uint param_3,long *param_4,undefined8 param_5,long param_6,
            undefined8 param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  int *piVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  int local_74;
  long local_70;
  long local_68;
  undefined *puVar15;
  
  local_68 = param_6;
  if ((DAT_044a6a18 & 1) == 0) {
    FUN_01d7d918(StringLiteral_886);
    FUN_01d7d918(StringLiteral_8952);
    FUN_01d7d918(StringLiteral_8804);
    FUN_01d7d918(StringLiteral_5446);
    FUN_01d7d918(StringLiteral_4730);
    FUN_01d7d918(StringLiteral_151);
    FUN_01d7d918(StringLiteral_5417);
    FUN_01d7d918(StringLiteral_8953);
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
    DAT_044a6a18 = 1;
  }
  local_70 = 0;
  uVar7 = (**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  if ((uVar7 & 1) != 0) {
    uVar14 = thunk_FUN_01dd295c(StringLiteral_8961);
    uVar14 = FUN_033d6e4c(uVar14,0);
    thunk_FUN_01dd295c(StringLiteral_1244);
    uVar16 = thunk_FUN_01de27b8();
    FUN_03393770(uVar16,uVar14,0);
    goto LAB_033d0c4c;
  }
  puVar15 = StringLiteral_8962;
  if ((param_3 & 0xff00) == 0) goto LAB_033d0b0c;
  uVar18 = 0x1c;
  if ((param_3 & 0x200) != 0) {
    uVar18 = 0x14;
  }
  if ((param_3 & 0xff) != 0) {
    uVar18 = 0;
  }
  if (param_9 == 0) {
LAB_033cfcd0:
    if (param_6 == 0) {
      local_74 = 0;
    }
    else {
      local_74 = *(int *)(param_6 + 0x18);
    }
    if (param_4 == (long *)0x0) {
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      param_4 = (long *)FUN_033ad654(0);
    }
    uVar18 = uVar18 | param_3;
    if ((param_3 >> 9 & 1) != 0) {
      puVar15 = StringLiteral_8965;
      if ((param_3 & 0x3d00) == 0) {
        uVar14 = FUN_033bb810(param_1,uVar18,param_4,param_6,param_8,0);
        return uVar14;
      }
      goto LAB_033d0b0c;
    }
    if ((param_3 & 0xc000) != 0) {
      uVar18 = uVar18 | 0x2000;
    }
    if (param_2 == 0) {
      thunk_FUN_01dd295c(StringLiteral_1111);
      uVar14 = thunk_FUN_01de27b8();
      puVar15 = StringLiteral_2573;
LAB_033d0a8c:
      uVar16 = thunk_FUN_01dd295c(puVar15);
      FUN_032870b8(uVar14,uVar16,0);
      uVar16 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar14,uVar16);
    }
    if ((*(int *)(param_2 + 0x10) == 0) ||
       (uVar7 = FUN_03278c78(param_2,*(undefined8 *)StringLiteral_8957,0), (uVar7 & 1) != 0)) {
      lVar8 = FUN_033d0c98(param_1);
      param_2 = *(long *)StringLiteral_8956;
      if (lVar8 != 0) {
        param_2 = lVar8;
      }
    }
    if ((uVar18 >> 10 & 1) == 0 && (uVar18 & 0x800) == 0) {
LAB_033d0068:
      uVar1 = uVar18 & 0x2000;
      uVar19 = uVar18 >> 0xc & 1;
      if (uVar19 != 0 || uVar1 != 0) {
        puVar15 = StringLiteral_8971;
        uVar6 = uVar1;
        if ((uVar18 >> 0xc & 1) == 0) {
          puVar15 = StringLiteral_8960;
          uVar6 = uVar18 >> 8 & 1;
        }
        if (uVar6 != 0) goto LAB_033d0b0c;
      }
      if ((uVar18 >> 8 & 1) == 0) {
        plVar23 = (long *)0x0;
        plVar11 = (long *)0x0;
      }
      else {
        uVar14 = (**(code **)(*param_1 + 0x6c8))
                           (param_1,param_2,8,uVar18,*(undefined8 *)(*param_1 + 0x6d0));
        lVar8 = thunk_FUN_01de26bc(uVar14,*(undefined8 *)StringLiteral_6207);
        puVar3 = StringLiteral_1291;
        puVar15 = StringLiteral_1157;
        if (lVar8 == 0) goto LAB_033d0900;
        if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
          plVar23 = (long *)0x0;
        }
        else {
          lVar9 = 0;
          uVar7 = 0;
          uVar20 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          plVar11 = (long *)0x0;
          do {
            if (uVar20 <= uVar7) goto LAB_033d0904;
            plVar13 = *(long **)(lVar8 + 0x20 + uVar7 * 8);
            uVar14 = FUN_01d7d9bc(*(undefined8 *)puVar3,local_74);
            if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)puVar15);
            }
            if (plVar13 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)StringLiteral_5177)) goto LAB_033d0908;
            }
            uVar20 = FUN_033cab78(plVar13,uVar18,3,uVar14);
            plVar23 = plVar11;
            if (((uVar20 & 1) != 0) &&
               (uVar20 = FUN_03308b18(plVar11,0,0), plVar23 = plVar13, (uVar20 & 1) == 0)) {
              if (lVar9 == 0) {
                lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
                FUN_031987ac(lVar9,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)StringLiteral_8954);
                if (lVar9 == 0) goto LAB_033d0900;
                lVar25 = *(long *)(lVar9 + 0x10);
                lVar10 = *(long *)StringLiteral_5417;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar25 == 0) goto LAB_033d0900;
                uVar6 = *(uint *)(lVar9 + 0x18);
                if (uVar6 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar6 + 1;
                  plVar23 = (long *)(lVar25 + (long)(int)uVar6 * 8 + 0x20);
                  *plVar23 = (long)plVar11;
                  thunk_FUN_01e10808(plVar23,plVar11);
                }
                else {
                  FUN_03198f70(lVar9,plVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar25 = *(long *)(lVar9 + 0x10);
              lVar10 = *(long *)StringLiteral_5417;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar25 == 0) goto LAB_033d0900;
              uVar6 = *(uint *)(lVar9 + 0x18);
              if (uVar6 < *(uint *)(lVar25 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar6 + 1;
                puVar12 = (undefined8 *)(lVar25 + (long)(int)uVar6 * 8 + 0x20);
                *puVar12 = plVar13;
                thunk_FUN_01e10808(puVar12,plVar13);
                plVar23 = plVar11;
              }
              else {
                FUN_03198f70(lVar9,plVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                plVar23 = plVar11;
              }
            }
            uVar20 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar7 = uVar7 + 1;
            plVar11 = plVar23;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
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
      uVar6 = FUN_03308b18(plVar23,0,0);
      if ((uVar6 & uVar19) != 0 || (uVar18 >> 0xd & 1) != 0) {
        uVar14 = (**(code **)(*param_1 + 0x6c8))
                           (param_1,param_2,0x10,uVar18,*(undefined8 *)(*param_1 + 0x6d0));
        lVar8 = thunk_FUN_01de26bc(uVar14,*(undefined8 *)StringLiteral_6208);
        puVar3 = StringLiteral_1291;
        puVar15 = StringLiteral_1157;
        if (lVar8 == 0) goto LAB_033d0900;
        uVar19 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar19) {
          uVar6 = 0;
          lVar9 = 0;
          plVar24 = plVar23;
          do {
            if (uVar19 <= uVar6) goto LAB_033d0904;
            plVar23 = *(long **)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
            if (plVar23 == (long *)0x0) goto LAB_033d0900;
            lVar25 = *plVar23;
            if (uVar1 == 0) {
              pcVar21 = *(code **)(lVar25 + 0x2a8);
              uVar14 = *(undefined8 *)(lVar25 + 0x2b0);
            }
            else {
              pcVar21 = *(code **)(lVar25 + 0x2d8);
              uVar14 = *(undefined8 *)(lVar25 + 0x2e0);
            }
            plVar13 = (long *)(*pcVar21)(plVar23,1,uVar14);
            uVar7 = FUN_03308b18(plVar13,0,0);
            plVar23 = plVar24;
            if ((uVar7 & 1) == 0) {
              uVar14 = FUN_01d7d9bc(*(undefined8 *)puVar3,local_74);
              if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                thunk_FUN_01dc4f30(*(long *)puVar15);
              }
              if (plVar13 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
                if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)StringLiteral_5177)) {
LAB_033d0908:
                    /* WARNING: Subroutine does not return */
                  FUN_01d7df0c(plVar13);
                }
              }
              uVar7 = FUN_033cab78(plVar13,uVar18,3,uVar14);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = FUN_03308b18(plVar24,0,0), plVar23 = plVar13, (uVar7 & 1) == 0)) {
                if (lVar9 == 0) {
                  lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5420);
                  FUN_031987ac(lVar9,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)StringLiteral_8954
                              );
                  if (lVar9 == 0) goto LAB_033d0900;
                  lVar25 = *(long *)(lVar9 + 0x10);
                  lVar10 = *(long *)StringLiteral_5417;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar25 == 0) goto LAB_033d0900;
                  uVar19 = *(uint *)(lVar9 + 0x18);
                  if (uVar19 < *(uint *)(lVar25 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar19 + 1;
                    plVar23 = (long *)(lVar25 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar23 = (long)plVar24;
                    thunk_FUN_01e10808(plVar23,plVar24);
                  }
                  else {
                    FUN_03198f70(lVar9,plVar24,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar25 = *(long *)(lVar9 + 0x10);
                lVar10 = *(long *)StringLiteral_5417;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar25 == 0) goto LAB_033d0900;
                uVar19 = *(uint *)(lVar9 + 0x18);
                if (uVar19 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar19 + 1;
                  plVar23 = (long *)(lVar25 + (long)(int)uVar19 * 8 + 0x20);
                  *plVar23 = (long)plVar13;
                  thunk_FUN_01e10808(plVar23,plVar13);
                  plVar23 = plVar24;
                }
                else {
                  FUN_03198f70(lVar9,plVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  plVar23 = plVar24;
                }
              }
            }
            uVar19 = *(uint *)(lVar8 + 0x18);
            uVar6 = uVar6 + 1;
            plVar24 = plVar23;
          } while ((int)uVar6 < (int)uVar19);
          if (lVar9 != 0) {
            plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,
                                           *(undefined4 *)(lVar9 + 0x18));
            FUN_03199424(lVar9,plVar11,*(undefined8 *)StringLiteral_8953);
          }
        }
      }
      uVar7 = FUN_03308adc(plVar23,0,0);
      if ((uVar7 & 1) != 0) {
        if ((local_74 == 0) && (plVar11 == (long *)0x0)) {
          if ((plVar23 == (long *)0x0) ||
             (lVar8 = (**(code **)(*plVar23 + 0x3b8))(plVar23,*(undefined8 *)(*plVar23 + 0x3c0)),
             lVar8 == 0)) goto LAB_033d0900;
          if (((uVar18 >> 0x12 & 1) == 0) && (*(long *)(lVar8 + 0x18) == 0)) {
            uVar14 = (**(code **)(*plVar23 + 0x348))
                               (plVar23,param_5,uVar18,param_4,local_68,param_8,
                                *(undefined8 *)(*plVar23 + 0x350));
            return uVar14;
          }
        }
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_6207,1);
          if (plVar11 == (long *)0x0) goto LAB_033d0900;
          if ((plVar23 != (long *)0x0) &&
             (lVar8 = thunk_FUN_01de26bc(plVar23,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
            uVar14 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar14,0);
          }
          if ((int)plVar11[3] == 0) {
LAB_033d0904:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar11[4] = (long)plVar23;
          thunk_FUN_01e10808(plVar11 + 4,plVar23);
        }
        if (local_68 == 0) {
          lVar9 = *(long *)StringLiteral_886;
          lVar8 = *(long *)(lVar9 + 0x38);
          if (lVar8 == 0) {
            FUN_01dde854(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01dde7f8();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01dde7f8();
          }
          local_68 = **(long **)(lVar8 + 0xb8);
        }
        local_70 = 0;
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        plVar23 = (long *)(**(code **)(*param_4 + 0x188))
                                    (param_4,uVar18,plVar11,&local_68,param_7,param_8,param_9,
                                     &local_70,*(undefined8 *)(*param_4 + 400));
        uVar7 = FUN_03308638(plVar23,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar23 == (long *)0x0) {
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          lVar8 = *plVar23;
          bVar2 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)StringLiteral_1554)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar23);
          }
          uVar14 = (**(code **)(lVar8 + 0x348))
                             (plVar23,param_5,uVar18,param_4,local_68,param_8,
                              *(undefined8 *)(lVar8 + 0x350));
          if (local_70 != 0) {
            if (param_4 == (long *)0x0) goto LAB_033d0900;
            (**(code **)(*param_4 + 0x1a8))
                      (param_4,&local_68,local_70,*(undefined8 *)(*param_4 + 0x1b0));
          }
          return uVar14;
        }
      }
      uVar14 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar16 = thunk_FUN_01de27b8();
      FUN_03395900(uVar16,uVar14,param_2,0);
      goto LAB_033d0c4c;
    }
    uVar1 = uVar18 & 0x400;
    if (uVar1 == 0) {
      if (param_6 == 0) {
        thunk_FUN_01dd295c(StringLiteral_1111);
        uVar14 = thunk_FUN_01de27b8();
        puVar15 = StringLiteral_8966;
        goto LAB_033d0a8c;
      }
      puVar15 = StringLiteral_8969;
      if ((uVar18 >> 0xc & 1) == 0) {
        uVar19 = uVar18 >> 8;
        puVar15 = StringLiteral_8958;
        goto joined_r0x033cfde4;
      }
    }
    else {
      puVar15 = StringLiteral_8968;
      if ((uVar18 & 0x800) == 0) {
        uVar19 = uVar18 >> 0xd;
        puVar15 = StringLiteral_8970;
joined_r0x033cfde4:
        if ((uVar19 & 1) == 0) {
          uVar14 = (**(code **)(*param_1 + 0x6c8))
                             (param_1,param_2,4,uVar18,*(undefined8 *)(*param_1 + 0x6d0));
          lVar8 = thunk_FUN_01de26bc(uVar14,*(undefined8 *)StringLiteral_5446);
          puVar15 = StringLiteral_8804;
          if (lVar8 == 0) goto LAB_033d0900;
          if ((int)*(long *)(lVar8 + 0x18) == 1) {
            plVar23 = *(long **)(lVar8 + 0x20);
OVRPlugin__SuggestBodyTrackingCalibrationOverride:
            uVar7 = FUN_03306e90(plVar23,0,0);
            if ((uVar7 & 1) != 0) {
              if ((plVar23 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar23 + 0x238))(plVar23,*(undefined8 *)(*plVar23 + 0x240))
                 , lVar8 == 0)) goto LAB_033d0900;
              uVar7 = FUN_033ac038(lVar8,0);
              if ((uVar7 & 1) == 0) {
                lVar8 = (**(code **)(*plVar23 + 0x238))(plVar23,*(undefined8 *)(*plVar23 + 0x240));
                uVar14 = *(undefined8 *)StringLiteral_1171;
                if (*(int *)(*(long *)
                              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                            + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)
                                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                                    );
                }
                lVar9 = FUN_033a87c8(uVar14,0);
                if (lVar8 == lVar9) goto LAB_033cff40;
              }
              else {
LAB_033cff40:
                uVar19 = local_74 - (uint)(uVar1 == 0);
                if (0 < (int)uVar19) {
                  lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar19);
                  puVar15 = StringLiteral_4730;
                  if (param_6 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(uint *)(param_6 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db78();
                      }
                      lVar25 = (long)(int)uVar18;
                      lVar9 = *(long *)(param_6 + lVar25 * 8 + 0x20);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db70();
                      }
                      uVar14 = *(undefined8 *)puVar15;
                      lVar10 = thunk_FUN_01de26bc(lVar9,uVar14);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(lVar9,uVar14);
                      }
                      lVar10 = *(long *)puVar15;
                      plVar11 = (long *)thunk_FUN_01de26bc(lVar9,lVar10);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(lVar9,lVar10);
                      }
                      lVar9 = *plVar11;
                      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar7 != 0) {
                        piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar22 + -2) == lVar10) {
                            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                            goto LAB_033d0018;
                          }
                          uVar7 = uVar7 - 1;
                          piVar22 = piVar22 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_01dde8fc(plVar11,lVar10,7);
LAB_033d0018:
                      uVar5 = (*(code *)*puVar12)(plVar11,0,puVar12[1]);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db70();
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7db78();
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(lVar8 + lVar25 * 4 + 0x20) = uVar5;
                      if (uVar18 == uVar19) {
                        plVar23 = (long *)(**(code **)(*plVar23 + 0x2d8))
                                                    (plVar23,param_5,
                                                     *(undefined8 *)(*plVar23 + 0x2e0));
                        if (plVar23 == (long *)0x0) {
                          if (uVar1 != 0) goto LAB_033d0900;
                        }
                        else {
                          bVar2 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                          if ((*(byte *)(*plVar23 + 0x130) < bVar2) ||
                             (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01d7df0c();
                          }
                          if (uVar1 != 0) {
                            uVar14 = thunk_FUN_01dff4ec(plVar23,lVar8,0);
                            return uVar14;
                          }
                        }
                        if (local_68 == 0) goto LAB_033d0900;
                        if (*(uint *)(local_68 + 0x18) <= uVar19) goto LAB_033d0904;
                        if (plVar23 != (long *)0x0) {
                          thunk_FUN_01dff68c(plVar23,*(undefined8 *)
                                                      (local_68 + (long)(int)uVar19 * 8 + 0x20),
                                             lVar8,0);
                          return 0;
                        }
                        goto LAB_033d0900;
                      }
                      param_6 = local_68;
                    } while (local_68 != 0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
              }
              if (uVar1 == 0) {
                puVar15 = StringLiteral_8972;
                if (local_74 == 1) {
                  if (param_6 != 0) {
                    if (*(int *)(param_6 + 0x18) != 0) {
                      (**(code **)(*plVar23 + 0x2f8))
                                (plVar23,param_5,*(undefined8 *)(param_6 + 0x20),uVar18,param_4,
                                 param_8,*(undefined8 *)(*plVar23 + 0x300));
                      return 0;
                    }
                    goto LAB_033d0904;
                  }
                  goto LAB_033d0900;
                }
              }
              else {
                puVar15 = StringLiteral_8973;
                if (local_74 == 0) {
                  uVar14 = (**(code **)(*plVar23 + 0x2d8))
                                     (plVar23,param_5,*(undefined8 *)(*plVar23 + 0x2e0));
                  return uVar14;
                }
              }
              goto LAB_033d0b0c;
            }
          }
          else {
            if (*(long *)(lVar8 + 0x18) != 0) {
              if (uVar1 == 0) {
                if (param_6 == 0) goto LAB_033d0900;
                if (*(int *)(param_6 + 0x18) == 0) goto LAB_033d0904;
                puVar12 = (undefined8 *)(param_6 + 0x20);
              }
              else {
                lVar9 = *(long *)StringLiteral_8804;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                  lVar9 = *(long *)puVar15;
                }
                puVar12 = *(undefined8 **)(lVar9 + 0xb8);
              }
              if (param_4 == (long *)0x0) goto LAB_033d0900;
              plVar23 = (long *)(**(code **)(*param_4 + 0x178))
                                          (param_4,uVar18,lVar8,*puVar12,param_8,
                                           *(undefined8 *)(*param_4 + 0x180));
              goto OVRPlugin__SuggestBodyTrackingCalibrationOverride;
            }
            uVar7 = FUN_03306e90(0,0,0);
            if ((uVar7 & 1) != 0) goto LAB_033d0900;
          }
          if ((uVar18 & 0xfff300) == 0) {
            uVar14 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
            thunk_FUN_01dd295c(StringLiteral_8807);
            uVar16 = thunk_FUN_01de27b8();
            OVRManager_<>c___ctor(uVar16,uVar14,param_2,0);
            goto LAB_033d0c4c;
          }
          goto LAB_033d0068;
        }
      }
    }
LAB_033d0b0c:
    uVar14 = thunk_FUN_01dd295c(puVar15);
    uVar14 = FUN_033d6e4c(uVar14,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar16 = thunk_FUN_01de27b8();
    puVar15 = StringLiteral_8974;
  }
  else {
    puVar15 = StringLiteral_8959;
    if (param_6 == 0) {
      if (*(long *)(param_9 + 0x18) == 0) goto LAB_033cfcb0;
    }
    else if ((int)*(long *)(param_9 + 0x18) <= *(int *)(param_6 + 0x18)) {
LAB_033cfcb0:
      iVar4 = FUN_02194140(param_9,0,*(undefined8 *)StringLiteral_8952);
      puVar15 = StringLiteral_8963;
      if (iVar4 == -1) goto LAB_033cfcd0;
    }
    uVar14 = thunk_FUN_01dd295c(puVar15);
    uVar14 = FUN_033d6e4c(uVar14,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar16 = thunk_FUN_01de27b8();
    puVar15 = StringLiteral_8964;
  }
  uVar17 = thunk_FUN_01dd295c(puVar15);
  FUN_03287130(uVar16,uVar14,uVar17,0);
LAB_033d0c4c:
  uVar14 = thunk_FUN_01dd295c(StringLiteral_8967);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar16,uVar14);
}


