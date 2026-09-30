/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04a1229c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined8 *puVar1;
  bool in_ZR;
  bool in_CY;
  long in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (in_CY && !in_ZR) {
    puVar1 = (undefined8 *)(unaff_x19 + 0x20 + (long)(int)unaff_w20 * 0x20);
    uVar4 = *puVar1;
    uVar3 = puVar1[3];
    uVar2 = puVar1[2];
    *(undefined8 *)(in_x9 + 0x28) = puVar1[1];
    *(undefined8 *)(in_x9 + 0x20) = uVar4;
    *(undefined8 *)(in_x9 + 0x38) = uVar3;
    *(undefined8 *)(in_x9 + 0x30) = uVar2;
    thunk_FUN_0329bf60(unaff_x19 + 0x20 + param_1 * 0x20 + 0x10,0);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      puVar1[1] = in_stack_00000028;
      *puVar1 = in_stack_00000020;
      puVar1[3] = in_stack_00000038;
      puVar1[2] = in_stack_00000030;
      thunk_FUN_0329bf60(unaff_x19 + (long)(int)unaff_w20 * 0x20 + 0x30,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


