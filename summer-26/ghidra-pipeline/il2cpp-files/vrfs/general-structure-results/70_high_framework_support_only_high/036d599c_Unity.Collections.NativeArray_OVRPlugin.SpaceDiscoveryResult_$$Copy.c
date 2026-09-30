/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d599c
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_011a9bc8();
  uVar1 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
  thunk_FUN_0159f088(PTR_DAT_06dfb810);
  uVar2 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  uVar3 = thunk_FUN_0159f088(PTR_DAT_06dade58);
  FUN_036f573c(uVar2,uVar3,uVar1);
  uVar1 = thunk_FUN_0159f088(PTR_DAT_06dee308);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar2,uVar1);
}


