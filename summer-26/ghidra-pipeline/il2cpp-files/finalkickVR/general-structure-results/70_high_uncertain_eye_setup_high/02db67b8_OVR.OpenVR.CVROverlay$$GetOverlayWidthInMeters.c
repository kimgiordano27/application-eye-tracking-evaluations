/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$GetOverlayWidthInMeters
ENTRY_POINT: 02db67b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_CVROverlay__GetOverlayWidthInMeters(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  ulong *in_stack_00000010;
  byte bStack0000000000000027;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_AsymmetricFovEnabled_mB5652400E43010E2F075F27AF21835154F9916BB::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
                    /* try { // try from 02db6804 to 02eb6847 has its CatchHandler @ 02db64f0 */
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
                    /* catch() { ... } // from try @ 02db672c with catch @ 02db681c
                       catch() { ... } // from try @ 02db6898 with catch @ 02db681c
                       catch() { ... } // from try @ 02db68f8 with catch @ 02db681c
                       catch() { ... } // from try @ 02db6954 with catch @ 02db681c
                       catch() { ... } // from try @ 02db6a88 with catch @ 02db681c
                       catch() { ... } // from try @ 02db6ae0 with catch @ 02db681c
                       catch() { ... } // from try @ 02db6c14 with catch @ 02db681c
                       catch() { ... } // from try @ 02db6c70 with catch @ 02db681c */
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar3,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x14) = 0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar1 = OVRP_1_21_0_ovrp_GetAppAsymmetricFov_m61520284B048B5130B587086A318F221F35117CC
                      (unaff_x29 + -0x14,0);
    if (iVar1 == 0) {
      *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x14) == 1;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


