/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 05cd040c
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


/* WARNING: Removing unreachable block (ram,0x05cd0484) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((param_1 & 0xffffffff) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    iVar1 = *(int *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x24 + unaff_x23 * 8);
    *(int *)(unaff_x22 + 0x108) = iVar1 + 1;
    if (*(long *)(unaff_x22 + 0x110) == 0) break;
    FUN_05a3a548();
    param_1 = (ulong)*(uint *)(unaff_x21 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_03d180a8();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548(0,iVar1,uVar2);
}


