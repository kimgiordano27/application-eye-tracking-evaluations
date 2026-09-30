/*
FUNCTION_NAME: OVRBody_OnEnable_m3DD0D92443263175FBC34759739650C8BC624B47
ENTRY_POINT: 02d35d54
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRBody_OnEnable_m3DD0D92443263175FBC34759739650C8BC624B47(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  puVar1 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  if ((OVRBody_OnEnable_m3DD0D92443263175FBC34759739650C8BC624B47::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_WebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__35_System_Collections_IEnumerator_Reset__
              );
    OVRBody_OnEnable_m3DD0D92443263175FBC34759739650C8BC624B47::s_Il2CppMethodInitialized = 1;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  piVar5 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  uVar3 = il2cpp_codegen_add<int,int>(*piVar5,1);
  puVar6 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *puVar6 = uVar3;
  bVar2 = OVRBody_StartBodyTracking_m3B34597CBAD1D166AE2FB29C0AAD47CDEEDA0833(param_1,0);
  if ((bVar2 & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,0,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    iVar4 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
    if (iVar4 == 3) {
      OVRBody_GetBodyState_mF9F84B899247145698DB7831612F7613AF679D76(0,param_1,0xffffffff,0);
    }
    else {
      Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_WebSocketSharp_Net_WebSockets_TcpListenerWebSocketContext_<get_SecWebSocketProtocols>d__35_System_Collections_IEnumerator_Reset__
                 ,0);
    }
  }
  return;
}


