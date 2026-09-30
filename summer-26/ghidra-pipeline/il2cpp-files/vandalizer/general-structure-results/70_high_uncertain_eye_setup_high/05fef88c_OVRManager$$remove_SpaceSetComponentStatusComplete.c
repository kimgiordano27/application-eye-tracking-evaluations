/*
FUNCTION_NAME: OVRManager$$remove_SpaceSetComponentStatusComplete
ENTRY_POINT: 05fef88c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceSetComponentStatusComplete(void)

{
  ulong uVar1;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  ulong uVar8;
  
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x22 + 0x545) = 1;
  }
  fVar5 = unaff_s12 * unaff_s12;
  fVar2 = fVar5 + unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11;
  fVar7 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
  if (fVar7 <= fVar2) {
    fVar6 = (float)unaff_d10 * unaff_s12 + (float)unaff_d8 * unaff_s13 + (float)unaff_d9 * unaff_s11
    ;
    fVar5 = unaff_s12 * fVar6;
    fVar7 = (unaff_s13 * fVar6) / fVar2;
    unaff_d8 = (ulong)(uint)((float)unaff_d8 - fVar7);
    unaff_d9 = (ulong)(uint)((float)unaff_d9 - (unaff_s11 * fVar6) / fVar2);
    unaff_d10 = (ulong)(uint)((float)unaff_d10 - fVar5 / fVar2);
  }
  uVar8 = (ulong)(uint)fVar7;
  uVar1 = (ulong)(uint)fVar5;
  uVar3 = FUN_05feebe4();
  FUN_06e461b0(unaff_d8,unaff_d9,unaff_d10,uVar3,uVar1,uVar8,0);
  FUN_05fee9b8();
  FUN_06e67e1c(&stack0x00000080,0);
  uVar1 = FUN_0445a158();
  if ((uVar1 & 1) == 0) {
    uVar4 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
    uVar3 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    uStack0000000000000034 = uStack0000000000000094;
    in_stack_00000020 = in_stack_00000080;
  }
  else {
    in_stack_00000048 = uStack0000000000000088;
    in_stack_00000040 = in_stack_00000080;
    uStack0000000000000054 = uStack0000000000000094;
    in_stack_00000050 = uStack0000000000000090;
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uStack0000000000000014 = uStack0000000000000094;
    FUN_05fef2e0(&stack0x00000020);
    uVar4 = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    uVar3 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  }
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar4;
  unaff_x19[1] = uVar3;
  *unaff_x19 = in_stack_00000020;
  return;
}


