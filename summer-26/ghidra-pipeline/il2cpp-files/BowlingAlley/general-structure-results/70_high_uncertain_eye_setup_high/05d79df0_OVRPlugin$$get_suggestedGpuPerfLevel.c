/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 05d79df0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d79e44) */

void OVRPlugin__get_suggestedGpuPerfLevel(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  int in_w8;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  
  if (in_w8 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x88);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x80);
  }
  if (lVar2 != 0) {
    fVar3 = (float)FUN_05d06448(lVar2,0);
    fVar11 = *(float *)(unaff_x20 + 200);
    fVar12 = *(float *)(unaff_x20 + 0xf0);
    bVar1 = fVar11 < 0.0;
    if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    if (bVar1) {
      fVar11 = 0.0;
    }
    fVar7 = (float)*param_2;
    fVar9 = (float)((ulong)*param_2 >> 0x20);
    fVar13 = *(float *)(unaff_x20 + 0x110);
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    fVar4 = (float)*(undefined8 *)(unaff_x20 + 0x108);
    fVar6 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x108) >> 0x20);
    *param_2 = CONCAT44(fVar6 + ((fVar9 + ((float)((ulong)*(undefined8 *)(unaff_x20 + 0xe8) >> 0x20)
                                          - fVar9) * fVar11) - fVar6) * fVar3,
                        fVar4 + ((fVar7 + ((float)*(undefined8 *)(unaff_x20 + 0xe8) - fVar7) *
                                          fVar11) - fVar4) * fVar3);
    *(float *)(param_2 + 1) =
         fVar13 + fVar3 * ((*(float *)(param_2 + 1) + (fVar12 - *(float *)(param_2 + 1)) * fVar11) -
                          fVar13);
    if (*(char *)(unaff_x20 + 0x105) == '\0') {
      lVar2 = *(long *)(unaff_x20 + 0x98);
    }
    else {
      lVar2 = *(long *)(unaff_x20 + 0x90);
    }
    if (lVar2 != 0) {
      FUN_05d06448(lVar2,0);
      FUN_06bddbd8(*(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2),
                   *(undefined4 *)((long)param_2 + 0x14),*(undefined4 *)(param_2 + 3),
                   *(undefined4 *)(unaff_x20 + 0xf4),*(undefined4 *)(unaff_x20 + 0xf8),
                   *(undefined4 *)(unaff_x20 + 0xfc),*(undefined4 *)(unaff_x20 + 0x100),0);
      uVar14 = *(undefined4 *)(unaff_x20 + 0x120);
      uVar8 = *(undefined4 *)(unaff_x20 + 0x118);
      uVar10 = *(undefined4 *)(unaff_x20 + 0x11c);
      uVar5 = FUN_06bddbd8(*(undefined4 *)(unaff_x20 + 0x114),0);
      *(undefined4 *)((long)param_2 + 0xc) = uVar5;
      *(undefined4 *)(param_2 + 2) = uVar8;
      *(undefined4 *)((long)param_2 + 0x14) = uVar10;
      *(undefined4 *)(param_2 + 3) = uVar14;
      FUN_05d054f4(unaff_x20 + 0x124,param_2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


