/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 05bceec0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  
  uStack0000000000000088 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000098 = 0;
  fStack0000000000000064 = param_2;
  fStack0000000000000068 = param_1;
  uVar1 = FUN_04dddd54(unaff_s9 + fStack0000000000000054,unaff_s13 + fStack0000000000000050,
                       unaff_s11 + in_stack_00000048._4_4_,param_5 + param_4,
                       unaff_s10 + fStack000000000000002c,unaff_s15 + fStack0000000000000028,
                       &stack0x00000088,*unaff_x23);
  in_stack_00000078 = uStack0000000000000090;
  in_stack_00000070 = uStack0000000000000088;
  in_stack_00000080 = uStack0000000000000098;
  fVar4 = unaff_s14;
  fVar5 = unaff_s12;
  fVar3 = (float)FUN_05bce430(unaff_s8,uVar1,&stack0x00000070);
  fVar8 = (fVar5 - unaff_s12) * (fVar5 - unaff_s12) +
          (fVar3 - unaff_s8) * (fVar3 - unaff_s8) + (fVar4 - unaff_s14) * (fVar4 - unaff_s14);
  fVar6 = (param_3 - unaff_s12) * (param_3 - unaff_s12) +
          (fStack0000000000000068 - unaff_s8) * (fStack0000000000000068 - unaff_s8) +
          (fStack0000000000000064 - unaff_s14) * (fStack0000000000000064 - unaff_s14);
  fVar9 = fVar6;
  if (fVar8 <= fVar6) {
    fVar9 = fVar8;
  }
  fVar7 = (in_stack_00000018._4_4_ - unaff_s12) * (in_stack_00000018._4_4_ - unaff_s12) +
          (fStack0000000000000024 - unaff_s8) * (fStack0000000000000024 - unaff_s8) +
          (fStack0000000000000020 - unaff_s14) * (fStack0000000000000020 - unaff_s14);
  fVar10 = (fStack0000000000000058 - unaff_s12) * (fStack0000000000000058 - unaff_s12) +
           (in_stack_00000060 - unaff_s8) * (in_stack_00000060 - unaff_s8) +
           (fStack000000000000005c - unaff_s14) * (fStack000000000000005c - unaff_s14);
  fVar8 = fVar7;
  if (fVar9 <= fVar7) {
    fVar8 = fVar9;
  }
  fVar9 = fVar10;
  if (fVar8 <= fVar10) {
    fVar9 = fVar8;
  }
  if (fVar10 == fVar9) {
    uVar2 = 0;
    *unaff_x20 = in_stack_00000060;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fStack0000000000000058;
  }
  else if (fVar7 == fVar9) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fStack0000000000000020;
    uVar2 = 0x43340000;
    unaff_x20[2] = in_stack_00000018._4_4_;
  }
  else if (fVar6 == fVar9) {
    *unaff_x20 = fStack0000000000000068;
    unaff_x20[1] = fStack0000000000000064;
    uVar2 = 0x42b40000;
    unaff_x20[2] = param_3;
  }
  else {
    *unaff_x20 = fVar3;
    unaff_x20[1] = fVar4;
    uVar2 = 0xc2b40000;
    unaff_x20[2] = fVar5;
  }
  *unaff_x19 = uVar2;
  return;
}


