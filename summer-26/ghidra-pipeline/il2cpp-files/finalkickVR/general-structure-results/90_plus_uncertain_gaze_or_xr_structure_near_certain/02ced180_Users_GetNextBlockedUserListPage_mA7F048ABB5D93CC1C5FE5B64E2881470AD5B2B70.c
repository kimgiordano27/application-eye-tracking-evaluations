/*
FUNCTION_NAME: Users_GetNextBlockedUserListPage_mA7F048ABB5D93CC1C5FE5B64E2881470AD5B2B70
ENTRY_POINT: 02ced180
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_12;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


Request_1_tA1A1CD1F5D29C229C28D2A0EC82D151542DB3EEA *
Users_GetNextBlockedUserListPage_mA7F048ABB5D93CC1C5FE5B64E2881470AD5B2B70
          (DeserializableList_1_t3F0651D93C15E0EF094F448F037075BB204D3B15 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_18;
  
  puVar2 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((Users_GetNextBlockedUserListPage_mA7F048ABB5D93CC1C5FE5B64E2881470AD5B2B70::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_8__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_9__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_56__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_57__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_FovfPair_get_Item__);
    Users_GetNextBlockedUserListPage_mA7F048ABB5D93CC1C5FE5B64E2881470AD5B2B70::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  bVar3 = DeserializableList_1_get_HasNextPage_m6A2F7F020970030E784A1B206E33E5F49D265E73
                    (param_1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_8__);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)Method_OVRPlugin_FovfPair_get_Item__,0);
    local_18 = (Request_1_tA1A1CD1F5D29C229C28D2A0EC82D151542DB3EEA *)0x0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar3 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
    if ((bVar3 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar6 = *(undefined8 *)(lVar5 + 8);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar6,0);
      local_18 = (Request_1_tA1A1CD1F5D29C229C28D2A0EC82D151542DB3EEA *)0x0;
    }
    else {
      NullCheck(param_1);
      uVar6 = DeserializableList_1_get_NextUrl_mF0066A747E01BD90FBFEF95A8CDE5E1E677CBCA8_inline
                        (param_1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_9__);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
                );
      uVar4 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                        (uVar6,0x7c2afdcb,0);
      local_18 = (Request_1_tA1A1CD1F5D29C229C28D2A0EC82D151542DB3EEA *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_57__);
      Request_1__ctor_m54C5E77F18866F9D37A78D38540C1A9098FFA69A
                (local_18,uVar4,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_56__);
    }
  }
  return local_18;
}


