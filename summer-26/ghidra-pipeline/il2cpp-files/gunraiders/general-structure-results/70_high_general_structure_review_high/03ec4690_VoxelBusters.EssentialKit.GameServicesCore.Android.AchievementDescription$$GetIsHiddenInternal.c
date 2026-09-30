/*
FUNCTION_NAME: VoxelBusters.EssentialKit.GameServicesCore.Android.AchievementDescription$$GetIsHiddenInternal
ENTRY_POINT: 03ec4690
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03ec5248) */
/* WARNING: Removing unreachable block (ram,0x03ec4cb4) */
/* WARNING: Removing unreachable block (ram,0x03ec4a54) */
/* WARNING: Removing unreachable block (ram,0x03ec5134) */
/* WARNING: Removing unreachable block (ram,0x03ec5138) */
/* WARNING: Removing unreachable block (ram,0x03ec5250) */

void VoxelBusters_EssentialKit_GameServicesCore_Android_AchievementDescription__GetIsHiddenInternal
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x21;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  FUN_01c5d288(*(undefined8 *)(param_3 + 0x838));
  FUN_01c5d288(StringLiteral_9306);
  FUN_01c5d288(StringLiteral_12089);
  FUN_01c5d288(StringLiteral_12093);
  FUN_01c5d288(UnityEngine_ResourceManagement_Exceptions_OperationException_TypeInfo);
  FUN_01c5d288(StringLiteral_9449);
  FUN_01c5d288(StringLiteral_12094);
  FUN_01c5d288(StringLiteral_12090);
  FUN_01c5d288(Unity_XR_Oculus_InputFocus_TypeInfo);
  FUN_01c5d288(StringLiteral_12095);
  FUN_01c5d288(OVR_OpenVR_InputOriginInfo_t_TypeInfo);
  FUN_01c5d288(StringLiteral_12096);
  FUN_01c5d288(StringLiteral_12091);
  FUN_01c5d288(ExitGames_Client_Photon_OperationRequest_TypeInfo);
  FUN_01c5d288(OVR_OpenVR_InputPoseActionData_t_TypeInfo);
  FUN_01c5d288(StringLiteral_9452);
  FUN_01c5d288(StringLiteral_9307);
  FUN_01c5d288(StringLiteral_12097);
  FUN_01c5d288(StringLiteral_12092);
  FUN_01c5d288(StringLiteral_12098);
  FUN_01c5d288(UnityEngine_RangeInt_TypeInfo);
  FUN_01c5d288(UnityEngine_Rendering_ProbeBrickBlendingPool_TypeInfo);
  FUN_01c5d288(System_RankException_TypeInfo);
  FUN_01c5d288(StringLiteral_12099);
  FUN_01c5d288(OVR_OpenVR_InputSkeletalActionData_t_TypeInfo);
  FUN_01c5d288(StringLiteral_12100);
  FUN_01c5d288(MS_Internal_Xml_XPath_Operator_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xeef) = 1;
  puVar4 = System_RankException_TypeInfo;
  puVar3 = UnityEngine_RangeInt_TypeInfo;
  puVar2 = UnityEngine_Rendering_ProbeBrickBlendingPool_TypeInfo;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  plVar15 = *(long **)(unaff_x21 + 0x18);
  if (plVar15 != (long *)0x0) {
    uVar12 = 0;
    do {
      uVar8 = (ulong)*(uint *)(plVar15 + 3);
      if ((long)(int)*(uint *)(plVar15 + 3) <= (long)uVar12) {
        return;
      }
      lVar10 = *(long *)(unaff_x21 + 0x20);
      if (lVar10 == 0) break;
      if ((*(uint *)(lVar10 + 0x18) <= uVar12) || (uVar8 <= uVar12)) goto LAB_03ec5234;
      plVar14 = *(long **)(lVar10 + uVar12 * 8 + 0x20);
      lVar13 = plVar15[uVar12 + 4];
      lVar10 = *(long *)(unaff_x21 + 0x10);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03ec5234;
      lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
      if (lVar10 == lVar13) {
        if (plVar14 == (long *)0x0) {
          lVar10 = *(long *)(unaff_x21 + 0x28);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03ec5234;
          plVar15 = *(long **)(lVar10 + uVar12 * 8 + 0x20);
          if (plVar15 == (long *)0x0) goto LAB_03ec4fb4;
          lVar5 = *plVar15;
          lVar10 = *(long *)(unaff_x21 + 0x30);
          lVar13 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar13) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_03ec4f90;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar15,lVar13,1);
LAB_03ec4f90:
          uVar16 = (*(code *)*puVar6)(plVar15,puVar6[1]);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03ec5234;
          lVar10 = lVar10 + uVar12 * 8;
        }
        else {
          lVar13 = *plVar14;
          lVar10 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar10) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_03ec4f58;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar14,lVar10,5);
