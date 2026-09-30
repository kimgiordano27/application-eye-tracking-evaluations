/*
FUNCTION_NAME: OVRBuildInfo$$OnEnable
ENTRY_POINT: 05148734
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_6
*/


uint OVRBuildInfo__OnEnable
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int iVar5;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  uint uStack0000000000000014;
  undefined8 in_stack_00000028;
  
  do {
    uVar2 = FUN_050e63d0(param_1,param_2,param_3,param_4,param_5,param_6);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 == 0) {
OVRCameraRig__get_leftEyeAnchor:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar5 = 0;
      while (iVar5 < *(int *)(lVar3 + 0x18)) {
        uVar4 = FUN_03968108(lVar3,iVar5,*unaff_x29);
        uVar2 = FUN_050e63d0(unaff_d14,unaff_d13,unaff_d12,unaff_d11,uVar4,0);
        if ((uVar2 & 1) != 0) {
          if (unaff_x20 == 0) {
            in_stack_00000028._4_4_ = 1;
            goto LAB_05148800;
          }
          lVar3 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar3 == 0) goto OVRCameraRig__get_leftEyeAnchor;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(int *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
          }
          else {
            FUN_0391e1ac();
          }
          in_stack_00000028._4_4_ = 1;
          break;
        }
        lVar3 = *(long *)(unaff_x21 + 0x18);
        iVar5 = iVar5 + 1;
        if (lVar3 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      }
    }
    unaff_w23 = unaff_w23 + 1;
    if (unaff_x19 == 0) {
      lVar3 = *(long *)(unaff_x22 + 0x28);
      if (lVar3 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      unaff_w24 = unaff_w23;
      if (*(int *)(lVar3 + 0x18) <= unaff_w23) {
LAB_05148800:
        return in_stack_00000028._4_4_ & 1;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) goto LAB_05148800;
      unaff_w24 = FUN_0391debc();
      lVar3 = *(long *)(unaff_x22 + 0x28);
      if (lVar3 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    }
    FUN_0390aff4(&stack0x00000008,lVar3,unaff_w24,*unaff_x28);
    if (unaff_x21 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    param_4 = (ulong)uStack0000000000000014;
    param_5 = *(undefined8 *)(unaff_x21 + 0x10);
    param_3 = (ulong)(uint)(fStack0000000000000010 - unaff_s8);
    param_2 = (ulong)(uint)(fStack000000000000000c - unaff_s9);
    param_1 = (ulong)(uint)(fStack0000000000000008 - unaff_s10);
    param_6 = 0;
    unaff_d11 = param_4;
    unaff_d12 = param_3;
    unaff_d13 = param_2;
    unaff_d14 = param_1;
  } while( true );
}


