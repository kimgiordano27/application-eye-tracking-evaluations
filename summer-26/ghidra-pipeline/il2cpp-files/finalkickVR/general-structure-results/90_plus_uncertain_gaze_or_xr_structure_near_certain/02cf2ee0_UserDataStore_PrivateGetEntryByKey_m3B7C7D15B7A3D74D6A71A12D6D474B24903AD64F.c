/*
FUNCTION_NAME: UserDataStore_PrivateGetEntryByKey_m3B7C7D15B7A3D74D6A71A12D6D474B24903AD64F
ENTRY_POINT: 02cf2ee0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_t11F7D21AD90B1ED0E213749E005B12B15813E4BA *
UserDataStore_PrivateGetEntryByKey_m3B7C7D15B7A3D74D6A71A12D6D474B24903AD64F
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  if ((UserDataStore_PrivateGetEntryByKey_m3B7C7D15B7A3D74D6A71A12D6D474B24903AD64F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Path_<>c_<JoinInternal>b__56_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Path_<>c_<JoinInternal>b__57_0__);
    UserDataStore_PrivateGetEntryByKey_m3B7C7D15B7A3D74D6A71A12D6D474B24903AD64F::
    s_Il2CppMethodInitialized = 1;
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
    local_18 = (Request_1_t11F7D21AD90B1ED0E213749E005B12B15813E4BA *)0x0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar3 = OVRPlugin__GetSpaceSemanticLabels(param_1,param_2,0);
    local_18 = (Request_1_t11F7D21AD90B1ED0E213749E005B12B15813E4BA *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)Method_System_IO_Path_<>c_<JoinInternal>b__57_0__);
    Request_1__ctor_m7BA52A3CA6B9E1D2049A9E4993A7E971C1561D0B
              (local_18,uVar3,*(MethodInfo **)Method_System_IO_Path_<>c_<JoinInternal>b__56_0__);
  }
  return local_18;
}


