/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 06952098
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceComponentStatusInternal
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  *(undefined4 *)(unaff_x19 + 0x9c) = param_1;
  *(undefined4 *)(unaff_x19 + 0xa0) = param_4;
                    /* try { // try from 069520a0 to 06a5212f has its CatchHandler @ 06952328 */
  if (param_2 <= param_3) {
    *(undefined4 *)(unaff_x19 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x70);
    return;
  }
  fVar14 = *(float *)(unaff_x19 + 200);
  fVar13 = *(float *)(unaff_x19 + 0xcc);
  fVar12 = *(float *)(unaff_x19 + 0xd0);
  if (DAT_08975819 == '\0') {
    FUN_03a8a718(PTR_DAT_08487160);
    DAT_08975819 = '\x01';
  }
  puVar1 = PTR_DAT_08487160;
  fVar5 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
  if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar5) {
    fVar8 = unaff_s10 * fVar12 + unaff_s8 * fVar14 + unaff_s9 * fVar13;
    unaff_s8 = unaff_s8 - (fVar14 * fVar8) / fVar5;
    unaff_s9 = unaff_s9 - (fVar13 * fVar8) / fVar5;
    unaff_s10 = unaff_s10 - (fVar12 * fVar8) / fVar5;
  }
  if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 06952164 to 06a5216b has its CatchHandler @ 0695231c */
  fVar13 = *(float *)(unaff_x23 + 0xce0);
                    /* try { // try from 06952170 to 06a5218b has its CatchHandler @ 06952308 */
  fVar12 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar12 <= fVar13) {
                    /* try { // try from 069521c8 to 06a521cf has its CatchHandler @ 069522dc */
    if (DAT_08974d8f == '\0') {
                    /* try { // try from 069521dc to 06a521df has its CatchHandler @ 069522d4 */
      FUN_03a8a718(PTR_DAT_084868a0);
                    /* try { // try from 069521e4 to 06a521e7 has its CatchHandler @ 069522fc */
      DAT_08974d8f = '\x01';
    }
                    /* try { // try from 069521ec to 06a52203 has its CatchHandler @ 069522e0 */
    pfVar4 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fStack000000000000005c = *pfVar4;
    fStack0000000000000058 = pfVar4[1];
    fVar12 = pfVar4[2];
  }
  else {
    fStack000000000000005c = unaff_s8 / fVar12;
    fStack0000000000000058 = unaff_s9 / fVar12;
                    /* try { // try from 0695218c to 06a521a7 has its CatchHandler @ 06951b3c */
    fVar12 = unaff_s10 / fVar12;
  }
                    /* try { // try from 06952204 to 06a5220b has its CatchHandler @ 069522d0 */
  fVar5 = *(float *)(unaff_x19 + 0xd8);
  fVar8 = *(float *)(unaff_x19 + 0xdc);
                    /* try { // try from 0695220c to 06a5222b has its CatchHandler @ 069522c8 */
  fVar11 = *(float *)(unaff_x19 + 200);
  fVar10 = *(float *)(unaff_x19 + 0xcc);
  fVar15 = *(float *)(unaff_x19 + 0xd0);
  fVar14 = *(float *)(unaff_x19 + 0xd4);
  if (DAT_08975819 == '\0') {
    FUN_03a8a718(PTR_DAT_08487160);
    DAT_08975819 = '\x01';
  }
                    /* try { // try from 0695222c to 06a52253 has its CatchHandler @ 069522c0 */
  fVar6 = fVar15 * fVar15 + fVar11 * fVar11 + fVar10 * fVar10;
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar6) {
                    /* try { // try from 06952258 to 06a5225b has its CatchHandler @ 06952328 */
    fVar9 = fVar8 * fVar15 + fVar14 * fVar11 + fVar5 * fVar10;
                    /* try { // try from 06952268 to 06a5226b has its CatchHandler @ 069522cc */
                    /* try { // try from 0695226c to 06a5228f has its CatchHandler @ 069522c4 */
    fVar14 = fVar14 - (fVar11 * fVar9) / fVar6;
    fVar5 = fVar5 - (fVar10 * fVar9) / fVar6;
    fVar8 = fVar8 - (fVar15 * fVar9) / fVar6;
  }
                    /* try { // try from 06952290 to 06a522b7 has its CatchHandler @ 069522bc */
  if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar10 = SQRT(fVar8 * fVar8 + fVar14 * fVar14 + fVar5 * fVar5);
  if (fVar10 <= fVar13) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar4 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar14 = *pfVar4;
    fVar5 = pfVar4[1];
    fVar8 = pfVar4[2];
  }
  else {
    fVar14 = fVar14 / fVar10;
    fVar5 = fVar5 / fVar10;
    fVar8 = fVar8 / fVar10;
  }
  uVar7 = FUN_03ce0520(fVar14,fVar5,fVar8,fStack000000000000005c,fStack0000000000000058,fVar12,0);
  *(undefined4 *)(unaff_x19 + 0x6c) = uVar7;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar2 != 0)) {
    fVar12 = (float)FUN_06960788(lVar2,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      fVar13 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),*(long *)(unaff_x19 + 0x30),0);
      *(float *)(unaff_x19 + 0x70) = fVar12 * fVar13;
      if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
         (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar3 != (long *)0x0)) {
        fVar13 = (float)(**(code **)(*plVar3 + 0x4f8))(plVar3,*(undefined8 *)(*plVar3 + 0x500));
        fVar12 = 1.0;
        if (fVar13 <= 1.0) {
          fVar12 = fVar13;
        }
        fVar14 = -1.0;
        if (-1.0 <= fVar13) {
          fVar14 = fVar12;
        }
        *(float *)(unaff_x19 + 0x78) = fVar14;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          fVar13 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
          fVar13 = fVar13 * 0.5;
          fVar12 = 1.0;
          if (fVar13 <= 1.0) {
            fVar12 = fVar13;
          }
          fVar5 = 0.0;
          if (0.0 <= fVar13) {
            fVar5 = fVar12;
          }
          *(float *)(unaff_x19 + 0x78) = fVar14 * fVar5;
          *(float *)(unaff_x19 + 0x70) =
               *(float *)(unaff_x19 + 0x70) + *(float *)(unaff_x19 + 0x38) * fVar14 * fVar5;
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fVar14 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                         *(long *)(unaff_x19 + 0x28),0);
            fVar13 = *(float *)(unaff_x19 + 0x70);
            fVar10 = *(float *)(unaff_x19 + 0x74);
            fVar5 = (float)FUN_07ca88b8(0);
            fVar8 = fVar13 - fVar10;
            fVar8 = fVar8 + (float)(int)(fVar8 / 360.0) * -360.0;
            fVar12 = 360.0;
            if (fVar8 <= 360.0) {
              fVar12 = fVar8;
            }
            fVar11 = 0.0;
            if (0.0 <= fVar8) {
              fVar11 = fVar12;
            }
            fVar12 = fVar11 + -360.0;
            if (fVar11 <= 180.0) {
              fVar12 = fVar11;
            }
            fVar8 = fVar14 * fVar5;
            if ((fVar12 <= -(fVar14 * fVar5)) || (fVar8 <= fVar12)) {
              fVar12 = fVar10 + fVar12;
              fVar13 = -(fVar14 * fVar5);
              if (0.0 <= fVar12 - fVar10) {
                fVar13 = fVar8;
              }
              fVar13 = fVar10 + fVar13;
              if (ABS(fVar12 - fVar10) <= fVar8) {
                fVar13 = fVar12;
              }
            }
            lVar2 = *(long *)(unaff_x19 + 0x90);
            *(float *)(unaff_x19 + 0x74) = fVar13;
            if (lVar2 != 0) {
              fVar5 = *(float *)(unaff_x19 + 0x48);
              fVar12 = *(float *)(unaff_x19 + 0x4c);
              fVar13 = *(float *)(unaff_x19 + 0x40);
              fVar14 = *(float *)(unaff_x19 + 0x44);
              *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x6c);
              *(float *)(lVar2 + 0x1c) = fVar12 * fVar5;
              *(float *)(lVar2 + 0x20) = fVar12 * fVar14;
              *(float *)(lVar2 + 0x24) = fVar12 * fVar13;
              FUN_0692a5f4(uVar7,lVar2,0);
              lVar2 = *(long *)(unaff_x19 + 0x90);
              if (lVar2 != 0) {
                *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
                FUN_07ca88b8(0);
                fVar12 = (float)FUN_0692a624(lVar2,0);
                fVar12 = -fVar12;
                *(float *)(unaff_x19 + 100) = fVar12;
                if (*(long *)(unaff_x19 + 0x88) != 0) {
                  FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar12,
                               *(float *)(unaff_x19 + 0xcc) * fVar12,
                               *(float *)(unaff_x19 + 0xd0) * fVar12,*(long *)(unaff_x19 + 0x88),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


