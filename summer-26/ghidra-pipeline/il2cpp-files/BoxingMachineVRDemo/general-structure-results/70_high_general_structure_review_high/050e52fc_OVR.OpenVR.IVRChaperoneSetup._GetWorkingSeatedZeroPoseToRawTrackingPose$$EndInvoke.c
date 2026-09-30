/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 050e52fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long unaff_x23;
  
  thunk_FUN_02dd37b4();
  if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_02d9d438(), lVar1 == 0)) {
    uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,0);
  }
  if (*(uint *)(unaff_x23 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  *(long *)(unaff_x23 + 0x28) = unaff_x20;
  thunk_FUN_02dd37b4();
  if (unaff_x22 != (long *)0x0) {
    lVar1 = (**(code **)(*unaff_x22 + 0x408))();
    if (lVar1 != 0) {
      lVar1 = FUN_04f3a9a8();
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)PTR_DAT_067680e8;
        lVar2 = thunk_FUN_02d9d438(lVar1,uVar3);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(lVar1,uVar3);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


