/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 0346c4ec
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


bool System_Array_InternalEnumerator<OVRPlugin_Bone>__Dispose(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar3;
  long unaff_x24;
  long *plVar4;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  uVar3 = 0;
  plVar4 = *(long **)(unaff_x24 + 0x5a8);
  bVar1 = true;
  while( true ) {
    memcpy(&stack0x00000020,(void *)((long)unaff_x21 + uVar3 * *(uint *)(*unaff_x21 + 0x104) + 0x20)
           ,(ulong)*(uint *)(*unaff_x21 + 0x104));
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
    if (*(int *)(*plVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*plVar4);
    }
    uVar2 = UnityEngine_UI_Image__get_minWidth();
    if ((uVar2 & 1) != 0) break;
    uVar3 = uVar3 + 1;
    bVar1 = uVar3 < (param_1 & 0xffffffff);
    if ((param_1 & 0xffffffff) == uVar3) {
      return bVar1;
    }
  }
  return bVar1;
}


