/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$GetOverlayTransformTrackedDeviceComponent
ENTRY_POINT: 02db6f74
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


byte OVR_OpenVR_CVROverlay__GetOverlayTransformTrackedDeviceComponent(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  String_t *pSVar5;
  undefined8 uVar6;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  byte bStack0000000000000057;
  int iStack000000000000007c;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000028);
  *(undefined8 *)(unaff_x29 + -0x70) = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x68),*(undefined8 *)(unaff_x29 + -0x70),
                     in_stack_00000010);
  *(byte *)(unaff_x29 + -0x71) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x71) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
    bStack0000000000000057 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
    bStack0000000000000057 = bStack0000000000000057 & 1;
    if (bStack0000000000000057 == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      uVar6 = in_stack_00000018[8];
      uVar3 = in_stack_00000018[7];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      iVar2 = OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14(uVar6,uVar3,0);
      *(bool *)(unaff_x29 + -1) = iVar2 == 0;
    }
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000018[8];
    uVar3 = in_stack_00000018[7];
    pSVar5 = (String_t *)in_stack_00000018[6];
    NullCheck(pSVar5);
    iStack000000000000007c =
         String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                   (pSVar5,(MethodInfo *)0x0);
    if (iStack000000000000007c == 0) {
      in_stack_00000018[4] = uVar3;
      in_stack_00000018[3] = *(undefined8 *)(unaff_x29 + -0x80);
      *in_stack_00000018 =
           *(undefined8 *)
            Field_<PrivateImplementationDetails>_D3FFAB6C39C74459592916607F2C2DE522EACA92F350E5BED66497A7E0FEC5C8
      ;
      *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000018[4];
      *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000018[3];
    }
    else {
      in_stack_00000018[2] = uVar3;
      in_stack_00000018[1] = *(undefined8 *)(unaff_x29 + -0x80);
      *in_stack_00000018 = in_stack_00000018[6];
      *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000018[2];
      *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000018[1];
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    iVar2 = OVRP_1_30_0_ovrp_SendEvent2_m5C2DD1A0840B6C286A205EE17271B736EC7C6D28
                      (*(undefined8 *)(unaff_x29 + -0x60),*(undefined8 *)(unaff_x29 + -0x58),
                       *in_stack_00000018,0);
    *(bool *)(unaff_x29 + -1) = iVar2 == 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


