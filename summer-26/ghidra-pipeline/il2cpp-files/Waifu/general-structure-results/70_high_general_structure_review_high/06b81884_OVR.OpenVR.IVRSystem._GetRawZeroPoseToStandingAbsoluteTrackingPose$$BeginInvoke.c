/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 06b81884
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


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke
               (long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong in_x9;
  long in_x10;
  uint in_w11;
  
  puVar1 = (ulong *)(in_x10 + param_1 * 8 + (ulong)(in_w11 & 0xffff | 0x40000));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  cVar2 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  if ((*(byte *)(param_4 + 0x4c) >> 4 & 1) == 0) {
    if (param_3 == 0) {
      uVar4 = thunk_FUN_0334f058(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar4,0);
    }
  }
  else if (cVar2 == '\x05') {
    *(code **)(param_2 + 0x18) = FUN_0329fabc;
    goto LAB_06b818fc;
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
LAB_06b818fc:
  *(code **)(param_2 + 0x38) = FUN_0329fa3c;
  return;
}


