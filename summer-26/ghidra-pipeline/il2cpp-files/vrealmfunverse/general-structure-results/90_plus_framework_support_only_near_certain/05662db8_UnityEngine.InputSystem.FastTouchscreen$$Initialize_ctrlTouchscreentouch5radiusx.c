/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5radiusx
ENTRY_POINT: 05662db8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 143
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5radiusx(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar2 = FUN_04d938a0();
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
  if (unaff_x19 != 0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = (**(code **)(*unaff_x20 + 0x8c8))();
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
  in_stack_00000020 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  FUN_05662ebc(&stack0x00000018);
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar1);
  return;
}


