/*
FUNCTION_NAME: OVRNativeBuffer$$.ctor
ENTRY_POINT: 05148704
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_8;functionality_possible_biometrics_hits_3
*/


uint OVRNativeBuffer___ctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int iVar6;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000028;
  
  do {
    uVar2 = uStack0000000000000014;
    fVar7 = fStack0000000000000010 - unaff_s8;
    fVar8 = fStack000000000000000c - unaff_s9;
    fVar9 = fStack0000000000000008 - unaff_s10;
    uVar3 = FUN_050e63d0(fVar9,fVar8,fVar7,uStack0000000000000014,*(undefined8 *)(unaff_x21 + 0x10),
                         0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x18);
      if (lVar4 == 0) break;
      iVar6 = 0;
      while (iVar6 < *(int *)(lVar4 + 0x18)) {
        uVar5 = FUN_03968108(lVar4,iVar6,*unaff_x29);
        uVar3 = FUN_050e63d0(fVar9,fVar8,fVar7,uVar2,uVar5,0);
        if ((uVar3 & 1) != 0) {
          if (unaff_x20 == 0) {
            in_stack_00000028._4_4_ = 1;
            goto LAB_05148800;
          }
          lVar4 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar4 == 0) goto OVRCameraRig__get_leftEyeAnchor;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(int *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
          }
          else {
            FUN_0391e1ac();
          }
          in_stack_00000028._4_4_ = 1;
          break;
        }
        lVar4 = *(long *)(unaff_x21 + 0x18);
        iVar6 = iVar6 + 1;
        if (lVar4 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      }
    }
    unaff_w23 = unaff_w23 + 1;
    if (unaff_x19 == 0) {
      lVar4 = *(long *)(unaff_x22 + 0x28);
      if (lVar4 == 0) break;
      unaff_w24 = unaff_w23;
      if (*(int *)(lVar4 + 0x18) <= unaff_w23) {
LAB_05148800:
        return in_stack_00000028._4_4_ & 1;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) goto LAB_05148800;
      unaff_w24 = FUN_0391debc();
      lVar4 = *(long *)(unaff_x22 + 0x28);
      if (lVar4 == 0) break;
    }
    FUN_0390aff4(&stack0x00000008,lVar4,unaff_w24,*unaff_x28);
  } while (unaff_x21 != 0);
OVRCameraRig__get_leftEyeAnchor:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


