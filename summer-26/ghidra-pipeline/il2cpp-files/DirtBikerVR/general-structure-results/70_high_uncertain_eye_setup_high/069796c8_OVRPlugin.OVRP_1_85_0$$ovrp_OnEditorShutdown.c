/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_OnEditorShutdown
ENTRY_POINT: 069796c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_85_0__ovrp_OnEditorShutdown(long param_1,float param_2)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
                    /* catch() { ... } // from try @ 069796ac with catch @ 069796c8 */
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + param_2;
                    /* try { // try from 069796d4 to 06a796db has its CatchHandler @ 069796dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 069796d4 with catch @ 069796dc
                        */
  lVar1 = *(long *)(unaff_x19 + 0x40);
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x10);
    fVar5 = unaff_s9;
    if ((fVar3 <= unaff_s9) && (fVar5 = -unaff_s9, -unaff_s9 <= fVar3)) {
      fVar5 = fVar3;
    }
    lVar2 = *(long *)(unaff_x19 + 0x38);
    *(float *)(lVar1 + 0x10) = fVar5;
    if (lVar2 != 0) {
      fVar3 = unaff_s8 * unaff_s10;
      fVar4 = *(float *)(lVar2 + 0x10);
      fVar5 = fVar3;
      if ((fVar4 <= fVar3) && (fVar5 = -fVar3, -fVar3 <= fVar4)) {
        fVar5 = fVar4;
      }
      *(float *)(lVar2 + 0x10) = fVar5;
      fVar3 = *(float *)(unaff_x19 + 0x94);
      fVar5 = *(float *)(lVar2 + 0x18);
      *(float *)(lVar1 + 0x10) = *(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x18);
      fVar5 = *(float *)(lVar2 + 0x10) * fVar5;
      *(float *)(lVar2 + 0x10) = fVar5;
      if (0.0 < fVar3) {
        fVar4 = 1.0;
        if (ABS(*(float *)(lVar1 + 0x14)) <= 1.0) {
          fVar4 = ABS(*(float *)(lVar1 + 0x14));
        }
        fVar4 = powf(fVar4,*(float *)(unaff_x19 + 0x98));
        fVar5 = fVar5 * (1.0 - fVar3 * fVar4);
        *(float *)(lVar2 + 0x10) = fVar5;
      }
      fVar3 = *(float *)(lVar1 + 0x10);
      *(ulong *)(unaff_x19 + 0x3c8) =
           CONCAT44((float)((ulong)*(undefined8 *)(unaff_x20 + 0x18) >> 0x20) * fVar5 +
                    (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar3,
                    (float)*(undefined8 *)(unaff_x20 + 0x18) * fVar5 +
                    (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar3);
      *(float *)(unaff_x19 + 0x3d0) =
           *(float *)(unaff_x19 + 0x2a4) * fVar5 + *(float *)(unaff_x19 + 0x298) * fVar3;
      if (*(char *)(unaff_x19 + 0x458) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x458) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


