/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 06abae2c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x1cb) = unaff_w21;
  uVar4 = FUN_03398a84(DAT_083cbf68);
  FUN_06abaeb8();
  puVar5 = (undefined8 *)(unaff_x19 + 0x80);
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
  if (*(int *)(DAT_083cbf48 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_06aba4a4();
  return;
}


