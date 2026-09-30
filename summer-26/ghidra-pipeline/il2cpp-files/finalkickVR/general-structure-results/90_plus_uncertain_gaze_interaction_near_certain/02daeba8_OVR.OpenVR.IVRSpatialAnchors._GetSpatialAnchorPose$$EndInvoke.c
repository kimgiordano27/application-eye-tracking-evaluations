/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 02daeba8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long unaff_x29;
  void *in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong *in_stack_00000030;
  ulong *in_stack_00000038;
  ulong *in_stack_00000040;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000030);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000038);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000040);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
            );
  OVRPlugin_GetNodePoseStateRaw_m61CEEA16C9293DECBE65A0D3807AD0D3A009B1DD::s_Il2CppMethodInitialized
       = 1;
  memset((void *)(unaff_x29 + -0x68),0,0x58);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  uVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x6c) = uVar2;
  if ((*(int *)(unaff_x29 + -0x6c) == 3) &&
     (*(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -8),
     *(int *)(unaff_x29 + -0x70) == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    *(undefined4 *)(unaff_x29 + -8) = 0xffffffff;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x80) = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x80),0);
  *(byte *)(unaff_x29 + -0x81) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x81) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(unaff_x29 + -0x98) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000028);
    *(undefined8 *)(unaff_x29 + -0xa0) = *puVar4;
    bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                      (*(undefined8 *)(unaff_x29 + -0x98),*(undefined8 *)(unaff_x29 + -0xa0),0);
    *(byte *)(unaff_x29 + -0xa1) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0xa1) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      pvVar5 = (void *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000040);
      memcpy(in_stack_00000020,pvVar5,0x58);
    }
    else {
      in_stack_000000a8 = *(undefined4 *)(unaff_x29 + -8);
      uStack00000000000000a4 = *(undefined4 *)(unaff_x29 + -4);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
      OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD
                (in_stack_000000a8,uStack00000000000000a4,0);
      memcpy(in_stack_00000020,&stack0x00000048,0x58);
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x88) = *(undefined4 *)(unaff_x29 + -8);
    *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    uVar2 = OVRP_1_29_0_ovrp_GetNodePoseStateRaw_m3A9E36C8E2D3D9EBACDCB42D5108927BDD9743E1
                      (*(undefined4 *)(unaff_x29 + -0x88),0xffffffff,
                       *(undefined4 *)(unaff_x29 + -0x8c),unaff_x29 + -0x68,0);
    *(undefined4 *)(unaff_x29 + -0x90) = uVar2;
    if (*(int *)(unaff_x29 + -0x90) == 0) {
      memcpy(in_stack_00000020,(void *)(unaff_x29 + -0x68),0x58);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      pvVar5 = (void *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000040);
      memcpy(in_stack_00000020,pvVar5,0x58);
    }
  }
  return;
}


