/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 0482d2e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_17;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(float param_1,float param_2)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 in_stack_00000068;
  
  puVar1 = PTR_DAT_06e50440;
  fVar7 = unaff_s11 * unaff_s11;
  fVar5 = SQRT(fVar7 + param_2 + param_1);
  if (fVar5 <= unaff_s13) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar9 = *pfVar2;
    param_1 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  else {
    fVar9 = unaff_s10 / fVar5;
    param_1 = param_1 / fVar5;
    fVar5 = unaff_s11 / fVar5;
  }
  fVar3 = (float)FUN_04f1afd0();
  if (*(char *)(unaff_x22 + 0x39f) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    *(undefined1 *)(unaff_x22 + 0x39f) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  fVar8 = SQRT(fVar7 * fVar7 + fVar3 * fVar3 + 0.0);
  if (fVar8 <= unaff_s13) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar3 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar7 = pfVar2[2];
  }
  else {
    fVar3 = fVar3 / fVar8;
    fVar6 = 0.0 / fVar8;
    fVar7 = fVar7 / fVar8;
  }
  if (*(long *)(unaff_x19 + 0x148) == 0) {
    if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_0482d664;
    pfVar2 = (float *)(*(long *)(unaff_x19 + 0x120) + 0x40);
  }
  else {
    pfVar2 = (float *)(*(long *)(unaff_x19 + 0x148) + 0x10);
  }
  fVar8 = *pfVar2;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (0.0 < fVar8) {
    fVar7 = unaff_s9 * fVar5 + unaff_s8 * fVar7;
    fVar9 = (unaff_s9 * fVar9 + unaff_s8 * fVar3) * fVar8;
    fVar3 = (unaff_s9 * param_1 + unaff_s8 * fVar6) * fVar8;
    fVar6 = fVar7 * fVar8;
    fVar5 = fVar6 * fVar6 + fVar9 * fVar9 + fVar3 * fVar3;
    if (in_stack_00000068._4_4_ < fVar5) {
      if (*(char *)(unaff_x22 + 0x39f) == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e1a840);
        *(undefined1 *)(unaff_x22 + 0x39f) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      fVar5 = SQRT(fVar5);
      if (fVar5 <= unaff_s13) {
        if (DAT_0722a13e == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e50440);
          DAT_0722a13e = '\x01';
        }
        pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar9 = *pfVar2;
        fVar3 = pfVar2[1];
        fVar6 = pfVar2[2];
      }
      else {
        fVar9 = fVar9 / fVar5;
        fVar3 = fVar3 / fVar5;
        fVar6 = fVar6 / fVar5;
      }
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        fVar5 = (float)FUN_049abc90(*(long *)(unaff_x19 + 0x88),0);
        if (DAT_0722a395 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e1a840);
          DAT_0722a395 = '\x01';
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        fVar4 = fVar6 * fVar7 + fVar3 * 0.0 + fVar9 * fVar5;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar4 = fVar8 - fVar4;
        if (0.0 < fVar4) {
          if (DAT_0722a395 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e1a840);
            DAT_0722a395 = '\x01';
          }
          fVar11 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + 0.0);
          fVar9 = fVar5 + fVar9 * fVar4;
          fVar10 = fVar3 * fVar4 + 0.0;
          fVar3 = fVar7 + fVar6 * fVar4;
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          fVar4 = fVar10 * fVar10;
          fVar6 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar4);
          if (fVar11 < fVar6) {
            if (fVar8 <= fVar11) {
              fVar8 = fVar11;
            }
            if ((fVar8 < fVar6) && (in_stack_00000068._4_4_ < fVar6)) {
              fVar8 = fVar8 / fVar6;
              fVar9 = fVar9 * fVar8;
              fVar3 = fVar3 * fVar8;
              fVar4 = fVar10 * fVar8 * fVar10 * fVar8;
            }
          }
          fVar9 = fVar9 - fVar5;
          if (DAT_0534bb40 < fVar9 * fVar9 + fVar4 + (fVar3 - fVar7) * (fVar3 - fVar7)) {
            if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0482d664;
            FUN_049ad034(fVar9,0,*(long *)(unaff_x19 + 0x88),2,0);
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


