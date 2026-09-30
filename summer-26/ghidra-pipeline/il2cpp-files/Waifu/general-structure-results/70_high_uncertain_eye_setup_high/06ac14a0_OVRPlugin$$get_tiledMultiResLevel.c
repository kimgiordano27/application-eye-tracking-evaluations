/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResLevel
ENTRY_POINT: 06ac14a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_tiledMultiResLevel(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  char *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_083cca68) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06ac1530;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06ac1530:
  uVar5 = (*(code *)*puVar4)();
  *unaff_x22 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x22 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x22 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*unaff_x20 == '\0') {
    *(undefined1 *)(unaff_x19 + 0x82) = 1;
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x06ac1520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_086ef168)();
    return;
  }
  return;
}


