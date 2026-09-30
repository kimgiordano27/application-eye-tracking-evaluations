/*
FUNCTION_NAME: OVRManager$$remove_HMDLost
ENTRY_POINT: 019fcd24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__remove_HMDLost(long param_1)

{
  undefined *puVar1;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  puVar1 = Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_EnsureArraySize<Vector3>__;
  if ((DAT_0377a898 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_EnsureArraySize<Vector3>__
                      );
    DAT_0377a898 = 1;
  }
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  FUN_01304210(param_1,*(undefined8 *)puVar1);
  FUN_019aa6e4(&stack0x00000020,*(undefined8 *)(param_1 + 0x110),0,0);
  uStack0000000000000054 = (undefined4)uStack0000000000000034;
  in_stack_00000058 = SUB84(uStack0000000000000034,4);
  in_stack_00000050 = uStack0000000000000030;
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  FUN_019fcdb8(param_1);
  return;
}


