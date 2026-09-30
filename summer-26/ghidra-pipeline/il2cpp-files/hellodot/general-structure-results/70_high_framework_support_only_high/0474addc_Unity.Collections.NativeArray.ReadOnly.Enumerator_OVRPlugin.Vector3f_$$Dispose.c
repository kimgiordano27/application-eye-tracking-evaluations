/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 0474addc
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 *puVar2;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  puVar2 = (undefined8 *)(unaff_x22 + 0x40);
  while (unaff_x23 < *(uint *)(unaff_x22 + 0x18)) {
    if (-1 < *(int *)(puVar2 + -4)) {
      in_stack_00000070 = puVar2[-1];
      in_stack_00000068 = puVar2[-2];
      in_stack_00000060 = puVar2[-3];
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      FUN_037e2e10(&stack0x00000040,&stack0x00000060,*puVar2,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) break;
      lVar1 = (long)(int)unaff_w20;
      unaff_w20 = unaff_w20 + 1;
      lVar1 = unaff_x21 + lVar1 * 0x20;
      *(undefined8 *)(lVar1 + 0x28) = in_stack_00000048;
      *(undefined8 *)(lVar1 + 0x20) = in_stack_00000040;
      *(undefined8 *)(lVar1 + 0x38) = in_stack_00000058;
      *(undefined8 *)(lVar1 + 0x30) = in_stack_00000050;
    }
    unaff_x23 = unaff_x23 + 1;
    puVar2 = puVar2 + 5;
    if (unaff_x24 == unaff_x23) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


