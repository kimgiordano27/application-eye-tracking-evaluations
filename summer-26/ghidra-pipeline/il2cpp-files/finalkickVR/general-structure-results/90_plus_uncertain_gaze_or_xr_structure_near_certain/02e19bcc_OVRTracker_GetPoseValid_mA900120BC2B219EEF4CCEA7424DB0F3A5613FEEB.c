/*
FUNCTION_NAME: OVRTracker_GetPoseValid_mA900120BC2B219EEF4CCEA7424DB0F3A5613FEEB
ENTRY_POINT: 02e19bcc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


byte OVRTracker_GetPoseValid_mA900120BC2B219EEF4CCEA7424DB0F3A5613FEEB
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte local_11;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRTracker_GetPoseValid_mA900120BC2B219EEF4CCEA7424DB0F3A5613FEEB::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRTracker_GetPoseValid_mA900120BC2B219EEF4CCEA7424DB0F3A5613FEEB::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    switch(param_2) {
    case 0:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(5,0);
      local_11 = local_11 & 1;
      break;
    case 1:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(6,0);
      local_11 = local_11 & 1;
      break;
    case 2:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(7,0);
      local_11 = local_11 & 1;
      break;
    case 3:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(8,0);
      local_11 = local_11 & 1;
      break;
    default:
      local_11 = 0;
    }
  }
  return local_11;
}


