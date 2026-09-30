/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 01a222d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = Method_UnityEngine_Rendering_CoreUnsafeUtils_CopyTo<int>__;
  if ((*(byte *)(unaff_x20 + 0xa1e) & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_CoreUnsafeUtils_CopyTo<int>__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_Dispose__);
    *(undefined1 *)(unaff_x20 + 0xa1e) = 1;
  }
  FUN_012833c4(param_1,*(undefined8 *)puVar1);
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_01a2212c(param_1);
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a22344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}


