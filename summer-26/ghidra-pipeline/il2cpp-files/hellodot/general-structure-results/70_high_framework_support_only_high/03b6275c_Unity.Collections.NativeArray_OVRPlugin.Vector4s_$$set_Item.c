/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$set_Item
ENTRY_POINT: 03b6275c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item(undefined8 param_1,long param_2)

{
  uint uVar1;
  void *__src;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_02ce0978(param_2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* try { // try from 03b62774 to 03c62783 has its CatchHandler @ 03b62784 */
                    /* catch() { ... } // from try @ 03b626f8 with catch @ 03b62784
                       catch() { ... } // from try @ 03b62774 with catch @ 03b62784 */
  if (*(long *)(*unaff_x20 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
                    /* try { // try from 03b62788 to 03c6278b has its CatchHandler @ 03b62794 */
                    /* try { // try from 03b6278c to 03c62797 has its CatchHandler @ 03b62640 */
  __src = (void *)thunk_FUN_02cea9e8();
  memcpy(&stack0x00000000,__src,0xb0);
  memcpy(&stack0x000000b0,&stack0x00000000,0xb0);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar2 + (long)(int)uVar1 * 0xb0 + 0x20),&stack0x000000b0,0xb0);
    }
    else {
      memcpy(&stack0x00000160,&stack0x000000b0,0xb0);
      FUN_03b62674();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


