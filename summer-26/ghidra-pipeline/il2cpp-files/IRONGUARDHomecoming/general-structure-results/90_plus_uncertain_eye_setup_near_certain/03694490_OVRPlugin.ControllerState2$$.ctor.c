/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 03694490
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_ControllerState2___ctor(float param_1,float param_2,ulong param_3)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  
  if (param_1 <= param_2) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar8 = *pfVar1;
    fVar9 = pfVar1[1];
                    /* try { // try from 036944dc to 037944ef has its CatchHandler @ 0369487c */
    param_1 = pfVar1[2];
  }
  else {
    fVar8 = unaff_s14 / param_1;
    fVar9 = unaff_s9 / param_1;
    param_1 = unaff_s8 / param_1;
  }
  uVar3 = (ulong)(uint)fVar8;
  uVar5 = (ulong)(uint)(param_1 * param_1);
  uVar10 = (ulong)(uint)fVar9;
  uVar11 = (ulong)(uint)param_1;
  if (fVar8 * fVar8 + fVar9 * fVar9 + param_1 * param_1 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto OVRPlugin_Sizei___cctor;
    uVar3 = FUN_0407d840(*(long *)(unaff_x20 + 0x28),0);
    uVar10 = uVar5;
    uVar11 = param_3;
  }
  FUN_0406761c(uVar3,uVar10,uVar11,0);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_040390ac((in_stack_00000008._4_4_ * (float)uVar11 +
                 unaff_s15 * (float)uVar3 + unaff_s10 * (float)uVar10) * 0.5 + 0.5,
                 *(long *)(unaff_x20 + 0x38),0);
    uVar4 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar6 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar7 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar2 = FUN_040671f8(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar4;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar6;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar7;
    return;
  }
OVRPlugin_Sizei___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


