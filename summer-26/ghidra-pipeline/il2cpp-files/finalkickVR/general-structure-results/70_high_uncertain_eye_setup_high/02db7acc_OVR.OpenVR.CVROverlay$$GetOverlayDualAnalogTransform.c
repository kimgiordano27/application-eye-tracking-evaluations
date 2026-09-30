/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$GetOverlayDualAnalogTransform
ENTRY_POINT: 02db7acc
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


byte OVR_OpenVR_CVROverlay__GetOverlayDualAnalogTransform(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  byte bStack0000000000000077;
  byte bStack000000000000008b;
  
  OculusXRPlugin_SetColorOffset_m8219BBE3032A4978D7133616EFA86B64F2D8956A();
  bStack000000000000008b = *(byte *)(unaff_x29 + -0x25) & 1;
  if (bStack000000000000008b == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    bStack0000000000000077 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
    bStack0000000000000077 = bStack0000000000000077 & 1;
    if (bStack0000000000000077 == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      uVar5 = in_stack_00000010[3];
      uVar4 = in_stack_00000010[2];
      uVar6 = in_stack_00000010[1];
      uVar2 = *in_stack_00000010;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      uStack0000000000000034 = (undefined4)(uVar4 >> 0x20);
      uStack0000000000000038 = (undefined4)uVar5;
      uStack000000000000003c = (undefined4)((ulong)uVar5 >> 0x20);
      uStack0000000000000020 = (undefined4)uVar2;
      uStack0000000000000024 = (undefined4)((ulong)uVar2 >> 0x20);
      uStack0000000000000028 = (undefined4)uVar6;
      uStack000000000000002c = (undefined4)((ulong)uVar6 >> 0x20);
      iVar1 = OVRP_1_31_0_ovrp_SetColorScaleAndOffset_m1A6187F4CB500529EB889E50FF5A08E6751AE3CE
                        (uVar4 & 0xffffffff,uStack0000000000000034,uStack0000000000000038,
                         uStack000000000000003c,uStack0000000000000020,uStack0000000000000024,
                         uStack0000000000000028,uStack000000000000002c,1,0);
      *(bool *)(unaff_x29 + -1) = iVar1 == 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


