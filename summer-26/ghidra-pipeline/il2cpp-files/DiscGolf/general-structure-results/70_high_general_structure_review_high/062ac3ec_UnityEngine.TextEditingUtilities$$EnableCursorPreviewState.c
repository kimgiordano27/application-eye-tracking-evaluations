/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$EnableCursorPreviewState
ENTRY_POINT: 062ac3ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


byte UnityEngine_TextEditingUtilities__EnableCursorPreviewState(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int unaff_w19;
  int unaff_w20;
  float unaff_s8;
  
  bVar1 = FUN_062ac7f0(*(undefined8 *)(**(long **)(param_1 + 0x748) + 0xb8));
  if (unaff_w19 - 1U < 2) {
    lVar4 = FUN_05dfe0a8(0);
    if (lVar4 == 0) {
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
        uVar5 = FUN_062ac624();
        if ((uVar5 & 1) != 0) {
          bVar2 = 1;
          goto LAB_062ac4fc;
        }
      }
      bVar2 = FUN_062ac7f0(*(long *)(*(long *)
                                      Method_Unity_Services_DistributedAuthority_Http_ResponseHandler_TryDeserializeResponse__
                                    + 0xb8) + 8,lVar4,unaff_w20);
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


