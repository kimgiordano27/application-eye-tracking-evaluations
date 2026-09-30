/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationsTransitionStateNameFromEnum$$EndInvoke
ENTRY_POINT: 04f0b530
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04f0b964) */

void OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum__EndInvoke
               (long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar12;
  undefined8 unaff_x23;
  undefined8 uVar13;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  
  puVar1 = PTR_DAT_0631ee18;
  uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar3 = FUN_04f0ba08();
  uVar13 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  plVar4 = (long *)FUN_04d8a7b0(uVar13,0);
  if ((plVar4 == (long *)0x0) ||
     (uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0)),
     unaff_x27 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar9 = *unaff_x27;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
         ) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_04f0b5ec;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_02b7654c();
LAB_04f0b5ec:
  in_stack_00000028 = (long *)(*(code *)*puVar5)();
  puVar1 = PTR_DAT_06312f90;
  in_stack_00000020 = &stack0x00000028;
  in_stack_00000018 = 0;
  if (in_stack_00000028 != (long *)0x0) {
    iVar12 = 0;
    do {
      plVar4 = in_stack_00000028;
      lVar9 = *in_stack_00000028;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04f0b664;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)puVar1,0);
LAB_04f0b664:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      plVar4 = in_stack_00000028;
      if ((uVar10 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) {
          return;
        }
        lVar9 = *in_stack_00000028;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_04f0b8f8;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04f0b8e0;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *in_stack_00000028;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
             ) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04f0b6d0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02b7654c(in_stack_00000028,
                            *(long *)
                             Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                            ,0);
LAB_04f0b6d0:
      uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      lVar9 = unaff_x20;
      if (unaff_x20 == 0) {
        lVar9 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar9 + 0x20) =
             *(undefined8 *)
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
        ;
        thunk_FUN_02bb0e9c();
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar9 + 0x28) = unaff_x23;
        thunk_FUN_02bb0e9c();
        if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar9 + 0x30) =
             *(undefined8 *)
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
        ;
        thunk_FUN_02bb0e9c();
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar9 + 0x38) = uVar2;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x38),uVar2);
        if (*(uint *)(lVar9 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar9 + 0x40) =
             *(undefined8 *)System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo;
        thunk_FUN_02bb0e9c();
        lVar9 = FUN_04c0ac30(lVar9,0);
      }
      lVar8 = unaff_x21;
      if (unaff_x21 == 0) {
        in_stack_00000010._4_4_ = iVar12;
        uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4);
        lVar8 = FUN_04c0af28(*(undefined8 *)
                              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                             ,uVar3,uVar7,0);
      }
      if (unaff_x19 == 0) {
        in_stack_00000010._4_4_ = iVar12;
        uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4);
        FUN_04c0af6c(*(undefined8 *)
                      Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                     ,uVar13,uVar3,uVar7,0);
      }
      uVar7 = FUN_04c0a5c4(lVar9,lVar8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05c8e378(uVar6,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c453b4(uVar7,in_stack_00000008,0);
      }
      iVar12 = iVar12 + 1;
    } while (in_stack_00000028 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04f0b8e0:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke;
    }
  }
LAB_04f0b8f8:
  puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)PTR_DAT_06312f78,0);
OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


