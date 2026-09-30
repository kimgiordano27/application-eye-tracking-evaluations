/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 02cd2344
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
  uVar1 = SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAddressAtUnchecked
                    (*(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(unaff_x29 + -0x10)
                     ,0);
  uVar1 = (*CAPI_ovr_Microphone_GetPCMFloat_mCD1F3723161397AD9A6D3A45BA5BE8B8FD6C438B::
            il2cppPInvokeFunc)
                    (*(undefined8 *)(unaff_x29 + -8),uVar1,*(undefined8 *)(unaff_x29 + -0x18));
  return uVar1;
}


