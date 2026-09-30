/*
FUNCTION_NAME: OVRP_1_72_0_ovrp_RequestSceneCapture_m2ED0DC9C9919F8939632597DB5B751A70837ADF3
ENTRY_POINT: 02ddfcc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_12;functionality_data_collection_or_telemetry_hits_12
*/


undefined4
OVRP_1_72_0_ovrp_RequestSceneCapture_m2ED0DC9C9919F8939632597DB5B751A70837ADF3
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if (OVRP_1_72_0_ovrp_RequestSceneCapture_m2ED0DC9C9919F8939632597DB5B751A70837ADF3::
      il2cppPInvokeFunc == (code *)0x0) {
    local_2c = 0x10;
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(SceneCaptureRequestInternal_t232E29D0D8F616E0F8F063539FE5207DD545DA71_marshaled_pinvoke*,unsigned_long*),10ul,25ul>_char_const____10ul__char_const____25ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((SceneCaptureRequestInternal_t232E29D0D8F616E0F8F063539FE5207DD545DA71_marshaled_pinvoke
                        *)"OVRPlugin",(ulong *)"ovrp_RequestSceneCapture");
    OVRP_1_72_0_ovrp_RequestSceneCapture_m2ED0DC9C9919F8939632597DB5B751A70837ADF3::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_72_0_ovrp_RequestSceneCapture_m2ED0DC9C9919F8939632597DB5B751A70837ADF3::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x5d53);
    }
  }
  local_38 = (undefined8 *)0x0;
  local_48 = 0;
  local_40 = 0;
  SceneCaptureRequestInternal_t232E29D0D8F616E0F8F063539FE5207DD545DA71_marshal_pinvoke(local_18);
  local_38 = &local_48;
  local_4c = (*OVRP_1_72_0_ovrp_RequestSceneCapture_m2ED0DC9C9919F8939632597DB5B751A70837ADF3::
               il2cppPInvokeFunc)(&local_48,local_20);
  local_60 = 0;
  uStack_58 = 0;
  SceneCaptureRequestInternal_t232E29D0D8F616E0F8F063539FE5207DD545DA71_marshal_pinvoke_back
            (local_38,&local_60);
  SceneCaptureRequestInternal_t232E29D0D8F616E0F8F063539FE5207DD545DA71_marshal_pinvoke_cleanup
            (local_38);
  local_18[1] = uStack_58;
  *local_18 = local_60;
  Il2CppCodeGenWriteBarrier((void **)(local_18 + 1),(void *)0x0);
  return local_4c;
}


