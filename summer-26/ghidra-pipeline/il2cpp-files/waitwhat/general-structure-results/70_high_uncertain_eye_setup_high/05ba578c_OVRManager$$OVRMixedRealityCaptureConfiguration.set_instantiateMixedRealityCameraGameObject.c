/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject
ENTRY_POINT: 05ba578c
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


undefined8
OVRManager__OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float unaff_s8;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float fVar11;
  float fStack000000000000000c;
  
  if (*(char *)(unaff_x21 + 4) == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    *(undefined1 *)(unaff_x21 + 4) = 1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar11 = *(float *)(lVar3 + 0x24);
    fVar8 = *(float *)(lVar3 + 0x28);
    fVar10 = *(float *)(lVar3 + 0x2c);
    fStack000000000000000c = unaff_s10;
    fVar4 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar5 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar6 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          fVar5 = fVar4 * 0.5 - fVar5;
          fVar9 = *(float *)(unaff_x20 + 0x28);
          fVar8 = unaff_s11 + fVar8 * fVar5;
          fVar10 = fStack000000000000000c + fVar10 * fVar5;
          fVar4 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
          uVar1 = FUN_05ba7648(unaff_s8 + fVar11 * fVar5,fVar8,fVar10,fVar6 + fVar9,
                               fVar4 + *(float *)(unaff_x20 + 0x28) + unaff_s13);
          if ((uVar1 & 1) != 0) {
            return 1;
          }
          if ((*(long *)(unaff_x20 + 0x20) != 0) &&
             (lVar3 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0), lVar3 != 0)) {
            uVar7 = FUN_069e6fbc(lVar3,0);
            if (*(long *)(unaff_x20 + 0x20) != 0) {
              fVar4 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
              if (*(long *)(unaff_x20 + 0x20) != 0) {
                fVar5 = *(float *)(unaff_x20 + 0x28);
                fVar11 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
                uVar2 = FUN_05ba7648(uVar7,fVar8,fVar10,fVar4 + fVar5,
                                     fVar11 * 0.5 + *(float *)(unaff_x20 + 0x28) + unaff_s13);
                return uVar2;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


