/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$ovrp_AddCustomMetadata
ENTRY_POINT: 07a68cf0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_32_0__ovrp_AddCustomMetadata(void)

{
  long lVar1;
  ulong uVar2;
  int in_w9;
  long lVar3;
  uint in_w11;
  long in_x12;
  long lVar4;
  long unaff_x19;
  float fVar5;
  
  lVar3 = *(long *)(unaff_x19 + 0x40);
  uVar2 = 0;
  fVar5 = (float)(in_w9 + -1) / 100.0;
  do {
    if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x18), lVar4 == 0)) goto LAB_07a68da0;
    if ((*(uint *)(lVar4 + 0x18) <= uVar2) || (in_w11 == uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar4 = lVar4 + uVar2 * 4;
    lVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(float *)(lVar4 + 0x20) =
         fVar5 * *(float *)(lVar4 + 0x20) + (1.0 - fVar5) * *(float *)(in_x12 + 0x20 + lVar1);
  } while ((in_w11 & ((int)in_w11 >> 0x1f ^ 0xffffffffU)) != uVar2);
  FUN_07a68da8();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    if (*(int *)(unaff_x19 + 0x30) == *(int *)(*(long *)(unaff_x19 + 0x38) + 0x3c)) {
      return;
    }
    FUN_07a67cac();
    return;
  }
LAB_07a68da0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


