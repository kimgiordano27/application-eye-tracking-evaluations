/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 056f6570
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__Invoke(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  
  uVar1 = FUN_02f07f2c();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 != 2) {
      if (unaff_x21 == 0) {
        uVar3 = thunk_FUN_02ea6548(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar3,0);
      }
      goto LAB_056f65c8;
    }
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      pcVar4 = FUN_02df687c;
    }
    else {
      uVar1 = thunk_FUN_02eb33c8();
      uVar2 = FUN_02f08498();
      if ((uVar1 & 1) == 0) {
        if ((uVar2 & 1) == 0) {
          pcVar4 = FUN_02df68bc;
        }
        else {
          pcVar4 = FUN_02df68f0;
        }
      }
      else if ((uVar2 & 1) == 0) {
        pcVar4 = FUN_02df698c;
      }
      else {
        pcVar4 = FUN_02df69e0;
      }
    }
  }
  else {
    if (unaff_w22 != 3) {
LAB_056f65c8:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke;
    }
    pcVar4 = FUN_02df68a4;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke:
  *(code **)(unaff_x19 + 0x38) = FUN_02df681c;
  return;
}


