/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0464c500
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
          (long param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  long *unaff_x20;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(param_1 + 0x40)) {
    pauVar2 = (undefined1 (*) [16])thunk_FUN_03ac7604();
    auVar1 = *pauVar2;
    FUN_0666a9a4(&stack0x00000018,0);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8ad40();
}


