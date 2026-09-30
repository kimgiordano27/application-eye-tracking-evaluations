/*
FUNCTION_NAME: OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14
ENTRY_POINT: 02dd981c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_7;functionality_data_collection_or_telemetry_hits_7
*/


undefined4
OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14
          (String_t *param_1,String_t *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14::il2cppPInvokeFunc ==
      (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(char*,char*),10ul,15ul>_char_const____10ul__char_const____15ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ("OVRPlugin","ovrp_SendEvent");
    OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14::il2cppPInvokeFunc =
         (code *)(ulong)uVar1;
    if (OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14::il2cppPInvokeFunc ==
        (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x4c9b);
    }
  }
  pvVar3 = (void *)il2cpp_codegen_marshal_string(param_1);
  pvVar4 = (void *)il2cpp_codegen_marshal_string(param_2);
  uVar2 = (*OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14::il2cppPInvokeFunc)
                    (pvVar3,pvVar4);
  il2cpp_codegen_marshal_free(pvVar3);
  il2cpp_codegen_marshal_free(pvVar4);
  return uVar2;
}


