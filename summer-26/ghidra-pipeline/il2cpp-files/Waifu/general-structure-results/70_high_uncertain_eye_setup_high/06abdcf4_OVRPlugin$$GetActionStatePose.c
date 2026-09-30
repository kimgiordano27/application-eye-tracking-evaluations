/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 06abdcf4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x23;
  
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 0x28);
  *puVar4 = unaff_x19;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


