/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 0482d270
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


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long unaff_x19;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000068;
  
  if ((*(long *)(unaff_x19 + 0x120) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x50), lVar4 != 0)) {
    fVar5 = (float)FUN_04f1b1c0(lVar4,0);
    if (DAT_0722a39f == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e1a840);
      DAT_0722a39f = '\x01';
    }
    puVar1 = PTR_DAT_06e1a840;
    if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    puVar2 = PTR_DAT_06e50440;
    fVar6 = DAT_0533fbb4;
    fVar10 = param_3 * param_3;
    fVar7 = SQRT(fVar10 + fVar5 * fVar5 + 0.0);
    if (fVar7 <= DAT_0533fbb4) {
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        DAT_0722a13e = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar5 = *pfVar3;
      fVar12 = pfVar3[1];
      param_3 = pfVar3[2];
    }
    else {
      fVar5 = fVar5 / fVar7;
      fVar12 = 0.0 / fVar7;
      param_3 = param_3 / fVar7;
    }
    fVar7 = (float)FUN_04f1afd0(lVar4,0);
    if (DAT_0722a39f == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e1a840);
      DAT_0722a39f = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    fVar11 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + 0.0);
    if (fVar11 <= fVar6) {
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        DAT_0722a13e = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar7 = *pfVar3;
      fVar8 = pfVar3[1];
      fVar10 = pfVar3[2];
    }
    else {
      fVar7 = fVar7 / fVar11;
      fVar8 = 0.0 / fVar11;
      fVar10 = fVar10 / fVar11;
    }
    if (*(long *)(unaff_x19 + 0x148) == 0) {
      if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_0482d664;
      pfVar3 = (float *)(*(long *)(unaff_x19 + 0x120) + 0x40);
    }
    else {
      pfVar3 = (float *)(*(long *)(unaff_x19 + 0x148) + 0x10);
    }
    fVar11 = *pfVar3;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (0.0 < fVar11) {
      fVar10 = unaff_s9 * param_3 + unaff_s8 * fVar10;
      fVar7 = (unaff_s9 * fVar5 + unaff_s8 * fVar7) * fVar11;
      fVar12 = (unaff_s9 * fVar12 + unaff_s8 * fVar8) * fVar11;
      fVar8 = fVar10 * fVar11;
      fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar12 * fVar12;
      if (in_stack_00000068._4_4_ < fVar5) {
        if (DAT_0722a39f == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e1a840);
          DAT_0722a39f = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        fVar5 = SQRT(fVar5);
        if (fVar5 <= fVar6) {
          if (DAT_0722a13e == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e50440);
            DAT_0722a13e = '\x01';
          }
          pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar7 = *pfVar3;
          fVar12 = pfVar3[1];
          fVar8 = pfVar3[2];
        }
        else {
          fVar7 = fVar7 / fVar5;
          fVar12 = fVar12 / fVar5;
          fVar8 = fVar8 / fVar5;
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
          fVar6 = fVar8 * fVar10 + fVar12 * 0.0 + fVar7 * fVar5;
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          fVar6 = fVar11 - fVar6;
          if (0.0 < fVar6) {
            if (DAT_0722a395 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06e1a840);
              DAT_0722a395 = '\x01';
            }
            fVar13 = SQRT(fVar10 * fVar10 + fVar5 * fVar5 + 0.0);
            fVar7 = fVar5 + fVar7 * fVar6;
            fVar12 = fVar12 * fVar6 + 0.0;
            fVar6 = fVar10 + fVar8 * fVar6;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            fVar9 = fVar12 * fVar12;
            fVar8 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar9);
            if (fVar13 < fVar8) {
              if (fVar11 <= fVar13) {
                fVar11 = fVar13;
              }
              if ((fVar11 < fVar8) && (in_stack_00000068._4_4_ < fVar8)) {
                fVar11 = fVar11 / fVar8;
                fVar7 = fVar7 * fVar11;
                fVar6 = fVar6 * fVar11;
                fVar9 = fVar12 * fVar11 * fVar12 * fVar11;
              }
            }
            fVar7 = fVar7 - fVar5;
            if (DAT_0534bb40 < fVar7 * fVar7 + fVar9 + (fVar6 - fVar10) * (fVar6 - fVar10)) {
              if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0482d664;
              FUN_049ad034(fVar7,0,*(long *)(unaff_x19 + 0x88),2,0);
            }
          }
          if (*(long *)(unaff_x19 + 0x120) != 0) {
            *(undefined4 *)(*(long *)(unaff_x19 + 0x120) + 0x40) = 0;
            return;
          }
        }
        goto LAB_0482d664;
      }
    }
    return;
  }
LAB_0482d664:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


