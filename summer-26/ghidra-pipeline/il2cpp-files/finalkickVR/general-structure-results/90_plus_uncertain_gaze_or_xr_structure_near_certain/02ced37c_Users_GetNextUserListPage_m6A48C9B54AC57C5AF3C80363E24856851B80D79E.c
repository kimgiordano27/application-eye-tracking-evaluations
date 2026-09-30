/*
FUNCTION_NAME: Users_GetNextUserListPage_m6A48C9B54AC57C5AF3C80363E24856851B80D79E
ENTRY_POINT: 02ced37c
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


Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 *
Users_GetNextUserListPage_m6A48C9B54AC57C5AF3C80363E24856851B80D79E
          (DeserializableList_1_t8C90B7850D74427EC10029BF2CB1D443047B8FC8 *param_1)

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
  if ((Users_GetNextUserListPage_m6A48C9B54AC57C5AF3C80363E24856851B80D79E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_FovfPair_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_RectfPair_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_58__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_59__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_RectfPair_set_Item__);
    Users_GetNextUserListPage_m6A48C9B54AC57C5AF3C80363E24856851B80D79E::s_Il2CppMethodInitialized =
         1;
  }
  NullCheck(param_1);
  bVar3 = DeserializableList_1_get_HasNextPage_mF13DB2078BD1415E6741900652F95A8433F9828F
                    (param_1,*(MethodInfo **)Method_OVRPlugin_FovfPair_set_Item__);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)Method_OVRPlugin_RectfPair_set_Item__,0);
    local_18 = (Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 *)0x0;
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
      local_18 = (Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 *)0x0;
    }
    else {
      NullCheck(param_1);
      uVar6 = DeserializableList_1_get_NextUrl_m1B3B8585C83174BBE314AD71FB05DB4BCE8709BA_inline
                        (param_1,*(MethodInfo **)Method_OVRPlugin_RectfPair_get_Item__);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
                );
      uVar4 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                        (uVar6,0x267cf743,0);
      local_18 = (Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_59__);
      Request_1__ctor_m029D713284EB47C08C4139CC986ED7BF3348F0DC
                (local_18,uVar4,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_58__);
    }
  }
  return local_18;
}


