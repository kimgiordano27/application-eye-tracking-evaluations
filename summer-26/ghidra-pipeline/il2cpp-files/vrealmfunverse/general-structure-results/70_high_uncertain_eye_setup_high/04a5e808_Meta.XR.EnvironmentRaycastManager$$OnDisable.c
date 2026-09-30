/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDisable
ENTRY_POINT: 04a5e808
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnDisable(void)

{
  uint uVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  int iVar2;
  long unaff_x21;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(unaff_x21 + 0x24);
  lVar3 = *(long *)(unaff_x21 + 0x18);
  FUN_04a60a70();
  if ((int)uVar1 < 1) {
    iVar2 = 0;
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar4 = 0;
    iVar2 = 0;
    lVar5 = lVar3 + 0x28;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (-1 < *(int *)(lVar5 + -8)) {
        FUN_04a6102c();
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar1 != uVar4);
  }
  *(int *)(unaff_x19 + 0x24) = iVar2;
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


