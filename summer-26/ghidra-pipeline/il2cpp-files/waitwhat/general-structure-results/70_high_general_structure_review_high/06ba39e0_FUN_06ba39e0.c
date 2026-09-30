/*
FUNCTION_NAME: FUN_06ba39e0
ENTRY_POINT: 06ba39e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_06ba39e0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = param_4;
  uStack_60 = param_5;
  if ((DAT_075602fc & 1) == 0) {
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_0000176E_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(Method_Fusion_FusionGlobalScriptableObject<NetworkProjectConfigAsset>_OnDisable__);
    FUN_03188a78(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Clear__);
    FUN_03188a78(PTR_DAT_070f3520);
    DAT_075602fc = 1;
  }
  if (param_6 != 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      FUN_06b7e4fc(param_6,param_2,param_3,param_4,param_5,0);
      return;
    }
    goto LAB_06ba3bcc;
  }
  if (*(char *)(param_1 + 0xc2) == '\0') {
    local_80[0] = 0;
    if (param_3 != 0) {
      local_80[0] = FUN_03e0cae0(param_3,*(undefined8 *)
                                          Method_Unity_Burst_FunctionPointer<XRHandRelativeOrientation_UserCondition_CheckConditionBursted_000001E6_PostfixBurstDelegate>_get_Value__
                                );
      if (param_2 != 0) {
        uVar3 = FUN_03e0c8f0(param_2,*(undefined8 *)
                                      Method_Unity_Burst_FunctionPointer<XRHandRelativeOrientation_TargetCondition_GetReferenceDirection_000001F5_PostfixBurstDelegate>_get_Value__
                            );
        uVar4 = FUN_03b28cb8(param_4,param_5,
                             *(undefined8 *)
                              Method_Unity_Burst_FunctionPointer<SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_0000176E_PostfixBurstDelegate>_get_Value__
                            );
        uVar2 = FUN_0462454c(&local_68,
                             *(undefined8 *)
                              Method_Fusion_FusionGlobalScriptableObject<NetworkProjectConfigAsset>_OnDisable__
                            );
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)PTR_DAT_070f3520);
        }
        FUN_06b7bf14(uVar3,local_80,1,uVar4,uVar2,uVar5,0);
        goto LAB_06ba3b8c;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
LAB_06ba3b8c:
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_06ba3bcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


