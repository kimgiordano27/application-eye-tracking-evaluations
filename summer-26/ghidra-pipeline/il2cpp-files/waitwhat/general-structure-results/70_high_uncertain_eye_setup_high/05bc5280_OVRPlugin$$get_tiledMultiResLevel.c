/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResLevel
ENTRY_POINT: 05bc5280
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__get_tiledMultiResLevel(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint in_w8;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_070d3dc8;
  bVar5 = 0 < (int)in_w8;
  if (0 < (int)in_w8) {
    uVar6 = 0;
    do {
      if (in_w8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar4 = *(long *)(unaff_x21 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_05bc53fc;
      uVar2 = FUN_06a589b8(lVar4,0);
      if ((uVar2 & 1) != 0) {
        if ((unaff_x19 == 0) || (lVar3 = FUN_069d3a80(), lVar3 == 0)) {
LAB_05bc53fc:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar7 = FUN_069e6fbc(lVar3,0);
        lVar3 = FUN_069d3a80();
        if (lVar3 == 0) goto LAB_05bc53fc;
        FUN_069e5200(lVar3,0);
        lVar3 = FUN_069d3a80(lVar4,0);
        if (lVar3 == 0) goto LAB_05bc53fc;
        FUN_069e6fbc(lVar3,0);
        lVar4 = FUN_069d3a80(lVar4,0);
        if (lVar4 == 0) goto LAB_05bc53fc;
        FUN_069e5200(lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar2 = FUN_06a5f828(uVar7);
        if ((uVar2 & 1) != 0) {
          return bVar5;
        }
      }
      in_w8 = *(uint *)(unaff_x21 + 0x18);
      uVar6 = uVar6 + 1;
      bVar5 = (int)uVar6 < (int)in_w8;
    } while ((int)uVar6 < (int)in_w8);
  }
  return bVar5;
}


