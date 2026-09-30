/*
FUNCTION_NAME: Leaderboards_GetNextEntries_mC7F905E2DA330CF9FD51826286BF996BDF5EE066
ENTRY_POINT: 02ce9388
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB *
Leaderboards_GetNextEntries_mC7F905E2DA330CF9FD51826286BF996BDF5EE066
          (DeserializableList_1_tFAC7CAC2D0D8E5D23F0096F7C9722F9353E5F4FD *param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  if ((Leaderboards_GetNextEntries_mC7F905E2DA330CF9FD51826286BF996BDF5EE066::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_30__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_31__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_32__);
    Leaderboards_GetNextEntries_mC7F905E2DA330CF9FD51826286BF996BDF5EE066::s_Il2CppMethodInitialized
         = 1;
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
    local_18 = (Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB *)0x0;
  }
  else {
    NullCheck(param_1);
    uVar5 = DeserializableList_1_get_NextUrl_mAFD37D84FE7B46F7B266F52BF92B6CCBAEDC5864_inline
                      (param_1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_30__);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar3 = CAPI_ovr_HTTP_GetWithMessageType_m6F275650A5D97B6044D6C23607CDF844922A28C8
                      (uVar5,0x4e207cd9,0);
    local_18 = (Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_32__);
    Request_1__ctor_mF3F3A93EF4B30665D632CD8E28A95FB4F2A10DC7
              (local_18,uVar3,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_31__);
  }
  return local_18;
}


