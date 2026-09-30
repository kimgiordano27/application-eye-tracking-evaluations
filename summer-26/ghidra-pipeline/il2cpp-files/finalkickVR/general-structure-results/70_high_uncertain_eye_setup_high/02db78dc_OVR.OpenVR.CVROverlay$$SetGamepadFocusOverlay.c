/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$SetGamepadFocusOverlay
ENTRY_POINT: 02db78dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] OVR_OpenVR_CVROverlay__SetGamepadFocusOverlay(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined1 auVar4 [16];
  undefined8 *in_stack_00000010;
  byte bStack0000000000000027;
  
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar3,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 == 0) {
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar1 = OVRP_1_31_0_ovrp_GetTimeInSeconds_m5FA5C6BEC85E089A9C5E406936E13B1CDF6EDAC6
                      (unaff_x29 + -0x18,0);
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x18);
    }
    else {
      *(undefined8 *)(unaff_x29 + -8) = 0;
    }
  }
  auVar4._0_8_ = *(ulong *)(unaff_x29 + -8);
  auVar4._8_8_ = 0;
  return auVar4;
}


