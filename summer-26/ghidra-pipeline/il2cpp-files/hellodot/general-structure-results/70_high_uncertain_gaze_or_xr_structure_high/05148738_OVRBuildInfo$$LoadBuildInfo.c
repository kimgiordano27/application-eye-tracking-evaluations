/*
FUNCTION_NAME: OVRBuildInfo$$LoadBuildInfo
ENTRY_POINT: 05148738
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_6;validity_or_gating_hits_9;functionality_possible_biometrics_hits_6
*/


uint OVRBuildInfo__LoadBuildInfo(ulong param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
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
    if ((param_1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
OVRCameraRig__get_leftEyeAnchor:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar5 = 0;
      while (iVar5 < *(int *)(lVar2 + 0x18)) {
        uVar3 = FUN_03968108(lVar2,iVar5,*unaff_x29);
        uVar4 = FUN_050e63d0(unaff_d14,unaff_d13,unaff_d12,unaff_d11,uVar3,0);
        if ((uVar4 & 1) != 0) {
          if (unaff_x20 == 0) {
            in_stack_00000028._4_4_ = 1;
            goto LAB_05148800;
          }
          lVar2 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar2 == 0) goto OVRCameraRig__get_leftEyeAnchor;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
          }
          else {
            FUN_0391e1ac();
          }
          in_stack_00000028._4_4_ = 1;
          break;
        }
        lVar2 = *(long *)(unaff_x21 + 0x18);
        iVar5 = iVar5 + 1;
        if (lVar2 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      }
    }
    unaff_w23 = unaff_w23 + 1;
    if (unaff_x19 == 0) {
      lVar2 = *(long *)(unaff_x22 + 0x28);
      if (lVar2 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      unaff_w24 = unaff_w23;
      if (*(int *)(lVar2 + 0x18) <= unaff_w23) {
LAB_05148800:
        return in_stack_00000028._4_4_ & 1;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) goto LAB_05148800;
      unaff_w24 = FUN_0391debc();
      lVar2 = *(long *)(unaff_x22 + 0x28);
      if (lVar2 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    }
    FUN_0390aff4(&stack0x00000008,lVar2,unaff_w24,*unaff_x28);
    if (unaff_x21 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    unaff_d11 = (ulong)uStack0000000000000014;
    unaff_d12 = (ulong)(uint)(fStack0000000000000010 - unaff_s8);
    unaff_d13 = (ulong)(uint)(fStack000000000000000c - unaff_s9);
    unaff_d14 = (ulong)(uint)(fStack0000000000000008 - unaff_s10);
    param_1 = FUN_050e63d0(unaff_d14,unaff_d13,unaff_d12,unaff_d11,*(undefined8 *)(unaff_x21 + 0x10)
                           ,0);
  } while( true );
}


