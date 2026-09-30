/*
FUNCTION_NAME: Unity.VisualScripting.UnityOnMouseUpAsButtonMessageListener$$OnMouseUpAsButton
ENTRY_POINT: 07672628
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void Unity_VisualScripting_UnityOnMouseUpAsButtonMessageListener__OnMouseUpAsButton(code *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar9;
  long unaff_x23;
  
  iVar4 = (*param_1)();
  if ((iVar4 == 4) && (lVar9 = *(long *)(unaff_x20 + 0x18), lVar9 != 0)) {
    if (DAT_086f3ea8 == (code *)0x0) {
      DAT_086f3ea8 = (code *)FUN_033d1b68("UnityEngine.Networking.DownloadHandler::GetErrorMsg()");
    }
    (*DAT_086f3ea8)(lVar9);
    unaff_x21 = FUN_0666ec64();
  }
  pcVar7 = *(code **)(unaff_x23 + 0xfb8);
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)FUN_033d1b68("UnityEngine.Networking.UnityWebRequest::get_result()");
    *(code **)(unaff_x23 + 0xfb8) = pcVar7;
  }
  uVar5 = (*pcVar7)();
  puVar8 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar8 = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x20) = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (DAT_086f3f98 == (code *)0x0) {
    DAT_086f3f98 = (code *)FUN_033d1b68("UnityEngine.Networking.UnityWebRequest::get_responseCode()"
                                       );
  }
  uVar6 = (*DAT_086f3f98)();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
  uVar6 = FUN_07cb46ec();
  puVar8 = (undefined8 *)(unaff_x19 + 0x28);
  *puVar8 = uVar6;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (DAT_086f3f88 == (code *)0x0) {
    DAT_086f3f88 = (code *)FUN_033d1b68("UnityEngine.Networking.UnityWebRequest::GetUrl()");
  }
  uVar6 = (*DAT_086f3f88)();
  puVar8 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar8 = uVar6;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


