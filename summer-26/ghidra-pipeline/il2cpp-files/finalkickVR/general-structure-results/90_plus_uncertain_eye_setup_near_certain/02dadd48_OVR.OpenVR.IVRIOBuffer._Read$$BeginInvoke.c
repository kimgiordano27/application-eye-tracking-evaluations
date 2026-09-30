/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._Read$$BeginInvoke
ENTRY_POINT: 02dadd48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 OVR_OpenVR_IVRIOBuffer__Read__BeginInvoke(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  byte bStack00000000000000d7;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x2f0));
  OVRPlugin_GetNodeVelocity_mC6007F1CDD87AD15237BD493E94BBB7607C40C75::s_Il2CppMethodInitialized = 1
  ;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  uVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
  if ((*(int *)(unaff_x29 + -0x24) == 3) &&
     (*(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0x18),
     *(int *)(unaff_x29 + -0x28) == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    *(undefined4 *)(unaff_x29 + -0x18) = 0xffffffff;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  in_stack_00000030[0x1b] = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
  in_stack_00000030[0x1a] = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (in_stack_00000030[0x1b],in_stack_00000030[0x1a],0);
  *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x39) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    in_stack_00000030[1] = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000040);
    *in_stack_00000030 = *puVar4;
    bStack00000000000000d7 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                   (in_stack_00000030[1],*in_stack_00000030,0);
    bStack00000000000000d7 = bStack00000000000000d7 & 1;
    if ((bStack00000000000000d7 == 0) || (*(int *)(unaff_x29 + -0x18) != 0)) {
      uVar2 = *(undefined4 *)(unaff_x29 + -0x14);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Field_<PrivateImplementationDetails>_53F330448D07BA576F472DBBDB58A68A1E3E6FCF756023D2C5CC65AEF10B865D
                );
      OVRP_0_1_3_ovrp_GetNodeVelocity_m34ACA4CF2DC37FCF3DA7A1D21E46EAD60D7B7A02(uVar2,0);
      uStack0000000000000084 = (undefined4)in_stack_00000068;
      uStack0000000000000088 = (undefined4)((ulong)in_stack_00000068 >> 0x20);
      in_stack_00000030[0x1f] = CONCAT44(uStack0000000000000084,in_stack_00000060._4_4_);
      *(undefined4 *)(unaff_x29 + -8) = uStack0000000000000088;
    }
    else {
      uStack00000000000000cc = *(undefined4 *)(unaff_x29 + -0x14);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      OVRP_1_8_0_ovrp_GetNodeVelocity2_mF0B82E77F8D5A0C18727AD7D2DA777E374A3B309
                (0,uStack00000000000000cc,0);
      uStack00000000000000c4 = (undefined4)in_stack_000000a8;
      uStack00000000000000c8 = (undefined4)((ulong)in_stack_000000a8 >> 0x20);
      in_stack_00000030[0x1f] = CONCAT44(uStack00000000000000c4,in_stack_000000a0._4_4_);
      *(undefined4 *)(unaff_x29 + -8) = uStack00000000000000c8;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -0x18);
    *(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(unaff_x29 + -0x14);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD
              (*(undefined4 *)(unaff_x29 + -0x40),*(undefined4 *)(unaff_x29 + -0x44),0);
    memcpy((void *)(unaff_x29 + -0xa0),&stack0x000000e8,0x58);
    in_stack_00000030[0x1f] = *(undefined8 *)(unaff_x29 + -0x84);
    *(undefined4 *)(unaff_x29 + -8) = *(undefined4 *)(unaff_x29 + -0x7c);
  }
  return *(undefined4 *)(unaff_x29 + -0x10);
}


