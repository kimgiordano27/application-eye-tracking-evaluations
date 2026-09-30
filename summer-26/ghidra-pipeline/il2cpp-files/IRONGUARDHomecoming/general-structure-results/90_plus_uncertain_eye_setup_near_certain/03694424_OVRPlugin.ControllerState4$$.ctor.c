/*
FUNCTION_NAME: OVRPlugin.ControllerState4$$.ctor
ENTRY_POINT: 03694424
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


void OVRPlugin_ControllerState4___ctor(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  float unaff_s10;
  float unaff_s12;
  ulong uVar10;
  float unaff_s13;
  ulong uVar11;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  
  if (*(char *)(unaff_x21 + 0xe9b) == '\0') {
                    /* try { // try from 03694438 to 0379445f has its CatchHandler @ 03694894 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x21 + 0xe9b) = 1;
  }
  param_1 = unaff_s14 - param_1;
  param_2 = unaff_s13 - param_2;
  param_3 = unaff_s12 - param_3;
                    /* try { // try from 03694464 to 03794473 has its CatchHandler @ 03694918 */
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = (ulong)(uint)(param_3 * param_3);
                    /* try { // try from 03694488 to 0379448f has its CatchHandler @ 0369493c */
  fVar2 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fVar2 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    param_1 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    param_1 = param_1 / fVar2;
    param_2 = param_2 / fVar2;
    param_3 = param_3 / fVar2;
  }
  uVar4 = (ulong)(uint)param_1;
  uVar6 = (ulong)(uint)(param_3 * param_3);
  uVar10 = (ulong)(uint)param_2;
  uVar11 = (ulong)(uint)param_3;
  if (param_1 * param_1 + param_2 * param_2 + param_3 * param_3 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto OVRPlugin_Sizei___cctor;
    uVar4 = FUN_0407d840(*(long *)(unaff_x20 + 0x28),0);
    uVar10 = uVar6;
    uVar11 = uVar8;
  }
  FUN_0406761c(uVar4,uVar10,uVar11,0);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_040390ac((in_stack_00000008._4_4_ * (float)uVar11 +
                 unaff_s15 * (float)uVar4 + unaff_s10 * (float)uVar10) * 0.5 + 0.5,
                 *(long *)(unaff_x20 + 0x38),0);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar7 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar9 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar3 = FUN_040671f8(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar9;
    return;
  }
OVRPlugin_Sizei___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


