/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeDepth
ENTRY_POINT: 0369bbb4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeDepth
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  
  if ((DAT_04833f2e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    DAT_04833f2e = 1;
  }
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  _fStack0000000000000030 = 0;
  in_stack_00000038 = 0.0;
  uStack000000000000003c = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_036998a4(&stack0x00000010);
    uStack0000000000000044 = (undefined4)uStack0000000000000024;
    in_stack_00000048 = SUB84(uStack0000000000000024,4);
    in_stack_00000040 = uStack0000000000000020;
    in_stack_00000038 = fStack0000000000000018;
    uStack000000000000003c = uStack000000000000001c;
    _fStack0000000000000030 = in_stack_00000010;
    uVar13 = in_stack_00000010;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_0407bb40(&stack0x00000030,0);
    uVar5 = *(undefined8 *)(param_4 + 0x30);
    uVar3 = uVar13;
    uVar17 = param_3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar12 = (float)uVar3;
    uVar3 = FUN_04073094(uVar5,0,0);
    fVar22 = in_stack_00000038;
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_0369bf08;
      fVar21 = fStack0000000000000034;
      fVar20 = fStack0000000000000030;
      fVar6 = (float)FUN_0407d3c8(*(long *)(param_4 + 0x30),0);
      fVar16 = (float)uVar17;
      fVar9 = fVar12;
      fVar23 = fVar16;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar7 = (float)FUN_0407bc20(&stack0x00000030,0);
      if (DAT_0482f8ab == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                          );
        DAT_0482f8ab = '\x01';
      }
      fVar8 = fVar23 * fVar23 + fVar7 * fVar7 + fVar9 * fVar9;
      fVar20 = fVar20 - fVar6;
      fVar21 = fVar21 - fVar12;
      fVar22 = fVar22 - fVar16;
      if (**(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8) <= fVar8) {
        fVar12 = fVar22 * fVar23 + fVar20 * fVar7 + fVar21 * fVar9;
        fVar20 = fVar20 - (fVar7 * fVar12) / fVar8;
        fVar21 = fVar21 - (fVar9 * fVar12) / fVar8;
        fVar22 = fVar22 - (fVar23 * fVar12) / fVar8;
      }
      if (DAT_0482ee9b == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee9b = '\x01';
      }
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar17 = (ulong)(uint)(fVar22 * fVar22);
      fVar12 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21);
      if (fVar12 <= DAT_00c926ac) {
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        puVar4 = *(uint **)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                           + 0xb8);
        uVar10 = (ulong)*puVar4;
        uVar13 = (ulong)puVar4[1];
        param_3 = (ulong)puVar4[2];
      }
      else {
        uVar10 = (ulong)(uint)(fVar20 / fVar12);
        uVar13 = (ulong)(uint)(fVar21 / fVar12);
        param_3 = (ulong)(uint)(fVar22 / fVar12);
      }
    }
    fVar20 = in_stack_00000038;
    fVar22 = fStack0000000000000030;
    uVar3 = _fStack0000000000000030 & 0xffffffff;
    fVar12 = fStack0000000000000034;
    fVar21 = *(float *)(param_4 + 0x94);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar9 = (float)FUN_0407bc20(&stack0x00000030,0);
    fVar23 = *(float *)(param_4 + 0x90);
    uVar14 = uVar3;
    uVar18 = uVar17;
    uVar5 = FUN_0407bc20(&stack0x00000030,0);
    uVar15 = uVar13;
    uVar19 = param_3;
    uVar11 = FUN_04067568(uVar10,uVar13,param_3,uVar5,uVar14,uVar18,0);
    if (*(long *)(param_4 + 0x48) != 0) {
      FUN_0407de3c((fVar22 - (float)uVar10 * fVar21) + fVar9 * fVar23,
                   (fVar12 - (float)uVar13 * fVar21) + (float)uVar3 * fVar23,
                   (fVar20 - (float)param_3 * fVar21) + (float)uVar17 * fVar23,uVar11,uVar15,uVar19,
                   uVar5,*(long *)(param_4 + 0x48),0);
      return;
    }
  }
LAB_0369bf08:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


