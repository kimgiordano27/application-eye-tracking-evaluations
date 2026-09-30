/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 050dc5c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  int unaff_w24;
  long *unaff_x26;
  int unaff_w28;
  undefined1 auVar5 [16];
  long in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  char cStack0000000000000060;
  int iStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  
  *(undefined8 *)*unaff_x19 = param_1;
  *(undefined8 *)(*unaff_x19 + 8) = param_2;
  if (unaff_w20 < 1) {
    if ((in_stack_00000048 & 0xff00000000) == 0) {
      uVar3 = 0;
    }
    else {
      _cStack0000000000000060 = 0;
      FUN_03dce070(&stack0x00000060,in_stack_00000048._4_4_ >> 0x10,*(undefined8 *)PTR_DAT_067675e0,
                   param_4,param_5,unaff_w20 + -1);
      uVar3 = _cStack0000000000000060;
    }
    if (((-0x1d < unaff_w20) && ((uVar3 & 0xff) != 0)) && (0x34 < (int)(uVar3 >> 0x20))) {
      uVar4 = *(undefined8 *)*unaff_x19;
      uVar1 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      auVar5 = FUN_05065dc4(uVar4,uVar1,0);
      *unaff_x19 = auVar5;
    }
    if (-1 < unaff_w20) goto LAB_050dc978;
    if (0 < unaff_w20 + unaff_w28 + 0x1c) {
      uVar4 = *(undefined8 *)*unaff_x19;
      uVar1 = *(undefined8 *)(*unaff_x19 + 8);
      auVar2 = *unaff_x19;
      auVar5 = *unaff_x19;
      if (unaff_w20 < -0x1c) {
        _cStack0000000000000060 = 0;
        in_stack_00000068 = 0;
        FUN_05061f70(&stack0x00000060,0x10000000,0x3e250261,0x204fce5e,0,0,0);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        auVar5 = FUN_050660bc(uVar4,uVar1,_cStack0000000000000060,in_stack_00000068,0);
        *unaff_x19 = auVar5;
        in_stack_00000050 = 0;
        in_stack_00000058 = 0;
        FUN_05061f70(&stack0x00000050,1,0,0,0,-0x1c - unaff_w20,0);
        uVar3 = in_stack_00000050;
        uVar4 = in_stack_00000058;
      }
      else {
        _cStack0000000000000060 = 0;
        in_stack_00000068 = 0;
        FUN_05061f70(&stack0x00000060,1,0,0,0,-unaff_w20,0);
        uVar3 = _cStack0000000000000060;
        uVar4 = in_stack_00000068;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar3 = _cStack0000000000000060;
          uVar4 = in_stack_00000068;
          auVar5 = auVar2;
        }
      }
      auVar5 = FUN_0506600c(auVar5._0_8_,auVar5._8_8_,uVar3,uVar4,0);
      goto LAB_050dc974;
    }
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    in_stack_00000078 = (*(undefined8 **)(*unaff_x26 + 0xb8))[1];
    in_stack_00000070 = **(undefined8 **)(*unaff_x26 + 0xb8);
    *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000078;
    *(undefined8 *)*unaff_x19 = in_stack_00000070;
  }
  else {
    if (0x1d < unaff_w20 + unaff_w28) {
LAB_050dc684:
      uVar4 = 2;
      goto LAB_050dc0fc;
    }
    if (unaff_w20 + unaff_w28 == 0x1d) {
      if (unaff_w20 < 2) {
        _cStack0000000000000060 = 0;
        in_stack_00000068 = 0;
        FUN_05061f70(&stack0x00000060,0x99999999,0x99999999,0x19999999,0,0,0);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_05066598(param_1,param_2,_cStack0000000000000060,in_stack_00000068,0);
        if (((uVar3 & 1) != 0) && ((in_stack_00000048 & 0xff00000000) != 0)) {
          _cStack0000000000000060 = 0;
          FUN_03dce070(&stack0x00000060,in_stack_00000048._4_4_ >> 0x10,
                       *(undefined8 *)PTR_DAT_067675e0);
          if ((cStack0000000000000060 != '\0') && (0x35 < iStack0000000000000064))
          goto LAB_050dc684;
        }
      }
      else {
        _cStack0000000000000060 = 0;
        in_stack_00000068 = 0;
        FUN_05061f70(&stack0x00000060,1,0,0,0,unaff_w20 + -1,0);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        auVar5 = FUN_050660bc(param_1,param_2,_cStack0000000000000060,in_stack_00000068,0);
        *unaff_x19 = auVar5;
        in_stack_00000050 = 0;
        in_stack_00000058 = 0;
        FUN_05061f70(&stack0x00000050,0x99999999,0x99999999,0x19999999,0,0,0);
        uVar3 = FUN_050667d4(auVar5._0_8_,auVar5._8_8_,in_stack_00000050,in_stack_00000058,0);
        if ((uVar3 & 1) != 0) goto LAB_050dc684;
      }
      uVar4 = *(undefined8 *)*unaff_x19;
      uVar1 = *(undefined8 *)(*unaff_x19 + 8);
      _cStack0000000000000060 = 0;
      in_stack_00000068 = 0;
      FUN_05061474(&stack0x00000060,10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      auVar5 = FUN_0506600c(uVar4,uVar1,_cStack0000000000000060,in_stack_00000068,0);
    }
    else {
      _cStack0000000000000060 = 0;
      in_stack_00000068 = 0;
      FUN_05061f70(&stack0x00000060,1,0,0,0,unaff_w20,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      auVar5 = FUN_050660bc(param_1,param_2,_cStack0000000000000060,in_stack_00000068,0);
    }
LAB_050dc974:
    *unaff_x19 = auVar5;
LAB_050dc978:
    if (unaff_w24 == 0x2d) {
      uVar4 = *(undefined8 *)*unaff_x19;
      uVar1 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      auVar5 = FUN_05065dbc(uVar4,uVar1,0);
      *unaff_x19 = auVar5;
      uVar4 = 1;
      goto LAB_050dc0fc;
    }
  }
  uVar4 = 1;
LAB_050dc0fc:
  if (*(long *)(in_stack_00000040 + 0x28) != in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


