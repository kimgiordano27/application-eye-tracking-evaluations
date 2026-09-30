/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 017d09c8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = in_stack_00000000;
  uVar1 = thunk_FUN_010303a8(PTR_DAT_0234bd08);
  uVar1 = FUN_00fdc388(uVar1,2);
  FUN_00e5db80();
  FUN_00e5e2a8(uVar1,param_1);
  FUN_00e5e2dc(uVar1,0,param_1);
  FUN_00e5db80(uVar1);
  FUN_00e5e2a8(uVar1,param_2);
  FUN_00e5e2dc(uVar1,1,param_2);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_02358688);
  uVar1 = FUN_01d7c4d8(uVar2,uVar1,0);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar2 = thunk_FUN_010400dc();
  uVar3 = thunk_FUN_010303a8(PTR_DAT_0234d278);
  FUN_01c5e198(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_010303a8(PTR_DAT_02358698);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar2,uVar1);
}


