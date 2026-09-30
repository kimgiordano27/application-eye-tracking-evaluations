/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._GetSkeletalBoneDataCompressed$$Invoke
ENTRY_POINT: 02dac058
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed__Invoke(undefined8 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 uStack0000000000000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  byte bStack0000000000000097;
  
  uStack0000000000000028 = param_1;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
  *(undefined8 *)(unaff_x29 + -0x28) = *puVar4;
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28),
                     uStack0000000000000028);
  *(byte *)(unaff_x29 + -0x29) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000040);
    bStack0000000000000097 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
    bStack0000000000000097 = bStack0000000000000097 & 1;
    if ((bStack0000000000000097 == 0) || (*(int *)(unaff_x29 + -8) != 0)) {
      uVar1 = *(undefined4 *)(unaff_x29 + -4);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Field_<PrivateImplementationDetails>_16CD36253CA3793C17E6703E0AE283CDA2396668DD55974A092157BD0D64B271
                );
      OVRP_0_1_2_ovrp_GetNodePose_m9EF6663B74E7B01F28E13ACB255BB9594E9D5E25(uVar1,0);
      in_stack_00000030[1] = in_stack_00000058;
      *in_stack_00000030 = in_stack_00000050;
      *(undefined8 *)((long)in_stack_00000030 + 0x14) = uStack0000000000000064;
      *(ulong *)((long)in_stack_00000030 + 0xc) =
           CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
    }
    else {
      uVar1 = *(undefined4 *)(unaff_x29 + -4);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      OVRP_1_8_0_ovrp_GetNodePose2_m66FC50D7808388A3727ED7DE8F36C0AB20FC9CF3(0,uVar1,0);
      in_stack_00000030[1] = in_stack_00000078;
      *in_stack_00000030 = in_stack_00000070;
      *(undefined8 *)((long)in_stack_00000030 + 0x14) = uStack0000000000000084;
      *(ulong *)((long)in_stack_00000030 + 0xc) =
           CONCAT44(uStack0000000000000080,in_stack_00000078._4_4_);
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(unaff_x29 + -8);
    *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD
              (*(undefined4 *)(unaff_x29 + -0x30),*(undefined4 *)(unaff_x29 + -0x34),0);
    memcpy((void *)(unaff_x29 + -0x90),&stack0x000000a8,0x58);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000030[1] = *(undefined8 *)(unaff_x29 + -0x88);
    *in_stack_00000030 = uVar3;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x84);
    *(undefined8 *)((long)in_stack_00000030 + 0x14) = *(undefined8 *)(unaff_x29 + -0x7c);
    *(undefined8 *)((long)in_stack_00000030 + 0xc) = uVar3;
  }
  return;
}


