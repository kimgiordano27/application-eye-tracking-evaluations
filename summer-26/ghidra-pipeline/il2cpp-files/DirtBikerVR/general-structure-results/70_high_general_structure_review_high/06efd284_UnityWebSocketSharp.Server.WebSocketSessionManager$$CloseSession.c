/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 06efd284
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long UnityWebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long lVar7;
  undefined8 uVar8;
  undefined4 *unaff_x27;
  undefined1 auVar9 [16];
  
  FUN_03a8a718(PTR_DAT_084d28c8);
  *(undefined1 *)(unaff_x20 + 0xe7d) = 1;
  FUN_06efddbc();
  FUN_06f00d74();
  FUN_06f00dc8();
  puVar1 = PTR_DAT_084d2a60;
  if (*(char *)(unaff_x19 + 0x52) == '\0') {
    lVar3 = 0;
    *unaff_x27 = 0x2749;
  }
  else {
    *unaff_x27 = 0;
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_06f0a9a0();
    auVar9 = FUN_05071b04();
    puVar1 = PTR_DAT_084d28c8;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined1 (*) [16])(lVar3 + 0x50) = auVar9;
    thunk_FUN_03afed3c((undefined1 (*) [16])(lVar3 + 0x50),0);
    *(undefined4 *)(lVar3 + 0x60) = unaff_w23;
    *(undefined4 *)(lVar3 + 100) = unaff_w22;
    *(undefined4 *)(lVar3 + 0x68) = unaff_w21;
    FUN_06f0a85c(lVar3,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar5);
      lVar5 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_084d2a50;
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[10];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084d2a48);
      FUN_06f17710(lVar7,uVar8,*(undefined8 *)PTR_DAT_084d2a68,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      *plVar4 = lVar7;
      thunk_FUN_03afed3c(plVar4,lVar7);
    }
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_06f17aec(uVar8,2,lVar7,lVar3,0);
    FUN_06efef8c();
  }
  return lVar3;
}


