/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 05cd29d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2a20) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals(void)

{
  int iVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar2;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
  while( true ) {
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_03d180a8();
      }
      return;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) break;
    if (*(long *)(unaff_x22 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(undefined8 *)(unaff_x25 + unaff_x24 * 8);
    iVar1 = FUN_05a3a438(*(long *)(unaff_x22 + 0x110),uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48));
    if (-1 < iVar1) {
      if (iVar1 < *(int *)(unaff_x22 + 0x108)) {
        *(int *)(unaff_x22 + 0x108) = *(int *)(unaff_x22 + 0x108) + -1;
      }
      if (*(long *)(unaff_x22 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_05a3acc0(*(long *)(unaff_x22 + 0x110),uVar2,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


