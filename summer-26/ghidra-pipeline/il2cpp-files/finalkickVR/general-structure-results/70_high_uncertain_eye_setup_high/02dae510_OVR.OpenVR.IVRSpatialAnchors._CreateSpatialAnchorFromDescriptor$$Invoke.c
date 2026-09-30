/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._CreateSpatialAnchorFromDescriptor$$Invoke
ENTRY_POINT: 02dae510
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor__Invoke(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  ulong *in_stack_00000018;
  ulong *in_stack_00000020;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x390));
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000020);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
            );
  OVRPlugin_GetNodeAngularAcceleration_mDE952D5093E24464A59BC6393ADE49AAE9624374::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  uVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x34) = uVar2;
  if ((*(int *)(unaff_x29 + -0x34) == 3) &&
     (*(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x29 + -0x18),
     *(int *)(unaff_x29 + -0x38) == 0)) {
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
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x48) = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
  *(byte *)(unaff_x29 + -0x49) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x49) & 1) == 0) {
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x30),0xc);
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -8) = *(undefined4 *)(unaff_x29 + -0x28);
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x18);
    *(undefined4 *)(unaff_x29 + -0x54) = *(undefined4 *)(unaff_x29 + -0x14);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD
              (*(undefined4 *)(unaff_x29 + -0x50),*(undefined4 *)(unaff_x29 + -0x54),0);
    memcpy(&stack0x00000080,&stack0x00000028,0x58);
    *(undefined8 *)(unaff_x29 + -0x10) = in_stack_000000c0;
    *(undefined4 *)(unaff_x29 + -8) = in_stack_000000c8;
  }
  return *(undefined4 *)(unaff_x29 + -0x10);
}


