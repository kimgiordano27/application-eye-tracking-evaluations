/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 07a1fe70
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSaveComplete
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5,
               long param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  undefined8 in_stack_000000a8;
  
  if ((DAT_0989517b & 1) == 0) {
    FUN_04077588(PTR_DAT_092ed800);
    FUN_04077588(PTR_DAT_092b7110);
    DAT_0989517b = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  if (*(long *)(param_4 + 0x128) != 0) {
    fVar12 = param_5[1];
    in_stack_000000a8._4_4_ = param_5[2];
    fVar10 = *param_5;
    fVar7 = (float)FUN_089db960(*(long *)(param_4 + 0x128),0);
    if (DAT_098854eb == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854eb = '\x01';
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar11 = *(float *)(lVar3 + 0x18);
    fVar14 = *(float *)(lVar3 + 0x1c);
    fVar13 = *(float *)(lVar3 + 0x20);
    if (DAT_098854e6 == '\0') {
      FUN_04077588(PTR_DAT_09285d58);
      DAT_098854e6 = '\x01';
    }
    fVar10 = fVar10 - fVar7;
    fVar12 = fVar12 - param_2;
    param_3 = in_stack_000000a8._4_4_ - param_3;
                    /* try { // try from 07a1ff5c to 07b1ffeb has its CatchHandler @ 07a1ff5c
                       catch() { ... } // from try @ 07a1ff5c with catch @ 07a1ff5c
                       catch() { ... } // from try @ 07a20200 with catch @ 07a1ff5c
                       catch() { ... } // from try @ 07a20258 with catch @ 07a1ff5c
                       catch() { ... } // from try @ 07a2027c with catch @ 07a1ff5c */
    fVar8 = fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14;
    fVar7 = in_stack_000000a8._4_4_;
    if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar8) {
      fVar9 = param_3 * fVar13 + fVar10 * fVar11 + fVar12 * fVar14;
      fVar7 = (fVar11 * fVar9) / fVar8;
      fVar10 = fVar10 - fVar7;
      fVar12 = fVar12 - (fVar14 * fVar9) / fVar8;
      param_3 = param_3 - (fVar13 * fVar9) / fVar8;
    }
    if (DAT_098854e9 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e9 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar1 = PTR_DAT_092b7110;
    if (*(long *)(param_4 + 0x128) != 0) {
      fVar11 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + param_3 * param_3);
      fVar10 = (float)FUN_089db960(*(long *)(param_4 + 0x128),0);
      fVar12 = fVar7;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      fVar13 = (float)FUN_089d9cf0(param_6,0);
      plVar6 = *(long **)(param_4 + 0x138);
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_089d99f0(fVar10 + fVar11 * fVar13,param_5[1],fVar7 + fVar11 * fVar12,
                   *(undefined4 *)(param_6 + 0xc),*(undefined4 *)(param_6 + 0x10),
                   *(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 0x18),&stack0x00000020,
                   0);
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      in_stack_00000058 = in_stack_00000038;
      uStack000000000000004c = uStack000000000000002c;
      in_stack_00000050 = uStack0000000000000030;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ed800) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_07a200dc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092ed800,2);
LAB_07a200dc:
        (*(code *)*puVar2)(&stack0x00000000 + 4,plVar6,&stack0x00000040,puVar2[1]);
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


