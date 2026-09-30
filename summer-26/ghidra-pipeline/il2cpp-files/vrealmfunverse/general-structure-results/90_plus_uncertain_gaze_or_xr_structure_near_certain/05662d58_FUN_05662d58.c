/*
FUNCTION_NAME: FUN_05662d58
ENTRY_POINT: 05662d58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 167
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


void FUN_05662d58(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_066d1d2a & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__
                );
    DAT_066d1d2a = 1;
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_04d938a0(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar3 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_get_Current__
                              );
    FUN_04cee07c(uVar3,uVar4,0);
LAB_05662ea4:
    uVar4 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar3,uVar4);
  }
  if (param_3 != 0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = (**(code **)(*param_2 + 0x8c8))(param_2,param_3,*(undefined8 *)(*param_2 + 0x8d0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar3 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(MoveRelativeToTarget_TypeInfo);
      FUN_04cf4a4c(uVar3,uVar4,0);
      goto LAB_05662ea4;
    }
  }
  puVar1 = 
  Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__;
  uStack_40 = 0;
  local_48 = 0;
  local_38 = 0;
  FUN_05662ebc(&local_48,param_1,param_2,param_3);
  uStack_58 = uStack_40;
  local_60 = local_48;
  local_50 = local_38;
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar1,&local_60);
  return;
}


