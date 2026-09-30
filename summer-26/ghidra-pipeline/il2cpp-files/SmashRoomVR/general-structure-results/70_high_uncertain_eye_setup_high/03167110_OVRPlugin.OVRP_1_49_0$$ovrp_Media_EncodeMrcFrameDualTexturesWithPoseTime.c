/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 03167110
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
               (long *param_1,float param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float unaff_s8;
  float fVar3;
  float unaff_s9;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  fVar5 = *(float *)(unaff_x22 + -0xc);
  fVar4 = *(float *)(unaff_x21 + 0x28);
  fVar6 = SQRT(unaff_s8 * unaff_s8 + param_2 + unaff_s9 * unaff_s9);
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar3 = -fVar6;
  uVar2 = FUN_03922f24();
  if ((uVar2 & 1) == 0) {
    if (fVar4 <= ABS(fVar6 + fVar5)) {
      if (*(float *)(unaff_x20 + 0x1c) <= fVar3) {
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*unaff_x21 + 0x548))();
      if (iVar1 < 1) {
        return;
      }
    }
  }
  *(float *)(unaff_x20 + 0x1c) = fVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000008;
  *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000000;
  *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000010;
  thunk_FUN_01b4f09c(unaff_x20 + 0x30,0);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_01b4f09c();
  return;
}


