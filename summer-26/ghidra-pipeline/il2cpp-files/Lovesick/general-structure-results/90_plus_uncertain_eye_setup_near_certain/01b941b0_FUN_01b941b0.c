/*
FUNCTION_NAME: FUN_01b941b0
ENTRY_POINT: 01b941b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01b941b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
                    /* try { // try from 01b941b8 to 01c941bf has its CatchHandler @ 01b9426c */
  if ((DAT_0377e634 & 1) == 0) {
                    /* try { // try from 01b941d4 to 01c941d7 has its CatchHandler @ 01b9425c */
                    /* try { // try from 01b941d8 to 01c941e3 has its CatchHandler @ 01b94268 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_11__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_Clear__
                      );
    DAT_0377e634 = 1;
  }
  puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_11__;
  puVar1 = 
  Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_Clear__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_02020524(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar2,8,0);
  if (lVar4 != 0) {
    FUN_01604318(lVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


