/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPoses
ENTRY_POINT: 02cb1ab8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerDrivenHandPoses(void)

{
  void *pvVar1;
  byte in_w8;
  long unaff_x29;
  Il2CppObject *pIStack0000000000000010;
  
  if ((in_w8 & 1) != 0) {
    pIStack0000000000000010 = *(Il2CppObject **)(unaff_x29 + -0x10);
    NullCheck(pIStack0000000000000010);
    pvVar1 = (void *)VirtualFuncInvoker0<Error_t0A46640739F2057B84B1EE6489A55DDC224935A4*>::Invoke
                               (4,pIStack0000000000000010);
    NullCheck(pvVar1);
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)((long)pvVar1 + 0x18),0);
  }
  return;
}


