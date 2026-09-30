/*
FUNCTION_NAME: Virtence.OpenTypeCS.TrueTypeTable$$get_Length
ENTRY_POINT: 02e19bfc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


byte Virtence_OpenTypeCS_TrueTypeTable__get_Length(void)

{
  byte bVar1;
  long unaff_x29;
  ulong *in_stack_00000008;
  byte bStack000000000000001f;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
  OVRTracker_GetPoseValid_mA900120BC2B219EEF4CCEA7424DB0F3A5613FEEB::s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack000000000000001f = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    switch(*(undefined4 *)(unaff_x29 + -0x14)) {
    case 0:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(5,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    case 1:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(6,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    case 2:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(7,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    case 3:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(8,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    default:
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


