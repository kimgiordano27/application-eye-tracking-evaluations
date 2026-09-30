/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$set_Item
ENTRY_POINT: 05cd24dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2338) */
/* WARNING: Removing unreachable block (ram,0x05cd2474) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item(void)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000048;
  
  __cxa_end_catch();
  FUN_06daab38(&stack0x00000020,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168));
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540();
  }
  if (unaff_x20 != 0) {
    FUN_076c0384();
    if (*(long *)(unaff_x20 + 0x128) != 0) {
      FUN_071e01f8(*(long *)(unaff_x20 + 0x128),0);
      if (in_stack_00000048._4_1_ != '\0') {
        thunk_FUN_03d180a8();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


