/*
FUNCTION_NAME: Meta.XR.InputActions.RuntimeSettings$$get_Instance
ENTRY_POINT: 05fdc2c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_InputActions_RuntimeSettings__get_Instance
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
               float *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
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
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  fStack000000000000002c = 0.0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  uVar1 = FUN_05fdb004();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x20) != 0) {
                    /* try { // try from 05fdc308 to 060dc313 has its CatchHandler @ 05fdc40c */
    uVar2 = FUN_06e5502c(*(long *)(param_5 + 0x20),0);
    FUN_05f9a6f0(uVar2,0,0);
    uStack0000000000000028 = uStack0000000000000008;
                    /* try { // try from 05fdc320 to 060dc327 has its CatchHandler @ 05fdc408 */
    uStack0000000000000020 = in_stack_00000000;
    uStack0000000000000034 = uStack0000000000000010._4_4_;
    uStack0000000000000038 = uStack0000000000000010._8_4_;
    fStack000000000000002c = fStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    fVar4 = (float)FUN_05fddeec(param_5);
    lVar3 = *(long *)(param_5 + 0x30);
    if (lVar3 != 0) {
      fVar10 = param_6[3];
      fVar11 = param_6[4];
                    /* try { // try from 05fdc344 to 060dc34b has its CatchHandler @ 05fdc3fc */
      fVar12 = param_6[5];
      fVar13 = param_6[6];
      fVar6 = param_3;
      fVar7 = fStack000000000000000c;
                    /* try { // try from 05fdc354 to 060dc367 has its CatchHandler @ 05fdc3f8 */
      fVar5 = (float)FUN_06e682dc(lVar3,0);
                    /* try { // try from 05fdc374 to 060dc38f has its CatchHandler @ 05fdc400 */
                    /* try { // try from 05fdc3c4 to 060dc3f3 has its CatchHandler @ 05fdc404 */
      fVar8 = (fVar12 * fVar5 + fVar13 * fVar7 + fVar11 * param_4) - fVar10 * fVar6;
      fVar9 = (fVar10 * fVar7 + fVar13 * fVar6 + fVar12 * param_4) - fVar11 * fVar5;
      FUN_06e6aafc((fVar11 * fVar6 + fVar13 * fVar5 + fVar10 * param_4) - fVar12 * fVar7,fVar8,fVar9
                   ,((fVar13 * param_4 - fVar10 * fVar5) - fVar11 * fVar7) - fVar12 * fVar6,lVar3,0)
      ;
      lVar3 = *(long *)(param_5 + 0x30);
      if (lVar3 != 0) {
        fVar6 = (float)FUN_06e6a5c4(lVar3,0);
        fStack000000000000000c = fStack000000000000000c + fVar8;
        param_3 = param_3 + fVar9;
        fVar7 = (float)FUN_05fddeec(param_5);
        FUN_06e6a69c((fVar4 + fVar6) - fVar7,fStack000000000000000c - fVar8,param_3 - fVar9,lVar3,0)
        ;
        fVar4 = *param_6;
        fVar7 = param_6[1];
        fVar6 = param_6[2];
        if (DAT_07a3caf2 == '\0') {
          FUN_031f20f4(PTR_DAT_0759b378);
          DAT_07a3caf2 = '\x01';
        }
        lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
        fVar9 = *(float *)(lVar3 + 0x18);
        fVar8 = *(float *)(lVar3 + 0x1c);
        fVar5 = *(float *)(lVar3 + 0x20);
        if (DAT_07a44545 == '\0') {
          FUN_031f20f4(PTR_DAT_075b9420);
          DAT_07a44545 = '\x01';
        }
        fVar10 = fVar5 * fVar5 + fVar9 * fVar9 + fVar8 * fVar8;
        fVar11 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
        if (fVar11 <= fVar10) {
          fVar7 = fVar6 * fVar5 + fVar4 * fVar9 + fVar7 * fVar8;
          fVar11 = (fVar9 * fVar7) / fVar10;
          fVar4 = fVar4 - fVar11;
          fVar6 = fVar6 - (fVar5 * fVar7) / fVar10;
        }
        if (*(long *)(param_5 + 0x30) != 0) {
          fVar7 = (float)FUN_06e6a5c4(*(long *)(param_5 + 0x30),0);
          if (*(char *)(param_5 + 0x11a) == '\0') {
            fVar5 = 0.0;
          }
          else {
            fVar5 = *(float *)(param_5 + 0x5c);
          }
          if (*(long *)(param_5 + 0x30) != 0) {
            FUN_06e6a69c(fVar4 + fVar7,fVar5 + param_1 + *(float *)(param_5 + 0x58),fVar6 + fVar11,
                         *(long *)(param_5 + 0x30),0);
            if (*(long *)(param_5 + 0x20) != 0) {
              uVar2 = FUN_06e5502c(*(long *)(param_5 + 0x20),0);
              FUN_05f9d090(uVar2,&stack0x00000020,0,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