LAB_03ec4f58:
          uVar16 = (*(code *)*puVar6)(plVar14,puVar6[1]);
          lVar10 = *(long *)(unaff_x21 + 0x30);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03ec5234;
          lVar10 = lVar10 + uVar12 * 8;
        }
        *(undefined4 *)(lVar10 + 0x20) = uVar16;
        *(int *)(lVar10 + 0x24) = (int)param_2;
      }
      else {
        if (lVar10 != 0) {
          lVar5 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*plVar15 + 0x40));
          if (lVar5 == 0) {
            uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar7,0);
          }
          uVar8 = (ulong)*(uint *)(plVar15 + 3);
        }
        if (uVar8 <= uVar12) goto LAB_03ec5234;
        plVar15[uVar12 + 4] = lVar10;
        if (plVar14 == (long *)0x0) {
          lVar5 = *(long *)(unaff_x21 + 0x28);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_03ec5234;
          if (*(long *)(lVar5 + uVar12 * 8 + 0x20) == 0) {
            FUN_03ec0cf0(&stack0x00000028);
            uVar7 = param_2;
            if (*(int *)(*(long *)OVR_OpenVR_InputSkeletalActionData_t_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              uVar7 = param_2;
            }
            uVar17 = FUN_03ec5304(uVar12 & 0xffffffff,in_stack_00000008._4_4_);
            FUN_03ec5384(lVar13,lVar10,0,uVar12 & 0xffffffff);
            param_2 = uVar7;
            FUN_023b52f8(uVar17,lVar13,lVar10,0,uVar12 & 0xffffffff,
                         *(undefined8 *)StringLiteral_12100);
            lVar5 = *(long *)(unaff_x21 + 0x30);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            lVar5 = lVar5 + uVar12 * 8;
            *(int *)(lVar5 + 0x20) = (int)uVar17;
            *(int *)(lVar5 + 0x24) = (int)uVar7;
            lVar5 = *(long *)MS_Internal_Xml_XPath_Operator_TypeInfo;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar5 = *(long *)MS_Internal_Xml_XPath_Operator_TypeInfo;
            }
            if (uVar12 == *(uint *)(*(long *)(lVar5 + 0xb8) + 8)) {
              FUN_03ec56fc(uVar17,uVar7,lVar13,lVar10,0);
              FUN_0238c5c8(uVar17,lVar13,lVar10,0,*(undefined8 *)StringLiteral_12099);
              param_2 = uVar7;
            }
            if (in_stack_00000028 == 0) break;
            FUN_03ec0d80();
          }
        }
        else {
          lVar9 = *plVar14;
          lVar5 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                uVar7 = param_2;
                goto LAB_03ec4acc;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar14,lVar5,5);
          uVar7 = param_2;
LAB_03ec4acc:
          uVar17 = (*(code *)*puVar6)(plVar14,puVar6[1]);
          lVar5 = *(long *)(unaff_x21 + 0x30);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_03ec5234;
          lVar5 = lVar5 + uVar12 * 8;
          *(int *)(lVar5 + 0x20) = (int)uVar17;
          *(int *)(lVar5 + 0x24) = (int)uVar7;
          lVar5 = *plVar14;
          lVar9 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar9 + 0x130);
          param_2 = uVar7;
          if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) {
            lVar5 = (**(code **)(lVar5 + 0x188))(plVar14,*(undefined8 *)(lVar5 + 400));
            if (*(int *)(*(long *)ExitGames_Client_Photon_OperationRequest_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)ExitGames_Client_Photon_OperationRequest_TypeInfo);
            }
            lVar9 = FUN_02b1dc40(*(undefined8 *)
                                  UnityEngine_ResourceManagement_Exceptions_OperationException_TypeInfo
                                );
            if (lVar5 != lVar9) {
              lVar5 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
              if (*(int *)(*(long *)OVR_OpenVR_InputPoseActionData_t_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)OVR_OpenVR_InputPoseActionData_t_TypeInfo);
              }
              lVar9 = FUN_02b1dc40(*(undefined8 *)UnityEngine_UI_InputField_TypeInfo);
              if (lVar5 != lVar9) {
                lVar5 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                if (*(int *)(*(long *)OVR_OpenVR_InputOriginInfo_t_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)OVR_OpenVR_InputOriginInfo_t_TypeInfo);
                }
                lVar9 = FUN_02b1dc40(*(undefined8 *)Unity_XR_Oculus_InputFocus_TypeInfo);
                if (lVar5 != lVar9) {
                  lVar5 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                  if (*(int *)(*(long *)StringLiteral_9307 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)StringLiteral_9307);
                  }
                  lVar9 = FUN_02b1dc40(*(undefined8 *)StringLiteral_9306);
                  if (lVar5 != lVar9) goto LAB_03ec4cb8;
                }
              }
            }
            FUN_03ec0cf0(&stack0x00000020);
            FUN_03ec5384(uVar17,uVar7,lVar13,lVar10,plVar14,uVar12 & 0xffffffff);
            FUN_023b52f8(uVar17,lVar13,lVar10,plVar14,uVar12 & 0xffffffff,
                         *(undefined8 *)StringLiteral_12100);
            if (in_stack_00000020 == 0) break;
            FUN_03ec0d80();
            param_2 = uVar7;
          }
        }
