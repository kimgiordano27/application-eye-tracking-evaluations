/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 0346caec
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


byte System_Array_InternalEnumerator<OVRPlugin_Quatf>__Dispose(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  undefined8 uVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while( true ) {
    lVar2 = *(long *)(param_1 + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    uVar4 = *unaff_x20;
    uVar3 = unaff_x20[2];
    *(undefined8 *)(unaff_x25 + 0x18) = unaff_x20[1];
    *(undefined8 *)(unaff_x25 + 0x10) = uVar4;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar3;
    in_stack_00000008 = lVar2;
    uVar1 = thunk_FUN_04dd5180(&stack0x00000008,unaff_x22,0);
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_x23 < unaff_x26;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x00000048,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000038 = in_stack_00000050;
    in_stack_00000030 = in_stack_00000048;
    in_stack_00000040 = in_stack_00000058;
    unaff_x22 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    param_1 = *(long *)(unaff_x19 + 0x38);
  }
  return unaff_w27 & 1;
}


