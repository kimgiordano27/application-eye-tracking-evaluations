/*
FUNCTION_NAME: FUN_04f0b420
ENTRY_POINT: 04f0b420
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04f0b964) */

void FUN_04f0b420(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

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
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  int local_7c [3];
  long **pplStack_70;
  long *local_68;
  
  if ((DAT_066c97d1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                );
    FUN_02b3c81c(
                Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06312f90);
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
    DAT_066c97d1 = 1;
  }
  local_68 = (long *)0x0;
  if (param_1 != 0) {
    uVar2 = thunk_FUN_05c92238(param_1,0);
    plVar3 = (long *)thunk_FUN_02b4c898(param_1,0);
    puVar1 = PTR_DAT_0631ee18;
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar5 = FUN_04f0ba08(param_3);
      uVar15 = *(undefined8 *)puVar1;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      plVar3 = (long *)FUN_04d8a7b0(uVar15,0);
      if ((plVar3 != (long *)0x0) &&
         (uVar15 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0)),
         param_2 != (long *)0x0)) {
        lVar11 = *param_2;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
               ) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_04f0b5ec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02b7654c(param_2,*(long *)
                                       Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                              ,0);
LAB_04f0b5ec:
        local_68 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
        puVar1 = PTR_DAT_06312f90;
        pplStack_70 = &local_68;
        local_7c[1] = 0;
        local_7c[2] = 0;
        if (local_68 != (long *)0x0) {
          iVar14 = 0;
          do {
            plVar3 = local_68;
            lVar11 = *local_68;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04f0b664;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)FUN_02b7654c(local_68,*(long *)puVar1,0);
LAB_04f0b664:
            uVar12 = (*(code *)*puVar6)(plVar3,puVar6[1]);
            plVar3 = local_68;
            if ((uVar12 & 1) == 0) {
              if (local_68 == (long *)0x0) {
                return;
              }
              lVar11 = *local_68;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 == 0) goto LAB_04f0b8f8;
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_04f0b8e0;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar11 = *local_68;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)
                     Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                   ) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04f0b6d0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_02b7654c(local_68,*(long *)
                                            Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                                  ,0);
LAB_04f0b6d0:
            uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
            lVar11 = param_5;
            if (param_5 == 0) {
              lVar11 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar11 + 0x20) =
                   *(undefined8 *)
                    Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
              ;
              thunk_FUN_02bb0e9c();
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar11 + 0x28) = uVar2;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x28),uVar2);
              if (*(uint *)(lVar11 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar11 + 0x30) =
                   *(undefined8 *)
                    Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
              ;
              thunk_FUN_02bb0e9c();
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar11 + 0x38) = uVar4;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x38),uVar4);
              if (*(uint *)(lVar11 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              *(undefined8 *)(lVar11 + 0x40) =
                   *(undefined8 *)
                    System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo;
              thunk_FUN_02bb0e9c();
              lVar11 = FUN_04c0ac30(lVar11,0);
            }
            lVar9 = param_4;
            if (param_4 == 0) {
              local_7c[0] = iVar14;
              uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),local_7c);
              lVar9 = FUN_04c0af28(*(undefined8 *)
                                    Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                                   ,uVar5,uVar8,0);
            }
            lVar10 = param_6;
            if (param_6 == 0) {
              local_7c[0] = iVar14;
              uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),local_7c,0);
              lVar10 = FUN_04c0af6c(*(undefined8 *)
                                     Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                                    ,uVar15,uVar5,uVar8,0);
            }
            uVar8 = FUN_04c0a5c4(lVar11,lVar9,lVar10,0);
            if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar12 = FUN_05c8e378(uVar7,0,0);
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c453b4(uVar8,param_1,0);
            }
            iVar14 = iVar14 + 1;
          } while (local_68 != (long *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04f0b8e0:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke;
    }
  }
LAB_04f0b8f8:
  puVar6 = (undefined8 *)FUN_02b7654c(local_68,*(long *)PTR_DAT_06312f78,0);
OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  return;
}


