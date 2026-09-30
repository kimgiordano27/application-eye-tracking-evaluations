/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 0369bc30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  uint *puVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  long *unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  if (*(int *)(param_4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0407bb40(&stack0x00000030,0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar1 = param_2;
  uVar14 = param_3;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar9 = (float)uVar1;
  uVar1 = FUN_04073094(uVar3,0,0);
  fVar19 = in_stack_00000038;
  fVar18 = fStack0000000000000034;
  fVar17 = fStack0000000000000030;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0369bf08;
    fVar4 = (float)FUN_0407d3c8(*(long *)(unaff_x19 + 0x30),0);
    fVar12 = (float)uVar14;
    fVar20 = fVar9;
    fVar13 = fVar12;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar5 = (float)FUN_0407bc20(&stack0x00000030,0);
    if (DAT_0482f8ab == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                        );
      DAT_0482f8ab = '\x01';
    }
    fVar6 = fVar13 * fVar13 + fVar5 * fVar5 + fVar20 * fVar20;
    fVar17 = fVar17 - fVar4;
    fVar18 = fVar18 - fVar9;
    fVar19 = fVar19 - fVar12;
    if (**(float **)
          (*(long *)
            Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
          0xb8) <= fVar6) {
      fVar9 = fVar19 * fVar13 + fVar17 * fVar5 + fVar18 * fVar20;
      fVar17 = fVar17 - (fVar5 * fVar9) / fVar6;
      fVar18 = fVar18 - (fVar20 * fVar9) / fVar6;
      fVar19 = fVar19 - (fVar13 * fVar9) / fVar6;
    }
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = (ulong)(uint)(fVar19 * fVar19);
    fVar9 = SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18);
    if (fVar9 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      puVar2 = *(uint **)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
      uVar7 = (ulong)*puVar2;
      param_2 = (ulong)puVar2[1];
      param_3 = (ulong)puVar2[2];
    }
    else {
      uVar7 = (ulong)(uint)(fVar17 / fVar9);
      param_2 = (ulong)(uint)(fVar18 / fVar9);
      param_3 = (ulong)(uint)(fVar19 / fVar9);
    }
  }
  fVar18 = in_stack_00000038;
  fVar17 = fStack0000000000000030;
  uVar1 = (ulong)(uint)fStack0000000000000030;
  fVar19 = *(float *)(unaff_x19 + 0x94);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar9 = (float)FUN_0407bc20(&stack0x00000030,0);
  fVar20 = *(float *)(unaff_x19 + 0x90);
  uVar10 = uVar1;
  uVar15 = uVar14;
  uVar3 = FUN_0407bc20(&stack0x00000030,0);
  uVar11 = param_2;
  uVar16 = param_3;
  uVar8 = FUN_04067568(uVar7,param_2,param_3,uVar3,uVar10,uVar15,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0407de3c((fVar17 - (float)uVar7 * fVar19) + fVar9 * fVar20,
                 (fStack0000000000000034 - (float)param_2 * fVar19) + (float)uVar1 * fVar20,
                 (fVar18 - (float)param_3 * fVar19) + (float)uVar14 * fVar20,uVar8,uVar11,uVar16,
                 uVar3,*(long *)(unaff_x19 + 0x48),0);
    return;
  }
LAB_0369bf08:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


