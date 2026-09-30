/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 0369a5b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_11;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float unaff_s8;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float unaff_s10;
  float fVar20;
  float unaff_s11;
  undefined4 uVar21;
  float fVar22;
  float unaff_s13;
  float fVar23;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  float in_stack_000000d8;
  float fStack00000000000000dc;
  
  fVar10 = (float)FUN_0407ec3c(param_4,0);
  fVar10 = ABS(unaff_s9) - unaff_s8 * fVar10;
  if (fVar10 <= 0.0) {
    return;
  }
  in_stack_000000d8 = unaff_s11;
  fStack00000000000000dc = unaff_s10;
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar11 = (float)FUN_0407bbb0();
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  uVar21 = *(undefined4 *)(unaff_x19 + 0x160);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fStack000000000000000c = unaff_s13;
  iVar3 = FUN_0356c1bc(uVar21,0);
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar12 = (float)iVar3;
    fVar11 = fVar11 * fVar12;
    param_2 = param_2 * fVar12;
    fVar23 = fVar10 * fVar11;
    fVar20 = fVar10 * param_2;
    fVar13 = (float)FUN_0407d3c8(*(long *)(unaff_x19 + 0x128),0);
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    fVar23 = fStack00000000000000dc + fVar23;
    lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    fVar20 = in_stack_000000d8 + fVar20;
    fVar19 = *(float *)(lVar5 + 0x18);
    fVar22 = *(float *)(lVar5 + 0x1c);
    fVar18 = *(float *)(lVar5 + 0x20);
    fVar10 = fStack000000000000000c + fVar10 * param_3 * fVar12;
    if (DAT_0482f8ab == '\0') {
      in_stack_000000d8 = fVar13;
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                        );
      DAT_0482f8ab = '\x01';
      fVar13 = in_stack_000000d8;
    }
    fVar12 = fVar18 * fVar18 + fVar19 * fVar19 + fVar22 * fVar22;
    fVar13 = fVar23 - fVar13;
    fVar11 = fVar20 - fVar11;
    param_2 = fVar10 - param_2;
    if (**(float **)
          (*(long *)
            Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
          0xb8) <= fVar12) {
      fVar15 = param_2 * fVar18 + fVar13 * fVar19 + fVar11 * fVar22;
      fVar13 = fVar13 - (fVar19 * fVar15) / fVar12;
      fVar11 = fVar11 - (fVar22 * fVar15) / fVar12;
      param_2 = param_2 - (fVar18 * fVar15) / fVar12;
    }
    fStack00000000000000dc = fVar10;
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar10 = SQRT(param_2 * param_2 + fVar13 * fVar13 + fVar11 * fVar11);
    if (fVar10 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar13 = *pfVar6;
      fVar11 = pfVar6[1];
      param_2 = pfVar6[2];
    }
    else {
      fVar13 = fVar13 / fVar10;
      fVar11 = fVar11 / fVar10;
      param_2 = param_2 / fVar10;
    }
    uVar16 = (ulong)(uint)param_2;
    uVar7 = (ulong)(uint)fVar11;
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar17 = (ulong)*(uint *)(lVar5 + 0x18);
    uVar14 = FUN_04067568(fVar13,uVar7,uVar16,uVar17,*(undefined4 *)(lVar5 + 0x1c),
                          *(undefined4 *)(lVar5 + 0x20),0);
    plVar9 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000050 = 0;
    uStack0000000000000058 = 0;
    uStack000000000000005c = 0;
    in_stack_00000068 = 0;
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 0;
    FUN_0407b788(fVar23,fVar20,fStack00000000000000dc,uVar14,uVar7,uVar16,uVar17,&stack0x00000050,0)
    ;
    uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
    uStack0000000000000078 = uStack0000000000000058;
    in_stack_00000070 = in_stack_00000050;
    uStack000000000000007c = uStack000000000000005c;
    uStack0000000000000080 = uStack0000000000000060;
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0369a904;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                            ,2);
LAB_0369a904:
      (*(code *)*puVar4)(&stack0x00000010,plVar9,&stack0x00000070,puVar4[1]);
      *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


