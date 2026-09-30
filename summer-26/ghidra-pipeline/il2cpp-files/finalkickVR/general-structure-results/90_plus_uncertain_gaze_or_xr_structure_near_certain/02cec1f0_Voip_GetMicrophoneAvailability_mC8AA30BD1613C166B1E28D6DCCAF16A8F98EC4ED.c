/*
FUNCTION_NAME: Voip_GetMicrophoneAvailability_mC8AA30BD1613C166B1E28D6DCCAF16A8F98EC4ED
ENTRY_POINT: 02cec1f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_t67FD568CD1C554099AF3D6D33E041CB522420B45 *
Voip_GetMicrophoneAvailability_mC8AA30BD1613C166B1E28D6DCCAF16A8F98EC4ED(void)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  if ((Voip_GetMicrophoneAvailability_mC8AA30BD1613C166B1E28D6DCCAF16A8F98EC4ED::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_5__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_50__);
    Voip_GetMicrophoneAvailability_mC8AA30BD1613C166B1E28D6DCCAF16A8F98EC4ED::
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
    local_18 = (Request_1_t67FD568CD1C554099AF3D6D33E041CB522420B45 *)0x0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar3 = OVRPlugin__GetSpaceBoundary2D(0);
    local_18 = (Request_1_t67FD568CD1C554099AF3D6D33E041CB522420B45 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_50__);
    Request_1__ctor_m4354B9574AB2106522121A92852C2F2B513C1506
              (local_18,uVar3,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_5__);
  }
  return local_18;
}


