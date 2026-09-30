/*
FUNCTION_NAME: Users_GetSdkAccounts_m756EE63B19B16A0F96CB7FF45E6F27EB6467B7CB
ENTRY_POINT: 02cecb38
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_t0E461943B20217E934C02BEAE22CBCE722FBAAB1 *
Users_GetSdkAccounts_m756EE63B19B16A0F96CB7FF45E6F27EB6467B7CB(void)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  if ((Users_GetSdkAccounts_m756EE63B19B16A0F96CB7FF45E6F27EB6467B7CB::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_61__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_62__);
    Users_GetSdkAccounts_m756EE63B19B16A0F96CB7FF45E6F27EB6467B7CB::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  if ((bVar2 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    local_18 = (Request_1_t0E461943B20217E934C02BEAE22CBCE722FBAAB1 *)0x0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar3 = CAPI_ovr_User_GetSdkAccounts_m13BCDD03F23F3D902D8C1F63E42584F88125AF6C(0);
    local_18 = (Request_1_t0E461943B20217E934C02BEAE22CBCE722FBAAB1 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_62__);
    Request_1__ctor_m4A7F8E6E9A11EA41E5E1CCD5805EB596C66BAA10
              (local_18,uVar3,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_61__);
  }
  return local_18;
}


