/*
FUNCTION_NAME: OVRPlugin$$GetAdaptiveGPUPerformanceScale
ENTRY_POINT: 02cb7e48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetAdaptiveGPUPerformanceScale(undefined8 param_1,undefined8 param_2)

{
  void *__s;
  long unaff_x29;
  int iStack000000000000000c;
  undefined8 in_stack_00000050;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if (CAPI_ovr_Platform_InitializeStandaloneOculus_m8F5C6C7A700E9D61C8383EAE2E69BA5CDBB4B75E::
      il2cppPInvokeFunc == (code *)0x0) {
    *(undefined4 *)(unaff_x29 + -0x14) = 8;
    CAPI_ovr_Platform_InitializeStandaloneOculus_m8F5C6C7A700E9D61C8383EAE2E69BA5CDBB4B75E::
    il2cppPInvokeFunc =
         (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(OculusInitParams_tF25C1FC0FC0A2104F30C45AD49F5DFAC2BF5CE93_marshaled_pinvoke*),18ul,40ul>_char_const____18ul__char_const____40ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                           ((OculusInitParams_tF25C1FC0FC0A2104F30C45AD49F5DFAC2BF5CE93_marshaled_pinvoke
                             *)"ovrplatformloader");
    if (CAPI_ovr_Platform_InitializeStandaloneOculus_m8F5C6C7A700E9D61C8383EAE2E69BA5CDBB4B75E::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x3071);
    }
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  __s = (void *)(unaff_x29 + -0x48);
  iStack000000000000000c = 0;
  memset(__s,0,0x28);
  OculusInitParams_tF25C1FC0FC0A2104F30C45AD49F5DFAC2BF5CE93_marshal_pinvoke
            (*(undefined8 *)(unaff_x29 + -8),__s);
  *(void **)(unaff_x29 + -0x20) = __s;
  in_stack_00000050 =
       (*CAPI_ovr_Platform_InitializeStandaloneOculus_m8F5C6C7A700E9D61C8383EAE2E69BA5CDBB4B75E::
         il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -0x20));
  memset(&stack0x00000028,iStack000000000000000c,0x28);
  OculusInitParams_tF25C1FC0FC0A2104F30C45AD49F5DFAC2BF5CE93_marshal_pinvoke_back
            (*(undefined8 *)(unaff_x29 + -0x20),&stack0x00000028);
  OculusInitParams_tF25C1FC0FC0A2104F30C45AD49F5DFAC2BF5CE93_marshal_pinvoke_cleanup
            (*(undefined8 *)(unaff_x29 + -0x20));
  memcpy(*(void **)(unaff_x29 + -8),&stack0x00000028,0x28);
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 8),(void *)0x0);
  return in_stack_00000050;
}


