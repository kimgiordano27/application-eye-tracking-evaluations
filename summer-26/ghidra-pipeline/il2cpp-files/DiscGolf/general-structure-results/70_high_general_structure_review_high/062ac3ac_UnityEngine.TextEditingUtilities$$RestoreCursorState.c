/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$RestoreCursorState
ENTRY_POINT: 062ac3ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


byte UnityEngine_TextEditingUtilities__RestoreCursorState(undefined8 param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  int unaff_w19;
  int unaff_w20;
  float unaff_s8;
  
  if ((in_ZR || in_NG != in_OV) || (unaff_w20 != 0)) {
LAB_062ac3e0:
    bVar1 = FUN_062ac7f0(*(undefined8 *)
                          (*(long *)
                            Method_Unity_Services_DistributedAuthority_Http_ResponseHandler_TryDeserializeResponse__
                          + 0xb8),param_1,unaff_w20);
  }
  else {
    FUN_062ac534();
    uVar4 = FUN_062ac624();
    if ((uVar4 & 1) == 0) goto LAB_062ac3e0;
    bVar1 = 1;
  }
  if (unaff_w19 - 1U < 2) {
    lVar5 = FUN_05dfe0a8(0);
    if (lVar5 == 0) {
      uVar3 = FUN_06293fbc();
      bVar2 = FUN_062ac93c(*(long *)(*(long *)
                                      Method_Unity_Services_DistributedAuthority_Http_ResponseHandler_TryDeserializeResponse__
                                    + 0xb8) + 0x18,
                           *(long *)(*(long *)
                                      Method_Unity_Services_DistributedAuthority_Http_ResponseHandler_TryDeserializeResponse__
                                    + 0xb8) + 0x30,uVar3,unaff_w20);
    }
    else {
      if ((0.0 < unaff_s8) && (unaff_w20 == 0)) {
        FUN_062acab4();
        uVar4 = FUN_062ac624();
        if ((uVar4 & 1) != 0) {
          bVar2 = 1;
          goto LAB_062ac4fc;
        }
      }
      bVar2 = FUN_062ac7f0(*(long *)(*(long *)
                                      Method_Unity_Services_DistributedAuthority_Http_ResponseHandler_TryDeserializeResponse__
                                    + 0xb8) + 8,lVar5,unaff_w20);
    }
LAB_062ac4fc:
    if (unaff_w19 == 2) {
      bVar1 = bVar1 & bVar2;
      goto LAB_062ac518;
    }
  }
  else {
    if (unaff_w19 == 0) goto LAB_062ac518;
    bVar2 = 0;
  }
  bVar1 = unaff_w19 == 1 & bVar2;
LAB_062ac518:
  return bVar1 & 1;
}


