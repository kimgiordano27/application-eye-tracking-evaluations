/*
FUNCTION_NAME: OVRManager$$.cctor
ENTRY_POINT: 060c56b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager___cctor(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar3 = PTR_DAT_07a21f50;
  if ((DAT_07ee0a20 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a21f50);
    DAT_07ee0a20 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_5) {
LAB_060c57d4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_5 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          if (uVar2 <= (uint)lVar5) goto LAB_060c57d4;
          if (param_2 == 0) goto LAB_060c57d8;
          uVar2 = *(uint *)(lVar4 + 0x20 + lVar5 * 4);
          if (*(uint *)(param_2 + 0x18) <= uVar2) goto LAB_060c57d4;
          if (param_3 == 0) goto LAB_060c57d8;
          if (*(uint *)(param_3 + 0x18) <= uVar2) goto LAB_060c57d4;
          lVar1 = param_2 + (long)(int)uVar2 * 0x10;
          uVar7 = *(undefined4 *)(lVar1 + 0x24);
          uVar8 = *(undefined4 *)(lVar1 + 0x28);
          uVar9 = *(undefined4 *)(lVar1 + 0x2c);
          uVar6 = FUN_071aee9c(*(undefined4 *)(lVar1 + 0x20),0);
          if (param_4 == 0) goto LAB_060c57d8;
          if (*(uint *)(param_4 + 0x18) <= uVar2) goto LAB_060c57d4;
          lVar1 = param_4 + (long)(int)uVar2 * 0x10;
          lVar5 = lVar5 + 1;
          *(undefined4 *)(lVar1 + 0x20) = uVar6;
          *(undefined4 *)(lVar1 + 0x24) = uVar7;
          *(undefined4 *)(lVar1 + 0x28) = uVar8;
          *(undefined4 *)(lVar1 + 0x2c) = uVar9;
          uVar2 = *(uint *)(lVar4 + 0x18);
        } while ((int)lVar5 < (int)uVar2);
      }
      return;
    }
  }
LAB_060c57d8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


