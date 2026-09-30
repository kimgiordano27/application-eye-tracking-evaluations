/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0228fd18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_1;
  lVar1 = thunk_FUN_01c49334(**(undefined8 **)(unaff_x20 + 0x38));
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_01c495e4(lVar1,*(undefined8 *)(*param_3 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar3,0);
  }
  if (unaff_w19 < *(uint *)(param_3 + 3)) {
    param_3[(long)(int)unaff_w19 + 4] = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


