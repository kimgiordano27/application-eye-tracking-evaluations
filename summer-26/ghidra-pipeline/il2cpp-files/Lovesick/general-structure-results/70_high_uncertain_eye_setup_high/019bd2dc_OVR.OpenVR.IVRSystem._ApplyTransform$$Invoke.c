/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._ApplyTransform$$Invoke
ENTRY_POINT: 019bd2dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRSystem__ApplyTransform__Invoke(void)

{
  long lVar1;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  lVar1 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar1 != 0) {
    FUN_01298da0(lVar1,*(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo);
    *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


