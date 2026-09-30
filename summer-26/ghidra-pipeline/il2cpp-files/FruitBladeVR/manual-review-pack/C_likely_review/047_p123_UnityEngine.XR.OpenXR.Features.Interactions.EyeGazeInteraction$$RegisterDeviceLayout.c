/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 035e7798
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout
               (undefined8 param_1,undefined8 param_2)

{
  bool in_ZR;
  char in_w9;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  float in_stack_000000e8;
  undefined8 uStack00000000000000f0;
  char cStack0000000000000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  float fStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 uStack0000000000000140;
  
  uVar7 = in_stack_00000120;
  fVar6 = fStack0000000000000128;
  uStack00000000000000f0 = param_2;
  uStack0000000000000140 = param_1;
  cStack0000000000000100 = in_w9;
  if ((!in_ZR) && (0.0 < *(float *)(unaff_x19 + 0x7c))) {
    if ((*(char *)(unaff_x19 + 0x20) == '\0') && ((unaff_x21 & 1) == 0)) {
      fVar1 = (float)FUN_0377b0a4(0);
      fVar1 = fVar1 * *(float *)(unaff_x19 + 0x7c);
      fVar2 = 1.0;
      if (fVar1 <= 1.0) {
        fVar2 = fVar1;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar1) {
        fVar5 = fVar2;
      }
      fVar2 = (float)*(undefined8 *)(unaff_x19 + 0x24);
      fVar1 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20);
      uVar7 = CONCAT44(fVar1 + ((float)((ulong)uVar7 >> 0x20) - fVar1) * fVar5,
                       fVar2 + ((float)uVar7 - fVar2) * fVar5);
      fVar6 = *(float *)(unaff_x19 + 0x2c) + (fVar6 - *(float *)(unaff_x19 + 0x2c)) * fVar5;
      uVar4 = *(undefined8 *)(unaff_x22 + 0x94);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x8c);
      *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
      *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x14) = uVar4;
      *(undefined8 *)(unaff_x22 + 0xc) = uVar3;
      *(undefined8 *)(unaff_x19 + 0x3c) = uVar7;
      *(float *)(unaff_x19 + 0x44) = fVar6;
      in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0x44);
      in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x3c);
      FUN_035de170(&stack0x00000110,&stack0x000000a0,0);
      in_stack_00000078 = CONCAT44(uStack000000000000012c,fStack0000000000000128);
      in_stack_00000068 = in_stack_00000118;
      in_stack_00000060 = in_stack_00000110;
      in_stack_00000070 = in_stack_00000120;
      in_stack_00000088 = in_stack_00000138;
      in_stack_00000080 = in_stack_00000130;
      in_stack_00000090 = uStack0000000000000140;
      FUN_035de050();
    }
    *(undefined8 *)(unaff_x19 + 0x24) = uVar7;
    *(float *)(unaff_x19 + 0x2c) = fVar6;
  }
  fVar6 = in_stack_000000e8;
  uVar7 = in_stack_000000e0;
  if ((cStack0000000000000100 != '\0') && (0.0 < *(float *)(unaff_x19 + 0x80))) {
    in_stack_000000c8 = *(undefined8 *)(unaff_x22 + 0x54);
    in_stack_000000c0 = *(undefined8 *)(unaff_x22 + 0x4c);
    if ((*(char *)(unaff_x19 + 0x20) == '\0') && ((unaff_x21 & 1) == 0)) {
      fVar1 = (float)FUN_0377b0a4(0);
      fVar1 = fVar1 * *(float *)(unaff_x19 + 0x80);
      fVar2 = 1.0;
      if (fVar1 <= 1.0) {
        fVar2 = fVar1;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar1) {
        fVar5 = fVar2;
      }
      fVar2 = (float)*(undefined8 *)(unaff_x19 + 0x30);
      fVar1 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x30) >> 0x20);
      uVar7 = CONCAT44(fVar1 + ((float)((ulong)uVar7 >> 0x20) - fVar1) * fVar5,
                       fVar2 + ((float)uVar7 - fVar2) * fVar5);
      fVar6 = *(float *)(unaff_x19 + 0x38) + (fVar6 - *(float *)(unaff_x19 + 0x38)) * fVar5;
      *(undefined8 *)(unaff_x19 + 0x6c) = in_stack_000000c8;
      *(undefined8 *)(unaff_x19 + 100) = in_stack_000000c0;
      uStack0000000000000054 = in_stack_000000c8;
      in_stack_00000050 = (undefined4)((ulong)in_stack_000000c0 >> 0x20);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar7;
      *(float *)(unaff_x19 + 0x60) = fVar6;
      in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0x58);
      in_stack_00000048 = (undefined4)*(undefined8 *)(unaff_x19 + 0x60);
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x60) >> 0x20);
      FUN_035de170(&stack0x000000d0,&stack0x00000040,0);
      FUN_035de050();
    }
    *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
    *(float *)(unaff_x19 + 0x38) = fVar6;
  }
  return;
}


