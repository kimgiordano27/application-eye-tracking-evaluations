/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 0a450428
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 WebSocketSharp_Server_WebSocketSessionManager__CloseSession(int param_1)

{
  uint uVar1;
  bool in_ZR;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  
  if (in_ZR) {
    FUN_0a4506d4();
    return 0;
  }
  if ((param_1 == 0xd) && ((int)unaff_x19[0x25] != 2)) {
    return 1;
  }
  uVar2 = FUN_0a1c4aec();
  uVar1 = (uint)uVar2;
  if ((int)unaff_x19[0x25] - 1U < 2) {
    if ((uVar1 != 0xd) && (uVar1 != 3)) goto LAB_0a450594;
  }
  else {
                    /* try { // try from 0a45056c to 0a550573 has its CatchHandler @ 0a450754 */
    if (uVar1 - 9 < 2) {
      return 0;
    }
    if (uVar1 != 3) {
      if (uVar1 == 0xd) {
        return 0;
      }
      goto LAB_0a450594;
    }
  }
  uVar2 = 10;
LAB_0a450594:
  uVar3 = FUN_0a450df4();
  if ((uVar3 & 1) != 0) {
    (**(code **)(*unaff_x19 + 0x568))();
  }
  if (uVar2 == 0) {
    lVar4 = FUN_0a44b0d8();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (0 < *(int *)(lVar4 + 0x10)) {
      FUN_0a44bb94();
    }
  }
  return 0;
}


