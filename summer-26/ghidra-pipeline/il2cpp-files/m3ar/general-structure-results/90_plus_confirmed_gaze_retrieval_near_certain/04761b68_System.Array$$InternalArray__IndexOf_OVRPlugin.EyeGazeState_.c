/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04761b68
PROGRAM: m3ar-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 04761b68 to 04861b6b has its CatchHandler @ 04761b74 */
                    /* try { // try from 04761b6c to 04861b77 has its CatchHandler @ 04761930 */
  if (param_1 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04761b68 with catch @ 04761b74
                        */
                    /* try { // try from 04761b78 to 04861bdb has its CatchHandler @ 04761b78
                       catch() { ... } // from try @ 04761b78 with catch @ 04761b78
                       catch() { ... } // from try @ 04761bfc with catch @ 04761b78
                       catch() { ... } // from try @ 04761c3c with catch @ 04761b78
                       catch() { ... } // from try @ 04761c60 with catch @ 04761b78 */
    FUN_0406ab48(param_3);
  }
  iVar1 = FUN_074fdcc4(param_2,0);
  if (iVar1 == 0) {
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
                    /* try { // try from 04761bdc to 04861beb has its CatchHandler @ 04761c1c */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 8);
                    /* try { // try from 04761bf4 to 04861bfb has its CatchHandler @ 04761c18 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
                    /* try { // try from 04761bfc to 04861c37 has its CatchHandler @ 04761b78 */
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_054db358(&stack0x00000010,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
    uVar2 = thunk_FUN_0406db0c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
  }
  return uVar2;
}


