/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$set_Position
ENTRY_POINT: 06f1bdc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int UnityWebSocketSharp_Net_RequestStream__set_Position(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  bool in_ZR;
  bool in_CY;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (in_CY && !in_ZR) {
    lVar4 = *(long *)(param_2 + 0x68);
    if (lVar4 == 0) {
LAB_06f1be34:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (param_3 < *(uint *)(lVar4 + 0x18)) {
      lVar3 = *(long *)(param_1 + (long)(int)param_3 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_06f1be34;
      uVar1 = *(int *)(lVar4 + (long)(int)param_3 * 4 + 0x20) * 2 - 2;
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        iVar2 = *(int *)(lVar3 + (long)(int)uVar1 * 4 + 0x20);
        if (iVar2 < 0) {
          if (*(uint *)(lVar3 + 0x18) <= -iVar2 - 3U) goto LAB_06f1be30;
          iVar2 = *(int *)(lVar3 + (long)(int)(-iVar2 - 3U) * 4 + 0x20);
        }
        return iVar2;
      }
    }
  }
LAB_06f1be30:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


