/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$set_Item
ENTRY_POINT: 06e25f40
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__set_Item(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w9;
  
  if (in_w9 == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_08d895f0();
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac09b30,uVar1,0);
  uVar2 = FUN_04947fd0(uVar2,2);
  FUN_04338ac4();
  FUN_0433796c(uVar2);
  FUN_043379a0(uVar2,0);
  FUN_0433796c(uVar2,uVar1);
  FUN_043379a0(uVar2,1,uVar1);
  uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac679b8);
  uVar1 = FUN_08dc10d0(uVar1,uVar2,0);
  thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
  uVar2 = thunk_FUN_04983f60();
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac12298);
  FUN_08cbd67c(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac679c8);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar2,uVar1);
}


