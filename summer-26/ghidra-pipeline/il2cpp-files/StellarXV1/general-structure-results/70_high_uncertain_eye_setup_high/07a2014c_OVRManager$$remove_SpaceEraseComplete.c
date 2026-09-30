/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 07a2014c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceEraseComplete
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
                    /* try { // try from 07a2015c to 07b2017b has its CatchHandler @ 07a20238 */
  if ((DAT_0989517c & 1) == 0) {
    FUN_04077588(PTR_DAT_092ed800);
    FUN_04077588(PTR_DAT_09285ae0);
    FUN_04077588(PTR_DAT_092b7110);
    DAT_0989517c = 1;
  }
  fVar17 = *param_5;
  fVar20 = param_5[1];
  fVar19 = param_5[2];
                    /* try { // try from 07a20198 to 07b201c3 has its CatchHandler @ 07a2022c */
  fVar15 = *(float *)(param_4 + 0x160);
  fVar13 = *(float *)(param_4 + 0x140);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  lVar4 = FUN_089c7534(param_4,0);
  if (lVar4 != 0) {
    fVar10 = (float)FUN_089de258(lVar4,0);
                    /* try { // try from 07a201c4 to 07b201cf has its CatchHandler @ 07a20224 */
    fVar13 = ABS(fVar15) - fVar13 * fVar10;
    if (fVar13 <= 0.0) {
      return;
    }
                    /* try { // try from 07a201e4 to 07b201e7 has its CatchHandler @ 07a20220 */
                    /* try { // try from 07a201e8 to 07b201eb has its CatchHandler @ 07a2021c */
    if (*(int *)(*(long *)PTR_DAT_092b7110 + 0xe4) == 0) {
                    /* try { // try from 07a201ec to 07b201ef has its CatchHandler @ 07a20218 */
      thunk_FUN_040d65a8();
    }
                    /* try { // try from 07a201f0 to 07b201f3 has its CatchHandler @ 07a20214 */
                    /* try { // try from 07a201f4 to 07b201f7 has its CatchHandler @ 07a2020c */
                    /* try { // try from 07a201f8 to 07b201fb has its CatchHandler @ 07a20234 */
    fVar15 = (float)FUN_089d9d60(param_5,0);
    puVar1 = PTR_DAT_09285ae0;
                    /* try { // try from 07a201fc to 07b201ff has its CatchHandler @ 07a20230 */
                    /* catch() { ... } // from try @ 07a2008c with catch @ 07a20200
                       try { // try from 07a20200 to 07b20253 has its CatchHandler @ 07a1ff5c */
                    /* catch() { ... } // from try @ 07a20114 with catch @ 07a20204 */
                    /* catch() { ... } // from try @ 07a20104 with catch @ 07a20208 */
                    /* catch() { ... } // from try @ 07a201f4 with catch @ 07a2020c */
                    /* catch() { ... } // from try @ 07a20130 with catch @ 07a20210 */
    uVar18 = *(undefined4 *)(param_4 + 0x160);
                    /* catch() { ... } // from try @ 07a201f0 with catch @ 07a20214 */
                    /* catch() { ... } // from try @ 07a201ec with catch @ 07a20218 */
                    /* catch() { ... } // from try @ 07a201e8 with catch @ 07a2021c */
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07a201e4 with catch @ 07a20220 */
      thunk_FUN_040d65a8();
    }
                    /* catch() { ... } // from try @ 07a201c4 with catch @ 07a20224 */
                    /* catch() { ... } // from try @ 07a200d8 with catch @ 07a20228 */
                    /* catch() { ... } // from try @ 07a20078 with catch @ 07a2022c
                       catch() { ... } // from try @ 07a20198 with catch @ 07a2022c */
    iVar3 = FUN_0767ac94(uVar18,0);
                    /* catch() { ... } // from try @ 07a20038 with catch @ 07a20230
                       catch() { ... } // from try @ 07a201fc with catch @ 07a20230 */
                    /* catch() { ... } // from try @ 07a1ffec with catch @ 07a20234
                       catch() { ... } // from try @ 07a201f8 with catch @ 07a20234 */
    if (*(long *)(param_4 + 0x128) != 0) {
                    /* catch() { ... } // from try @ 07a2015c with catch @ 07a20238 */
      fVar10 = (float)iVar3;
      param_3 = param_3 * fVar10;
      param_2 = param_2 * fVar10;
      fVar14 = fVar13 * param_3;
      fVar16 = fVar13 * param_2;
      fVar11 = (float)FUN_089db960(*(long *)(param_4 + 0x128),0);
      if (DAT_098854eb == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854eb = '\x01';
      }
      puVar2 = PTR_DAT_09285d60;
      fVar19 = fVar19 + fVar14;
      fVar20 = fVar20 + fVar16;
      fVar17 = fVar17 + fVar13 * fVar15 * fVar10;
      lVar4 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
      fVar13 = *(float *)(lVar4 + 0x18);
      fVar10 = *(float *)(lVar4 + 0x1c);
      fVar15 = *(float *)(lVar4 + 0x20);
      if (DAT_098854e6 == '\0') {
        FUN_04077588(PTR_DAT_09285d58);
        DAT_098854e6 = '\x01';
      }
      fVar11 = fVar17 - fVar11;
      param_3 = fVar20 - param_3;
      param_2 = fVar19 - param_2;
      fVar14 = fVar15 * fVar15 + fVar13 * fVar13 + fVar10 * fVar10;
      if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar14) {
        fVar16 = param_2 * fVar15 + fVar11 * fVar13 + param_3 * fVar10;
        fVar11 = fVar11 - (fVar13 * fVar16) / fVar14;
        param_3 = param_3 - (fVar10 * fVar16) / fVar14;
        param_2 = param_2 - (fVar15 * fVar16) / fVar14;
      }
      if (DAT_098854e7 == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        DAT_098854e7 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      fVar13 = SQRT(param_2 * param_2 + fVar11 * fVar11 + param_3 * param_3);
      if (fVar13 <= DAT_01aecf88) {
        if (DAT_098854f1 == '\0') {
          FUN_04077588(PTR_DAT_09285d60);
          DAT_098854f1 = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
        fVar11 = *pfVar6;
        param_3 = pfVar6[1];
        param_2 = pfVar6[2];
      }
      else {
        fVar11 = fVar11 / fVar13;
        param_3 = param_3 / fVar13;
        param_2 = param_2 / fVar13;
      }
      if (DAT_098854eb == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854eb = '\x01';
      }
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar12 = *(undefined4 *)(lVar4 + 0x18);
      uVar18 = FUN_089b941c(fVar11,param_3,param_2,uVar12,*(undefined4 *)(lVar4 + 0x1c),
                            *(undefined4 *)(lVar4 + 0x20),0);
      plVar9 = *(long **)(param_4 + 0x138);
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_089d99f0(fVar17,fVar20,fVar19,uVar18,param_3,param_2,uVar12,&stack0x00000020,0);
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      in_stack_00000058 = in_stack_00000038;
      uStack000000000000004c = uStack000000000000002c;
      in_stack_00000050 = uStack0000000000000030;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092ed800) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07a204dc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092ed800,2);
LAB_07a204dc:
        (*(code *)*puVar5)(&stack0x00000000 + 4,plVar9,&stack0x00000040,puVar5[1]);
        *(ulong *)(param_4 + 0x14c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *(undefined8 *)(param_4 + 0x144) = in_stack_00000000._4_8_;
        *(undefined8 *)(param_4 + 0x158) = in_stack_00000018;
        *(ulong *)(param_4 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


