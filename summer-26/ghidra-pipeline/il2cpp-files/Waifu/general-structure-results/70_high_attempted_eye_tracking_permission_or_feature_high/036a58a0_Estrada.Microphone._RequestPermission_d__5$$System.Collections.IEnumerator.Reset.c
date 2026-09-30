/*
FUNCTION_NAME: Estrada.Microphone.<RequestPermission>d__5$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 036a58a0
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


void Estrada_Microphone_<RequestPermission>d__5__System_Collections_IEnumerator_Reset(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x19;
  undefined8 *puVar7;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  puVar1 = (ulong *)(unaff_x22 + param_1 * 8 + 0x464e0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (unaff_x21 >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pcVar6 = *(code **)(unaff_x20 + 400);
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    *(code **)(unaff_x20 + 400) = pcVar6;
  }
  lVar4 = (*pcVar6)();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar5 = FUN_03fa1bc8(lVar4,DAT_0840ccb0);
  puVar7 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar7 = uVar5;
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


