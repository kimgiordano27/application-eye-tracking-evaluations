/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._IsQuitUserPromptRequested$$EndInvoke
ENTRY_POINT: 04f0b624
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04f0b964) */

void OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested__EndInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000028;
  
  do {
    if (in_x9 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04f0b664;
        }
        in_x9 = in_x9 - 1;
        piVar8 = piVar8 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(unaff_x27,param_3,0);
LAB_04f0b664:
    uVar3 = (*(code *)*puVar2)(unaff_x27,puVar2[1]);
    plVar1 = in_stack_00000028;
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000028 == (long *)0x0) {
        return;
      }
      lVar7 = *in_stack_00000028;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 == 0) goto LAB_04f0b8f8;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *in_stack_00000028;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
           ) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04f0b6d0;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02b7654c(in_stack_00000028,
                          *(long *)
                           Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
                          ,0);
LAB_04f0b6d0:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    lVar7 = unaff_x20;
    if (unaff_x20 == 0) {
      lVar7 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined8 *)(lVar7 + 0x20) =
           *(undefined8 *)
            Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<TransformFeatureConfigBuilder_TrueFalseStateBuilder>_TypeInfo
      ;
      thunk_FUN_02bb0e9c();
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined8 *)(lVar7 + 0x28) = unaff_x23;
      thunk_FUN_02bb0e9c();
      if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined8 *)(lVar7 + 0x30) =
           *(undefined8 *)
            Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition_BuildStateDelegate<FingerFeatureConfigBuilder_AbductionStateBuilder>_TypeInfo
      ;
      thunk_FUN_02bb0e9c();
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined8 *)(lVar7 + 0x38) = unaff_x24;
      thunk_FUN_02bb0e9c();
      if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined8 *)(lVar7 + 0x40) =
           *(undefined8 *)System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TypeInfo;
      thunk_FUN_02bb0e9c();
      lVar7 = FUN_04c0ac30(lVar7,0);
    }
    lVar5 = unaff_x21;
    if (unaff_x21 == 0) {
      in_stack_00000010._4_4_ = unaff_w22;
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000010 + 4);
      lVar5 = FUN_04c0af28(*(undefined8 *)
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
    uVar6 = FUN_04c0a5c4(lVar7,lVar5);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8e378(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c453b4(uVar6,in_stack_00000008,0);
    }
    unaff_w22 = unaff_w22 + 1;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = *in_stack_00000028;
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x27 = in_stack_00000028;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke;
    }
  }
LAB_04f0b8f8:
  puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000028,*(long *)PTR_DAT_06312f78,0);
OVR_OpenVR_IVRChaperone__GetCalibrationState__BeginInvoke:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


