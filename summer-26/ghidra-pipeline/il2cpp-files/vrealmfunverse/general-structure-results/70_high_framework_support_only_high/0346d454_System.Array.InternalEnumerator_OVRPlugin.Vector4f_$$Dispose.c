/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 0346d454
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    if ((*(ushort *)(*(long *)(param_1 + 8) + 0x135) & 1) == 0) {
      FUN_02b76218(*(long *)(param_1 + 8));
    }
    uVar2 = *unaff_x20;
    uVar4 = unaff_x20[3];
    uVar3 = unaff_x20[2];
    uVar6 = unaff_x20[5];
    uVar5 = unaff_x20[4];
    *(undefined8 *)(unaff_x25 + 0x18) = unaff_x20[1];
    *(undefined8 *)(unaff_x25 + 0x10) = uVar2;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x38) = uVar6;
    *(undefined8 *)(unaff_x25 + 0x30) = uVar5;
    uVar1 = thunk_FUN_04dd5180();
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_x23 < unaff_x26;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x00000070,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000058 = in_stack_00000088;
    in_stack_00000050 = in_stack_00000080;
    in_stack_00000068 = in_stack_00000098;
    in_stack_00000060 = in_stack_00000090;
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000040);
    param_1 = *(long *)(unaff_x19 + 0x38);
  }
  return unaff_w27 & 1;
}


