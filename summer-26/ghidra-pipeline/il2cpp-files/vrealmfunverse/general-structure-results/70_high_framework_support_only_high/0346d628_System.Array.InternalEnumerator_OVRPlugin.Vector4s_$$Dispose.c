/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 0346d628
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


bool System_Array_InternalEnumerator<OVRPlugin_Vector4s>__Dispose(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  
  do {
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x26 == unaff_x23) {
      return unaff_x23 < unaff_x26;
    }
    memcpy(&stack0x00000100,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(&stack0x00000088,&stack0x00000100,0x78);
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000088);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar2);
    }
    memcpy((void *)(unaff_x25 + 0x10),unaff_x20,0x78);
    uVar1 = thunk_FUN_04dd5180();
  } while ((uVar1 & 1) == 0);
  return unaff_x23 < unaff_x26;
}


