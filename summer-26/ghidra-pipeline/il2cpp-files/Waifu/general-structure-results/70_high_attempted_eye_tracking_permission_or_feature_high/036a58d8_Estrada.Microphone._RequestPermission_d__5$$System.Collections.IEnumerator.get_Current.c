/*
FUNCTION_NAME: Estrada.Microphone.<RequestPermission>d__5$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 036a58d8
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_Microphone_<RequestPermission>d__5__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  pcVar4 = (code *)FUN_033d1b68(param_1 + 0x277);
  *(code **)(unaff_x20 + 400) = pcVar4;
  lVar5 = (*pcVar4)();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar6 = FUN_03fa1bc8(lVar5,DAT_0840ccb0);
  puVar7 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar7 = uVar6;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


