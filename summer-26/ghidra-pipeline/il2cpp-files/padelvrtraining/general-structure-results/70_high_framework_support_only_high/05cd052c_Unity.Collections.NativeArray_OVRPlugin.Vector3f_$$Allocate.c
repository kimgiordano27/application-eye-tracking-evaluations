/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 05cd052c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd05f8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(void)

{
  int iVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 in_stack_00000008;
  
  FUN_071e78b0();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
    uVar4 = 0;
    uVar2 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      if (*(long *)(unaff_x22 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar3 = *(undefined8 *)(unaff_x21 + 0x20 + uVar4 * 8);
      iVar1 = FUN_05a3a438(*(long *)(unaff_x22 + 0x110),uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48));
      if (-1 < iVar1) {
        if (iVar1 < *(int *)(unaff_x22 + 0x108)) {
          *(int *)(unaff_x22 + 0x108) = *(int *)(unaff_x22 + 0x108) + -1;
        }
        if (*(long *)(unaff_x22 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_05a3acc0(*(long *)(unaff_x22 + 0x110),uVar3,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50));
      }
      uVar2 = (ulong)*(uint *)(unaff_x21 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


