/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsPcm
ENTRY_POINT: 06978868
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsPcm(float param_1)

{
  ulong uVar1;
  float in_w8;
  long lVar2;
  float *pfVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000024;
  
  fVar17 = *(float *)(unaff_x19 + 0x7d);
  fVar4 = fmodf(param_1,in_w8);
                    /* try { // try from 06978878 to 06a7887b has its CatchHandler @ 069788f4 */
                    /* try { // try from 06978888 to 06a78893 has its CatchHandler @ 069788d8 */
  *(float *)(unaff_x20 + 0x60) = fVar4 + unaff_s8 * DAT_015c595c * fVar17;
  fVar6 = *(float *)(unaff_x19 + 0x68);
  fVar9 = *(float *)((long)unaff_x19 + 0x344);
  fVar13 = *(float *)(unaff_x19 + 0x69);
  fVar17 = (float)FUN_07c8b18c(0);
                    /* try { // try from 069788a8 to 06a788c7 has its CatchHandler @ 069788dc */
  fVar14 = *(float *)((long)unaff_x19 + 0x33c);
                    /* try { // try from 069788cc to 06a788cf has its CatchHandler @ 069788ec */
  fVar7 = *(float *)((long)unaff_x19 + 0x334);
  fVar4 = *(float *)(unaff_x19 + 0x10);
                    /* try { // try from 069788d0 to 06a788d3 has its CatchHandler @ 069788e8 */
  if (0.0 <= *(float *)((long)unaff_x19 + 0x25c)) {
    fVar4 = -*(float *)(unaff_x19 + 0x10);
  }
                    /* try { // try from 069788d4 to 06a788d7 has its CatchHandler @ 069788f0 */
  fVar10 = *(float *)(unaff_x19 + 0x67);
                    /* catch() { ... } // from try @ 06978888 with catch @ 069788d8 */
  fStack0000000000000024 = (float)FUN_07c8b18c(fVar4,0);
                    /* catch() { ... } // from try @ 069788a8 with catch @ 069788dc */
                    /* catch() { ... } // from try @ 06978850 with catch @ 069788e0 */
                    /* catch() { ... } // from try @ 06978840 with catch @ 069788e4 */
                    /* catch() { ... } // from try @ 069788d0 with catch @ 069788e8 */
                    /* catch() { ... } // from try @ 069788cc with catch @ 069788ec */
                    /* catch() { ... } // from try @ 06978838 with catch @ 069788f0
                       catch() { ... } // from try @ 069788d4 with catch @ 069788f0 */
  fVar16 = *(float *)(unaff_x19 + 0x7c);
  fVar18 = *(float *)((long)unaff_x19 + 0xb4);
  fVar4 = fVar9;
  fVar11 = fVar6;
  uVar5 = FUN_07c8b548(fVar17,fVar6,fVar9,fVar13,(int)unaff_x19[0x65],
                       *(undefined4 *)((long)unaff_x19 + 0x32c),(int)unaff_x19[0x66],0);
  fVar8 = fVar9;
  fVar15 = fVar6;
  uVar5 = FUN_07c8b548(fVar17,fVar6,fVar9,fVar13,uVar5,fVar11,fVar4,0);
  FUN_07c8b18c(fVar16 * fVar18,uVar5,fVar15,fVar8,0);
  lVar2 = unaff_x19[6];
  if (lVar2 != 0) {
    fVar15 = *(float *)((long)unaff_x19 + 0x324);
    fVar4 = ((fVar13 * fVar14 - fVar17 * fStack0000000000000024) - fVar6 * fVar7) - fVar9 * fVar10;
    fVar8 = (fVar9 * fVar7 + fVar17 * fVar14 + fVar13 * fStack0000000000000024) - fVar6 * fVar10;
    fVar16 = *(float *)(unaff_x19 + 99);
    fVar11 = (fVar17 * fVar10 + fVar6 * fVar14 + fVar13 * fVar7) - fVar9 * fStack0000000000000024;
    fVar6 = (fVar6 * fStack0000000000000024 + fVar9 * fVar14 + fVar13 * fVar10) - fVar17 * fVar7;
    fVar9 = *(float *)((long)unaff_x19 + 0x31c);
    fVar13 = *(float *)(unaff_x19 + 100);
    fVar17 = (fVar8 * fVar9 + fVar6 * fVar15 + fVar4 * fVar13) - fVar11 * fVar16;
    *(float *)(lVar2 + 0x30) = (fVar8 * fVar15 + fVar4 * fVar16 + fVar11 * fVar13) - fVar6 * fVar9;
    *(float *)(lVar2 + 0x34) = (fVar6 * fVar16 + fVar11 * fVar15 + fVar4 * fVar9) - fVar8 * fVar13;
    *(float *)(lVar2 + 0x38) = fVar17;
    *(float *)(lVar2 + 0x3c) = ((fVar4 * fVar15 - fVar8 * fVar16) - fVar11 * fVar9) - fVar6 * fVar13
    ;
    (**(code **)(*unaff_x19 + 0x648))();
    if (unaff_x19[0x14] != 0) {
      fVar6 = *(float *)(unaff_x19 + 0xc);
      fVar8 = *(float *)((long)unaff_x19 + 100);
      fVar9 = *(float *)((long)unaff_x19 + 0x5c);
      fVar4 = fVar8;
      fVar13 = (float)FUN_07d310e8(unaff_x19[0x14],0);
      if (unaff_x19[8] != 0) {
        fVar16 = *(float *)(unaff_x19[8] + 0x10);
        fVar18 = *(float *)(unaff_x19 + 0x68);
        fVar11 = *(float *)((long)unaff_x19 + 0x344);
        fVar19 = *(float *)(unaff_x19 + 0x69);
        fVar15 = *(float *)((long)unaff_x19 + 0x8c);
        if (DAT_08974d90 == '\0') {
          FUN_03a8a718(PTR_DAT_08487160);
          DAT_08974d90 = '\x01';
        }
        fVar12 = fVar19 * fVar19 + fVar18 * fVar18 + fVar11 * fVar11;
        if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar12) {
          fVar8 = fVar8 - fVar17;
          fVar9 = fVar9 - fVar13;
          fVar6 = fVar19 * fVar15 * (fVar9 * fVar16 * fVar11 - (fVar6 - fVar4) * fVar16 * fVar18) +
                  fVar18 * fVar15 * ((fVar6 - fVar4) * fVar16 * fVar19 - fVar8 * fVar16 * fVar11) +
                  fVar11 * fVar15 * (fVar8 * fVar16 * fVar18 - fVar9 * fVar16 * fVar19);
          fVar4 = (fVar18 * fVar6) / fVar12;
          fVar17 = (fVar11 * fVar6) / fVar12;
          fVar12 = (fVar19 * fVar6) / fVar12;
        }
        else {
          if (DAT_08974d8f == '\0') {
            FUN_03a8a718(PTR_DAT_084868a0);
            DAT_08974d8f = '\x01';
          }
          pfVar3 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
          fVar4 = *pfVar3;
          fVar17 = pfVar3[1];
          fVar12 = pfVar3[2];
        }
        fVar6 = fStack0000000000000024;
        if (unaff_x19[0x14] != 0) {
          FUN_07d32824(fVar4,fVar17,fVar12,unaff_x19[0x14],0);
          if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
            if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
            fVar4 = *(float *)(unaff_x19 + 0x15);
            fVar17 = *(float *)(unaff_x19[4] + 0x28);
            FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                         (int)unaff_x19[0x7a],
                         *(float *)((long)unaff_x19 + 0x5c) +
                         fVar17 * fVar4 * *(float *)((long)unaff_x19 + 0x284),
                         (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar4 * fVar17,
                         (float)((ulong)unaff_x19[0xc] >> 0x20) +
                         (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar4 * fVar17,unaff_x19[0x14],0)
            ;
            lVar2 = unaff_x19[0x77];
            if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar1 = FUN_07c9c218(lVar2,0,0);
            if ((uVar1 & 1) != 0) {
              if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
              fVar17 = *(float *)(unaff_x19 + 0x17);
              fVar4 = -((float)((ulong)unaff_x19[0x79] >> 0x20) + (float)((ulong)*unaff_x22 >> 0x20)
                       ) * fVar17;
              FUN_07d32a2c(CONCAT44(fVar4,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar17),
                           fVar4,-((*(float *)(unaff_x19 + 0x7a) +
                                   *(float *)((long)unaff_x19 + 0x3dc)) * fVar17),
                           *(undefined4 *)((long)unaff_x19 + 0x5c),(int)unaff_x19[0xc],
                           *(undefined4 *)((long)unaff_x19 + 100),unaff_x19[0x77],0);
            }
          }
          lVar2 = unaff_x19[6];
          if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
            FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                         *(undefined4 *)((long)unaff_x19 + 0x314),*(undefined4 *)(lVar2 + 0x30),
                         *(undefined4 *)(lVar2 + 0x34),*(undefined4 *)(lVar2 + 0x38),
                         *(undefined4 *)(lVar2 + 0x3c),*(long *)(lVar2 + 0x20),0);
            if ((unaff_x19[6] != 0) && (lVar2 = *(long *)(unaff_x19[6] + 0x28), lVar2 != 0)) {
              fVar4 = *(float *)((long)unaff_x19 + 0x324);
              fVar17 = *(float *)(unaff_x19 + 99);
              fVar9 = *(float *)(unaff_x19 + 100);
              fVar13 = *(float *)((long)unaff_x19 + 0x31c);
              FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                           *(undefined4 *)((long)unaff_x19 + 0x314),
                           (fVar6 * fVar4 + fVar14 * fVar17 + fVar7 * fVar9) - fVar10 * fVar13,
                           (fVar10 * fVar17 + fVar7 * fVar4 + fVar14 * fVar13) - fVar6 * fVar9,
                           (fVar6 * fVar13 + fVar10 * fVar4 + fVar14 * fVar9) - fVar7 * fVar17,
                           ((fVar14 * fVar4 - fVar6 * fVar17) - fVar7 * fVar13) - fVar10 * fVar9,
                           lVar2,0);
              if (((unaff_x19[6] != 0) && (lVar2 = *(long *)(unaff_x19[6] + 0x40), lVar2 != 0)) &&
                 (lVar2 = FUN_07c98f88(lVar2,0), lVar2 != 0)) {
                fVar4 = *(float *)(unaff_x19 + 0x50);
                fVar17 = *(float *)((long)unaff_x19 + 0x274);
                fVar9 = *(float *)((long)unaff_x19 + 0x27c);
                fVar13 = *(float *)(unaff_x19 + 0x4f);
                FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                             (int)unaff_x19[0x4e],
                             (fVar6 * fVar4 + fVar14 * fVar17 + fVar7 * fVar9) - fVar10 * fVar13,
                             (fVar10 * fVar17 + fVar7 * fVar4 + fVar14 * fVar13) - fVar6 * fVar9,
                             (fVar6 * fVar13 + fVar10 * fVar4 + fVar14 * fVar9) - fVar7 * fVar17,
                             ((fVar14 * fVar4 - fVar6 * fVar17) - fVar7 * fVar13) - fVar10 * fVar9,
                             lVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_06978e5c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


