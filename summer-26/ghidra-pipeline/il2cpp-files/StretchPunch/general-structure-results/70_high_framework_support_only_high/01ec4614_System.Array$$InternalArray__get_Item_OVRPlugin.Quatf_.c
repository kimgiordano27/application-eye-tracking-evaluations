/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Quatf>
ENTRY_POINT: 01ec4614
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Quatf>(float param_1)

{
  long lVar1;
  char cVar2;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  float fVar3;
  float fVar4;
  undefined8 unaff_d9;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  ulong unaff_d14;
  undefined8 unaff_d15;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  cVar2 = '\x01';
  if (param_1 * DAT_00bafc30 <= DAT_00bafcb0) {
    *(float *)(unaff_x19 + 0x1dc) = *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8);
    fVar3 = atan2f((float)unaff_d12,(float)unaff_d11);
    fVar4 = DAT_00bafe88;
    cVar2 = '\0';
    *(undefined4 *)(unaff_x19 + 0x1d8) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
    *(float *)(unaff_x19 + 0x1d4) = fVar3 * fVar4;
  }
  else if ((unaff_w20 & 1) != 0) {
    *(float *)(unaff_x19 + 0x1d0) = *(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc);
    fVar3 = atan2f((float)unaff_d15,(float)unaff_d9);
    fVar4 = DAT_00bafe88;
    cVar2 = '\x01';
    *(undefined4 *)(unaff_x19 + 0x1cc) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(float *)(unaff_x19 + 0x1c8) = fVar3 * fVar4;
  }
  if (unaff_w21 != 0) {
    FUN_01ec4870(uStack000000000000005c,in_stack_00000008._4_4_,uStack0000000000000058,
                 unaff_x19 + 0x1bc);
    cVar2 = *(char *)(unaff_x19 + 0x1b9);
  }
  if (cVar2 == '\0') {
    unaff_d14 = in_stack_00000008 & 0xffffffff;
    lVar1 = unaff_x19 + 0x1d4;
  }
  else {
    lVar1 = unaff_x19 + 0x1c8;
    unaff_d11 = unaff_d9;
    unaff_d12 = unaff_d15;
  }
  FUN_01ec4870(unaff_d11,unaff_d14,unaff_d12,lVar1);
  fVar3 = (*(float *)(unaff_x19 + 0x1e0) -
          *(float *)(unaff_x19 + 0x1a0) *
          (*(float *)(unaff_x19 + 0x1d0) + *(float *)(unaff_x19 + 0x1cc) +
          *(float *)(unaff_x19 + 0x1dc) + *(float *)(unaff_x19 + 0x1d8))) -
          (*(float *)(unaff_x19 + 0x1c4) + *(float *)(unaff_x19 + 0x1c0));
  fVar4 = fVar3;
  if (((*(char *)(unaff_x19 + 0x18c) != '\0') &&
      (fVar4 = *(float *)(unaff_x19 + 0x194), *(float *)(unaff_x19 + 0x194) <= fVar3)) &&
     (fVar4 = *(float *)(unaff_x19 + 400), fVar3 <= *(float *)(unaff_x19 + 400))) {
    fVar4 = fVar3;
  }
  FUN_01ec3cbc(fVar4);
  FUN_01ec3b28((fVar4 - *(float *)(unaff_x19 + 0x194)) /
               (*(float *)(unaff_x19 + 400) - *(float *)(unaff_x19 + 0x194)));
  return;
}


