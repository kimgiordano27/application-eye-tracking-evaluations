/*
FUNCTION_NAME: Challenges_UpdateInfo_m2C3D88E73E13600DC56BCAF9F3E030BB612B7CB1
ENTRY_POINT: 02ceb8bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 *
Challenges_UpdateInfo_m2C3D88E73E13600DC56BCAF9F3E030BB612B7CB1
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  if ((Challenges_UpdateInfo_m2C3D88E73E13600DC56BCAF9F3E030BB612B7CB1::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_48__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_49__);
    Challenges_UpdateInfo_m2C3D88E73E13600DC56BCAF9F3E030BB612B7CB1::s_Il2CppMethodInitialized = 1;
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
    local_18 = (Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 *)0x0;
  }
  else {
    uVar5 = ChallengeOptions_op_Explicit_m8D9EF61F1317D6A4D0182426D8926DE62AEA9411(param_2);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar3 = CAPI_ovr_Challenges_UpdateInfo_m489FB29CED2CEB5B9561572741D5A9D099660C62
                      (param_1,uVar5,0);
    local_18 = (Request_1_t9545553E7143706392892EC7671C1FFCC4370E01 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_49__);
    Request_1__ctor_mBD455FADB3745E94C2E0F04A5A713F3BD8D7A76C
              (local_18,uVar3,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_48__);
  }
  return local_18;
}


