/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeHeight
ENTRY_POINT: 0369bc94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeHeight
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x19;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float unaff_s14;
  float unaff_s15;
  float fVar15;
  float fStack0000000000000004;
  undefined8 in_stack_00000008;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  fVar2 = (float)FUN_0407d3c8();
  fVar5 = param_2;
  fVar15 = param_3;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = (float)FUN_0407bc20(&stack0x00000030,0);
  if (DAT_0482f8ab == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482f8ab = '\x01';
  }
  fVar4 = fVar15 * fVar15 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar2 = unaff_s14 - fVar2;
  param_2 = unaff_s15 - param_2;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - param_3;
  if (**(float **)
        (*(long *)
          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
        0xb8) <= fVar4) {
    fVar8 = in_stack_00000008._4_4_ * fVar15 + fVar2 * fVar3 + param_2 * fVar5;
    fVar2 = fVar2 - (fVar3 * fVar8) / fVar4;
    param_2 = param_2 - (fVar5 * fVar8) / fVar4;
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fVar15 * fVar8) / fVar4;
  }
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = (ulong)(uint)(in_stack_00000008._4_4_ * in_stack_00000008._4_4_);
  fVar5 = SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ + fVar2 * fVar2 + param_2 * param_2
              );
  if (fVar5 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar2 = *pfVar1;
    param_2 = pfVar1[1];
    in_stack_00000008._4_4_ = pfVar1[2];
  }
  else {
    fVar2 = fVar2 / fVar5;
    param_2 = param_2 / fVar5;
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ / fVar5;
  }
  fVar5 = fStack0000000000000030;
  uVar14 = (ulong)(uint)in_stack_00000008._4_4_;
  uVar11 = (ulong)(uint)param_2;
  uVar9 = (ulong)(uint)fStack0000000000000030;
  fVar15 = *(float *)(unaff_x19 + 0x94);
  fStack0000000000000004 = in_stack_00000038;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = (float)FUN_0407bc20(&stack0x00000030,0);
  fVar4 = *(float *)(unaff_x19 + 0x90);
  uVar10 = uVar9;
  uVar13 = uVar12;
  uVar6 = FUN_0407bc20(&stack0x00000030,0);
  uVar7 = FUN_04067568(fVar2,uVar11,uVar14,uVar6,uVar10,uVar13,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0407de3c((fVar5 - fVar2 * fVar15) + fVar3 * fVar4,
                 (fStack0000000000000034 - param_2 * fVar15) + (float)uVar9 * fVar4,
                 (fStack0000000000000004 - in_stack_00000008._4_4_ * fVar15) + (float)uVar12 * fVar4
                 ,uVar7,uVar11,uVar14,uVar6,*(long *)(unaff_x19 + 0x48),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


