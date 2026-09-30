/*
FUNCTION_NAME: OVRPlugin.OVRP_1_61_0$$.cctor
ENTRY_POINT: 076e6b90
PROGRAM: m3ar-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_1
*/


void OVRPlugin_OVRP_1_61_0___cctor
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float fVar9;
  undefined4 unaff_s11;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  lVar3 = *(long *)(unaff_x19 + 0x30);
  if (lVar3 != 0) {
    lVar1 = *unaff_x21;
    *(undefined4 *)(lVar3 + 0x58) = unaff_s11;
    *(undefined4 *)(lVar3 + 0x5c) = unaff_s10;
    *(undefined4 *)(lVar3 + 0x60) = unaff_s9;
    *(undefined4 *)(lVar3 + 100) = unaff_s8;
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_0858816c(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076e6ca4;
      FUN_076e3c48((long)&stack0x00000000 + 4);
      fVar5 = in_stack_00000000._4_4_;
      fVar9 = fStack000000000000000c;
      param_2 = fStack0000000000000008;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_076e6ca4;
      fVar5 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x38),0);
      fVar9 = param_3;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 != 0) {
      in_stack_00000040 = *(undefined8 *)(lVar3 + 0x168);
      in_stack_00000028 = *(undefined8 *)(lVar3 + 0x150);
      in_stack_00000020 = *(undefined8 *)(lVar3 + 0x148);
      in_stack_00000038 = *(undefined8 *)(lVar3 + 0x160);
      uVar4 = *(undefined8 *)(lVar3 + 0x158);
      in_stack_00000030 = uVar4;
      if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar8 = (float)uVar4;
      fVar6 = (float)FUN_076e2da4(&stack0x00000020);
      fVar8 = fVar8 - param_2;
      param_3 = param_3 - fVar9;
      uVar7 = FUN_08575dd0(fVar6 - fVar5,fVar8,param_3,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        OVRCameraRig__get_rightEyeAnchor
                  (fVar5,param_2,fVar9,uVar7,fVar8,param_3,param_4,*(long *)(unaff_x19 + 0x30),0);
        return;
      }
    }
  }
LAB_076e6ca4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


