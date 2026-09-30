/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 035e7730
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
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
  ulong in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  float fStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  char cStack0000000000000100;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  float fStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  ulong uStack0000000000000140;
  
  uStack0000000000000140 = 0;
  _cStack0000000000000100 = 0;
  uStack00000000000000c0 = 0;
  uStack00000000000000c8 = 0;
  fStack00000000000000e8 = 0.0;
  uStack00000000000000ec = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000fc = 0;
  uStack00000000000000f0 = 0;
  uStack00000000000000f4 = 0;
  fStack0000000000000128 = 0.0;
  uStack000000000000012c = 0;
  uStack0000000000000120 = 0;
  uStack0000000000000138 = 0;
  uStack000000000000013c = 0;
  uStack0000000000000130 = 0;
  uStack0000000000000134 = 0;
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  uStack00000000000000d8 = 0;
  uStack00000000000000d0 = 0;
  if (param_2 != 0) {
    uStack0000000000000118 = *(undefined8 *)(param_2 + 0x38);
    uStack0000000000000110 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    uStack0000000000000140 = *(ulong *)(param_2 + 0x60);
    _cStack0000000000000100 = *(undefined8 *)(param_2 + 0x98);
    fStack0000000000000128 = (float)*(undefined8 *)(param_2 + 0x48);
    fVar5 = fStack0000000000000128;
    uStack000000000000012c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
    uStack00000000000000d8 = *(undefined8 *)(param_2 + 0x70);
    uStack00000000000000d0 = *(undefined8 *)(param_2 + 0x68);
    uStack00000000000000e0 = *(undefined8 *)(param_2 + 0x78);
    uStack0000000000000138 = (undefined4)*(undefined8 *)(param_2 + 0x58);
    uStack000000000000013c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
    uStack0000000000000130 = (undefined4)*(undefined8 *)(param_2 + 0x50);
    uStack0000000000000134 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
    fStack00000000000000e8 = (float)*(undefined8 *)(param_2 + 0x80);
    uStack00000000000000ec = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
    uStack00000000000000f8 = (undefined4)*(undefined8 *)(param_2 + 0x90);
    uStack00000000000000fc = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
    uStack00000000000000f0 = (undefined4)*(undefined8 *)(param_2 + 0x88);
    uStack00000000000000f4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
    uStack0000000000000120 = uVar4;
    if (((uStack0000000000000140 & 0xff) != 0) && (0.0 < *(float *)(param_1 + 0x7c))) {
      if ((*(char *)(param_1 + 0x20) == '\0') && ((param_5 & 1) == 0)) {
        fVar1 = (float)FUN_0377b0a4(0);
        fVar1 = fVar1 * *(float *)(param_1 + 0x7c);
        fVar2 = 1.0;
        if (fVar1 <= 1.0) {
          fVar2 = fVar1;
        }
        fVar3 = 0.0;
        if (0.0 <= fVar1) {
          fVar3 = fVar2;
        }
        fVar2 = (float)*(undefined8 *)(param_1 + 0x24);
        fVar1 = (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
        uVar4 = CONCAT44(fVar1 + ((float)((ulong)uVar4 >> 0x20) - fVar1) * fVar3,
                         fVar2 + ((float)uVar4 - fVar2) * fVar3);
        fVar5 = *(float *)(param_1 + 0x2c) + (fVar5 - *(float *)(param_1 + 0x2c)) * fVar3;
        uStack00000000000000b4 = CONCAT44(uStack0000000000000138,uStack0000000000000134);
        *(undefined8 *)(param_1 + 0x50) = uStack00000000000000b4;
        *(ulong *)(param_1 + 0x48) = CONCAT44(uStack0000000000000130,uStack000000000000012c);
        uStack00000000000000b0 = uStack0000000000000130;
        *(undefined8 *)(param_1 + 0x3c) = uVar4;
        *(float *)(param_1 + 0x44) = fVar5;
        in_stack_000000a0 = *(undefined8 *)(param_1 + 0x3c);
        uStack00000000000000a8 = (undefined4)*(undefined8 *)(param_1 + 0x44);
        uStack00000000000000ac = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20);
        FUN_035de170(&stack0x00000110,&stack0x000000a0,0);
        in_stack_00000078 = CONCAT44(uStack000000000000012c,fStack0000000000000128);
        in_stack_00000088 = CONCAT44(uStack000000000000013c,uStack0000000000000138);
        in_stack_00000080 = CONCAT44(uStack0000000000000134,uStack0000000000000130);
        in_stack_00000068 = uStack0000000000000118;
        in_stack_00000060 = uStack0000000000000110;
        in_stack_00000070 = uStack0000000000000120;
        in_stack_00000090 = uStack0000000000000140;
        FUN_035de050(param_2,&stack0x00000060,0);
      }
      *(undefined8 *)(param_1 + 0x24) = uVar4;
      *(float *)(param_1 + 0x2c) = fVar5;
    }
    fVar5 = fStack00000000000000e8;
    uVar4 = uStack00000000000000e0;
    if ((cStack0000000000000100 != '\0') && (0.0 < *(float *)(param_1 + 0x80))) {
      uStack00000000000000c8 = CONCAT44(uStack00000000000000f8,uStack00000000000000f4);
      uStack00000000000000c0 = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
      if ((*(char *)(param_1 + 0x20) == '\0') && ((param_5 & 1) == 0)) {
        fVar1 = (float)FUN_0377b0a4(0);
        fVar1 = fVar1 * *(float *)(param_1 + 0x80);
        fVar2 = 1.0;
        if (fVar1 <= 1.0) {
          fVar2 = fVar1;
        }
        fVar3 = 0.0;
        if (0.0 <= fVar1) {
          fVar3 = fVar2;
        }
        fVar2 = (float)*(undefined8 *)(param_1 + 0x30);
        fVar1 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
        uVar4 = CONCAT44(fVar1 + ((float)((ulong)uVar4 >> 0x20) - fVar1) * fVar3,
                         fVar2 + ((float)uVar4 - fVar2) * fVar3);
        fVar5 = *(float *)(param_1 + 0x38) + (fVar5 - *(float *)(param_1 + 0x38)) * fVar3;
        *(undefined8 *)(param_1 + 0x6c) = uStack00000000000000c8;
        *(undefined8 *)(param_1 + 100) = uStack00000000000000c0;
        uStack0000000000000054 = uStack00000000000000c8;
        in_stack_00000050 = (undefined4)((ulong)uStack00000000000000c0 >> 0x20);
        *(undefined8 *)(param_1 + 0x58) = uVar4;
        *(float *)(param_1 + 0x60) = fVar5;
        in_stack_00000040 = *(undefined8 *)(param_1 + 0x58);
        in_stack_00000048 = (undefined4)*(undefined8 *)(param_1 + 0x60);
        uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
        FUN_035de170(&stack0x000000d0,&stack0x00000040,0);
        FUN_035de050(param_2);
      }
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(float *)(param_1 + 0x38) = fVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


