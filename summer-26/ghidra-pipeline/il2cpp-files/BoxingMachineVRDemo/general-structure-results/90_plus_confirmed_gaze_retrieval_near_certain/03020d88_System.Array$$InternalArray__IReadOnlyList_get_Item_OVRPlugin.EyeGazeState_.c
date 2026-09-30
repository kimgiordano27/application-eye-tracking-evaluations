/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03020d88
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(long param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined8 in_stack_00000078;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_03ded7d8();
  FUN_04f2de80();
                    /* try { // try from 03020dd8 to 03120eab has its CatchHandler @ 03020dd8
                       catch() { ... } // from try @ 03020dd8 with catch @ 03020dd8
                       catch() { ... } // from try @ 03020f14 with catch @ 03020dd8
                       catch() { ... } // from try @ 03020f74 with catch @ 03020dd8
                       catch() { ... } // from try @ 03020fa8 with catch @ 03020dd8
                       catch() { ... } // from try @ 03020fd8 with catch @ 03020dd8 */
  if (*unaff_x21 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    FUN_03ded7d8();
    memcpy(&stack0x00000008,unaff_x22,0x68);
    thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
    FUN_04f2e248();
  }
  FUN_0467d5f4();
  return;
}


