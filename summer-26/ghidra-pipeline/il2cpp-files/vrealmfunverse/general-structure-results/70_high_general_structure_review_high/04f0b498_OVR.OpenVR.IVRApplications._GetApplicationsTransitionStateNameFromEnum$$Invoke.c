/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationsTransitionStateNameFromEnum$$Invoke
ENTRY_POINT: 04f0b498
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04f0b964) */

void OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum__Invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar13;
  long unaff_x22;
  long unaff_x24;
  undefined8 uVar14;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  
  FUN_02b3c81c();
  FUN_02b3c81c(PTR_DAT_0631ee18);
  FUN_02b3c81c(PTR_DAT_06312520);
  FUN_02b3c81c(PTR_DAT_06313630);
  FUN_02b3c81c(
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
              );
  FUN_02b3c81c(
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
              );
  FUN_02b3c81c(
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
              );
  FUN_02b3c81c(
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
              );
  FUN_02b3c81c(System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x7d1) = 1;
  in_stack_00000028 = (long *)0x0;
  if (unaff_x24 != 0) {
    uVar2 = thunk_FUN_05c92238();
    plVar3 = (long *)thunk_FUN_02b4c898();
    puVar1 = PTR_DAT_0631ee18;
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar5 = FUN_04f0ba08();
      uVar14 = *(undefined8 *)puVar1;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      plVar3 = (long *)FUN_04d8a7b0(uVar14,0);
      if ((plVar3 != (long *)0x0) &&
         (uVar14 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0)),
         unaff_x27 != (long *)0x0)) {
        lVar10 = *unaff_x27;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
               ) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04f0b5ec;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04f0b5ec:
        in_stack_00000028 = (long *)(*(code *)*puVar6)();
        puVar1 = PTR_DAT_06312f90;
        in_stack_00000020 = &stack0x00000028;
        in_stack_00000018 = 0;
        if (in_stack_00000028 != (long *)0x0) {
          iVar13 = 0;
          do {
            plVar3 = in_stack_00000028;
            lVar10 = *in_stack_00000028;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_04f0b664;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)puVar1,0);
LAB_04f0b664:
            uVar11 = (*(code *)*puVar6)(plVar3,puVar6[1]);
            plVar3 = in_stack_00000028;
            if ((uVar11 & 1) == 0) {
              if (in_stack_00000028 == (long *)0x0) {
                return;
              }
              lVar10 = *in_stack_00000028;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 == 0) goto LAB_04f0b8f8;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_04f0b8e0;
            }
            if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar10 = *in_stack_00000028;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)
                     Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                   ) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_04f0b6d0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_02b7654c(in_stack_00000028,
                                  *(long *)
                                   Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                                  ,0);
LAB_04f0b6d0:
            uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
            lVar10 = unaff_x20;
            if (unaff_x20 == 0) {
              lVar10 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar10 + 0x20) =
                   *(undefined8 *)
                    Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
              ;
              thunk_FUN_02bb0e9c();
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar10 + 0x28) = uVar2;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x28),uVar2);
              if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar10 + 0x30) =
                   *(undefined8 *)
                    Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
              ;
              thunk_FUN_02bb0e9c();
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar10 + 0x38) = uVar4;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x38),uVar4);
              if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar10 + 0x40) =
                   *(undefined8 *)
                    System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo;
              thunk_FUN_02bb0e9c();
              lVar10 = FUN_04c0ac30(lVar10,0);
            }
            lVar9 = unaff_x21;
            if (unaff_x21 == 0) {
              in_stack_00000010._4_4_ = iVar13;
              uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4
                                );
              lVar9 = FUN_04c0af28(*(undefined8 *)
                                    Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                                   ,uVar5,uVar8,0);
            }
            if (unaff_x19 == 0) {
              in_stack_00000010._4_4_ = iVar13;
              uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4
                                );
              FUN_04c0af6c(*(undefined8 *)
                            Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                           ,uVar14,uVar5,uVar8,0);
            }
            uVar8 = FUN_04c0a5c4(lVar10,lVar9);
            if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar11 = FUN_05c8e378(uVar7,0,0);
            if ((uVar11 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c453b4(uVar8,unaff_x24,0);
            }
            iVar13 = iVar13 + 1;
          } while (in_stack_00000028 != (long *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_04f0b8e0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke;
    }
  }
LAB_04f0b8f8:
  puVar6 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)PTR_DAT_06312f78,0);
OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  return;
}


