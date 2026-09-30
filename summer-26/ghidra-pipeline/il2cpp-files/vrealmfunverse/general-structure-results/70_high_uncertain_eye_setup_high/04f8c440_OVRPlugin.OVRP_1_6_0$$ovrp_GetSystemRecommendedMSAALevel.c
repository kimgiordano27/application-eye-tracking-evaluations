/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetSystemRecommendedMSAALevel
ENTRY_POINT: 04f8c440
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetSystemRecommendedMSAALevel(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  
  do {
    thunk_FUN_02b9ad44();
    lVar2 = *unaff_x20;
    do {
      lVar3 = **(long **)(lVar2 + 0xb8);
      if (lVar3 == 0) {
LAB_04f8c4d8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x21) {
        return;
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *unaff_x20;
        lVar3 = **(long **)(lVar2 + 0xb8);
        if (lVar3 == 0) goto LAB_04f8c4d8;
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
LAB_04f8c4dc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar1 = *(uint *)(lVar3 + unaff_x21 * 4 + 0x20);
      if (unaff_x19 == 0) goto LAB_04f8c4d8;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_04f8c4dc;
      lVar3 = unaff_x19 + unaff_x21;
      unaff_x21 = unaff_x21 + 1;
      *(byte *)(lVar3 + 0x20) = 0x10 < uVar1 | (byte)(unaff_w22 >> (ulong)(uVar1 & 0x1f)) & 1;
    } while (*(int *)(lVar2 + 0xe4) != 0);
  } while( true );
}


