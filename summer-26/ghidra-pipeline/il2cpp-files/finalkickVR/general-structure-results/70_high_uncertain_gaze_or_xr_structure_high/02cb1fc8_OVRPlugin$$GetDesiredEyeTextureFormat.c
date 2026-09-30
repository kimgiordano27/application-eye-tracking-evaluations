/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 02cb1fc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_1
*/


void OVRPlugin__GetDesiredEyeTextureFormat(undefined8 param_1)

{
  byte bVar1;
  void *pvVar2;
  Callback_t6FF4DE9C75ADF5326E55DAB2608C15009D179EEE *pCVar3;
  Il2CppObject *pIVar4;
  long unaff_x29;
  
  bVar1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4(param_1,0);
  *(byte *)(unaff_x29 + -0x21) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    ReportingCallbackSample_UpdateConsole_m3D0505F1FF39E32330A5BB77443D1CD082E89FBF
              (*(undefined8 *)(unaff_x29 + -8),
               *(undefined8 *)
                Method_UnityEngine_UI_InputField_<CaretBlink>d__172_System_Collections_IEnumerator_Reset__
              );
    pCVar3 = (Callback_t6FF4DE9C75ADF5326E55DAB2608C15009D179EEE *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Oculus_Interaction_InteractableGroupView_<>c_<_ctor>b__52_1__);
    Callback__ctor_m9B475B251BDCBED3A2B3810691FF30CD20051920
              (pCVar3,*(Il2CppObject **)(unaff_x29 + -8),
               *(long *)Method_Oculus_Interaction_InteractableGroupView_<>c_<_ctor>b__52_2__,
               (MethodInfo *)0x0);
    AbuseReport_SetReportButtonPressedNotificationCallback_mE3BDB631DBAA19BB38942245936330E1271605DC
              (pCVar3,0);
    ReportingCallbackSample_UpdateConsole_m3D0505F1FF39E32330A5BB77443D1CD082E89FBF
              (*(undefined8 *)(unaff_x29 + -8),
               *(undefined8 *)Method_Oculus_Interaction_InteractableGroupView_<>c_<_ctor>b__52_3__,0
              );
  }
  else {
    pIVar4 = *(Il2CppObject **)(unaff_x29 + -0x10);
    NullCheck(pIVar4);
    pvVar2 = (void *)VirtualFuncInvoker0<Error_t0A46640739F2057B84B1EE6489A55DDC224935A4*>::Invoke
                               (4,pIVar4);
    NullCheck(pvVar2);
    ReportingCallbackSample_UpdateConsole_m3D0505F1FF39E32330A5BB77443D1CD082E89FBF
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)((long)pvVar2 + 0x18),0);
  }
  return;
}


