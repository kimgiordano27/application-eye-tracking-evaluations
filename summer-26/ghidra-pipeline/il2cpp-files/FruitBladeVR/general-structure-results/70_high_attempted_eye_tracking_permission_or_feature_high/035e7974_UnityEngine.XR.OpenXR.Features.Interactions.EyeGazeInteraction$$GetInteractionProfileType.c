/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 035e7974
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
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
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  char cStack0000000000000150;
  
  uStack00000000000000c0 = param_1._0_8_;
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  uStack0000000000000114 = 0;
  uStack00000000000000d8 = param_1._8_4_;
  uStack00000000000000dc = param_1._12_4_;
  uStack00000000000000e0 = param_1._0_4_;
  uStack00000000000000e4 = param_1._4_4_;
  uStack00000000000000f0 = 0;
  if (param_3 != 0) {
    in_stack_00000100 = *(undefined8 *)(param_3 + 0x40);
    _cStack0000000000000150 = *(undefined8 *)(param_3 + 0x60);
    uStack0000000000000138 = (undefined4)*(undefined8 *)(param_3 + 0x48);
    uStack000000000000013c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
    uStack0000000000000148 = (undefined4)*(undefined8 *)(param_3 + 0x58);
    uStack000000000000014c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
    uStack0000000000000140 = (undefined4)*(undefined8 *)(param_3 + 0x50);
    uStack0000000000000144 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
    uStack0000000000000128 = *(undefined8 *)(param_3 + 0x38);
    uStack0000000000000120 = *(undefined8 *)(param_3 + 0x30);
    uStack00000000000000f0 = *(undefined8 *)(param_3 + 0x98);
    uStack0000000000000114 = uStack0000000000000144;
    uStack0000000000000118 = uStack0000000000000148;
    uStack000000000000010c = uStack000000000000013c;
    uStack0000000000000110 = uStack0000000000000140;
    in_stack_000000a0 = *(undefined8 *)(param_3 + 0x78);
    uStack00000000000000d8 = (undefined4)*(undefined8 *)(param_3 + 0x80);
    uStack00000000000000dc = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x80) >> 0x20);
    uStack00000000000000e8 = (undefined4)*(undefined8 *)(param_3 + 0x90);
    uStack00000000000000ec = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x90) >> 0x20);
    uStack00000000000000e0 = (undefined4)*(undefined8 *)(param_3 + 0x88);
    uStack00000000000000e4 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x88) >> 0x20);
    uStack00000000000000c8 = *(undefined8 *)(param_3 + 0x70);
    uStack00000000000000c0 = *(undefined8 *)(param_3 + 0x68);
    if (cStack0000000000000150 != '\0') {
      uStack00000000000000b4 = CONCAT44(uStack00000000000000e8,uStack00000000000000e4);
      uStack00000000000000ac = uStack00000000000000dc;
      in_stack_000000b0 = uStack00000000000000e0;
      in_stack_000000a8 = uStack00000000000000d8;
      uStack00000000000000d0 = in_stack_000000a0;
      in_stack_00000108 = uStack0000000000000138;
      uStack0000000000000130 = in_stack_00000100;
      FUN_035de170(&stack0x00000120,&stack0x000000a0,0);
      in_stack_00000078 = CONCAT44(uStack000000000000013c,uStack0000000000000138);
      in_stack_00000088 = CONCAT44(uStack000000000000014c,uStack0000000000000148);
      in_stack_00000080 = CONCAT44(uStack0000000000000144,uStack0000000000000140);
      in_stack_00000068 = uStack0000000000000128;
      in_stack_00000060 = uStack0000000000000120;
      in_stack_00000070 = uStack0000000000000130;
      in_stack_00000090 = _cStack0000000000000150;
      FUN_035de050(param_3,&stack0x00000060,0);
      uStack0000000000000054 = CONCAT44(uStack0000000000000118,uStack0000000000000114);
      in_stack_00000048 = in_stack_00000108;
      in_stack_00000040 = in_stack_00000100;
      uStack000000000000004c = uStack000000000000010c;
      in_stack_00000050 = uStack0000000000000110;
      FUN_035de170(&stack0x000000c0,&stack0x00000040,0);
      FUN_035de050(param_3);
    }
    return;
  }
  uStack00000000000000d0 = uStack00000000000000c0;
  uStack00000000000000e8 = uStack00000000000000d8;
  uStack00000000000000ec = uStack00000000000000dc;
  uStack0000000000000120 = uStack00000000000000c0;
  uStack0000000000000130 = uStack00000000000000c0;
  uStack0000000000000138 = uStack00000000000000d8;
  uStack000000000000013c = uStack00000000000000dc;
  uStack0000000000000140 = uStack00000000000000e0;
  uStack0000000000000144 = uStack00000000000000e4;
  uStack0000000000000148 = uStack00000000000000d8;
  uStack000000000000014c = uStack00000000000000dc;
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


