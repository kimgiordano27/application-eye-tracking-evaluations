/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$.cctor
ENTRY_POINT: 06978978
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0___cctor
               (long param_1,float param_2,undefined1 param_3 [16],float param_4,
               undefined1 param_5 [16],float param_6,undefined8 param_7)

{
  ulong uVar1;
  float *pfVar2;
  long *unaff_x19;
  long lVar3;
  undefined8 *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar14;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar15;
  float in_s18;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  
                    /* try { // try from 06978998 to 06a7899b has its CatchHandler @ 06978ad4 */
                    /* try { // try from 069789a0 to 06a789ab has its CatchHandler @ 06978ac8 */
                    /* try { // try from 069789b0 to 06a789bb has its CatchHandler @ 06978ac4 */
                    /* try { // try from 069789c0 to 06a789cb has its CatchHandler @ 06978908 */
                    /* try { // try from 069789cc to 06a78a0b has its CatchHandler @ 06978738 */
  fVar11 = *(float *)((long)unaff_x19 + 0x324);
  fVar4 = ((param_2 - unaff_s12 * unaff_s8) - unaff_s14 * unaff_s10) - unaff_s13 * in_s18;
  fVar5 = (unaff_s13 * unaff_s10 + param_4 + unaff_s15 * unaff_s8) - unaff_s14 * in_s18;
  fVar12 = *(float *)(unaff_x19 + 99);
  fVar6 = (unaff_s12 * in_s18 + param_6 + unaff_s15 * unaff_s10) - unaff_s13 * unaff_s8;
  fVar9 = (unaff_s14 * unaff_s8 + unaff_s13 * unaff_s11 + unaff_s15 * in_s18) -
          unaff_s12 * unaff_s10;
  fVar10 = *(float *)((long)unaff_x19 + 0x31c);
  fVar13 = *(float *)(unaff_x19 + 100);
  fVar7 = (fVar5 * fVar10 + fVar9 * fVar11 + fVar4 * fVar13) - fVar6 * fVar12;
  *(float *)(param_1 + 0x30) = (fVar5 * fVar11 + fVar4 * fVar12 + fVar6 * fVar13) - fVar9 * fVar10;
  *(float *)(param_1 + 0x34) = (fVar9 * fVar12 + fVar6 * fVar11 + fVar4 * fVar10) - fVar5 * fVar13;
  *(float *)(param_1 + 0x38) = fVar7;
  *(float *)(param_1 + 0x3c) = ((fVar4 * fVar11 - fVar5 * fVar12) - fVar6 * fVar10) - fVar9 * fVar13
  ;
  fStack000000000000001c = unaff_s11;
  (**(code **)(*unaff_x19 + 0x648))(param_7,*(undefined8 *)(*unaff_x19 + 0x650));
  if (unaff_x19[0x14] != 0) {
    fVar5 = *(float *)(unaff_x19 + 0xc);
    fVar10 = *(float *)((long)unaff_x19 + 100);
    fVar6 = *(float *)((long)unaff_x19 + 0x5c);
    fVar4 = fVar10;
    fVar9 = (float)FUN_07d310e8(unaff_x19[0x14],0);
    if (unaff_x19[8] != 0) {
      fVar13 = *(float *)(unaff_x19[8] + 0x10);
      fVar14 = *(float *)(unaff_x19 + 0x68);
      fVar11 = *(float *)((long)unaff_x19 + 0x344);
      fVar15 = *(float *)(unaff_x19 + 0x69);
      fVar12 = *(float *)((long)unaff_x19 + 0x8c);
      if (DAT_08974d90 == '\0') {
        FUN_03a8a718(PTR_DAT_08487160);
        DAT_08974d90 = '\x01';
      }
      fVar8 = fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11;
      if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar8) {
        fVar10 = fVar10 - fVar7;
        fVar6 = fVar6 - fVar9;
        fVar6 = fVar15 * fVar12 * (fVar6 * fVar13 * fVar11 - (fVar5 - fVar4) * fVar13 * fVar14) +
                fVar14 * fVar12 * ((fVar5 - fVar4) * fVar13 * fVar15 - fVar10 * fVar13 * fVar11) +
                fVar11 * fVar12 * (fVar10 * fVar13 * fVar14 - fVar6 * fVar13 * fVar15);
        fVar4 = (fVar14 * fVar6) / fVar8;
        fVar5 = (fVar11 * fVar6) / fVar8;
        fVar8 = (fVar15 * fVar6) / fVar8;
      }
      else {
        if (DAT_08974d8f == '\0') {
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d8f = '\x01';
        }
        pfVar2 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
        fVar4 = *pfVar2;
        fVar5 = pfVar2[1];
        fVar8 = pfVar2[2];
      }
      if (unaff_x19[0x14] != 0) {
        FUN_07d32824(fVar4,fVar5,fVar8,unaff_x19[0x14],0);
        if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
          if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
          fVar4 = *(float *)(unaff_x19 + 0x15);
          fVar5 = *(float *)(unaff_x19[4] + 0x28);
          FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                       (int)unaff_x19[0x7a],
                       *(float *)((long)unaff_x19 + 0x5c) +
                       fVar5 * fVar4 * *(float *)((long)unaff_x19 + 0x284),
                       (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar4 * fVar5,
                       (float)((ulong)unaff_x19[0xc] >> 0x20) +
                       (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar4 * fVar5,unaff_x19[0x14],0);
          lVar3 = unaff_x19[0x77];
          if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar1 = FUN_07c9c218(lVar3,0,0);
          if ((uVar1 & 1) != 0) {
            if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
            fVar5 = *(float *)(unaff_x19 + 0x17);
            fVar4 = -((float)((ulong)unaff_x19[0x79] >> 0x20) + (float)((ulong)*unaff_x22 >> 0x20))
                    * fVar5;
            FUN_07d32a2c(CONCAT44(fVar4,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar5),fVar4
                         ,-((*(float *)(unaff_x19 + 0x7a) + *(float *)((long)unaff_x19 + 0x3dc)) *
                           fVar5),*(undefined4 *)((long)unaff_x19 + 0x5c),(int)unaff_x19[0xc],
                         *(undefined4 *)((long)unaff_x19 + 100),unaff_x19[0x77],0);
          }
        }
        lVar3 = unaff_x19[6];
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
          FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                       *(undefined4 *)((long)unaff_x19 + 0x314),*(undefined4 *)(lVar3 + 0x30),
                       *(undefined4 *)(lVar3 + 0x34),*(undefined4 *)(lVar3 + 0x38),
                       *(undefined4 *)(lVar3 + 0x3c),*(long *)(lVar3 + 0x20),0);
          if ((unaff_x19[6] != 0) && (lVar3 = *(long *)(unaff_x19[6] + 0x28), lVar3 != 0)) {
            fVar4 = *(float *)((long)unaff_x19 + 0x324);
            fVar5 = *(float *)(unaff_x19 + 99);
            fVar6 = *(float *)(unaff_x19 + 100);
            fVar7 = *(float *)((long)unaff_x19 + 0x31c);
            FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                         *(undefined4 *)((long)unaff_x19 + 0x314),
                         (in_stack_00000020._4_4_ * fVar4 + fStack000000000000001c * fVar5 +
                         unaff_s10 * fVar6) - in_stack_00000028 * fVar7,
                         (in_stack_00000028 * fVar5 +
                         unaff_s10 * fVar4 + fStack000000000000001c * fVar7) -
                         in_stack_00000020._4_4_ * fVar6,
                         (in_stack_00000020._4_4_ * fVar7 +
                         in_stack_00000028 * fVar4 + fStack000000000000001c * fVar6) -
                         unaff_s10 * fVar5,
                         ((fStack000000000000001c * fVar4 - in_stack_00000020._4_4_ * fVar5) -
                         unaff_s10 * fVar7) - in_stack_00000028 * fVar6,lVar3,0);
            if (((unaff_x19[6] != 0) && (lVar3 = *(long *)(unaff_x19[6] + 0x40), lVar3 != 0)) &&
               (lVar3 = FUN_07c98f88(lVar3,0), lVar3 != 0)) {
              fVar4 = *(float *)(unaff_x19 + 0x50);
              fVar5 = *(float *)((long)unaff_x19 + 0x274);
              fVar6 = *(float *)((long)unaff_x19 + 0x27c);
              fVar7 = *(float *)(unaff_x19 + 0x4f);
              FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                           (int)unaff_x19[0x4e],
                           (in_stack_00000020._4_4_ * fVar4 + fStack000000000000001c * fVar5 +
                           unaff_s10 * fVar6) - in_stack_00000028 * fVar7,
                           (in_stack_00000028 * fVar5 +
                           unaff_s10 * fVar4 + fStack000000000000001c * fVar7) -
                           in_stack_00000020._4_4_ * fVar6,
                           (in_stack_00000020._4_4_ * fVar7 +
                           in_stack_00000028 * fVar4 + fStack000000000000001c * fVar6) -
                           unaff_s10 * fVar5,
                           ((fStack000000000000001c * fVar4 - in_stack_00000020._4_4_ * fVar5) -
                           unaff_s10 * fVar7) - in_stack_00000028 * fVar6,lVar3,0);
              return;
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


