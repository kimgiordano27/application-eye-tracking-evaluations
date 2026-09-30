/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 05d049c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
          (ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
                    /* try { // try from 05d049c8 to 05e04a57 has its CatchHandler @ 05d048b0 */
  if ((param_1 & 1) == 0) {
    FUN_04980b34();
  }
  uVar1 = thunk_FUN_04983f60();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x10))();
  return uVar1;
}


