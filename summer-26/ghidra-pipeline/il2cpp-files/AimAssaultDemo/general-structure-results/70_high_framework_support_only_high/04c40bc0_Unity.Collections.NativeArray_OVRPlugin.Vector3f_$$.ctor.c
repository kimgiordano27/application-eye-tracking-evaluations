/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 04c40bc0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  while( true ) {
    uVar4 = FUN_0426d9b8();
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c40c64 to 04d40c7b has its CatchHandler @ 04c40cf0 */
      FUN_0373b7b4();
    }
                    /* try { // try from 04c40be8 to 04d40c4b has its CatchHandler @ 04c40c4c */
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    iVar1 = in_stack_00000008._4_4_ + 1;
    in_stack_00000008._4_4_ = iVar1;
    iVar3 = (**(code **)(*unaff_x20 + 0x618))();
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c40be8 with catch @ 04c40c4c
                       try { // try from 04c40c4c to 04d40c63 has its CatchHandler @ 04c40ba0 */
    if (iVar3 <= iVar1) break;
    FUN_06240534((long)&stack0x00000008 + 4,0);
  }
  return;
}


