/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02345528
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
              (void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  lVar2 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
      *(undefined8 *)(lVar2 + 0x48) = in_stack_00000068;
      *(undefined8 *)(lVar2 + 0x40) = in_stack_00000060;
      *(undefined8 *)(lVar2 + 0x58) = in_stack_00000078;
      *(undefined8 *)(lVar2 + 0x50) = in_stack_00000070;
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
      *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
      *(undefined8 *)(lVar2 + 0x38) = in_stack_00000058;
      *(undefined8 *)(lVar2 + 0x30) = in_stack_00000050;
      thunk_FUN_01e10808(lVar2 + 0x20,0);
    }
    else {
      FUN_023453ec();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


