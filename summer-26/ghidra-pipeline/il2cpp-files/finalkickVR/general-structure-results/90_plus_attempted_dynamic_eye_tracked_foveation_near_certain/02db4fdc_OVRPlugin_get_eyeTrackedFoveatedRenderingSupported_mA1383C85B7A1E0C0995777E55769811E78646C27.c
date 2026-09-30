/*
FUNCTION_NAME: OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
ENTRY_POINT: 02db4fdc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_10;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
               (undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int local_24;
  undefined8 local_20;
  bool local_11;
  
  puVar1 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  local_20 = param_1;
  if ((OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
  if ((bVar2 & 1) == 0) {
    local_11 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRP_1_78_0_ovrp_GetFoveationEyeTrackedSupported_mAE52E1EFDCD73DB3D0AC0C561D6A26D24C952F25
              (&local_24,0);
    local_11 = local_24 == 1;
  }
  return local_11;
}


