/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._CreateSpatialAnchorFromPose$$BeginInvoke
ENTRY_POINT: 02dae7e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 153
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


byte OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromPose__BeginInvoke(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  ulong *in_stack_00000010;
  ulong *in_stack_00000018;
  undefined4 uStack0000000000000024;
  
  if ((*(byte *)(param_1 + 0x69b) & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    OVRPlugin_GetNodeOrientationValid_m84C2B516B7C2D28967C271C8F5068028E6816717::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x28) = *puVar5;
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28),0);
  *(byte *)(unaff_x29 + -0x29) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    uStack0000000000000024 = *(undefined4 *)(unaff_x29 + -8);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    bVar2 = OVRPlugin_GetNodeOrientationTracked_m2F4F1AF81CEA7FB1BC6B8025E99A1D0E93CBDC9F
                      (uStack0000000000000024,0);
    *(byte *)(unaff_x29 + -1) = bVar2 & 1;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x14) = 0;
    uVar1 = *(undefined4 *)(unaff_x29 + -8);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar3 = OVRP_1_38_0_ovrp_GetNodeOrientationValid_m560923D67FBB5C656D2A147CF243A22E03126CAB
                      (uVar1,unaff_x29 + -0x14,0);
    if (iVar3 == 0) {
      *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x14) == 1;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


