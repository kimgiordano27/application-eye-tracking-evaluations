/*
FUNCTION_NAME: OVRPlugin$$get_audioOutId
ENTRY_POINT: 02ca9ef4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__get_audioOutId(void)

{
  byte bVar1;
  undefined4 uVar2;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_WebSocketSharp_Net_WebSockets_HttpListenerWebSocketContext_<get_SecWebSocketProtocols>d__28_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  OVRLipSyncContext_ProcessAudioSamples_m978496F3EE2E028A70ACE94B1959521B193671DF::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_WebSocketSharp_Net_WebSockets_HttpListenerWebSocketContext_<get_SecWebSocketProtocols>d__28_System_Collections_IEnumerator_Reset__
            );
  uVar2 = OVRLipSync_IsInitialized_m5C2C8059233A23524755FCE74D6EB39A137F0DE9_inline
                    ((MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
  if (*(int *)(unaff_x29 + -0x24) == 0) {
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                      (*(undefined8 *)(unaff_x29 + -0x30),0);
    *(byte *)(unaff_x29 + -0x31) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x31) & 1) == 0) {
      uStack000000000000002c = *(undefined4 *)(unaff_x29 + -0x14);
      OVRLipSyncContext_PreprocessAudioSamples_m43A04A34249FCF972BFB003218F9D9C40BDC0F84
                (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),
                 uStack000000000000002c);
      uStack000000000000001c = *(undefined4 *)(unaff_x29 + -0x14);
      OVRLipSyncContext_ProcessAudioSamplesRaw_m49D38D12F79C89DFA4636B46693979058CEF8B39
                (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),
                 uStack000000000000001c,0);
      uStack000000000000000c = *(undefined4 *)(unaff_x29 + -0x14);
      OVRLipSyncContext_PostprocessAudioSamples_m2BC51CAE2B76C7763168CBF55CD938E44A078DA0
                (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),
                 uStack000000000000000c,0);
    }
  }
  return;
}


