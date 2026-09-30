/*
FUNCTION_NAME: OVRPlugin.OVRP_1_62_0$$.cctor
ENTRY_POINT: 076e6c0c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;validity_or_gating_hits_1;functionality_possible_biometrics_hits_1
*/


void OVRPlugin_OVRP_1_62_0___cctor
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long in_x9;
  long unaff_x19;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = *(undefined8 *)(param_1 + 0x168);
  uStack0000000000000028 = *(undefined8 *)(param_1 + 0x150);
  uStack0000000000000020 = *(undefined8 *)(param_1 + 0x148);
  uStack0000000000000038 = *(undefined8 *)(param_1 + 0x160);
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  uStack0000000000000030 = uVar3;
  if (*(int *)(**(long **)(in_x9 + 0x310) + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar2 = (float)uVar3;
  fVar1 = (float)FUN_076e2da4(&stack0x00000020);
  FUN_08575dd0(fVar1 - unaff_s8,fVar2 - unaff_s9,param_4 - unaff_s10,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    OVRCameraRig__get_rightEyeAnchor(unaff_s8,unaff_s9,*(long *)(unaff_x19 + 0x30),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


