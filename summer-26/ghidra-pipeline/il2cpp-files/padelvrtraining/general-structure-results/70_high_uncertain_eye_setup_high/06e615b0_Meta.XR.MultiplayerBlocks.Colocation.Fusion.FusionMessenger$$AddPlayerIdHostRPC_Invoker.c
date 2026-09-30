/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$AddPlayerIdHostRPC@Invoker
ENTRY_POINT: 06e615b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__AddPlayerIdHostRPC_Invoker
               (long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int in_w9;
  int in_w10;
  long lVar3;
  uint uVar4;
  
  if (in_w9 != in_w10) {
    FUN_07199bdc(0);
    param_1 = *param_2;
    if (param_1 == 0) {
LAB_06e61654:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_2 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(param_2 + 1) = uVar1 + 1;
      param_2[2] = 0;
      goto LAB_06e61640;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(param_2 + 1) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_06e61654;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x28 + 0x20) < 0);
  param_2[2] = *(long *)(lVar3 + (long)(int)uVar4 * 0x28 + 0x28);
  thunk_FUN_03d1023c(param_2 + 2);
LAB_06e61640:
  return uVar4 < uVar1;
}


