/*
FUNCTION_NAME: OVRPlugin.OVRP_1_60_0$$.cctor
ENTRY_POINT: 076e6b14
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


void OVRPlugin_OVRP_1_60_0___cctor
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  puVar1 = PTR_DAT_08f65598;
  fVar11 = param_3;
  uVar12 = param_4;
  fVar9 = param_2;
  if ((DAT_095482d2 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65598);
    FUN_0403162c(PTR_DAT_08fae310);
    DAT_095482d2 = 1;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x30);
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar2 = FUN_08589e5c(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_5 + 0x30);
  if (lVar4 != 0) {
    lVar3 = *(long *)puVar1;
    *(undefined4 *)(lVar4 + 0x58) = param_1;
    *(float *)(lVar4 + 0x5c) = param_2;
    *(float *)(lVar4 + 0x60) = param_3;
    *(undefined4 *)(lVar4 + 100) = param_4;
    uVar5 = *(undefined8 *)(param_5 + 0x38);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_0858816c(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_076e6ca4;
      FUN_076e3c48((long)&stack0x00000000 + 4);
      fVar6 = in_stack_00000000._4_4_;
      fVar13 = fStack000000000000000c;
      fVar9 = fStack0000000000000008;
    }
    else {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_076e6ca4;
      fVar6 = (float)FUN_08598884(*(long *)(param_5 + 0x38),0);
      fVar13 = fVar11;
    }
    lVar4 = *(long *)(param_5 + 0x20);
    if (lVar4 != 0) {
      in_stack_00000040 = *(undefined8 *)(lVar4 + 0x168);
      in_stack_00000028 = *(undefined8 *)(lVar4 + 0x150);
      in_stack_00000020 = *(undefined8 *)(lVar4 + 0x148);
      in_stack_00000038 = *(undefined8 *)(lVar4 + 0x160);
      uVar5 = *(undefined8 *)(lVar4 + 0x158);
      in_stack_00000030 = uVar5;
      if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar10 = (float)uVar5;
      fVar7 = (float)FUN_076e2da4(&stack0x00000020);
      fVar10 = fVar10 - fVar9;
      fVar11 = fVar11 - fVar13;
      uVar8 = FUN_08575dd0(fVar7 - fVar6,fVar10,fVar11,0);
      if (*(long *)(param_5 + 0x30) != 0) {
        OVRCameraRig__get_rightEyeAnchor
                  (fVar6,fVar9,fVar13,uVar8,fVar10,fVar11,uVar12,*(long *)(param_5 + 0x30),0);
        return;
      }
    }
  }
LAB_076e6ca4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


