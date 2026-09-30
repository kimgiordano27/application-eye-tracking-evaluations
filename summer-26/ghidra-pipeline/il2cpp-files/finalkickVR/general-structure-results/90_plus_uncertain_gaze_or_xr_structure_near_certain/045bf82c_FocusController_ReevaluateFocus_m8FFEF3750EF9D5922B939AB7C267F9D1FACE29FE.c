/*
FUNCTION_NAME: FocusController_ReevaluateFocus_m8FFEF3750EF9D5922B939AB7C267F9D1FACE29FE
ENTRY_POINT: 045bf82c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FocusController_ReevaluateFocus_m8FFEF3750EF9D5922B939AB7C267F9D1FACE29FE(undefined8 param_1)

{
  bool bVar1;
  byte bVar2;
  Il2CppObject *pIVar3;
  
  if ((FocusController_ReevaluateFocus_m8FFEF3750EF9D5922B939AB7C267F9D1FACE29FE::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FocusController_ReevaluateFocus_m8FFEF3750EF9D5922B939AB7C267F9D1FACE29FE::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar3 = (Il2CppObject *)
           FocusController_get_focusedElement_mC8B530DA2FE09394ADA0A4D25A85DBF5C66853D8(param_1,0);
  pIVar3 = (Il2CppObject *)
           IsInstClass(pIVar3,*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    NullCheck(pIVar3);
    bVar2 = Oculus_Voice_AppVoiceExperience__DeactivateAndAbortRequest(pIVar3,0);
    if ((bVar2 & 1) == 0) {
      bVar1 = true;
    }
    else {
      NullCheck(pIVar3);
      bVar2 = VisualElement_get_visible_m30FB0F3D6A7C6C41088A0744EC8D2696BFCBC0B9(pIVar3,0);
      bVar1 = (bVar2 & 1) == 0;
    }
    if (bVar1) {
      NullCheck(pIVar3);
      VirtualActionInvoker0::Invoke(0x12,pIVar3);
    }
  }
  return;
}


