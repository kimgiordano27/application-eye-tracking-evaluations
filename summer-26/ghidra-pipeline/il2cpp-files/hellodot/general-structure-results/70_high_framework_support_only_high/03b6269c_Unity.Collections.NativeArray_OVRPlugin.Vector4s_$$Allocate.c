/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Allocate
ENTRY_POINT: 03b6269c
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Allocate(long param_1,undefined8 param_2)

{
  int iVar1;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar2;
  
  iVar1 = (uint)unaff_x22 + 1;
  FUN_03b62e20(param_2,iVar1,*(undefined8 *)(param_1 + 0x78));
  lVar2 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x18) = iVar1;
  memcpy(&stack0x000000b0,unaff_x19,0xb0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  memcpy(&stack0x00000000,&stack0x000000b0,0xb0);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b62688 with catch @ 03b626e0
                       try { // try from 03b626e0 to 03c626f7 has its CatchHandler @ 03b62640 */
  if ((uint)unaff_x22 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 03b626f8 to 03c6270f has its CatchHandler @ 03b62784 */
    memcpy((void *)(lVar2 + unaff_x22 * 0xb0 + 0x20),&stack0x00000000,0xb0);
                    /* try { // try from 03b62710 to 03c62773 has its CatchHandler @ 03b62640 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


