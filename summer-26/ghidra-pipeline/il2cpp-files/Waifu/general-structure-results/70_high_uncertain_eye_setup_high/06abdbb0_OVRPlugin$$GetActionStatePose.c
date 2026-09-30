/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 06abdbb0
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


void OVRPlugin__GetActionStatePose(ulong *param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong in_x9;
  uint in_w11;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  while (in_w11 != 0) {
    bVar2 = 1;
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = *param_1 | in_x9;
      bVar2 = ExclusiveMonitorsStatus();
    }
    in_w11 = (uint)bVar2;
  }
  puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x10);
  *puVar6 = unaff_x19;
  puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = FUN_03398188(DAT_083c73b0,0x11);
  FUN_06736060(uVar5,DAT_0842c3f8,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x18);
  *puVar6 = uVar5;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(DAT_083c76b0,0x18);
  FUN_06736060(uVar5,DAT_0842c410,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x20);
  *puVar6 = uVar5;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(*(undefined8 *)(unaff_x24 + 0x838),0x18);
  FUN_06736060(uVar5,DAT_0842c308,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x28);
  *puVar6 = uVar5;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


