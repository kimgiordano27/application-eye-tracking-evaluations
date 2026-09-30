/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 02cd2044
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_UnityOpenXR__OnSessionStateChange(long param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x29;
  
  uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,20ul>_char_const____18ul__char_const____20ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                    (param_1);
  CAPI_ovr_Message_IsError_m01BAF4B3D9FD119F4E21F6B6A6444321C71DEA49::il2cppPInvokeFunc =
       (code *)(ulong)uVar1;
  if (CAPI_ovr_Message_IsError_m01BAF4B3D9FD119F4E21F6B6A6444321C71DEA49::il2cppPInvokeFunc !=
      (code *)0x0) {
    iVar2 = (*CAPI_ovr_Message_IsError_m01BAF4B3D9FD119F4E21F6B6A6444321C71DEA49::il2cppPInvokeFunc)
                      (*(undefined8 *)(unaff_x29 + -8));
    return iVar2 != 0;
  }
                    /* try { // try from 02cd206c to 02dd20eb has its CatchHandler @ 02cd1f8c */
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x66bc);
}


