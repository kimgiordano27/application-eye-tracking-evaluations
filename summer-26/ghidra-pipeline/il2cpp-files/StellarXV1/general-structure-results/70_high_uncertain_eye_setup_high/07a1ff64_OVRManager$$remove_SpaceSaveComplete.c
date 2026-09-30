/*
FUNCTION_NAME: OVRManager$$remove_SpaceSaveComplete
ENTRY_POINT: 07a1ff64
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


void OVRManager__remove_SpaceSaveComplete(float *param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
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
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  param_3 = param_3 + param_2;
  if (*param_1 <= param_3) {
    fVar9 = unaff_s8 * unaff_s14 + unaff_s11 * unaff_s12 + unaff_s9 * unaff_s15;
    param_4 = (unaff_s12 * fVar9) / param_3;
    unaff_s11 = unaff_s11 - param_4;
    unaff_s9 = unaff_s9 - (unaff_s15 * fVar9) / param_3;
    unaff_s8 = unaff_s8 - (unaff_s14 * fVar9) / param_3;
  }
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar1 = PTR_DAT_092b7110;
  if (*(long *)(unaff_x19 + 0x128) != 0) {
                    /* try { // try from 07a1ffec to 07b20007 has its CatchHandler @ 07a20234 */
    fVar10 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8);
    fVar7 = (float)FUN_089db960(*(long *)(unaff_x19 + 0x128),0);
    fVar9 = param_4;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar8 = (float)FUN_089d9cf0();
                    /* try { // try from 07a20038 to 07b2005f has its CatchHandler @ 07a20230 */
    plVar6 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_089d99f0(fVar7 + fVar10 * fVar8,*(undefined4 *)(unaff_x21 + 4),param_4 + fVar10 * fVar9,
                 *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
                 *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
                 &stack0x00000020,0);
    uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    uStack0000000000000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
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
      *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000._4_8_;
      *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000018;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


