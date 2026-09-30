/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0475dfec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
                    /* try { // try from 0475dfec to 0485dff7 has its CatchHandler @ 0475dde4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0475dfe8 with catch @ 0475dff4
                        */
                    /* try { // try from 0475dff8 to 0485e02f has its CatchHandler @ 0475dff8
                       catch() { ... } // from try @ 0475dff8 with catch @ 0475dff8
                       catch() { ... } // from try @ 0475e104 with catch @ 0475dff8
                       catch() { ... } // from try @ 0475e154 with catch @ 0475dff8
                       catch() { ... } // from try @ 0475e1b8 with catch @ 0475dff8
                       catch() { ... } // from try @ 0475e200 with catch @ 0475dff8 */
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_04482014(param_4);
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar2 = thunk_FUN_04457530(param_1,0);
  if (1 < iVar2) {
                    /* try { // try from 0475e104 to 0485e11f has its CatchHandler @ 0475dff8 */
    thunk_FUN_044adef4(PTR_DAT_09f25260);
    uVar5 = thunk_FUN_0448520c();
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09f25268);
    FUN_07a4f424(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar5,param_4);
  }
                    /* try { // try from 0475e030 to 0485e037 has its CatchHandler @ 0475e184 */
  uVar3 = FUN_07a56bec(param_1,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000030,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000028 = in_stack_00000038;
      in_stack_00000020 = in_stack_00000030;
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),&stack0x00000020);
      lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        FUN_04481fb8(lVar7);
      }
      uVar4 = thunk_FUN_07a98984();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


