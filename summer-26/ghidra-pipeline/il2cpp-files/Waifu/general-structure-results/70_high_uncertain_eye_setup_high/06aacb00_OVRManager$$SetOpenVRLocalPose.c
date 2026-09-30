/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 06aacb00
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long in_x9;
  uint in_w11;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (in_w11 < *(byte *)(param_1 + 0x130)) {
    uVar4 = 0;
  }
  else {
    uVar4 = unaff_x19;
    if (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1) {
      uVar4 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x130) = uVar4;
  if (DAT_08908cd0 == 0) {
    *(undefined8 *)(unaff_x20 + 0x138) = unaff_x19;
  }
  else {
    puVar1 = &DAT_0873ccb0 + (unaff_x20 + 0x130U >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (unaff_x20 + 0x130U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar1 = &DAT_0873ccb0 + (unaff_x20 + 0x138U >> 0x12 & 0x7fff);
    *(undefined8 *)(unaff_x20 + 0x138) = unaff_x19;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (unaff_x20 + 0x138U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


