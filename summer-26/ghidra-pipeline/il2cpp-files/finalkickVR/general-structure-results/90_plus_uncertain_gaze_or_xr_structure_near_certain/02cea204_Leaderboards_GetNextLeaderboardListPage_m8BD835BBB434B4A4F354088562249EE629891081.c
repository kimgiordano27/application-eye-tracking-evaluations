/*
FUNCTION_NAME: Leaderboards_GetNextLeaderboardListPage_m8BD835BBB434B4A4F354088562249EE629891081
ENTRY_POINT: 02cea204
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


Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *
Leaderboards_GetNextLeaderboardListPage_m8BD835BBB434B4A4F354088562249EE629891081
          (DeserializableList_1_tB82AA8F424C78DB053A4F1D077E8013795B1ECD3 *param_1)

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
  if ((Leaderboards_GetNextLeaderboardListPage_m8BD835BBB434B4A4F354088562249EE629891081::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_38__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_39__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_34__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_35__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_4__);
    Leaderboards_GetNextLeaderboardListPage_m8BD835BBB434B4A4F354088562249EE629891081::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  bVar3 = DeserializableList_1_get_HasNextPage_m1DD46982DD41FAB63EAC0A6363135B2A89612A8E
                    (param_1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_38__);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_4__,0);
    local_18 = (Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *)0x0;
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
      local_18 = (Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *)0x0;
    }
    else {
      NullCheck(param_1);
      uVar6 = DeserializableList_1_get_NextUrl_mE73BC77B5F08324BBCD4C2EDF9E8EE3894FA4963_inline
                        (param_1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_39__);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
                );
      uVar4 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                        (uVar6,0x35f6769b,0);
      local_18 = (Request_1_t9E35FD95CEC32110A63B7D727618CC40B128E467 *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_35__);
      Request_1__ctor_mA1EBBE61C4DDF7B3B543A5B0388E0C91800B6EFA
                (local_18,uVar4,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_34__);
    }
  }
  return local_18;
}


