/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04c42604
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c42690) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long unaff_x29;
  
  thunk_FUN_03799158();
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
  (**(code **)(unaff_x22 + 0x10))();
                    /* try { // try from 04c42644 to 04d426f3 has its CatchHandler @ 04c426f4 */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30))();
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


