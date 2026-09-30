/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 02cbedac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_6;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_faceTrackingEnabled(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
  if ((CAPI_ovr_GroupPresence_Set_m50197ABCC587EFC97A3534F72AF4B05A61277842::il2cppPInvokeFunc ==
       (code *)0x0) &&
     (CAPI_ovr_GroupPresence_Set_m50197ABCC587EFC97A3534F72AF4B05A61277842::il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(long),18ul,22ul>_char_const____18ul__char_const____22ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_GroupPresence_Set_m50197ABCC587EFC97A3534F72AF4B05A61277842::il2cppPInvokeFunc ==
     (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x3ee0);
  }
  uVar1 = (*CAPI_ovr_GroupPresence_Set_m50197ABCC587EFC97A3534F72AF4B05A61277842::il2cppPInvokeFunc)
                    (uStack0000000000000018);
  return uVar1;
}


