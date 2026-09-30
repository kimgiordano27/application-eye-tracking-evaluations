/*
FUNCTION_NAME: OVR.OpenVR.CVRApplications$$RemoveApplicationManifest
ENTRY_POINT: 02db27b0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte OVR_OpenVR_CVRApplications__RemoveApplicationManifest
               (ulong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  ulong *in_stack_00000010;
  ulong *puStack0000000000000018;
  int iStack0000000000000034;
  byte bStack0000000000000047;
  
  *(undefined4 *)(unaff_x29 + -8) = param_2;
  *(undefined8 *)(unaff_x29 + -0x10) = param_3;
  *(undefined8 *)(unaff_x29 + -0x18) = param_4;
  *(undefined8 *)(unaff_x29 + -0x20) = param_5;
  puStack0000000000000018 = param_1;
  if ((OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined1 *)(unaff_x29 + -0x21) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_initobj(*(void **)(unaff_x29 + -0x30),0x38);
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
  il2cpp_codegen_initobj(*(void **)(unaff_x29 + -0x38),0x30);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000018);
  bStack0000000000000047 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x40),*puVar4,0);
  bStack0000000000000047 = bStack0000000000000047 & 1;
  if (bStack0000000000000047 == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(undefined1 *)(unaff_x29 + -0x21) = 1;
    uVar1 = *(undefined4 *)(unaff_x29 + -8);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iStack0000000000000034 =
         OVRP_1_15_0_ovrp_GetExternalCameraExtrinsics_mA800E8A78F390F4CC2E5D3BF5E2DA396D9518C55
                   (uVar1,uVar3,0);
    if (iStack0000000000000034 != 0) {
      *(undefined1 *)(unaff_x29 + -0x21) = 0;
    }
    uVar1 = *(undefined4 *)(unaff_x29 + -8);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar2 = OVRP_1_15_0_ovrp_GetExternalCameraIntrinsics_mB291B3A5B2D704241198D8AFAF9E42B1E7413228
                      (uVar1,uVar3,0);
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_x29 + -0x21) = 0;
    }
    *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x21) & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


