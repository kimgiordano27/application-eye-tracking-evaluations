/*
FUNCTION_NAME: OVRManager$$get_suggestedGpuPerfLevel
ENTRY_POINT: 05305350
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_suggestedGpuPerfLevel(void)

{
  char cVar1;
  undefined *puVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  float fVar4;
  float fVar5;
  float unaff_s9;
  undefined8 uVar6;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  
  if (in_w8 == 0) {
    fStack0000000000000000 = unaff_s10;
    fStack0000000000000004 = unaff_s12;
    fStack0000000000000008 = unaff_s11;
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
    unaff_s10 = fStack0000000000000000;
    unaff_s12 = fStack0000000000000004;
    unaff_s11 = fStack0000000000000008;
  }
  puVar2 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar3 = *(long *)(unaff_x19 + 0x58);
  if (lVar3 != 0) {
    fVar4 = (float)(**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    cVar1 = *(char *)(unaff_x23 + 0x2c7);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    *(float *)(unaff_x19 + 0x6c) = unaff_s9;
    *(float *)(unaff_x19 + 0x70) = unaff_s13;
    *(float *)(unaff_x19 + 0x74) = unaff_s14;
    if (cVar1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (lVar3 != 0) {
      fVar5 = (float)FUN_0609fe3c(SQRT(unaff_s9 * unaff_s9 + unaff_s13 * unaff_s13 +
                                       unaff_s14 * unaff_s14),lVar3,0);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        fVar4 = (float)FUN_0609fe3c(SQRT(unaff_s10 * unaff_s10 + unaff_s12 * unaff_s12 +
                                         unaff_s11 * unaff_s11) / fVar4,*(long *)(unaff_x19 + 0x40),
                                    0);
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
        FUN_053054fc(fVar4);
        if (*(int *)(unaff_x21 + 0x20) - 2U < 3) {
          lVar3 = *(long *)(unaff_x19 + 0x48);
          if (DAT_06bb42c7 == '\0') {
            FUN_02f08768(PTR_DAT_067c8f80);
            DAT_06bb42c7 = '\x01';
          }
          fVar4 = *unaff_x20;
          uVar6 = *(undefined8 *)(unaff_x20 + 1);
          if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (lVar3 == 0) goto LAB_053054f8;
          fVar5 = (float)uVar6;
          fVar7 = (float)((ulong)uVar6 >> 0x20);
          FUN_0609fe3c(SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7),lVar3,0);
          FUN_053054fc();
        }
        return;
      }
    }
  }
LAB_053054f8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


