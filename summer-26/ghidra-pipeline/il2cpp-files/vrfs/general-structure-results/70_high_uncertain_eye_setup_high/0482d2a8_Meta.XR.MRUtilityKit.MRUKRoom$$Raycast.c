/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 0482d2a8
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_w8;
  float *pfVar3;
  long unaff_x19;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000068;
  
  if (in_w8 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    *(undefined1 *)(unaff_x22 + 0x39f) = 1;
  }
  puVar1 = PTR_DAT_06e1a840;
  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  puVar2 = PTR_DAT_06e50440;
  fVar5 = DAT_0533fbb4;
  fVar9 = unaff_s11 * unaff_s11;
  fVar6 = SQRT(fVar9 + unaff_s10 * unaff_s10 + 0.0);
  if (fVar6 <= DAT_0533fbb4) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar11 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar6 = pfVar3[2];
  }
  else {
    fVar11 = unaff_s10 / fVar6;
    fVar12 = 0.0 / fVar6;
    fVar6 = unaff_s11 / fVar6;
  }
  fVar4 = (float)FUN_04f1afd0();
  if (*(char *)(unaff_x22 + 0x39f) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    *(undefined1 *)(unaff_x22 + 0x39f) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  fVar10 = SQRT(fVar9 * fVar9 + fVar4 * fVar4 + 0.0);
  if (fVar10 <= fVar5) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar4 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar10;
    fVar7 = 0.0 / fVar10;
    fVar9 = fVar9 / fVar10;
  }
  if (*(long *)(unaff_x19 + 0x148) == 0) {
    if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_0482d664;
    pfVar3 = (float *)(*(long *)(unaff_x19 + 0x120) + 0x40);
  }
  else {
    pfVar3 = (float *)(*(long *)(unaff_x19 + 0x148) + 0x10);
  }
  fVar10 = *pfVar3;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (0.0 < fVar10) {
    fVar9 = unaff_s9 * fVar6 + unaff_s8 * fVar9;
    fVar11 = (unaff_s9 * fVar11 + unaff_s8 * fVar4) * fVar10;
    fVar12 = (unaff_s9 * fVar12 + unaff_s8 * fVar7) * fVar10;
    fVar4 = fVar9 * fVar10;
    fVar6 = fVar4 * fVar4 + fVar11 * fVar11 + fVar12 * fVar12;
    if (in_stack_00000068._4_4_ < fVar6) {
      if (*(char *)(unaff_x22 + 0x39f) == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e1a840);
        *(undefined1 *)(unaff_x22 + 0x39f) = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      fVar6 = SQRT(fVar6);
      if (fVar6 <= fVar5) {
        if (DAT_0722a13e == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e50440);
          DAT_0722a13e = '\x01';
        }
        pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar11 = *pfVar3;
        fVar12 = pfVar3[1];
        fVar4 = pfVar3[2];
      }
      else {
        fVar11 = fVar11 / fVar6;
        fVar12 = fVar12 / fVar6;
        fVar4 = fVar4 / fVar6;
      }
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        fVar5 = (float)FUN_049abc90(*(long *)(unaff_x19 + 0x88),0);
        if (DAT_0722a395 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e1a840);
          DAT_0722a395 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        fVar6 = fVar4 * fVar9 + fVar12 * 0.0 + fVar11 * fVar5;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar6 = fVar10 - fVar6;
        if (0.0 < fVar6) {
          if (DAT_0722a395 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e1a840);
            DAT_0722a395 = '\x01';
          }
          fVar7 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + 0.0);
          fVar11 = fVar5 + fVar11 * fVar6;
          fVar12 = fVar12 * fVar6 + 0.0;
          fVar6 = fVar9 + fVar4 * fVar6;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          fVar8 = fVar12 * fVar12;
          fVar4 = SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar8);
          if (fVar7 < fVar4) {
            if (fVar10 <= fVar7) {
              fVar10 = fVar7;
            }
            if ((fVar10 < fVar4) && (in_stack_00000068._4_4_ < fVar4)) {
              fVar10 = fVar10 / fVar4;
              fVar11 = fVar11 * fVar10;
              fVar6 = fVar6 * fVar10;
              fVar8 = fVar12 * fVar10 * fVar12 * fVar10;
            }
          }
          fVar11 = fVar11 - fVar5;
          if (DAT_0534bb40 < fVar11 * fVar11 + fVar8 + (fVar6 - fVar9) * (fVar6 - fVar9)) {
            if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0482d664;
            FUN_049ad034(fVar11,0,*(long *)(unaff_x19 + 0x88),2,0);
          }
        }
        if (*(long *)(unaff_x19 + 0x120) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x120) + 0x40) = 0;
          return;
        }
      }
LAB_0482d664:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
  }
  return;
}


