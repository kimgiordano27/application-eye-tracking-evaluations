/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 0482d230
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  float *pfVar5;
  long unaff_x19;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float fVar15;
  float fVar16;
  float fStack000000000000006c;
  
  if (param_1 + param_2 <= param_3) {
    return;
  }
  fStack000000000000006c = param_3;
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x120) + 0x50);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar3 = FUN_051d2ac0(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)(unaff_x19 + 0x118);
    }
    else {
      if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_0482d664;
      plVar4 = (long *)(*(long *)(unaff_x19 + 0x120) + 0x50);
    }
    lVar7 = *plVar4;
    if (lVar7 != 0) {
      fVar8 = (float)FUN_04f1b1c0(lVar7,0);
      if (DAT_0722a39f == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e1a840);
        DAT_0722a39f = '\x01';
      }
      puVar1 = PTR_DAT_06e1a840;
      if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      puVar2 = PTR_DAT_06e50440;
      fVar9 = DAT_0533fbb4;
      fVar13 = param_3 * param_3;
      fVar10 = SQRT(fVar13 + fVar8 * fVar8 + 0.0);
      if (fVar10 <= DAT_0533fbb4) {
        if (DAT_0722a13e == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e50440);
          DAT_0722a13e = '\x01';
        }
        pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar8 = *pfVar5;
        fVar15 = pfVar5[1];
        param_3 = pfVar5[2];
      }
      else {
        fVar8 = fVar8 / fVar10;
        fVar15 = 0.0 / fVar10;
        param_3 = param_3 / fVar10;
      }
      fVar10 = (float)FUN_04f1afd0(lVar7,0);
      if (DAT_0722a39f == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e1a840);
        DAT_0722a39f = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      fVar14 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + 0.0);
      if (fVar14 <= fVar9) {
        if (DAT_0722a13e == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e50440);
          DAT_0722a13e = '\x01';
        }
        pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar10 = *pfVar5;
        fVar11 = pfVar5[1];
        fVar13 = pfVar5[2];
      }
      else {
        fVar10 = fVar10 / fVar14;
        fVar11 = 0.0 / fVar14;
        fVar13 = fVar13 / fVar14;
      }
      if (*(long *)(unaff_x19 + 0x148) == 0) {
        if (*(long *)(unaff_x19 + 0x120) == 0) goto LAB_0482d664;
        pfVar5 = (float *)(*(long *)(unaff_x19 + 0x120) + 0x40);
      }
      else {
        pfVar5 = (float *)(*(long *)(unaff_x19 + 0x148) + 0x10);
      }
      fVar14 = *pfVar5;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (0.0 < fVar14) {
        fVar13 = unaff_s9 * param_3 + unaff_s8 * fVar13;
        fVar10 = (unaff_s9 * fVar8 + unaff_s8 * fVar10) * fVar14;
        fVar15 = (unaff_s9 * fVar15 + unaff_s8 * fVar11) * fVar14;
        fVar11 = fVar13 * fVar14;
        fVar8 = fVar11 * fVar11 + fVar10 * fVar10 + fVar15 * fVar15;
        if (fStack000000000000006c < fVar8) {
          if (DAT_0722a39f == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e1a840);
            DAT_0722a39f = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          fVar8 = SQRT(fVar8);
          if (fVar8 <= fVar9) {
            if (DAT_0722a13e == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06e50440);
              DAT_0722a13e = '\x01';
            }
            pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
            fVar10 = *pfVar5;
            fVar15 = pfVar5[1];
            fVar11 = pfVar5[2];
          }
          else {
            fVar10 = fVar10 / fVar8;
            fVar15 = fVar15 / fVar8;
            fVar11 = fVar11 / fVar8;
          }
          if (*(long *)(unaff_x19 + 0x88) != 0) {
            fVar8 = (float)FUN_049abc90(*(long *)(unaff_x19 + 0x88),0);
            if (DAT_0722a395 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06e1a840);
              DAT_0722a395 = '\x01';
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            fVar9 = fVar11 * fVar13 + fVar15 * 0.0 + fVar10 * fVar8;
            if (fVar9 <= 0.0) {
              fVar9 = 0.0;
            }
            fVar9 = fVar14 - fVar9;
            if (0.0 < fVar9) {
              if (DAT_0722a395 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06e1a840);
                DAT_0722a395 = '\x01';
              }
              fVar16 = SQRT(fVar13 * fVar13 + fVar8 * fVar8 + 0.0);
              fVar10 = fVar8 + fVar10 * fVar9;
              fVar15 = fVar15 * fVar9 + 0.0;
              fVar9 = fVar13 + fVar11 * fVar9;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              fVar12 = fVar15 * fVar15;
              fVar11 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12);
              if (fVar16 < fVar11) {
                if (fVar14 <= fVar16) {
                  fVar14 = fVar16;
                }
                if ((fVar14 < fVar11) && (fStack000000000000006c < fVar11)) {
                  fVar14 = fVar14 / fVar11;
                  fVar10 = fVar10 * fVar14;
                  fVar9 = fVar9 * fVar14;
                  fVar12 = fVar15 * fVar14 * fVar15 * fVar14;
                }
              }
              fVar10 = fVar10 - fVar8;
              if (DAT_0534bb40 < fVar10 * fVar10 + fVar12 + (fVar9 - fVar13) * (fVar9 - fVar13)) {
                if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0482d664;
                FUN_049ad034(fVar10,0,*(long *)(unaff_x19 + 0x88),2,0);
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
  }
LAB_0482d664:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


