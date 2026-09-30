/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$SetOverlayDualAnalogTransform
ENTRY_POINT: 02db7a38
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVR_OpenVR_CVROverlay__SetOverlayDualAnalogTransform(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 in_w9;
  long unaff_x29;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000008;
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
  undefined4 uStack000000000000008c;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d4;
  
  *(undefined4 *)(unaff_x29 + -100) = in_w9;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
  *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar2;
  *(undefined4 *)(unaff_x29 + -0xa4) = *(undefined4 *)(unaff_x29 + -0x94);
  uStack0000000000000008 = 0;
  OculusXRPlugin_SetColorScale_m20DAD44814E22C9614ADE7C0C6F1C2F0A7DF601F
            (*(undefined4 *)(unaff_x29 + -0x44),*(undefined4 *)(unaff_x29 + -100),
             *(undefined4 *)(unaff_x29 + -0x84),*(undefined4 *)(unaff_x29 + -0xa4));
  uVar2 = *in_stack_00000010;
  *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000010[1];
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar2;
  *(undefined4 *)(unaff_x29 + -0xc4) = *(undefined4 *)(unaff_x29 + -0xc0);
  uStack00000000000000d4 = (undefined4)((ulong)*in_stack_00000010 >> 0x20);
  uStack00000000000000cc = uStack00000000000000d4;
  uStack00000000000000b8 = (undefined4)in_stack_00000010[1];
  uStack00000000000000ac = uStack00000000000000b8;
  uStack000000000000009c = (undefined4)((ulong)in_stack_00000010[1] >> 0x20);
  uStack000000000000008c = uStack000000000000009c;
  OculusXRPlugin_SetColorOffset_m8219BBE3032A4978D7133616EFA86B64F2D8956A
            (*(undefined4 *)(unaff_x29 + -0xc4),uStack00000000000000d4,uStack00000000000000b8,
             uStack000000000000009c,uStack0000000000000008);
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


