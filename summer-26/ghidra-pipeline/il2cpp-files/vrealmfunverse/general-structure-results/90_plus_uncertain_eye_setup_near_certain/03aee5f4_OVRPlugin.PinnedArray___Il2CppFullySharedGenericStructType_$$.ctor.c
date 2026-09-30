/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 03aee5f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_02b76218(param_1);
  System_Buffers_TlsOverPerCoreLockedStacksArrayPool_PerCoreLockedStacks<GrabFreeTransformer_GrabPointDelta>__Trim
            (&stack0x00000068);
  memcpy(&stack0x00000000,&stack0x00000068,0x68);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
            (*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


