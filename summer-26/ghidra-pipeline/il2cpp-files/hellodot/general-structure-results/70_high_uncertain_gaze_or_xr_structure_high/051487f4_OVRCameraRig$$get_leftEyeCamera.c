/*
FUNCTION_NAME: OVRCameraRig$$get_leftEyeCamera
ENTRY_POINT: 051487f4
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_8;validity_or_gating_hits_9;functionality_possible_biometrics_hits_8
*/


uint OVRCameraRig__get_leftEyeCamera(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar7;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000028;
  
  do {
    unaff_w23 = unaff_w23 + 1;
    if (unaff_x19 == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x28);
      if (lVar6 == 0) {
OVRCameraRig__get_leftEyeAnchor:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar3 = unaff_w23;
      if (*(int *)(lVar6 + 0x18) <= unaff_w23) {
LAB_05148800:
        return in_stack_00000028._4_4_ & 1;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) goto LAB_05148800;
      iVar3 = FUN_0391debc();
      lVar6 = *(long *)(unaff_x22 + 0x28);
      if (lVar6 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    }
    FUN_0390aff4(&stack0x00000008,lVar6,iVar3,*unaff_x28);
    uVar2 = uStack0000000000000014;
    if (unaff_x21 == 0) goto OVRCameraRig__get_leftEyeAnchor;
    fVar8 = fStack0000000000000010 - unaff_s8;
    fVar9 = fStack000000000000000c - unaff_s9;
    fVar10 = fStack0000000000000008 - unaff_s10;
    uVar4 = FUN_050e63d0(fVar10,fVar9,fVar8,uStack0000000000000014,*(undefined8 *)(unaff_x21 + 0x10)
                         ,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      if (lVar6 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      iVar7 = 0;
      while (iVar7 < *(int *)(lVar6 + 0x18)) {
        uVar5 = FUN_03968108(lVar6,iVar7,*unaff_x29);
        uVar4 = FUN_050e63d0(fVar10,fVar9,fVar8,uVar2,uVar5,0);
        if ((uVar4 & 1) != 0) {
          if (unaff_x20 == 0) {
            in_stack_00000028._4_4_ = 1;
            goto LAB_05148800;
          }
          lVar6 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar6 == 0) goto OVRCameraRig__get_leftEyeAnchor;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = iVar3;
          }
          else {
            FUN_0391e1ac();
          }
          in_stack_00000028._4_4_ = 1;
          break;
        }
        lVar6 = *(long *)(unaff_x21 + 0x18);
        iVar7 = iVar7 + 1;
        if (lVar6 == 0) goto OVRCameraRig__get_leftEyeAnchor;
      }
    }
  } while( true );
}


