/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03c0ac60
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
    FUN_02feb320();
  }
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)PTR_DAT_06f8b878 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  in_stack_00000008 = FUN_03bc25a8(**(undefined8 **)(unaff_x22 + 0x38));
  puVar1 = PTR_DAT_06f8b5e8;
  if (*(int *)(*(long *)PTR_DAT_06f8b5e8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f8b5e8);
  }
  uVar2 = FUN_064b5420();
  uVar3 = FUN_064e8c78(&stack0x00000008,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_03c14e18();
  }
  return uVar2 & 1;
}


