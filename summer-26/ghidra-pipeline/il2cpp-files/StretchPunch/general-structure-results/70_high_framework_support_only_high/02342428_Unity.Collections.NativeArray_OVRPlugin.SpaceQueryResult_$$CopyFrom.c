/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 02342428
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = in_stack_00000040;
  uVar1 = thunk_FUN_01dd295c(StringLiteral_887,param_2,0);
  uVar1 = FUN_01d7d9bc(uVar1,2);
  FUN_01a94b18();
  FUN_01a952f4(uVar1,param_1);
  FUN_01a95328(uVar1,0,param_1);
  FUN_01a94b18(uVar1);
  FUN_01a952f4(uVar1,param_2);
  FUN_01a95328(uVar1,1,param_2);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_8577);
  uVar1 = FUN_033d6e50(uVar2,uVar1,0);
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar2 = thunk_FUN_01de27b8();
  uVar3 = thunk_FUN_01dd295c(StringLiteral_1645);
  FUN_03287130(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01dd295c(StringLiteral_8579);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar2,uVar1);
}


