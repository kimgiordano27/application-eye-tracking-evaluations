/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 07798810
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void ProximaWebSocketSharp_Net_ChunkedRequestStream__Close(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar3) {
    uVar6 = 2;
    do {
      uVar5 = uVar6 - 2;
      if ((uVar3 <= uVar5) || (uVar3 <= uVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar2 = param_1 + 0x20;
      iVar1 = uVar6 + 1;
      uVar4 = *(undefined4 *)(lVar2 + (long)(int)uVar6 * 4);
      *(undefined4 *)(lVar2 + (long)(int)uVar6 * 4) = *(undefined4 *)(lVar2 + (long)(int)uVar5 * 4);
      uVar6 = uVar6 + 3;
      *(undefined4 *)(lVar2 + (long)(int)uVar5 * 4) = uVar4;
    } while (iVar1 < (int)uVar3);
  }
  return;
}


