/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Length
ENTRY_POINT: 017d3de4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Length(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  
  if (in_w8 == 0) {
    thunk_FUN_01022c14();
  }
  uVar1 = FUN_01d5e86c();
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0234bd08,uVar1,0);
  uVar2 = FUN_00fdc388(uVar2,2);
  FUN_00e5db80();
  FUN_00e5e2a8(uVar2);
  FUN_00e5e2dc(uVar2,0);
  FUN_00e5db80(uVar2);
  FUN_00e5e2a8(uVar2,uVar1);
  FUN_00e5e2dc(uVar2,1,uVar1);
  uVar1 = thunk_FUN_010303a8(PTR_DAT_02358688);
  uVar1 = FUN_01d7c4d8(uVar1,uVar2,0);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar2 = thunk_FUN_010400dc();
  uVar3 = thunk_FUN_010303a8(PTR_DAT_0234d278);
  FUN_01c5e198(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_010303a8(PTR_DAT_02358698);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar2,uVar1);
}