LAB_03ec4cb8:
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_03ec5234;
        *(undefined8 *)(lVar5 + uVar12 * 8 + 0x20) = 0;
        lVar5 = *(long *)(unaff_x21 + 0x28);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_03ec5234;
        plVar15 = *(long **)(lVar5 + uVar12 * 8 + 0x20);
        if (plVar15 != (long *)0x0) {
          lVar9 = *plVar15;
          lVar5 = *(long *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                uVar7 = param_2;
                goto LAB_03ec4d44;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar15,lVar5,1);
          uVar7 = param_2;
LAB_03ec4d44:
          uVar17 = (*(code *)*puVar6)(plVar15,puVar6[1]);
          lVar5 = *(long *)(unaff_x21 + 0x30);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_03ec5234;
          lVar5 = lVar5 + uVar12 * 8;
          *(int *)(lVar5 + 0x20) = (int)uVar17;
          *(int *)(lVar5 + 0x24) = (int)uVar7;
          lVar5 = *plVar15;
          lVar9 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar9 + 0x130);
          param_2 = uVar7;
          if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) {
            lVar5 = (**(code **)(lVar5 + 0x188))(plVar15,*(undefined8 *)(lVar5 + 400));
            if (*(int *)(*(long *)StringLiteral_12098 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)StringLiteral_12098);
            }
            lVar9 = FUN_02b1dc40(*(undefined8 *)StringLiteral_12094);
            if (lVar5 != lVar9) {
              lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
              if (*(int *)(*(long *)StringLiteral_12096 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)StringLiteral_12096);
              }
              lVar9 = FUN_02b1dc40(*(undefined8 *)StringLiteral_12093);
              if (lVar5 != lVar9) {
                lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
                if (*(int *)(*(long *)StringLiteral_9452 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)StringLiteral_9452);
                }
                lVar9 = FUN_02b1dc40(*(undefined8 *)StringLiteral_9449);
                if (lVar5 != lVar9) {
                  lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
                  if (*(int *)(*(long *)StringLiteral_12097 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)StringLiteral_12097);
                  }
                  lVar9 = FUN_02b1dc40(*(undefined8 *)StringLiteral_12095);
                  if (lVar5 != lVar9) {
                    lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400))
                    ;
                    if (*(int *)(*(long *)StringLiteral_12091 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)StringLiteral_12091);
                    }
                    lVar9 = FUN_02b1dc40(*(undefined8 *)StringLiteral_12090);
                    if (lVar5 != lVar9) {
                      lVar5 = (**(code **)(*plVar15 + 0x188))
                                        (plVar15,*(undefined8 *)(*plVar15 + 400));
                      if (*(int *)(*(long *)StringLiteral_12092 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)StringLiteral_12092);
                      }
                      lVar9 = FUN_02b1dc40(*(undefined8 *)StringLiteral_12089);
                      if (lVar5 != lVar9) goto LAB_03ec4f28;
                    }
                    FUN_03ec0cf0(&stack0x00000010);
                    FUN_03ec5384(uVar17,uVar7,lVar13,lVar10,0,uVar12 & 0xffffffff);
                    param_2 = uVar7;
                    FUN_023b52f8(uVar17,lVar13,lVar10,0,uVar12 & 0xffffffff,
                                 *(undefined8 *)StringLiteral_12100);
                    lVar5 = *(long *)MS_Internal_Xml_XPath_Operator_TypeInfo;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                      lVar5 = *(long *)MS_Internal_Xml_XPath_Operator_TypeInfo;
                    }
                    if (uVar12 == *(uint *)(*(long *)(lVar5 + 0xb8) + 8)) {
                      FUN_03ec56fc(uVar17,uVar7,lVar13,lVar10,plVar15);
                      FUN_0238c5c8(uVar17,lVar13,lVar10,plVar15,*(undefined8 *)StringLiteral_12099);
                      param_2 = uVar7;
                    }
                    if (in_stack_00000010 != 0) {
                      FUN_03ec0d80();
                      goto LAB_03ec4f28;
                    }
                    break;
                  }
                }
              }
            }
            FUN_03ec0cf0(&stack0x00000018);
            FUN_03ec56fc(uVar17,uVar7,lVar13,lVar10,plVar15);
            FUN_0238c5c8(uVar17,lVar13,lVar10,plVar15,*(undefined8 *)StringLiteral_12099);
            if (in_stack_00000018 == 0) break;
            FUN_03ec0d80();
            param_2 = uVar7;
          }
LAB_03ec4f28:
          lVar10 = *(long *)(unaff_x21 + 0x28);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_03ec5234:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          *(undefined8 *)(lVar10 + uVar12 * 8 + 0x20) = 0;
        }
      }
LAB_03ec4fb4:
      plVar15 = *(long **)(unaff_x21 + 0x18);
      uVar12 = uVar12 + 1;
    } while (plVar15 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


