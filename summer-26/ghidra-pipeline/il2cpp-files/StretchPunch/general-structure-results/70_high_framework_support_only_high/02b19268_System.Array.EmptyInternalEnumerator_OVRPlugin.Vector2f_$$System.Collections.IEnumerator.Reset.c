/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02b19268
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  uint unaff_w29;
  long in_stack_00000000;
  
  if ((int)unaff_w29 < 0) {
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) goto LAB_02b19368;
    if (*(uint *)(lVar2 + 0x18) <= (uint)in_stack_00000000) goto LAB_02b1936c;
    *(int *)(lVar2 + in_stack_00000000 * 4 + 0x20) =
         *(int *)(unaff_x26 + unaff_x28 * 0x18 + 0x24) + 1;
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 == 0) {
LAB_02b19368:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w29) {
LAB_02b1936c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *(undefined4 *)(lVar2 + (ulong)unaff_w29 * 0x18 + 0x24) =
         *(undefined4 *)(unaff_x26 + unaff_x28 * 0x18 + 0x24);
  }
  *unaff_x25 = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
  lVar2 = unaff_x26 + unaff_x28 * 0x18;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w24;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


