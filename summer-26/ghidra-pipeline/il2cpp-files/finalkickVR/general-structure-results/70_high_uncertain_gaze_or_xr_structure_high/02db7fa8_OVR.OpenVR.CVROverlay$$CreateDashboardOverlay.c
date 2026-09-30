/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$CreateDashboardOverlay
ENTRY_POINT: 02db7fa8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


byte OVR_OpenVR_CVROverlay__CreateDashboardOverlay(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  byte bStack0000000000000027;
  
  OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05::
  s_Il2CppMethodInitialized = in_w8;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
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
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x14) = 0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar1 = OVRP_1_44_0_ovrp_GetHandTrackingEnabled_mBEEA1EEDBC3FA02914EF6204A1BB8992A25D6530
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


