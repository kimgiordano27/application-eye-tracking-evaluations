/*
FUNCTION_NAME: OVR.OpenVR.CVRChaperoneSetup$$SetWorkingCollisionBoundsInfo
ENTRY_POINT: 02db414c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVR_OpenVR_CVRChaperoneSetup__SetWorkingCollisionBoundsInfo(Il2CppClass *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  il2cpp_codegen_runtime_class_init_inline(param_1);
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x28) = *puVar5;
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28),0);
  *(byte *)(unaff_x29 + -0x29) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x29 + -0x10);
    uVar4 = *(undefined8 *)(unaff_x29 + -0xc);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uStack0000000000000018 = (undefined4)uVar4;
    uStack000000000000001c = (undefined4)((ulong)uVar4 >> 0x20);
    iVar3 = OVRP_1_68_0_ovrp_SetInsightPassthroughKeyboardHandsIntensity_mB2C2DA3DCCF4BE268DB580D94FE7C3B24C9FBBC6
                      (uStack0000000000000018,uStack000000000000001c,uVar1,0);
    if (iVar3 == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 1;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


