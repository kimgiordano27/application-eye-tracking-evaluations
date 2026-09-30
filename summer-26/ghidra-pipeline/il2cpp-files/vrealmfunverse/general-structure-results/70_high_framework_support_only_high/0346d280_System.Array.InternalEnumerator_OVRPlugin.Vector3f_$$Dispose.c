/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 0346d280
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


bool System_Array_InternalEnumerator<OVRPlugin_Vector3f>__Dispose(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x22;
  ulong uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar2 = FUN_04d941cc(param_1,0);
  if ((int)uVar2 < 1) {
    bVar1 = false;
  }
  else {
    uVar5 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000030,
             (void *)((long)unaff_x22 + uVar5 * *(uint *)(*unaff_x22 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x22 + 0x104));
      in_stack_00000028 = in_stack_00000038;
      in_stack_00000020 = in_stack_00000030;
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar4);
      }
      uVar3 = thunk_FUN_04dd5180();
      if ((uVar3 & 1) != 0) {
        return bVar1;
      }
      uVar5 = uVar5 + 1;
      bVar1 = uVar5 < uVar2;
    } while (uVar2 != uVar5);
  }
  return bVar1;
}


