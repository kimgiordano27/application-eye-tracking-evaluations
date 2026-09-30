/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Equality
ENTRY_POINT: 05cd2ac0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2b20) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Equality(void)

{
  int iVar1;
  long lVar2;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  FUN_071e78b0();
  lVar2 = *(long *)(unaff_x21 + 0x110);
                    /* try { // try from 05cd2ac8 to 05dd2acb has its CatchHandler @ 05cd2bd4 */
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
                    /* try { // try from 05cd2ae4 to 05dd2bd3 has its CatchHandler @ 05cd2be0 */
      FUN_0719b698(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    *(undefined4 *)(unaff_x21 + 0x108) = 0;
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_03d180a8();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


