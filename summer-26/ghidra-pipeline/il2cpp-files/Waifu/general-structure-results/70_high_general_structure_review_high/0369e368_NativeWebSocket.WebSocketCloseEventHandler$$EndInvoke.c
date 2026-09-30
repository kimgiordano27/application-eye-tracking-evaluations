/*
FUNCTION_NAME: NativeWebSocket.WebSocketCloseEventHandler$$EndInvoke
ENTRY_POINT: 0369e368
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2
*/


void NativeWebSocket_WebSocketCloseEventHandler__EndInvoke(code *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 400) = param_2;
  lVar4 = (*param_1)();
  if (lVar4 == 0) goto NativeWebSocket_WebSocketHelpers__GetErrorMessageFromCode;
  uVar5 = FUN_03fa1bc8(lVar4,DAT_0840ca08);
  puVar7 = (undefined8 *)(unaff_x19 + 0x48);
  *puVar7 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)(unaff_x19 + 0x31) == '\0') {
    plVar6 = *(long **)(unaff_x19 + 0x20);
    if (plVar6 == (long *)0x0) goto NativeWebSocket_WebSocketHelpers__GetErrorMessageFromCode;
    (**(code **)(*plVar6 + 0x558))
              (plVar6,*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(*plVar6 + 0x560));
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) goto NativeWebSocket_WebSocketHelpers__GetErrorMessageFromCode;
    (**(code **)(*plVar6 + 0x558))
              (plVar6,*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(*plVar6 + 0x560));
  }
  pcVar8 = *(code **)(unaff_x20 + 400);
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    *(code **)(unaff_x20 + 400) = pcVar8;
  }
  lVar4 = (*pcVar8)();
  if (lVar4 != 0) {
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0369e46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_086ef278)(lVar4,0);
    return;
  }
NativeWebSocket_WebSocketHelpers__GetErrorMessageFromCode:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


