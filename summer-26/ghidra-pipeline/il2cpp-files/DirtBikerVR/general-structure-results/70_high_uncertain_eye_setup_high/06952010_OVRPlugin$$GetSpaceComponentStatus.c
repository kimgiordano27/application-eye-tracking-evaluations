/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 06952010
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


void OVRPlugin__GetSpaceComponentStatus
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               undefined1 param_6 [16],float param_7,float param_8)

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
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fVar9 = (in_s17 + in_s16) - in_s19;
  FUN_07cac71c((in_s18 + param_4) - in_s20,fVar9,(param_8 + param_7) - param_1,param_2 - param_3);
                    /* try { // try from 06952030 to 06a52053 has its CatchHandler @ 06952304 */
  if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d27e2c(0);
                    /* try { // try from 06952054 to 06a5205f has its CatchHandler @ 069522f0 */
  *(float *)(unaff_x19 + 0x98) = -fVar9;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    fVar5 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
    fVar9 = DAT_015c5928;
                    /* try { // try from 06952070 to 06a52093 has its CatchHandler @ 06952300 */
    fStack000000000000005c = *(float *)(unaff_x19 + 0xe0);
    fStack0000000000000058 = *(float *)(unaff_x19 + 0xe4);
    fVar13 = *(float *)(unaff_x19 + 0xe8);
    *(float *)(unaff_x19 + 0x9c) = fVar5;
    *(float *)(unaff_x19 + 0xa0) = ABS(fVar5);
    if (*(float *)(unaff_x19 + 0xdc) * fVar13 +
        *(float *)(unaff_x19 + 0xd4) * fStack000000000000005c +
        *(float *)(unaff_x19 + 0xd8) * fStack0000000000000058 <= fVar9) {
      *(undefined4 *)(unaff_x19 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x70);
      return;
    }
    fVar14 = *(float *)(unaff_x19 + 200);
    fVar5 = *(float *)(unaff_x19 + 0xcc);
    fVar9 = *(float *)(unaff_x19 + 0xd0);
    if (DAT_08975819 == '\0') {
      FUN_03a8a718(PTR_DAT_08487160);
      DAT_08975819 = '\x01';
    }
    puVar1 = PTR_DAT_08487160;
    fVar6 = fVar9 * fVar9 + fVar14 * fVar14 + fVar5 * fVar5;
    if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar6) {
      fVar10 = fVar13 * fVar9 + fStack000000000000005c * fVar14 + fStack0000000000000058 * fVar5;
      fStack000000000000005c = fStack000000000000005c - (fVar14 * fVar10) / fVar6;
      fStack0000000000000058 = fStack0000000000000058 - (fVar5 * fVar10) / fVar6;
      fVar13 = fVar13 - (fVar9 * fVar10) / fVar6;
    }
    if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar5 = *(float *)(unaff_x23 + 0xce0);
    fVar9 = SQRT(fVar13 * fVar13 +
                 fStack000000000000005c * fStack000000000000005c +
                 fStack0000000000000058 * fStack0000000000000058);
    if (fVar9 <= fVar5) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar4 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fStack000000000000005c = *pfVar4;
      fStack0000000000000058 = pfVar4[1];
      fVar13 = pfVar4[2];
    }
    else {
      fStack000000000000005c = fStack000000000000005c / fVar9;
      fStack0000000000000058 = fStack0000000000000058 / fVar9;
      fVar13 = fVar13 / fVar9;
    }
    fVar14 = *(float *)(unaff_x19 + 0xd8);
    fVar6 = *(float *)(unaff_x19 + 0xdc);
    fVar12 = *(float *)(unaff_x19 + 200);
    fVar10 = *(float *)(unaff_x19 + 0xcc);
    fVar15 = *(float *)(unaff_x19 + 0xd0);
    fVar9 = *(float *)(unaff_x19 + 0xd4);
    if (DAT_08975819 == '\0') {
      FUN_03a8a718(PTR_DAT_08487160);
      DAT_08975819 = '\x01';
    }
    fVar7 = fVar15 * fVar15 + fVar12 * fVar12 + fVar10 * fVar10;
    if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar7) {
      fVar11 = fVar6 * fVar15 + fVar9 * fVar12 + fVar14 * fVar10;
      fVar9 = fVar9 - (fVar12 * fVar11) / fVar7;
      fVar14 = fVar14 - (fVar10 * fVar11) / fVar7;
      fVar6 = fVar6 - (fVar15 * fVar11) / fVar7;
    }
    if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar10 = SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar14 * fVar14);
    if (fVar10 <= fVar5) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar4 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar9 = *pfVar4;
      fVar14 = pfVar4[1];
      fVar6 = pfVar4[2];
    }
    else {
      fVar9 = fVar9 / fVar10;
      fVar14 = fVar14 / fVar10;
      fVar6 = fVar6 / fVar10;
    }
    uVar8 = FUN_03ce0520(fVar9,fVar14,fVar6,fStack000000000000005c,fStack0000000000000058,fVar13,0);
    *(undefined4 *)(unaff_x19 + 0x6c) = uVar8;
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar2 != 0)) {
      fVar9 = (float)FUN_06960788(lVar2,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        fVar5 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),*(long *)(unaff_x19 + 0x30),0)
        ;
        *(float *)(unaff_x19 + 0x70) = fVar9 * fVar5;
        if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
           (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar3 != (long *)0x0)) {
          fVar5 = (float)(**(code **)(*plVar3 + 0x4f8))(plVar3,*(undefined8 *)(*plVar3 + 0x500));
          fVar9 = 1.0;
          if (fVar5 <= 1.0) {
            fVar9 = fVar5;
          }
          fVar13 = -1.0;
          if (-1.0 <= fVar5) {
            fVar13 = fVar9;
          }
          *(float *)(unaff_x19 + 0x78) = fVar13;
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            fVar5 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
            fVar5 = fVar5 * 0.5;
            fVar9 = 1.0;
            if (fVar5 <= 1.0) {
              fVar9 = fVar5;
            }
            fVar14 = 0.0;
            if (0.0 <= fVar5) {
              fVar14 = fVar9;
            }
            *(float *)(unaff_x19 + 0x78) = fVar13 * fVar14;
            *(float *)(unaff_x19 + 0x70) =
                 *(float *)(unaff_x19 + 0x70) + *(float *)(unaff_x19 + 0x38) * fVar13 * fVar14;
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              fVar13 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                           *(long *)(unaff_x19 + 0x28),0);
              fVar5 = *(float *)(unaff_x19 + 0x70);
              fVar10 = *(float *)(unaff_x19 + 0x74);
              fVar14 = (float)FUN_07ca88b8(0);
              fVar6 = fVar5 - fVar10;
              fVar6 = fVar6 + (float)(int)(fVar6 / 360.0) * -360.0;
              fVar9 = 360.0;
              if (fVar6 <= 360.0) {
                fVar9 = fVar6;
              }
              fVar12 = 0.0;
              if (0.0 <= fVar6) {
                fVar12 = fVar9;
              }
              fVar9 = fVar12 + -360.0;
              if (fVar12 <= 180.0) {
                fVar9 = fVar12;
              }
              fVar6 = fVar13 * fVar14;
              if ((fVar9 <= -(fVar13 * fVar14)) || (fVar6 <= fVar9)) {
                fVar9 = fVar10 + fVar9;
                fVar5 = -(fVar13 * fVar14);
                if (0.0 <= fVar9 - fVar10) {
                  fVar5 = fVar6;
                }
                fVar5 = fVar10 + fVar5;
                if (ABS(fVar9 - fVar10) <= fVar6) {
                  fVar5 = fVar9;
                }
              }
              lVar2 = *(long *)(unaff_x19 + 0x90);
              *(float *)(unaff_x19 + 0x74) = fVar5;
              if (lVar2 != 0) {
                fVar14 = *(float *)(unaff_x19 + 0x48);
                fVar9 = *(float *)(unaff_x19 + 0x4c);
                fVar5 = *(float *)(unaff_x19 + 0x40);
                fVar13 = *(float *)(unaff_x19 + 0x44);
                *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
                uVar8 = *(undefined4 *)(unaff_x19 + 0x6c);
                *(float *)(lVar2 + 0x1c) = fVar9 * fVar14;
                *(float *)(lVar2 + 0x20) = fVar9 * fVar13;
                *(float *)(lVar2 + 0x24) = fVar9 * fVar5;
                FUN_0692a5f4(uVar8,lVar2,0);
                lVar2 = *(long *)(unaff_x19 + 0x90);
                if (lVar2 != 0) {
                  *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
                  FUN_07ca88b8(0);
                  fVar9 = (float)FUN_0692a624(lVar2,0);
                  fVar9 = -fVar9;
                  *(float *)(unaff_x19 + 100) = fVar9;
                  if (*(long *)(unaff_x19 + 0x88) != 0) {
                    FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar9,
                                 *(float *)(unaff_x19 + 0xcc) * fVar9,
                                 *(float *)(unaff_x19 + 0xd0) * fVar9,*(long *)(unaff_x19 + 0x88),0)
                    ;
                    return;
                  }
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


