/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 04caa164
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(void)

{
  long lVar1;
  undefined8 *puVar2;
  int in_w8;
  ulong in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000068;
  
  while (unaff_x26 < in_x9) {
    if (-1 < *(int *)(unaff_x27 + -2)) {
      in_stack_00000050 = unaff_x27[2];
      in_stack_00000048 = unaff_x27[1];
      in_stack_00000040 = *unaff_x27;
      thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78),
                         &stack0x00000040);
      FUN_055cd8c4();
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
      lVar1 = unaff_x23 + (long)(int)unaff_w19 * 0x10;
      puVar2 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *puVar2 = 0;
      unaff_w19 = unaff_w19 + 1;
      thunk_FUN_02f411dc(puVar2,0);
      in_w8 = *(int *)(unaff_x21 + 0x20);
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_x27 = unaff_x27 + 5;
    if ((long)in_w8 <= (long)unaff_x26) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000068) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    in_x9 = (ulong)*(uint *)(unaff_x25 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


