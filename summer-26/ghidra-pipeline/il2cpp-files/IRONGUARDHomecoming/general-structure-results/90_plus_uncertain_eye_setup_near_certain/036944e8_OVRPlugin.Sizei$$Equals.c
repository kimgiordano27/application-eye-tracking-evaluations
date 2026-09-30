/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 036944e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_Sizei__Equals(float param_1,float param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  float unaff_s10;
  undefined8 unaff_d11;
  ulong unaff_d12;
  undefined8 unaff_d13;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong uVar4;
  
  fVar2 = (float)unaff_d13 * (float)unaff_d13;
  uVar4 = (ulong)(uint)fVar2;
  if (param_1 + param_2 + fVar2 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto OVRPlugin_Sizei___cctor;
                    /* try { // try from 03694508 to 03794513 has its CatchHandler @ 03694888 */
    unaff_d11 = FUN_0407d840(*(long *)(unaff_x20 + 0x28),0);
    unaff_d12 = uVar4;
    unaff_d13 = param_3;
  }
  FUN_0406761c(unaff_d11,unaff_d12,unaff_d13,0);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_040390ac((in_stack_00000008._4_4_ * (float)unaff_d13 +
                 unaff_s15 * (float)unaff_d11 + unaff_s10 * (float)unaff_d12) * 0.5 + 0.5,
                 *(long *)(unaff_x20 + 0x38),0);
    uVar3 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar6 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar1 = FUN_040671f8(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
    return;
  }
OVRPlugin_Sizei___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


