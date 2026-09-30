/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 056ecf80
PROGRAM: Untangled-libil2cpp.so
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
OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0552fe18(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
LAB_056ecfa4:
    lVar2 = FUN_055316f4();
    uVar1 = FUN_0552fe18(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) {
LAB_056ecff0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar1 = FUN_0552fd44(lVar2,0);
      if ((uVar1 & 1) != 0) goto LAB_056ecfd8;
    }
    uVar3 = 0;
  }
  else {
    if (param_1 == 0) goto LAB_056ecff0;
    uVar1 = FUN_0552fd44(param_1,0);
    if ((uVar1 & 1) == 0) goto LAB_056ecfa4;
LAB_056ecfd8:
    uVar3 = 1;
  }
  return uVar3;
}


