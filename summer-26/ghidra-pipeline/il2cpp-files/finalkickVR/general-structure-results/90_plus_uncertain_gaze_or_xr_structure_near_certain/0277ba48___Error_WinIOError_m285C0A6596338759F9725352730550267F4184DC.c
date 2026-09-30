/*
FUNCTION_NAME: __Error_WinIOError_m285C0A6596338759F9725352730550267F4184DC
ENTRY_POINT: 0277ba48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 245
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_data_collection_or_telemetry_hits_1
*/


void __Error_WinIOError_m285C0A6596338759F9725352730550267F4184DC(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  String_t *pSVar6;
  Il2CppArray *pIVar7;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  Exception_t *pEVar10;
  MethodInfo *pMVar11;
  
  puVar3 = Method_WebSocketSharp_Net_HttpListenerResponse_set_StatusCode__;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
  ;
  pSVar6 = (String_t *)
           __Error_GetDisplayablePath_mC9D0C268AB6B97612B83CD430DD529C0BF1B2B25
                     (param_2,param_1 == 0x7b || param_1 == 0xa1,0);
  if (param_1 < 0x51) {
    if (param_1 < 0x10) {
      uVar5 = il2cpp_codegen_subtract<int,int>(param_1,2);
      switch(uVar5) {
      case 0:
        NullCheck(pSVar6);
        iVar4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                          (pSVar6,(MethodInfo *)0x0);
        if (iVar4 == 0) {
          il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
          uVar8 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
          pIVar9 = (Il2CppClass *)
                   il2cpp_codegen_initialize_runtime_metadata_inline
                             ((ulong *)
                              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                             );
          pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
          FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(pEVar10,uVar8,0);
          pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar11);
        }
        pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
        pIVar7 = (Il2CppArray *)SZArrayNew(pIVar9,1);
        NullCheck(pIVar7);
        ArrayElementTypeCheck(pIVar7,pSVar6);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar7,0,
                   (Il2CppObject *)pSVar6);
        uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                          );
        uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                          (uVar8,pIVar7);
        pIVar9 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                           );
        pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
        FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677
                  (pEVar10,uVar8,pSVar6,0);
        pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar11);
      case 1:
        NullCheck(pSVar6);
        iVar4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                          (pSVar6,(MethodInfo *)0x0);
        if (iVar4 == 0) {
          il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_Oculus_Platform_CAPI_StringToNative__);
          uVar8 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
          pIVar9 = (Il2CppClass *)
                   il2cpp_codegen_initialize_runtime_metadata_inline
                             ((ulong *)
                              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                             );
          pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
          DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235
                    (pEVar10,uVar8,0);
          pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar11);
        }
        pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
        pIVar7 = (Il2CppArray *)SZArrayNew(pIVar9,1);
        NullCheck(pIVar7);
        ArrayElementTypeCheck(pIVar7,pSVar6);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar7,0,
                   (Il2CppObject *)pSVar6);
        uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
        uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                          (uVar8,pIVar7);
        pIVar9 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                           );
        pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
        DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235(pEVar10,uVar8,0);
        pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar11);
      case 2:
        break;
      case 3:
        NullCheck(pSVar6);
        iVar4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                          (pSVar6,(MethodInfo *)0x0);
        if (iVar4 == 0) {
          il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                    );
          uVar8 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
          pIVar9 = (Il2CppClass *)
                   il2cpp_codegen_initialize_runtime_metadata_inline
                             ((ulong *)
                              Method_System_Runtime_Remoting_Messaging_CADMethodRef_Resolve__);
          pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
          UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6
                    (pEVar10,uVar8,0);
          pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar11);
        }
        pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
        pIVar7 = (Il2CppArray *)SZArrayNew(pIVar9,1);
        NullCheck(pIVar7);
        ArrayElementTypeCheck(pIVar7,pSVar6);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar7,0,
                   (Il2CppObject *)pSVar6);
        uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)Method_System_Globalization_Calendar_ToFourDigitYear__);
        uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                          (uVar8,pIVar7);
        pIVar9 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_Resolve__
                           );
        pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
        UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6(pEVar10,uVar8,0)
        ;
        pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar11);
      default:
        if (param_1 == 0xf) {
          pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2)
          ;
          pIVar7 = (Il2CppArray *)SZArrayNew(pIVar9,1);
          NullCheck(pIVar7);
          ArrayElementTypeCheck(pIVar7,pSVar6);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar7,0,
                     (Il2CppObject *)pSVar6);
          uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)Method_Oculus_Platform_Models_HttpTransferUpdate__ctor__);
          uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                            (uVar8,pIVar7);
          pIVar9 = (Il2CppClass *)
                   il2cpp_codegen_initialize_runtime_metadata_inline
                             ((ulong *)Method_WebSocketSharp_Net_HttpUtility_HtmlAttributeEncode__);
          pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
          DriveNotFoundException__ctor_m057189B0AADCC86E2B87B5BBD36457432C814EB5(pEVar10,uVar8,0);
          pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar11);
        }
      }
    }
    else {
      if (param_1 == 0x20) {
        NullCheck(pSVar6);
        iVar4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                          (pSVar6,(MethodInfo *)0x0);
        if (iVar4 == 0) {
          il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
          uVar8 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
          uVar5 = System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed(0x20,0);
          pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1)
          ;
          pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
          IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(pEVar10,uVar8,uVar5,0);
          pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar11);
        }
        pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
        pIVar7 = (Il2CppArray *)SZArrayNew(pIVar9,1);
        NullCheck(pIVar7);
        ArrayElementTypeCheck(pIVar7,pSVar6);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar7,0,
                   (Il2CppObject *)pSVar6);
        uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
        uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                          (uVar8,pIVar7);
        uVar5 = System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed(0x20,0);
        pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
        IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(pEVar10,uVar8,uVar5,0);
        pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar11);
      }
      if (param_1 == 0x50) {
        NullCheck(pSVar6);
        iVar4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                          (pSVar6,(MethodInfo *)0x0);
        if (iVar4 != 0) {
          pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2)
          ;
          pIVar7 = (Il2CppArray *)SZArrayNew(pIVar9,1);
          NullCheck(pIVar7);
          ArrayElementTypeCheck(pIVar7,pSVar6);
          ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                    ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar7,0,
                     (Il2CppObject *)pSVar6);
          uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__
                            );
          uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                            (uVar8,pIVar7);
          uVar5 = System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed(0x50,0);
          pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1)
          ;
          pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
          IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(pEVar10,uVar8,uVar5,0);
          pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3)
          ;
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar10,pMVar11);
        }
      }
    }
  }
  else if (param_1 < 0xb8) {
    if (param_1 == 0x57) {
      uVar8 = Win32Native_GetMessage_m1EE5BE889F1BB4F4ABA06C2B7543BF5E672409FA(0x57);
      uVar5 = System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed(0x57,0);
      pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
      pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
      IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(pEVar10,uVar8,uVar5,0);
      pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar10,pMVar11);
    }
    if (param_1 == 0xb7) {
      NullCheck(pSVar6);
      iVar4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                        (pSVar6,(MethodInfo *)0x0);
      if (iVar4 != 0) {
        pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
        pIVar7 = (Il2CppArray *)SZArrayNew(pIVar9,1);
        NullCheck(pIVar7);
        ArrayElementTypeCheck(pIVar7,pSVar6);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)pIVar7,0,
                   (Il2CppObject *)pSVar6);
        uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_WebSocketSharp_Net_WebSockets_HttpListenerWebSocketContext_Close__
                          );
        uVar8 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259
                          (uVar8,pIVar7);
        uVar5 = System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed(0xb7,0);
        pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
        IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(pEVar10,uVar8,uVar5,0);
        pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar11);
      }
    }
  }
  else {
    if (param_1 == 0xce) {
      il2cpp_codegen_initialize_runtime_metadata_inline
                ((ulong *)Method_WebSocketSharp_Net_HttpStreamAsyncResult_<Complete>b__19_0__);
      uVar8 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
      pIVar9 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__)
      ;
      pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
      PathTooLongException__ctor_m2E98EE527C0503C02F7305BC57045AB86BB202A7(pEVar10,uVar8,0);
      pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar10,pMVar11);
    }
    if (param_1 == 0x3e3) {
      pIVar9 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>__ctor__);
      pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
      OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(pEVar10,0);
      pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar10,pMVar11);
    }
  }
  uVar8 = Win32Native_GetMessage_m1EE5BE889F1BB4F4ABA06C2B7543BF5E672409FA(param_1);
  uVar5 = System_Runtime_Serialization_ObjectHolder__set_ValueTypeFixupPerformed(param_1,0);
  pIVar9 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
  pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
  IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(pEVar10,uVar8,uVar5,0);
  pMVar11 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar10,pMVar11);
}


