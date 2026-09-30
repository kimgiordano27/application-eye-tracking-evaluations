/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 02c8f394
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(void)

{
  undefined4 uVar1;
  long in_x9;
  long unaff_x29;
  GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D *pGStack0000000000000008;
  long *in_stack_00000010;
  long lStack0000000000000020;
  long lStack0000000000000028;
  long lStack0000000000000030;
  long *plStack0000000000000040;
  uint uStack0000000000000058;
  uint uStack0000000000000068;
  undefined4 uStack00000000000000ac;
  
  *(undefined8 *)(in_x9 + 0x40) = *(undefined8 *)(in_x9 + 0x58);
  *(undefined4 *)(in_stack_00000010[8] + 8) = *(undefined4 *)(unaff_x29 + -0x94);
  uStack0000000000000068 = *(uint *)(unaff_x29 + -0xc);
  if ((uStack0000000000000068 >> 3 & 1) == 0) {
    in_stack_00000010[6] = in_stack_00000010[0x1b];
    *(undefined4 *)(unaff_x29 + -0xb4) = 0;
    in_stack_00000010[4] = in_stack_00000010[6];
  }
  else {
    in_stack_00000010[7] = in_stack_00000010[0x1b];
    *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(in_stack_00000010[0x19] + 0xc);
    in_stack_00000010[4] = in_stack_00000010[7];
  }
  *(undefined4 *)(in_stack_00000010[4] + 0xc) = *(undefined4 *)(unaff_x29 + -0xb4);
  uStack0000000000000058 = *(uint *)(unaff_x29 + -0xc);
  if ((uStack0000000000000058 >> 4 & 1) == 0) {
    in_stack_00000010[2] = in_stack_00000010[0x1b];
    uStack00000000000000ac = 0;
    *in_stack_00000010 = in_stack_00000010[2];
  }
  else {
    in_stack_00000010[3] = in_stack_00000010[0x1b];
    uStack00000000000000ac = *(undefined4 *)(in_stack_00000010[0x19] + 0x10);
    *in_stack_00000010 = in_stack_00000010[3];
  }
  *(undefined4 *)(*in_stack_00000010 + 0x10) = uStack00000000000000ac;
  plStack0000000000000040 = (long *)in_stack_00000010[0x19];
  lStack0000000000000028 = plStack0000000000000040[1];
  lStack0000000000000020 = *plStack0000000000000040;
  lStack0000000000000030 = plStack0000000000000040[2];
  pGStack0000000000000008 =
       (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D *)(unaff_x29 + -0x40);
  in_stack_00000010[0x15] = lStack0000000000000028;
  in_stack_00000010[0x14] = lStack0000000000000020;
  in_stack_00000010[0x16] = lStack0000000000000030;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtmq_s32_f32__);
  uVar1 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline
                    (pGStack0000000000000008,(MethodInfo *)0x0);
  *(undefined4 *)(in_stack_00000010[0x1b] + 0x14) = uVar1;
  return;
}


