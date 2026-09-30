/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 05be9244
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerAnnotation(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    fVar2 = (float)FUN_05b75e5c(*(long *)(unaff_x20 + 0x80),0);
    fVar6 = *(float *)(unaff_x20 + 200);
    fVar12 = *(float *)(unaff_x20 + 0xf0);
    fVar4 = 1.0;
    if (fVar6 <= 1.0) {
      fVar4 = fVar6;
    }
    fVar7 = (float)*unaff_x19;
    fVar9 = (float)((ulong)*unaff_x19 >> 0x20);
    fVar10 = 0.0;
    if (0.0 <= fVar6) {
      fVar10 = fVar4;
    }
    fVar4 = 1.0;
    if (fVar2 <= 1.0) {
      fVar4 = fVar2;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar2) {
      fVar6 = fVar4;
    }
    fVar11 = *(float *)(unaff_x20 + 0x110);
    fVar4 = (float)*(undefined8 *)(unaff_x20 + 0x108);
    fVar2 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x108) >> 0x20);
    *unaff_x19 = CONCAT44(fVar2 + ((fVar9 + ((float)((ulong)*(undefined8 *)(unaff_x20 + 0xe8) >>
                                                    0x20) - fVar9) * fVar10) - fVar2) * fVar6,
                          fVar4 + ((fVar7 + ((float)*(undefined8 *)(unaff_x20 + 0xe8) - fVar7) *
                                            fVar10) - fVar4) * fVar6);
    *(float *)(unaff_x19 + 1) =
         fVar11 + fVar6 * ((*(float *)(unaff_x19 + 1) +
                           (fVar12 - *(float *)(unaff_x19 + 1)) * fVar10) - fVar11);
    if (*(char *)(unaff_x20 + 0x105) == '\0') {
      lVar1 = *(long *)(unaff_x20 + 0x98);
    }
    else {
      lVar1 = *(long *)(unaff_x20 + 0x90);
    }
    if (lVar1 != 0) {
      FUN_05b75e5c(lVar1,0);
      FUN_069c5130(*(undefined4 *)((long)unaff_x19 + 0xc),*(undefined4 *)(unaff_x19 + 2),
                   *(undefined4 *)((long)unaff_x19 + 0x14),*(undefined4 *)(unaff_x19 + 3),
                   *(undefined4 *)(unaff_x20 + 0xf4),*(undefined4 *)(unaff_x20 + 0xf8),
                   *(undefined4 *)(unaff_x20 + 0xfc),*(undefined4 *)(unaff_x20 + 0x100),0);
      uVar13 = *(undefined4 *)(unaff_x20 + 0x120);
      uVar5 = *(undefined4 *)(unaff_x20 + 0x118);
      uVar8 = *(undefined4 *)(unaff_x20 + 0x11c);
      uVar3 = FUN_069c5130(*(undefined4 *)(unaff_x20 + 0x114),0);
      *(undefined4 *)((long)unaff_x19 + 0xc) = uVar3;
      *(undefined4 *)(unaff_x19 + 2) = uVar5;
      *(undefined4 *)((long)unaff_x19 + 0x14) = uVar8;
      *(undefined4 *)(unaff_x19 + 3) = uVar13;
      FUN_05b74f50(unaff_x20 + 0x124);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


