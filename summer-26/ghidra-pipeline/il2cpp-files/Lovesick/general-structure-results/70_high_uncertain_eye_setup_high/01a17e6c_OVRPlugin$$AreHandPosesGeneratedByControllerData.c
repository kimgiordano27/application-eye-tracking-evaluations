/*
FUNCTION_NAME: OVRPlugin$$AreHandPosesGeneratedByControllerData
ENTRY_POINT: 01a17e6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__AreHandPosesGeneratedByControllerData(ulong param_1)

{
  byte bVar1;
  long *plVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_SkinnedMeshRenderer_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x99d) = 1;
  }
  plVar2 = (long *)FUN_01a17d8c();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)UnityEngine_SkinnedMeshRenderer_TypeInfo + 300);
    if (*(byte *)(*plVar2 + 300) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)UnityEngine_SkinnedMeshRenderer_TypeInfo) {
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}


