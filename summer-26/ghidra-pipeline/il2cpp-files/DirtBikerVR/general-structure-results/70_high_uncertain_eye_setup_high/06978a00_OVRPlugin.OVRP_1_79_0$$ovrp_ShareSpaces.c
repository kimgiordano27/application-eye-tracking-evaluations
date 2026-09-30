/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_ShareSpaces
ENTRY_POINT: 06978a00
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


void OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,undefined8 param_10)

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
  float fVar14;
  float fVar15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
                    /* try { // try from 06978a0c to 06a78a17 has its CatchHandler @ 06978ac0 */
                    /* try { // try from 06978a2c to 06a78a4b has its CatchHandler @ 06978ad0 */
  fVar9 = (param_3 * param_6 + param_5 * param_7 + param_2 * param_9) - param_4 * param_8;
                    /* try { // try from 06978a60 to 06a78a6b has its CatchHandler @ 06978ab8 */
  *(float *)(param_1 + 0x30) = (in_s17 + in_s16 + param_4 * param_9) - param_5 * param_6;
  *(float *)(param_1 + 0x34) = (param_5 * param_8 + in_s19 + in_s18) - param_3 * param_9;
  *(float *)(param_1 + 0x38) = fVar9;
  *(float *)(param_1 + 0x3c) =
       ((param_2 * param_7 - param_3 * param_8) - param_4 * param_6) - param_5 * param_9;
  (**(code **)(*unaff_x19 + 0x648))(param_10,*(undefined8 *)(*unaff_x19 + 0x650));
  if (unaff_x19[0x14] != 0) {
                    /* try { // try from 06978a80 to 06a78a9f has its CatchHandler @ 06978abc */
    fVar4 = *(float *)(unaff_x19 + 0xc);
    fVar7 = *(float *)((long)unaff_x19 + 100);
    fVar5 = *(float *)((long)unaff_x19 + 0x5c);
    fVar8 = fVar7;
    fVar6 = (float)FUN_07d310e8(unaff_x19[0x14],0);
    if (unaff_x19[8] != 0) {
                    /* try { // try from 06978aa4 to 06a78aa7 has its CatchHandler @ 06978ae8 */
                    /* try { // try from 06978aa8 to 06a78aab has its CatchHandler @ 06978aec */
      fVar13 = *(float *)(unaff_x19[8] + 0x10);
      fVar14 = *(float *)(unaff_x19 + 0x68);
      fVar11 = *(float *)((long)unaff_x19 + 0x344);
      fVar15 = *(float *)(unaff_x19 + 0x69);
      fVar12 = *(float *)((long)unaff_x19 + 0x8c);
      if (DAT_08974d90 == '\0') {
        FUN_03a8a718(PTR_DAT_08487160);
        DAT_08974d90 = '\x01';
      }
      fVar10 = fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11;
      if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar10) {
        fVar7 = fVar7 - fVar9;
        fVar5 = fVar5 - fVar6;
        fVar4 = fVar15 * fVar12 * (fVar5 * fVar13 * fVar11 - (fVar4 - fVar8) * fVar13 * fVar14) +
                fVar14 * fVar12 * ((fVar4 - fVar8) * fVar13 * fVar15 - fVar7 * fVar13 * fVar11) +
                fVar11 * fVar12 * (fVar7 * fVar13 * fVar14 - fVar5 * fVar13 * fVar15);
        fVar9 = (fVar14 * fVar4) / fVar10;
        fVar8 = (fVar11 * fVar4) / fVar10;
        fVar10 = (fVar15 * fVar4) / fVar10;
      }
      else {
        if (DAT_08974d8f == '\0') {
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d8f = '\x01';
        }
        pfVar2 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
        fVar9 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar10 = pfVar2[2];
      }
      if (unaff_x19[0x14] != 0) {
        FUN_07d32824(fVar9,fVar8,fVar10,unaff_x19[0x14],0);
        if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
          if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
          fVar9 = *(float *)(unaff_x19 + 0x15);
          fVar8 = *(float *)(unaff_x19[4] + 0x28);
          FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                       (int)unaff_x19[0x7a],
                       *(float *)((long)unaff_x19 + 0x5c) +
                       fVar8 * fVar9 * *(float *)((long)unaff_x19 + 0x284),
                       (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar9 * fVar8,
                       (float)((ulong)unaff_x19[0xc] >> 0x20) +
                       (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar9 * fVar8,unaff_x19[0x14],0);
          lVar3 = unaff_x19[0x77];
          if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar1 = FUN_07c9c218(lVar3,0,0);
          if ((uVar1 & 1) != 0) {
            if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
            fVar8 = *(float *)(unaff_x19 + 0x17);
            fVar9 = -((float)((ulong)unaff_x19[0x79] >> 0x20) + (float)((ulong)*unaff_x22 >> 0x20))
                    * fVar8;
            FUN_07d32a2c(CONCAT44(fVar9,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar8),fVar9
                         ,-((*(float *)(unaff_x19 + 0x7a) + *(float *)((long)unaff_x19 + 0x3dc)) *
                           fVar8),*(undefined4 *)((long)unaff_x19 + 0x5c),(int)unaff_x19[0xc],
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
            fVar9 = *(float *)((long)unaff_x19 + 0x324);
            fVar8 = *(float *)(unaff_x19 + 99);
            fVar4 = *(float *)(unaff_x19 + 100);
            fVar5 = *(float *)((long)unaff_x19 + 0x31c);
            FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                         *(undefined4 *)((long)unaff_x19 + 0x314),
                         (fStack0000000000000024 * fVar9 + in_stack_00000018._4_4_ * fVar8 +
                         fStack0000000000000020 * fVar4) - in_stack_00000028 * fVar5,
                         (in_stack_00000028 * fVar8 +
                         fStack0000000000000020 * fVar9 + in_stack_00000018._4_4_ * fVar5) -
                         fStack0000000000000024 * fVar4,
                         (fStack0000000000000024 * fVar5 +
                         in_stack_00000028 * fVar9 + in_stack_00000018._4_4_ * fVar4) -
                         fStack0000000000000020 * fVar8,
                         ((in_stack_00000018._4_4_ * fVar9 - fStack0000000000000024 * fVar8) -
                         fStack0000000000000020 * fVar5) - in_stack_00000028 * fVar4,lVar3,0);
            if (((unaff_x19[6] != 0) && (lVar3 = *(long *)(unaff_x19[6] + 0x40), lVar3 != 0)) &&
               (lVar3 = FUN_07c98f88(lVar3,0), lVar3 != 0)) {
              fVar9 = *(float *)(unaff_x19 + 0x50);
              fVar8 = *(float *)((long)unaff_x19 + 0x274);
              fVar4 = *(float *)((long)unaff_x19 + 0x27c);
              fVar5 = *(float *)(unaff_x19 + 0x4f);
              FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                           (int)unaff_x19[0x4e],
                           (fStack0000000000000024 * fVar9 + in_stack_00000018._4_4_ * fVar8 +
                           fStack0000000000000020 * fVar4) - in_stack_00000028 * fVar5,
                           (in_stack_00000028 * fVar8 +
                           fStack0000000000000020 * fVar9 + in_stack_00000018._4_4_ * fVar5) -
                           fStack0000000000000024 * fVar4,
                           (fStack0000000000000024 * fVar5 +
                           in_stack_00000028 * fVar9 + in_stack_00000018._4_4_ * fVar4) -
                           fStack0000000000000020 * fVar8,
                           ((in_stack_00000018._4_4_ * fVar9 - fStack0000000000000024 * fVar8) -
                           fStack0000000000000020 * fVar5) - in_stack_00000028 * fVar4,lVar3,0);
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


