/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._LaunchInternalProcess$$BeginInvoke
ENTRY_POINT: 04f0b714
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04f0b964) */

void OVR_OpenVR_IVRApplications__LaunchInternalProcess__BeginInvoke
               (undefined **param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000028;
  
  do {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)param_1[2];
    thunk_FUN_02bb0e9c();
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(unaff_x28 + 0x28) = unaff_x23;
    thunk_FUN_02bb0e9c();
    if (*(uint *)(unaff_x28 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(unaff_x28 + 0x30) =
         *(undefined8 *)
          Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
    ;
    thunk_FUN_02bb0e9c();
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(unaff_x28 + 0x38) = unaff_x24;
    thunk_FUN_02bb0e9c();
    if (*(uint *)(unaff_x28 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(unaff_x28 + 0x40) =
         *(undefined8 *)System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo;
    thunk_FUN_02bb0e9c();
    lVar3 = FUN_04c0ac30(unaff_x28,0);
    do {
      lVar4 = unaff_x21;
      if (unaff_x21 == 0) {
        in_stack_00000010._4_4_ = unaff_w22;
        DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                  (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4);
        lVar4 = FUN_04c0af28(*(undefined8 *)
                              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OppositionStateBuilder>_TypeInfo
                            );
      }
      if (unaff_x19 == 0) {
        in_stack_00000010._4_4_ = unaff_w22;
        DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                  (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4);
        FUN_04c0af6c(*(undefined8 *)
                      Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                     ,in_stack_00000000);
      }
      uVar5 = FUN_04c0a5c4(lVar3,lVar4);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar6 = FUN_05c8e378(unaff_x27,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c453b4(uVar5,in_stack_00000008,0);
      }
      plVar1 = in_stack_00000028;
      unaff_w22 = unaff_w22 + 1;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar3 = *in_stack_00000028;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04f0b664;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*unaff_x26,0);
LAB_04f0b664:
      uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      plVar1 = in_stack_00000028;
      if ((uVar6 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000028;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 == 0) goto LAB_04f0b8f8;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04f0b8e0;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar3 = *in_stack_00000028;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)
               Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
             ) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04f0b6d0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02b7654c(in_stack_00000028,
                            *(long *)
                             Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                            ,0);
LAB_04f0b6d0:
      unaff_x27 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      lVar3 = unaff_x20;
    } while (unaff_x20 != 0);
    param_2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    param_1 = &
              Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
    ;
    unaff_x28 = param_2;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04f0b8e0:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke;
    }
  }
LAB_04f0b8f8:
  puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)PTR_DAT_06312f78,0);
OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


