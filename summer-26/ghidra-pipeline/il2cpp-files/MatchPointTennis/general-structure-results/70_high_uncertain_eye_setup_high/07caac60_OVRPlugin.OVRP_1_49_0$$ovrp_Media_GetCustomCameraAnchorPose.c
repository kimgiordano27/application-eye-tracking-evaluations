/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 07caac60
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  byte unaff_w20;
  byte unaff_w21;
  byte bVar7;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  while( true ) {
    bVar3 = FUN_09854410(&stack0x00000020,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 8),
                         (long)&stack0x00000058 + 4,0);
    lVar6 = *unaff_x24;
    bVar3 = bVar3 & in_stack_00000058._4_1_ & 1;
    bVar7 = unaff_w21 | bVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = *unaff_x24;
    }
    bVar4 = FUN_09854410(&stack0x00000020,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),
                         (long)&stack0x00000058 + 4,0);
    bVar4 = bVar4 & in_stack_00000058._4_1_ & 1;
    bVar2 = unaff_w20 | bVar4;
    uVar5 = FUN_0767556c(&stack0x00000030,*unaff_x23);
    if ((uVar5 & 1) == 0) break;
    param_1 = *unaff_x24;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    unaff_w21 = bVar7;
    unaff_w20 = bVar2;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_1 = *unaff_x24;
    }
  }
  FUN_07675568(&stack0x00000030,*unaff_x22);
  if ((unaff_w21 & 1) == 0 && bVar3 == 0) {
    bVar7 = 0;
    bVar3 = 0;
    if ((unaff_w20 & 1) == 0 && bVar4 == 0) goto LAB_07caad90;
  }
  else {
    if (*(char *)(unaff_x19 + 0x30) == '\0') {
      iVar1 = 0;
      if (*(int *)(unaff_x19 + 0x28) + 1 < *(int *)(unaff_x19 + 0x2c)) {
        iVar1 = *(int *)(unaff_x19 + 0x28) + 1;
      }
      *(int *)(unaff_x19 + 0x28) = iVar1;
      FUN_07caadec();
    }
    bVar7 = 1;
    bVar3 = 1;
    if ((unaff_w20 & 1) == 0 && bVar4 == 0) goto LAB_07caad90;
  }
  bVar7 = bVar3;
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x28) + -1;
    *(int *)(unaff_x19 + 0x28) = iVar1;
    if (iVar1 < 0) {
      *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x2c) + -1;
    }
    FUN_07caadec();
  }
LAB_07caad90:
  *(byte *)(unaff_x19 + 0x30) = unaff_w20 & 1 | bVar4 | bVar7;
  return;
}


