/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0399d0bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined1  [16]
System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>
          (long *param_1,uint param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uVar2 = FUN_05e310c0(param_1,0);
  if (param_2 < uVar2) {
                    /* try { // try from 0399d0f8 to 03a9d107 has its CatchHandler @ 0399d108 */
    memcpy(&stack0x00000000,
           (void *)((long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (long)(int)param_2 + 0x20),
           (ulong)*(uint *)(*param_1 + 0x104));
    auVar1._8_8_ = uStack0000000000000008;
    auVar1._0_8_ = uStack0000000000000000;
                    /* catch() { ... } // from try @ 0399d098 with catch @ 0399d108
                       catch() { ... } // from try @ 0399d0f8 with catch @ 0399d108 */
                    /* try { // try from 0399d10c to 03a9d10f has its CatchHandler @ 0399d118 */
    return auVar1;
  }
                    /* try { // try from 0399d110 to 03a9d11b has its CatchHandler @ 0399ced4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0399d10c with catch @ 0399d118
                        */
  thunk_FUN_036aa1c8(&DAT_07b65100);
                    /* try { // try from 0399d11c to 03a9d157 has its CatchHandler @ 0399d11c
                       catch() { ... } // from try @ 0399d11c with catch @ 0399d11c
                       catch() { ... } // from try @ 0399d244 with catch @ 0399d11c
                       catch() { ... } // from try @ 0399d294 with catch @ 0399d11c
                       catch() { ... } // from try @ 0399d2f8 with catch @ 0399d11c
                       catch() { ... } // from try @ 0399d358 with catch @ 0399d11c */
  uVar3 = thunk_FUN_0367fe20();
  uVar4 = thunk_FUN_036aa1c8(&DAT_07beee88);
  FUN_05d862e8(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,param_3);
}


