/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerSampleRateHz
ENTRY_POINT: 069788f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetControllerSampleRateHz(void)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  long *unaff_x19;
  undefined8 *unaff_x22;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar15;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar16;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  
                    /* catch() { ... } // from try @ 06978878 with catch @ 069788f4 */
  fVar13 = *(float *)(unaff_x19 + 0x7c);
                    /* catch() { ... } // from try @ 06978860 with catch @ 06978908
                       catch() { ... } // from try @ 06978950 with catch @ 06978908
                       catch() { ... } // from try @ 069789c0 with catch @ 06978908 */
  fVar14 = *(float *)((long)unaff_x19 + 0xb4);
                    /* try { // try from 06978910 to 06a78913 has its CatchHandler @ 06978ad8 */
  FUN_07c8b548(0);
  fVar5 = unaff_s13;
  fVar6 = unaff_s14;
                    /* try { // try from 06978928 to 06a7892b has its CatchHandler @ 06978aec */
                    /* try { // try from 06978930 to 06a7893b has its CatchHandler @ 06978adc */
  uVar4 = FUN_07c8b548(unaff_s12,unaff_s14,0);
                    /* try { // try from 06978940 to 06a7894b has its CatchHandler @ 06978ae0 */
                    /* try { // try from 06978950 to 06a7895b has its CatchHandler @ 06978908 */
  FUN_07c8b18c(fVar13 * fVar14,uVar4,fVar6,fVar5,0);
  lVar2 = unaff_x19[6];
  if (lVar2 != 0) {
    fVar10 = *(float *)((long)unaff_x19 + 0x324);
    fVar5 = ((unaff_s15 * unaff_s11 - unaff_s12 * in_stack_00000020._4_4_) - unaff_s14 * unaff_s10)
            - unaff_s13 * in_stack_00000028;
    fVar6 = (unaff_s13 * unaff_s10 + unaff_s12 * unaff_s11 + unaff_s15 * in_stack_00000020._4_4_) -
            unaff_s14 * in_stack_00000028;
    fVar11 = *(float *)(unaff_x19 + 99);
    fVar13 = (unaff_s12 * in_stack_00000028 + unaff_s14 * unaff_s11 + unaff_s15 * unaff_s10) -
             unaff_s13 * in_stack_00000020._4_4_;
    fVar8 = (unaff_s14 * in_stack_00000020._4_4_ +
            unaff_s13 * unaff_s11 + unaff_s15 * in_stack_00000028) - unaff_s12 * unaff_s10;
    fVar9 = *(float *)((long)unaff_x19 + 0x31c);
    fVar12 = *(float *)(unaff_x19 + 100);
    fVar14 = (fVar6 * fVar9 + fVar8 * fVar10 + fVar5 * fVar12) - fVar13 * fVar11;
    *(float *)(lVar2 + 0x30) = (fVar6 * fVar10 + fVar5 * fVar11 + fVar13 * fVar12) - fVar8 * fVar9;
    *(float *)(lVar2 + 0x34) = (fVar8 * fVar11 + fVar13 * fVar10 + fVar5 * fVar9) - fVar6 * fVar12;
    *(float *)(lVar2 + 0x38) = fVar14;
    *(float *)(lVar2 + 0x3c) = ((fVar5 * fVar10 - fVar6 * fVar11) - fVar13 * fVar9) - fVar8 * fVar12
    ;
    fStack000000000000001c = unaff_s11;
    (**(code **)(*unaff_x19 + 0x648))();
    if (unaff_x19[0x14] != 0) {
      fVar6 = *(float *)(unaff_x19 + 0xc);
      fVar9 = *(float *)((long)unaff_x19 + 100);
      fVar13 = *(float *)((long)unaff_x19 + 0x5c);
      fVar5 = fVar9;
      fVar8 = (float)FUN_07d310e8(unaff_x19[0x14],0);
      if (unaff_x19[8] != 0) {
        fVar12 = *(float *)(unaff_x19[8] + 0x10);
        fVar15 = *(float *)(unaff_x19 + 0x68);
        fVar10 = *(float *)((long)unaff_x19 + 0x344);
        fVar16 = *(float *)(unaff_x19 + 0x69);
        fVar11 = *(float *)((long)unaff_x19 + 0x8c);
        if (DAT_08974d90 == '\0') {
          FUN_03a8a718(PTR_DAT_08487160);
          DAT_08974d90 = '\x01';
        }
        fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + fVar10 * fVar10;
        if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar7) {
          fVar9 = fVar9 - fVar14;
          fVar13 = fVar13 - fVar8;
          fVar13 = fVar16 * fVar11 * (fVar13 * fVar12 * fVar10 - (fVar6 - fVar5) * fVar12 * fVar15)
                   + fVar15 * fVar11 * ((fVar6 - fVar5) * fVar12 * fVar16 - fVar9 * fVar12 * fVar10)
                     + fVar10 * fVar11 * (fVar9 * fVar12 * fVar15 - fVar13 * fVar12 * fVar16);
          fVar5 = (fVar15 * fVar13) / fVar7;
          fVar6 = (fVar10 * fVar13) / fVar7;
          fVar7 = (fVar16 * fVar13) / fVar7;
        }
        else {
          if (DAT_08974d8f == '\0') {
            FUN_03a8a718(PTR_DAT_084868a0);
            DAT_08974d8f = '\x01';
          }
          pfVar3 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
          fVar5 = *pfVar3;
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
        }
        if (unaff_x19[0x14] != 0) {
          FUN_07d32824(fVar5,fVar6,fVar7,unaff_x19[0x14],0);
          if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
            if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
            fVar5 = *(float *)(unaff_x19 + 0x15);
            fVar6 = *(float *)(unaff_x19[4] + 0x28);
            FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                         (int)unaff_x19[0x7a],
                         *(float *)((long)unaff_x19 + 0x5c) +
                         fVar6 * fVar5 * *(float *)((long)unaff_x19 + 0x284),
                         (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar5 * fVar6,
                         (float)((ulong)unaff_x19[0xc] >> 0x20) +
                         (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar5 * fVar6,unaff_x19[0x14],0);
            lVar2 = unaff_x19[0x77];
            if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar1 = FUN_07c9c218(lVar2,0,0);
            if ((uVar1 & 1) != 0) {
              if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
              fVar6 = *(float *)(unaff_x19 + 0x17);
              fVar5 = -((float)((ulong)unaff_x19[0x79] >> 0x20) + (float)((ulong)*unaff_x22 >> 0x20)
                       ) * fVar6;
              FUN_07d32a2c(CONCAT44(fVar5,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar6),
                           fVar5,-((*(float *)(unaff_x19 + 0x7a) +
                                   *(float *)((long)unaff_x19 + 0x3dc)) * fVar6),
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
              fVar5 = *(float *)((long)unaff_x19 + 0x324);
              fVar6 = *(float *)(unaff_x19 + 99);
              fVar13 = *(float *)(unaff_x19 + 100);
              fVar14 = *(float *)((long)unaff_x19 + 0x31c);
              FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                           *(undefined4 *)((long)unaff_x19 + 0x314),
                           (in_stack_00000020._4_4_ * fVar5 + fStack000000000000001c * fVar6 +
                           unaff_s10 * fVar13) - in_stack_00000028 * fVar14,
                           (in_stack_00000028 * fVar6 +
                           unaff_s10 * fVar5 + fStack000000000000001c * fVar14) -
                           in_stack_00000020._4_4_ * fVar13,
                           (in_stack_00000020._4_4_ * fVar14 +
                           in_stack_00000028 * fVar5 + fStack000000000000001c * fVar13) -
                           unaff_s10 * fVar6,
                           ((fStack000000000000001c * fVar5 - in_stack_00000020._4_4_ * fVar6) -
                           unaff_s10 * fVar14) - in_stack_00000028 * fVar13,lVar2,0);
              if (((unaff_x19[6] != 0) && (lVar2 = *(long *)(unaff_x19[6] + 0x40), lVar2 != 0)) &&
                 (lVar2 = FUN_07c98f88(lVar2,0), lVar2 != 0)) {
                fVar5 = *(float *)(unaff_x19 + 0x50);
                fVar6 = *(float *)((long)unaff_x19 + 0x274);
                fVar13 = *(float *)((long)unaff_x19 + 0x27c);
                fVar14 = *(float *)(unaff_x19 + 0x4f);
                FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                             (int)unaff_x19[0x4e],
                             (in_stack_00000020._4_4_ * fVar5 + fStack000000000000001c * fVar6 +
                             unaff_s10 * fVar13) - in_stack_00000028 * fVar14,
                             (in_stack_00000028 * fVar6 +
                             unaff_s10 * fVar5 + fStack000000000000001c * fVar14) -
                             in_stack_00000020._4_4_ * fVar13,
                             (in_stack_00000020._4_4_ * fVar14 +
                             in_stack_00000028 * fVar5 + fStack000000000000001c * fVar13) -
                             unaff_s10 * fVar6,
                             ((fStack000000000000001c * fVar5 - in_stack_00000020._4_4_ * fVar6) -
                             unaff_s10 * fVar14) - in_stack_00000028 * fVar13,lVar2,0);
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


