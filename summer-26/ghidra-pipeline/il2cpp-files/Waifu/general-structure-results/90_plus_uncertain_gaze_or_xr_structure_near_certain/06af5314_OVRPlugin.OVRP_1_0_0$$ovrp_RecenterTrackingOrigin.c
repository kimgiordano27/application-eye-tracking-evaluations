/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 06af5314
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 unaff_w21;
  
  *(undefined1 *)(unaff_x20 + 0x4db) = unaff_w21;
  uVar4 = FUN_03398a84(DAT_083bf200);
  FUN_05d159e0(uVar4,0,0,**(undefined8 **)(*(long *)(DAT_083e05b0 + 0x20) + 0xc0));
  puVar5 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar5 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_03398a84(DAT_083bf200);
  FUN_05d159e0(uVar4,0,0,**(undefined8 **)(*(long *)(DAT_083e05b0 + 0x20) + 0xc0));
  puVar5 = (undefined8 *)(unaff_x19 + 0x48);
  *puVar5 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar4 = FUN_0339898c(uVar6,DAT_083cc4b0);
  puVar5 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar5 = uVar4;
  FUN_0339898c(uVar6,DAT_083cc4b0);
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


