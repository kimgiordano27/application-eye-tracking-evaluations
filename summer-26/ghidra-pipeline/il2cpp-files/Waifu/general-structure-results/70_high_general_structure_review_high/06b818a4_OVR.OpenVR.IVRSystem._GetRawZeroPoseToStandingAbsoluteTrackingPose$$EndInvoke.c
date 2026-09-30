/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 06b818a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__EndInvoke
               (ulong *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong in_x9;
  uint in_w11;
  
  while (in_w11 != 0) {
    bVar2 = 1;
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 | in_x9;
      bVar2 = ExclusiveMonitorsStatus();
    }
    in_w11 = (uint)bVar2;
  }
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  if ((*(byte *)(param_4 + 0x4c) >> 4 & 1) == 0) {
    if (param_3 == 0) {
      uVar4 = thunk_FUN_0334f058(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar4,0);
    }
  }
  else if (cVar1 == '\x05') {
    *(code **)(param_2 + 0x18) = FUN_0329fabc;
    goto LAB_06b818fc;
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
LAB_06b818fc:
  *(code **)(param_2 + 0x38) = FUN_0329fa3c;
  return;
}


