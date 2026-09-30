/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 06952298
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(long param_1)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xc60));
  *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 069522b8 to 06a52347 has its CatchHandler @ 06951b3c */
                    /* catch() { ... } // from try @ 06952290 with catch @ 069522bc */
                    /* catch() { ... } // from try @ 0695222c with catch @ 069522c0 */
                    /* catch() { ... } // from try @ 0695226c with catch @ 069522c4 */
                    /* catch() { ... } // from try @ 0695220c with catch @ 069522c8 */
                    /* catch() { ... } // from try @ 06952268 with catch @ 069522cc */
  fVar10 = SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12);
                    /* catch() { ... } // from try @ 06952204 with catch @ 069522d0 */
                    /* catch() { ... } // from try @ 069521dc with catch @ 069522d4 */
  if (fVar10 <= unaff_s11) {
                    /* catch() { ... } // from try @ 06951f24 with catch @ 069522e8 */
                    /* catch() { ... } // from try @ 06951f14 with catch @ 069522ec */
                    /* catch() { ... } // from try @ 06952054 with catch @ 069522f0 */
    if (DAT_08974d8f == '\0') {
                    /* catch() { ... } // from try @ 06951f04 with catch @ 069522f4 */
                    /* catch() { ... } // from try @ 06951ee4 with catch @ 069522f8 */
                    /* catch() { ... } // from try @ 069521e4 with catch @ 069522fc */
      FUN_03a8a718(PTR_DAT_084868a0);
                    /* catch() { ... } // from try @ 06952070 with catch @ 06952300 */
                    /* catch() { ... } // from try @ 06952030 with catch @ 06952304 */
      DAT_08974d8f = '\x01';
    }
                    /* catch() { ... } // from try @ 06952170 with catch @ 06952308 */
                    /* catch() { ... } // from try @ 069521b0 with catch @ 0695230c */
                    /* catch() { ... } // from try @ 06951e9c with catch @ 06952310 */
                    /* catch() { ... } // from try @ 06951f90 with catch @ 06952314 */
    pfVar3 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
                    /* catch() { ... } // from try @ 06951f80 with catch @ 06952318 */
    fVar4 = *pfVar3;
    fVar7 = pfVar3[1];
                    /* catch() { ... } // from try @ 06952164 with catch @ 0695231c */
    fVar10 = pfVar3[2];
  }
  else {
                    /* catch() { ... } // from try @ 06951f48 with catch @ 069522d8 */
    fVar4 = unaff_s14 / fVar10;
                    /* catch() { ... } // from try @ 069521c8 with catch @ 069522dc */
    fVar7 = unaff_s12 / fVar10;
                    /* catch() { ... } // from try @ 069521ec with catch @ 069522e0 */
    fVar10 = unaff_s13 / fVar10;
                    /* catch() { ... } // from try @ 06951ec4 with catch @ 069522e4 */
  }
                    /* catch() { ... } // from try @ 06951ff0 with catch @ 06952320 */
                    /* catch() { ... } // from try @ 06951f74 with catch @ 06952324 */
                    /* catch() { ... } // from try @ 069520a0 with catch @ 06952328
                       catch() { ... } // from try @ 06952258 with catch @ 06952328 */
                    /* catch() { ... } // from try @ 06951e84 with catch @ 0695232c */
                    /* catch() { ... } // from try @ 069521a8 with catch @ 06952330 */
  uVar5 = FUN_03ce0520(fVar4,fVar7,fVar10,uStack000000000000005c,uStack0000000000000058,0);
  *(undefined4 *)(unaff_x19 + 0x6c) = uVar5;
                    /* try { // try from 06952348 to 06a5235f has its CatchHandler @ 06952568 */
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar1 != 0)) {
    fVar10 = (float)FUN_06960788(lVar1,0);
                    /* try { // try from 06952360 to 06a5242b has its CatchHandler @ 06951b3c */
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      fVar4 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),*(long *)(unaff_x19 + 0x30),0);
      *(float *)(unaff_x19 + 0x70) = fVar10 * fVar4;
      if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
         (plVar2 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar2 != (long *)0x0)) {
        fVar4 = (float)(**(code **)(*plVar2 + 0x4f8))(plVar2,*(undefined8 *)(*plVar2 + 0x500));
        fVar10 = 1.0;
        if (fVar4 <= 1.0) {
          fVar10 = fVar4;
        }
        fVar7 = -1.0;
        if (-1.0 <= fVar4) {
          fVar7 = fVar10;
        }
        *(float *)(unaff_x19 + 0x78) = fVar7;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          fVar4 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
          fVar4 = fVar4 * 0.5;
          fVar10 = 1.0;
          if (fVar4 <= 1.0) {
            fVar10 = fVar4;
          }
          fVar6 = 0.0;
          if (0.0 <= fVar4) {
            fVar6 = fVar10;
          }
          *(float *)(unaff_x19 + 0x78) = fVar7 * fVar6;
          *(float *)(unaff_x19 + 0x70) =
               *(float *)(unaff_x19 + 0x70) + *(float *)(unaff_x19 + 0x38) * fVar7 * fVar6;
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fVar7 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                        *(long *)(unaff_x19 + 0x28),0);
            fVar4 = *(float *)(unaff_x19 + 0x70);
            fVar11 = *(float *)(unaff_x19 + 0x74);
            fVar6 = (float)FUN_07ca88b8(0);
            fVar8 = fVar4 - fVar11;
            fVar8 = fVar8 + (float)(int)(fVar8 / 360.0) * -360.0;
            fVar10 = 360.0;
            if (fVar8 <= 360.0) {
              fVar10 = fVar8;
            }
            fVar9 = 0.0;
            if (0.0 <= fVar8) {
              fVar9 = fVar10;
            }
            fVar10 = fVar9 + -360.0;
            if (fVar9 <= 180.0) {
              fVar10 = fVar9;
            }
            fVar8 = fVar7 * fVar6;
            if ((fVar10 <= -(fVar7 * fVar6)) || (fVar8 <= fVar10)) {
              fVar10 = fVar11 + fVar10;
              fVar4 = -(fVar7 * fVar6);
              if (0.0 <= fVar10 - fVar11) {
                fVar4 = fVar8;
              }
              fVar4 = fVar11 + fVar4;
              if (ABS(fVar10 - fVar11) <= fVar8) {
                fVar4 = fVar10;
              }
            }
            lVar1 = *(long *)(unaff_x19 + 0x90);
            *(float *)(unaff_x19 + 0x74) = fVar4;
            if (lVar1 != 0) {
              fVar6 = *(float *)(unaff_x19 + 0x48);
              fVar10 = *(float *)(unaff_x19 + 0x4c);
              fVar4 = *(float *)(unaff_x19 + 0x40);
              fVar7 = *(float *)(unaff_x19 + 0x44);
              *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
              uVar5 = *(undefined4 *)(unaff_x19 + 0x6c);
              *(float *)(lVar1 + 0x1c) = fVar10 * fVar6;
              *(float *)(lVar1 + 0x20) = fVar10 * fVar7;
              *(float *)(lVar1 + 0x24) = fVar10 * fVar4;
              FUN_0692a5f4(uVar5,lVar1,0);
              lVar1 = *(long *)(unaff_x19 + 0x90);
              if (lVar1 != 0) {
                *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
                FUN_07ca88b8(0);
                fVar10 = (float)FUN_0692a624(lVar1,0);
                fVar10 = -fVar10;
                *(float *)(unaff_x19 + 100) = fVar10;
                if (*(long *)(unaff_x19 + 0x88) != 0) {
                  FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar10,
                               *(float *)(unaff_x19 + 0xcc) * fVar10,
                               *(float *)(unaff_x19 + 0xd0) * fVar10,*(long *)(unaff_x19 + 0x88),0);
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


