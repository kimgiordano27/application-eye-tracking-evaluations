/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$GetOverlayRenderModel
ENTRY_POINT: 02db6b34
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


byte OVR_OpenVR_CVROverlay__GetOverlayRenderModel(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  ulong *in_stack_00000018;
  ulong *puStack0000000000000020;
  
  puStack0000000000000020 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  if ((OVRPlugin_get_localDimming_m15C8E9AB614272976F81365C4852BA8B168D7377::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000020);
    OVRPlugin_get_localDimming_m15C8E9AB614272976F81365C4852BA8B168D7377::s_Il2CppMethodInitialized
         = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000020);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x28) = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28),0);
  *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000020);
    bVar1 = OVRPlugin_get_localDimmingSupported_m33C94209109E4B84E3F531A9005747FF38D6D75C(0);
    *(byte *)(unaff_x29 + -0x2a) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x2a) & 1) != 0) {
      *(undefined4 *)(unaff_x29 + -0x14) = 0;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      iVar2 = OVRP_1_78_0_ovrp_GetLocalDimming_m544B32C4D969BA777A83CE2300AF99C766673EBF
                        (unaff_x29 + -0x14,0);
      if (iVar2 == 0) {
        if (*(int *)(unaff_x29 + -0x14) == 1) {
          *(undefined1 *)(unaff_x29 + -1) = 1;
        }
        else {
          *(undefined1 *)(unaff_x29 + -1) = 0;
        }
        goto LAB_02db6c70;
      }
    }
  }
  *(undefined1 *)(unaff_x29 + -1) = 0;
LAB_02db6c70:
  return *(byte *)(unaff_x29 + -1) & 1;
}


