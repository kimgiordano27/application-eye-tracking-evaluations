/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 01d26aa8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined8 uVar3;
  
  if (param_1 == (in_w8 & 0xffff | 0x5d340000)) {
    uVar1 = thunk_FUN_01c50bfc();
    if ((uVar1 & 1) == 0) goto LAB_01d278e4;
    uVar3 = 0x448;
  }
  else if (param_1 == 0x5d4e6d01) {
    uVar1 = thunk_FUN_01c50bfc();
    if ((uVar1 & 1) == 0) goto LAB_01d278e4;
    uVar3 = 0x416;
  }
  else {
    if ((param_1 != 0x5e25208d) || (uVar1 = thunk_FUN_01c50bfc(), (uVar1 & 1) == 0)) {
LAB_01d278e4:
      thunk_FUN_010303a8(PTR_DAT_023573f0);
      uVar3 = FUN_01c45a74();
      thunk_FUN_010303a8(PTR_DAT_0234d168);
      uVar2 = thunk_FUN_010400dc();
      FUN_01d4c2c0(uVar2,uVar3,0);
      uVar3 = thunk_FUN_010303a8(PTR_DAT_023573f8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar2,uVar3);
    }
    uVar3 = 0x44d;
  }
  uVar2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234c0c0);
  FUN_01d2447c(uVar2,uVar3,1,0);
  return uVar2;
}


