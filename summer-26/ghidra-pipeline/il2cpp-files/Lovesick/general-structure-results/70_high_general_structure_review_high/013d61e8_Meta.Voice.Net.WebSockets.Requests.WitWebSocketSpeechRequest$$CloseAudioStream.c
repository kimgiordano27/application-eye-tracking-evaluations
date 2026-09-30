/*
FUNCTION_NAME: Meta.Voice.Net.WebSockets.Requests.WitWebSocketSpeechRequest$$CloseAudioStream
ENTRY_POINT: 013d61e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Meta_Voice_Net_WebSockets_Requests_WitWebSocketSpeechRequest__CloseAudioStream(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x22;
  long *unaff_x24;
  void *unaff_x25;
  size_t unaff_x26;
  long unaff_x29;
  
  thunk_FUN_00d61fa0();
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_013d6240;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_013d6240:
  uVar1 = (*(code *)*puVar4)();
  lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    FUN_00d5941c(lVar6);
  }
  pvVar5 = (void *)thunk_FUN_00d32ed4();
  memcpy(unaff_x25,pvVar5,unaff_x26);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x132) & 1) == 0)
  {
    FUN_00d5941c();
  }
  thunk_FUN_00d61fa0();
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_013d6308;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_013d6308:
  uVar2 = (*(code *)*puVar4)();
  lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    FUN_00d5941c(lVar6);
  }
  pvVar5 = (void *)thunk_FUN_00d32ed4();
  memcpy(unaff_x22,pvVar5,*(size_t *)(unaff_x29 + -0x68));
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) + 0x132) & 1) == 0)
  {
    FUN_00d5941c();
  }
  thunk_FUN_00d61fa0();
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_013d63d0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_013d63d0:
  uVar3 = (*(code *)*puVar4)();
  FUN_01789718(*(undefined4 *)(unaff_x29 + -0x6c),uVar1,uVar2,uVar3,0);
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


