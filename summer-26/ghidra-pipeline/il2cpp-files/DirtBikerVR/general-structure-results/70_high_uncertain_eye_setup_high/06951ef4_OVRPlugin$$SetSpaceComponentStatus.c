/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 06951ef4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetSpaceComponentStatus
               (long param_1,undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  (**(code **)(param_1 + 0x2a8))(param_4,*(undefined8 *)(param_1 + 0x2b0));
  if (unaff_x20 == 0) goto LAB_06952554;
                    /* try { // try from 06951f04 to 06a51f0f has its CatchHandler @ 069522f4 */
                    /* try { // try from 06951f14 to 06a51f23 has its CatchHandler @ 069522ec */
  thunk_FUN_07cadac0();
  uVar6 = *(undefined8 *)(unaff_x19 + 0x50);
                    /* try { // try from 06951f24 to 06a51f43 has its CatchHandler @ 069522e8 */
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9c218(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 06951f48 to 06a51f63 has its CatchHandler @ 069522d8 */
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xa8) + 0x80), plVar3 == (long *)0x0))
    goto LAB_06952554;
    fVar16 = *(float *)(unaff_x19 + 0xb8);
    fVar17 = *(float *)(unaff_x19 + 0xbc);
    fVar15 = *(float *)(unaff_x19 + 0xc0);
    fVar18 = *(float *)(unaff_x19 + 0xc4);
    lVar7 = *(long *)(unaff_x19 + 0x50);
    uVar8 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
                    /* try { // try from 06951f74 to 06a51f7b has its CatchHandler @ 06952324 */
    if (DAT_08974d89 == '\0') {
                    /* try { // try from 06951f80 to 06a51f8f has its CatchHandler @ 06952318 */
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d89 = '\x01';
    }
                    /* try { // try from 06951f90 to 06a51fab has its CatchHandler @ 06952314 */
    lVar4 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar11 = *(float *)(lVar4 + 0x18);
    fVar13 = *(float *)(lVar4 + 0x1c);
    fVar14 = *(float *)(lVar4 + 0x20);
    fVar9 = (float)FUN_07c8b18c(uVar8,0);
    if (lVar7 == 0) goto LAB_06952554;
                    /* try { // try from 06951ff0 to 06a52017 has its CatchHandler @ 06952320 */
    param_3 = (fVar15 * fVar9 + fVar18 * fVar11 + fVar17 * fVar14) - fVar16 * fVar13;
    FUN_07cac71c((fVar17 * fVar13 + fVar18 * fVar9 + fVar16 * fVar14) - fVar15 * fVar11,param_3,
                 (fVar16 * fVar11 + fVar18 * fVar13 + fVar15 * fVar14) - fVar17 * fVar9,
                 ((fVar18 * fVar14 - fVar16 * fVar9) - fVar17 * fVar11) - fVar15 * fVar13,lVar7,0);
  }
  if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d27e2c(0);
  *(float *)(unaff_x19 + 0x98) = -param_3;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    fVar16 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
    fVar15 = DAT_015c5928;
    fStack000000000000005c = *(float *)(unaff_x19 + 0xe0);
    fStack0000000000000058 = *(float *)(unaff_x19 + 0xe4);
    fVar17 = *(float *)(unaff_x19 + 0xe8);
    *(float *)(unaff_x19 + 0x9c) = fVar16;
    *(float *)(unaff_x19 + 0xa0) = ABS(fVar16);
    if (*(float *)(unaff_x19 + 0xdc) * fVar17 +
        *(float *)(unaff_x19 + 0xd4) * fStack000000000000005c +
        *(float *)(unaff_x19 + 0xd8) * fStack0000000000000058 <= fVar15) {
      *(undefined4 *)(unaff_x19 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x70);
      return;
    }
    fVar18 = *(float *)(unaff_x19 + 200);
    fVar16 = *(float *)(unaff_x19 + 0xcc);
    fVar15 = *(float *)(unaff_x19 + 0xd0);
    if (DAT_08975819 == '\0') {
      FUN_03a8a718(PTR_DAT_08487160);
      DAT_08975819 = '\x01';
    }
    puVar1 = PTR_DAT_08487160;
    fVar9 = fVar15 * fVar15 + fVar18 * fVar18 + fVar16 * fVar16;
    if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar9) {
      fVar11 = fVar17 * fVar15 + fStack000000000000005c * fVar18 + fStack0000000000000058 * fVar16;
      fStack000000000000005c = fStack000000000000005c - (fVar18 * fVar11) / fVar9;
      fStack0000000000000058 = fStack0000000000000058 - (fVar16 * fVar11) / fVar9;
      fVar17 = fVar17 - (fVar15 * fVar11) / fVar9;
    }
    if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar16 = *(float *)(unaff_x23 + 0xce0);
    fVar15 = SQRT(fVar17 * fVar17 +
                  fStack000000000000005c * fStack000000000000005c +
                  fStack0000000000000058 * fStack0000000000000058);
    if (fVar15 <= fVar16) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar5 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fStack000000000000005c = *pfVar5;
      fStack0000000000000058 = pfVar5[1];
      fVar17 = pfVar5[2];
    }
    else {
      fStack000000000000005c = fStack000000000000005c / fVar15;
      fStack0000000000000058 = fStack0000000000000058 / fVar15;
      fVar17 = fVar17 / fVar15;
    }
    fVar18 = *(float *)(unaff_x19 + 0xd8);
    fVar9 = *(float *)(unaff_x19 + 0xdc);
    fVar13 = *(float *)(unaff_x19 + 200);
    fVar11 = *(float *)(unaff_x19 + 0xcc);
    fVar14 = *(float *)(unaff_x19 + 0xd0);
    fVar15 = *(float *)(unaff_x19 + 0xd4);
    if (DAT_08975819 == '\0') {
      FUN_03a8a718(PTR_DAT_08487160);
      DAT_08975819 = '\x01';
    }
    fVar10 = fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11;
    if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar10) {
      fVar12 = fVar9 * fVar14 + fVar15 * fVar13 + fVar18 * fVar11;
      fVar15 = fVar15 - (fVar13 * fVar12) / fVar10;
      fVar18 = fVar18 - (fVar11 * fVar12) / fVar10;
      fVar9 = fVar9 - (fVar14 * fVar12) / fVar10;
    }
    if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar11 = SQRT(fVar9 * fVar9 + fVar15 * fVar15 + fVar18 * fVar18);
    if (fVar11 <= fVar16) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar5 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar15 = *pfVar5;
      fVar18 = pfVar5[1];
      fVar9 = pfVar5[2];
    }
    else {
      fVar15 = fVar15 / fVar11;
      fVar18 = fVar18 / fVar11;
      fVar9 = fVar9 / fVar11;
    }
    uVar8 = FUN_03ce0520(fVar15,fVar18,fVar9,fStack000000000000005c,fStack0000000000000058,fVar17,0)
    ;
    *(undefined4 *)(unaff_x19 + 0x6c) = uVar8;
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar7 != 0)) {
      fVar15 = (float)FUN_06960788(lVar7,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        fVar16 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),*(long *)(unaff_x19 + 0x30),0
                                    );
        *(float *)(unaff_x19 + 0x70) = fVar15 * fVar16;
        if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
           (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar3 != (long *)0x0)) {
          fVar16 = (float)(**(code **)(*plVar3 + 0x4f8))(plVar3,*(undefined8 *)(*plVar3 + 0x500));
          fVar15 = 1.0;
          if (fVar16 <= 1.0) {
            fVar15 = fVar16;
          }
          fVar17 = -1.0;
          if (-1.0 <= fVar16) {
            fVar17 = fVar15;
          }
          *(float *)(unaff_x19 + 0x78) = fVar17;
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            fVar16 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
            fVar16 = fVar16 * 0.5;
            fVar15 = 1.0;
            if (fVar16 <= 1.0) {
              fVar15 = fVar16;
            }
            fVar18 = 0.0;
            if (0.0 <= fVar16) {
              fVar18 = fVar15;
            }
            *(float *)(unaff_x19 + 0x78) = fVar17 * fVar18;
            *(float *)(unaff_x19 + 0x70) =
                 *(float *)(unaff_x19 + 0x70) + *(float *)(unaff_x19 + 0x38) * fVar17 * fVar18;
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              fVar17 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                           *(long *)(unaff_x19 + 0x28),0);
              fVar16 = *(float *)(unaff_x19 + 0x70);
              fVar11 = *(float *)(unaff_x19 + 0x74);
              fVar18 = (float)FUN_07ca88b8(0);
              fVar9 = fVar16 - fVar11;
              fVar9 = fVar9 + (float)(int)(fVar9 / 360.0) * -360.0;
              fVar15 = 360.0;
              if (fVar9 <= 360.0) {
                fVar15 = fVar9;
              }
              fVar13 = 0.0;
              if (0.0 <= fVar9) {
                fVar13 = fVar15;
              }
              fVar15 = fVar13 + -360.0;
              if (fVar13 <= 180.0) {
                fVar15 = fVar13;
              }
              fVar9 = fVar17 * fVar18;
              if ((fVar15 <= -(fVar17 * fVar18)) || (fVar9 <= fVar15)) {
                fVar15 = fVar11 + fVar15;
                fVar16 = -(fVar17 * fVar18);
                if (0.0 <= fVar15 - fVar11) {
                  fVar16 = fVar9;
                }
                fVar16 = fVar11 + fVar16;
                if (ABS(fVar15 - fVar11) <= fVar9) {
                  fVar16 = fVar15;
                }
              }
              lVar7 = *(long *)(unaff_x19 + 0x90);
              *(float *)(unaff_x19 + 0x74) = fVar16;
              if (lVar7 != 0) {
                fVar18 = *(float *)(unaff_x19 + 0x48);
                fVar15 = *(float *)(unaff_x19 + 0x4c);
                fVar16 = *(float *)(unaff_x19 + 0x40);
                fVar17 = *(float *)(unaff_x19 + 0x44);
                *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
                uVar8 = *(undefined4 *)(unaff_x19 + 0x6c);
                *(float *)(lVar7 + 0x1c) = fVar15 * fVar18;
                *(float *)(lVar7 + 0x20) = fVar15 * fVar17;
                *(float *)(lVar7 + 0x24) = fVar15 * fVar16;
                FUN_0692a5f4(uVar8,lVar7,0);
                lVar7 = *(long *)(unaff_x19 + 0x90);
                if (lVar7 != 0) {
                  *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
                  FUN_07ca88b8(0);
                  fVar15 = (float)FUN_0692a624(lVar7,0);
                  fVar15 = -fVar15;
                  *(float *)(unaff_x19 + 100) = fVar15;
                  if (*(long *)(unaff_x19 + 0x88) != 0) {
                    FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar15,
                                 *(float *)(unaff_x19 + 0xcc) * fVar15,
                                 *(float *)(unaff_x19 + 0xd0) * fVar15,*(long *)(unaff_x19 + 0x88),0
                                );
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
LAB_06952554:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


