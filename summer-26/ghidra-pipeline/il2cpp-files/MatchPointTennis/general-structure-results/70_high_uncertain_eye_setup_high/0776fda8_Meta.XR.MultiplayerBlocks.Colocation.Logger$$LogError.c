/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogError
ENTRY_POINT: 0776fda8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Logger__LogError(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
LAB_0776feac:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  iVar1 = *(int *)(lVar2 + 0x24);
  if (iVar1 == 4) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) goto LAB_0776feac;
    uVar4 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar4) {
      uVar3 = 0;
      auVar6 = NEON_fmov(0x3ff0000000000000,8);
      do {
        if (uVar4 <= uVar3) goto LAB_0776fea8;
        lVar5 = *(long *)(lVar2 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0776feac;
        *(long *)(lVar5 + 0x38) = auVar6._8_8_;
        *(long *)(lVar5 + 0x30) = auVar6._0_8_;
        uVar4 = *(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar4);
    }
  }
  else if (iVar1 == 3) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) goto LAB_0776feac;
    uVar4 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar4) {
      uVar3 = 0;
      do {
        if (uVar4 <= uVar3) goto LAB_0776fea8;
        lVar5 = *(long *)(lVar2 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0776feac;
        *(undefined8 *)(lVar5 + 0x38) = 0x3ff0000000000000;
        uVar4 = *(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar4);
    }
  }
  else if (iVar1 == 2) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) goto LAB_0776feac;
    uVar4 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar4) {
      uVar3 = 0;
      do {
        if (uVar4 <= uVar3) {
LAB_0776fea8:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar5 = *(long *)(lVar2 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0776feac;
        *(undefined8 *)(lVar5 + 0x30) = 0x3ff0000000000000;
        uVar4 = *(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar4);
    }
  }
  return;
}


