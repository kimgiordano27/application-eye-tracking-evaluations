/*
FUNCTION_NAME: OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA
ENTRY_POINT: 02db5238
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_11;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA
               (byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar2 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
                    /* try { // try from 02db523c to 02eb537f has its CatchHandler @ 02db523c
                       catch() { ... } // from try @ 02db523c with catch @ 02db523c
                       catch() { ... } // from try @ 02db5394 with catch @ 02db523c
                       catch() { ... } // from try @ 02db53d8 with catch @ 02db523c
                       catch() { ... } // from try @ 02db5424 with catch @ 02db523c */
  if ((OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar3 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    bVar3 = OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
                      (0);
    if ((bVar3 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      OVRP_1_78_0_ovrp_SetFoveationEyeTracked_mF3B6A4020174203C857F1A202A23E1D35031AF0F
                ((param_1 & 1) != 0,0);
    }
  }
  return;
}


