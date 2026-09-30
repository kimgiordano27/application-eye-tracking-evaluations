/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 02cb1d48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__IsControllerDrivenHandPosesEnabled(void)

{
  void *pvVar1;
  undefined1 in_w8;
  Il2CppObject *pIVar2;
  long unaff_x29;
  
  *(undefined1 *)(unaff_x29 + -0x21) = in_w8;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    ReportingCallbackSample_UpdateConsole_m3D0505F1FF39E32330A5BB77443D1CD082E89FBF
              (*(undefined8 *)(unaff_x29 + -8),
               *(undefined8 *)Method_Oculus_Interaction_InteractableGroupView_<>c_<_ctor>b__52_0__);
    AbuseReport_ReportRequestHandled_m212E219D7C2C8BA8AC766B3C8CBD12F9B0B95B7F(1,0);
    ReportingCallbackSample_UpdateConsole_m3D0505F1FF39E32330A5BB77443D1CD082E89FBF
              (*(undefined8 *)(unaff_x29 + -8),
               *(undefined8 *)
                Method_Oculus_Interaction_InteractableGroup_<>c_<InjectInteractables>b__27_0__,0);
  }
  else {
    pIVar2 = *(Il2CppObject **)(unaff_x29 + -0x10);
    NullCheck(pIVar2);
    pvVar1 = (void *)VirtualFuncInvoker0<Error_t0A46640739F2057B84B1EE6489A55DDC224935A4*>::Invoke
                               (4,pIVar2);
    NullCheck(pvVar1);
    ReportingCallbackSample_UpdateConsole_m3D0505F1FF39E32330A5BB77443D1CD082E89FBF
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)((long)pvVar1 + 0x18),0);
  }
  return;
}


