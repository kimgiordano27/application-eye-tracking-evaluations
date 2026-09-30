/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 05cd2858
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd28ac) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetEnumerator
               (long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  
  while( true ) {
    FUN_05a3a548(param_2,param_3,param_4,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x40));
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_03d180a8();
      }
      return;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) break;
    param_3 = (ulong)*(uint *)(unaff_x22 + 0x108);
    param_2 = *(long *)(unaff_x22 + 0x110);
    param_4 = *(undefined8 *)(unaff_x24 + unaff_x23 * 8);
    *(uint *)(unaff_x22 + 0x108) = *(uint *)(unaff_x22 + 0x108) + 1;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    param_1 = *(long *)(unaff_x20 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


