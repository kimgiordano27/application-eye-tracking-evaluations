/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 06423270
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  *(undefined1 *)(unaff_x21 + 0xa11) = 1;
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_075ac5e0(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_06423350:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_075b9dc8(&stack0x00000040,*(long *)(unaff_x19 + 0x20),0);
    puVar1 = (undefined8 *)(unaff_x19 + 0x140);
    uStack0000000000000088 = in_stack_00000048;
    uStack0000000000000080 = in_stack_00000040;
    uStack0000000000000098 = in_stack_00000058;
    uStack0000000000000090 = in_stack_00000050;
    uStack00000000000000a8 = in_stack_00000068;
    uStack00000000000000a0 = in_stack_00000060;
    uStack00000000000000b8 = in_stack_00000078;
    uStack00000000000000b0 = in_stack_00000070;
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
      *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000060;
      *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000078;
      *(undefined8 *)(unaff_x19 + 0x170) = in_stack_00000070;
      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000048;
      *puVar1 = in_stack_00000040;
      *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000058;
      *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000050;
    }
    else {
      uVar2 = FUN_03b69e54(puVar1);
      *(undefined8 *)(unaff_x19 + 0x168) = uStack00000000000000a8;
      *(undefined8 *)(unaff_x19 + 0x160) = uStack00000000000000a0;
      *(undefined8 *)(unaff_x19 + 0x178) = uStack00000000000000b8;
      *(undefined8 *)(unaff_x19 + 0x170) = uStack00000000000000b0;
      *(undefined8 *)(unaff_x19 + 0x148) = uStack0000000000000088;
      *puVar1 = uStack0000000000000080;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000098;
      *(undefined8 *)(unaff_x19 + 0x150) = uStack0000000000000090;
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(unaff_x19 + 0xa0);
        if (lVar3 == 0) goto LAB_06423350;
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(unaff_x19 + 0x20),
                   *(undefined8 *)(lVar3 + 0x28));
      }
    }
  }
  return;
}


