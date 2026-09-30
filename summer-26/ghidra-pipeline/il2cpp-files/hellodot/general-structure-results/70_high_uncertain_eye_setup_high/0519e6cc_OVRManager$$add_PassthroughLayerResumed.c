/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 0519e6cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__add_PassthroughLayerResumed(long param_1,float param_2)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  ulong uVar7;
  
  fVar4 = unaff_s12 * unaff_s12;
  param_2 = fVar4 + param_2;
  fVar6 = **(float **)(param_1 + 0xb8);
  if (fVar6 <= param_2) {
    fVar5 = (float)unaff_d10 * unaff_s12 + (float)unaff_d8 * unaff_s13 + (float)unaff_d9 * unaff_s11
    ;
    fVar4 = unaff_s12 * fVar5;
    fVar6 = (unaff_s13 * fVar5) / param_2;
    unaff_d8 = (ulong)(uint)((float)unaff_d8 - fVar6);
    unaff_d9 = (ulong)(uint)((float)unaff_d9 - (unaff_s11 * fVar5) / param_2);
    unaff_d10 = (ulong)(uint)((float)unaff_d10 - fVar4 / param_2);
  }
  uVar7 = (ulong)(uint)fVar6;
  uVar1 = (ulong)(uint)fVar4;
  uVar2 = FUN_0519da8c();
  FUN_05ee9fc0(unaff_d8,unaff_d9,unaff_d10,uVar2,uVar1,uVar7,0);
  OVRManager__remove_SpaceSetComponentStatusComplete();
  FUN_05effcac(&stack0x00000080,0);
  uVar1 = FUN_036c3a80();
  if ((uVar1 & 1) == 0) {
    uVar3 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
    uVar2 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
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
      FUN_02ce7c7c();
    }
    uStack0000000000000014 = uStack0000000000000094;
    FUN_0519e154(&stack0x00000020);
    uVar3 = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    uVar2 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  }
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar3;
  unaff_x19[1] = uVar2;
  *unaff_x19 = in_stack_00000020;
  return;
}


