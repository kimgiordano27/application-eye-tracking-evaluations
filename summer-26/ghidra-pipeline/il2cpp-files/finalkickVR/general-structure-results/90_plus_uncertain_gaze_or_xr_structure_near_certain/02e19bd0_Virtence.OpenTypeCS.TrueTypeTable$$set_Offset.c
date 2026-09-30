/*
FUNCTION_NAME: Virtence.OpenTypeCS.TrueTypeTable$$set_Offset
ENTRY_POINT: 02e19bd0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


byte Virtence_OpenTypeCS_TrueTypeTable__set_Offset
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ulong *puStack0000000000000008;
  byte bStack000000000000001f;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000030;
  byte bStack000000000000003f;
  
  puStack0000000000000008 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uStack0000000000000020 = param_3;
  uStack000000000000002c = param_2;
  uStack0000000000000030 = param_1;
  if ((OVRTracker_GetPoseValid_mA900120BC2B219EEF4CCEA7424DB0F3A5613FEEB::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000008);
    OVRTracker_GetPoseValid_mA900120BC2B219EEF4CCEA7424DB0F3A5613FEEB::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack000000000000001f = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    bStack000000000000003f = 0;
  }
  else {
    switch(uStack000000000000002c) {
    case 0:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
      bStack000000000000003f =
           OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(5,0);
      bStack000000000000003f = bStack000000000000003f & 1;
      break;
    case 1:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
      bStack000000000000003f =
           OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(6,0);
      bStack000000000000003f = bStack000000000000003f & 1;
      break;
    case 2:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
      bStack000000000000003f =
           OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(7,0);
      bStack000000000000003f = bStack000000000000003f & 1;
      break;
    case 3:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
      bStack000000000000003f =
           OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(8,0);
      bStack000000000000003f = bStack000000000000003f & 1;
      break;
    default:
      bStack000000000000003f = 0;
    }
  }
  return bStack000000000000003f;
}


