/*
FUNCTION_NAME: OVRManager$$get_suggestedCpuPerfLevel
ENTRY_POINT: 04f43128
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_suggestedCpuPerfLevel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 *param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
                    /* try { // try from 04f4312c to 0504312f has its CatchHandler @ 04f4316c */
                    /* try { // try from 04f43130 to 05043133 has its CatchHandler @ 04f43164 */
                    /* try { // try from 04f43134 to 05043137 has its CatchHandler @ 04f4315c */
                    /* try { // try from 04f43138 to 0504313f has its CatchHandler @ 04f42eb0 */
                    /* try { // try from 04f43140 to 05043143 has its CatchHandler @ 04f43154 */
                    /* try { // try from 04f43144 to 05043147 has its CatchHandler @ 04f43158 */
                    /* try { // try from 04f43148 to 0504314b has its CatchHandler @ 04f43150 */
  if ((DAT_066c99b2 & 1) == 0) {
                    /* catch() { ... } // from try @ 04f4308c with catch @ 04f4314c
                       try { // try from 04f4314c to 050431a7 has its CatchHandler @ 04f42eb0 */
                    /* catch() { ... } // from try @ 04f43148 with catch @ 04f43150 */
                    /* catch() { ... } // from try @ 04f43140 with catch @ 04f43154 */
    FUN_02b3c81c(PTR_DAT_063185a8);
                    /* catch() { ... } // from try @ 04f43080 with catch @ 04f43158
                       catch() { ... } // from try @ 04f43144 with catch @ 04f43158 */
                    /* catch() { ... } // from try @ 04f42f50 with catch @ 04f4315c
                       catch() { ... } // from try @ 04f43134 with catch @ 04f4315c */
                    /* catch() { ... } // from try @ 04f42ff8 with catch @ 04f43160 */
    FUN_02b3c81c(System_Collections_Generic_Dictionary<OVRSpace,_int>_TypeInfo);
                    /* catch() { ... } // from try @ 04f43130 with catch @ 04f43164 */
                    /* catch() { ... } // from try @ 04f42fdc with catch @ 04f43168 */
    DAT_066c99b2 = 1;
  }
                    /* catch() { ... } // from try @ 04f4312c with catch @ 04f4316c */
                    /* catch() { ... } // from try @ 04f43124 with catch @ 04f43170 */
  uStack000000000000000c = 0;
                    /* catch() { ... } // from try @ 04f42f84 with catch @ 04f43174 */
                    /* catch() { ... } // from try @ 04f42fb4 with catch @ 04f43178 */
                    /* catch() { ... } // from try @ 04f42fa4 with catch @ 04f4317c */
  uStack0000000000000014 = 0;
                    /* catch() { ... } // from try @ 04f43014 with catch @ 04f43180 */
                    /* catch() { ... } // from try @ 04f4302c with catch @ 04f43184 */
  if (*(int *)(param_5 + 4) - 2U < 3) {
                    /* catch() { ... } // from try @ 04f42f6c with catch @ 04f43188 */
                    /* catch() { ... } // from try @ 04f43038 with catch @ 04f4318c */
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
                    /* try { // try from 04f431a8 to 050431ab has its CatchHandler @ 04f431b8 */
                    /* catch() { ... } // from try @ 04f431a8 with catch @ 04f431b8 */
                    /* try { // try from 04f431bc to 050431c3 has its CatchHandler @ 04f431cc */
    uVar9 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
    *(undefined8 *)(param_4 + 0xb4) = **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8);
                    /* try { // try from 04f431c4 to 050431cf has its CatchHandler @ 04f42eb0 */
    *(undefined4 *)(param_4 + 0xbc) = uVar9;
  }
  else {
                    /* catch() { ... } // from try @ 04f431bc with catch @ 04f431cc */
    if (*(int *)(param_5 + 4) == 1) {
      fVar11 = *(float *)((long)param_5 + 4);
      fVar12 = *(float *)(param_5 + 1);
      fVar13 = *(float *)((long)param_5 + 0xc);
      if (*(char *)(param_4 + 0x74) != '\0') {
        if (DAT_066c1d9d == '\0') {
          FUN_02b3c81c(PTR_DAT_06312c90);
          DAT_066c1d9d = '\x01';
        }
        puVar3 = PTR_DAT_06312c90;
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        puVar2 = PTR_DAT_06312438;
        fVar1 = DAT_01032864;
        fVar17 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12);
        if (fVar17 <= DAT_01032864) {
          if (DAT_066c1d97 == '\0') {
            FUN_02b3c81c(PTR_DAT_06312438);
            DAT_066c1d97 = '\x01';
          }
          pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar11 = *pfVar6;
          fVar12 = pfVar6[1];
          fVar13 = pfVar6[2];
        }
        else {
          fVar11 = fVar11 / fVar17;
          fVar12 = fVar12 / fVar17;
          fVar13 = fVar13 / fVar17;
        }
        uStack0000000000000014 = (undefined4)param_5[3];
        uStack000000000000000c = (undefined4)param_5[2];
        uVar9 = uStack000000000000000c;
        if (*(int *)(*(long *)PTR_DAT_063185a8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = FUN_05c9a280();
        FUN_05c7bac0(fVar11,fVar12,fVar13,uVar7,uVar9,param_3,0);
        FUN_04f4355c(param_4);
        fVar11 = (float)FUN_05c7bd38(0);
        if (DAT_066c1caa == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          DAT_066c1caa = '\x01';
        }
        lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
        fVar16 = *(float *)(lVar5 + 0x18);
        fVar15 = *(float *)(lVar5 + 0x1c);
        fVar14 = *(float *)(lVar5 + 0x20);
        if (DAT_066c298e == '\0') {
          FUN_02b3c81c(PTR_DAT_06315600);
          DAT_066c298e = '\x01';
        }
        fVar8 = fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15;
        if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar8) {
          fVar10 = fVar13 * fVar14 + fVar11 * fVar16 + fVar12 * fVar15;
          fVar11 = fVar11 - (fVar16 * fVar10) / fVar8;
          fVar12 = fVar12 - (fVar15 * fVar10) / fVar8;
          fVar13 = fVar13 - (fVar14 * fVar10) / fVar8;
        }
        if (DAT_066c1d9d == '\0') {
          FUN_02b3c81c(PTR_DAT_06312c90);
          DAT_066c1d9d = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar14 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12);
        if (fVar14 <= fVar1) {
          if (DAT_066c1d97 == '\0') {
            FUN_02b3c81c(PTR_DAT_06312438);
            DAT_066c1d97 = '\x01';
          }
          pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar11 = *pfVar6;
          fVar12 = pfVar6[1];
          fVar13 = pfVar6[2];
        }
        else {
          fVar11 = fVar11 / fVar14;
          fVar12 = fVar12 / fVar14;
          fVar13 = fVar13 / fVar14;
        }
        if (DAT_066c1d9c == '\0') {
          FUN_02b3c81c(PTR_DAT_06312c90);
          DAT_066c1d9c = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar11 = fVar17 * fVar11;
        fVar12 = fVar17 * fVar12;
        fVar13 = fVar17 * fVar13;
      }
      FUN_04f43890(fVar11,fVar12,fVar13,param_4);
      FUN_04f438f8(param_4);
      uVar4 = FUN_04f439c8(param_4);
      if ((uVar4 & 1) != 0) {
        FUN_04f42f50(param_4);
      }
      lVar5 = *(long *)(param_4 + 0x90);
      if (lVar5 != 0) {
        in_stack_00000048 = param_5[1];
        in_stack_00000040 = *param_5;
        in_stack_00000058 = param_5[3];
        in_stack_00000050 = param_5[2];
        in_stack_00000060 = param_5[4];
        uStack0000000000000034 = param_5[3];
        in_stack_00000030 = (undefined4)((ulong)param_5[2] >> 0x20);
        in_stack_00000020 = *(undefined8 *)((long)param_5 + 4);
        in_stack_00000028 = (undefined4)*(undefined8 *)((long)param_5 + 0xc);
        uStack000000000000002c = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)(lVar5 + 0x28));
        return;
      }
      goto LAB_04f43558;
    }
  }
  if (*(long *)(param_4 + 0xd8) != 0) {
    in_stack_00000048 = param_5[1];
    in_stack_00000040 = *param_5;
    in_stack_00000058 = param_5[3];
    in_stack_00000050 = param_5[2];
    in_stack_00000060 = param_5[4];
    FUN_03c7bac0(*(long *)(param_4 + 0xd8),&stack0x00000040,
                 *(undefined8 *)System_Collections_Generic_Dictionary<OVRSpace,_int>_TypeInfo);
    return;
  }
LAB_04f43558:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


