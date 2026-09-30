/*
FUNCTION_NAME: OVRPlugin.OVRP_0_5_0$$.cctor
ENTRY_POINT: 0369a528
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_5_0___cctor
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  if ((DAT_04833f20 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    DAT_04833f20 = 1;
  }
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  fVar17 = *param_5;
  fVar19 = param_5[1];
  fVar22 = param_5[2];
  fVar16 = *(float *)(param_4 + 0x160);
  fVar15 = *(float *)(param_4 + 0x140);
  lVar4 = FUN_04070398(param_4,0);
  if (lVar4 != 0) {
    fVar10 = (float)FUN_0407ec3c(lVar4,0);
    fVar15 = ABS(fVar16) - fVar15 * fVar10;
    if (fVar15 <= 0.0) {
      return;
    }
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar16 = (float)FUN_0407bbb0(param_5,0);
    puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
    uVar20 = *(undefined4 *)(param_4 + 0x160);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar3 = FUN_0356c1bc(uVar20,0);
    if (*(long *)(param_4 + 0x128) != 0) {
      fVar10 = (float)iVar3;
      fVar16 = fVar16 * fVar10;
      param_2 = param_2 * fVar10;
      fVar23 = fVar15 * fVar16;
      fVar18 = fVar15 * param_2;
      fVar11 = (float)FUN_0407d3c8(*(long *)(param_4 + 0x128),0);
      if (DAT_0482ee19 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee19 = '\x01';
      }
      puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
      fVar17 = fVar17 + fVar23;
      lVar4 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                       0xb8);
      fVar19 = fVar19 + fVar18;
      fVar23 = *(float *)(lVar4 + 0x18);
      fVar21 = *(float *)(lVar4 + 0x1c);
      fVar18 = *(float *)(lVar4 + 0x20);
      fVar22 = fVar22 + fVar15 * param_3 * fVar10;
      if (DAT_0482f8ab == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                          );
        DAT_0482f8ab = '\x01';
      }
      fVar15 = fVar18 * fVar18 + fVar23 * fVar23 + fVar21 * fVar21;
      fVar11 = fVar17 - fVar11;
      fVar16 = fVar19 - fVar16;
      param_2 = fVar22 - param_2;
      if (**(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8) <= fVar15) {
        fVar10 = param_2 * fVar18 + fVar11 * fVar23 + fVar16 * fVar21;
        fVar11 = fVar11 - (fVar23 * fVar10) / fVar15;
        fVar16 = fVar16 - (fVar21 * fVar10) / fVar15;
        param_2 = param_2 - (fVar18 * fVar10) / fVar15;
      }
      if (DAT_0482ee9b == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482ee9b = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar15 = SQRT(param_2 * param_2 + fVar11 * fVar11 + fVar16 * fVar16);
      if (fVar15 <= DAT_00c926ac) {
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar11 = *pfVar6;
        fVar16 = pfVar6[1];
        param_2 = pfVar6[2];
      }
      else {
        fVar11 = fVar11 / fVar15;
        fVar16 = fVar16 / fVar15;
        param_2 = param_2 / fVar15;
      }
      uVar13 = (ulong)(uint)param_2;
      uVar7 = (ulong)(uint)fVar16;
      if (DAT_0482ee19 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee19 = '\x01';
      }
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar14 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar12 = FUN_04067568(fVar11,uVar7,uVar13,uVar14,*(undefined4 *)(lVar4 + 0x1c),
                            *(undefined4 *)(lVar4 + 0x20),0);
      plVar9 = *(long **)(param_4 + 0x138);
      in_stack_00000050 = 0;
      uStack0000000000000058 = 0;
      uStack000000000000005c = 0;
      in_stack_00000068 = 0;
      uStack0000000000000060 = 0;
      uStack0000000000000064 = 0;
      FUN_0407b788(fVar17,fVar19,fVar22,uVar12,uVar7,uVar13,uVar14,&stack0x00000050,0);
      in_stack_00000078 = uStack0000000000000058;
      in_stack_00000070 = in_stack_00000050;
      uStack0000000000000084 = uStack0000000000000064;
      in_stack_00000088 = in_stack_00000068;
      uStack000000000000007c = uStack000000000000005c;
      in_stack_00000080 = uStack0000000000000060;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
               ) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0369a904;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar9,*(long *)
                                      Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                              ,2);
LAB_0369a904:
        (*(code *)*puVar5)(&stack0x00000010,plVar9,&stack0x00000070,puVar5[1]);
        *(ulong *)(param_4 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        *(undefined8 *)(param_4 + 0x144) = in_stack_00000010;
        *(undefined8 *)(param_4 + 0x158) = uStack0000000000000024;
        *(ulong *)(param_4 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


