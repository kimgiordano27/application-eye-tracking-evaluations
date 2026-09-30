/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._WaitGetPoses$$Invoke
ENTRY_POINT: 03706264
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRCompositor__WaitGetPoses__Invoke(long param_1)

{
  int in_w9;
  undefined8 uVar1;
  long *unaff_x20;
  
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c();
    param_1 = *(long *)(*unaff_x20 + 0xb8);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403ed64(uVar1,0);
  return 0;
}


