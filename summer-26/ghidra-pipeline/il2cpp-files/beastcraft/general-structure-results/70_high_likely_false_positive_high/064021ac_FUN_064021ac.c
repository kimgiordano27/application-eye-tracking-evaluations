/*
FUNCTION_NAME: FUN_064021ac
ENTRY_POINT: 064021ac
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_064021ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if ((bRam0000000006e9c16b & 1) == 0) {
    FUN_02e3ca1c(Liv_Lck_Streaming_LckStreamingController_<>c__DisplayClass80_0_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Streaming_LckStreamingController_<CheckInternetConnection>d__80_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Streaming_LckStreamingController_BypassCertificate_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt64_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Telemetry_LckTelemetryEvent_<>c_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Leaderboards_Models_LeaderboardVersionTierScoresPage_<>c_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Leaderboards_Models_LeaderboardVersions_<>c_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a70470);
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt32_TypeInfo);
    FUN_02e3ca1c(Liv_Lck_Tablet_LckTopButtonsController_<ResetAfterApplicationFocus>d__16_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt16_TypeInfo);
    bRam0000000006e9c16b = 1;
  }
  puVar2 = Liv_Lck_Streaming_LckStreamingController_<CheckInternetConnection>d__80_TypeInfo;
  puVar1 = Liv_Lck_Streaming_LckStreamingController_<>c__DisplayClass80_0_TypeInfo;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_040ded30(&lStack_90,*(long *)(param_1 + 0x40),
               *(undefined8 *)Liv_Lck_Telemetry_LckTelemetryEvent_<>c_TypeInfo);
  lStack_60 = lStack_90;
  lStack_90 = 0;
  uStack_58 = plStack_88;
  lStack_48 = lStack_78;
  uStack_50 = uStack_80;
  plStack_88 = &lStack_60;
  do {
    uVar6 = FUN_05029aa4(&lStack_60,*(undefined8 *)puVar2);
    lVar8 = lStack_48;
    if ((uVar6 & 1) == 0) goto LAB_0640240c;
    uStack_70 = uStack_50;
    lStack_68 = lStack_48;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
  } while (*(int *)(param_2 + 0x28) != (int)uStack_50);
  uVar6 = FUN_0548ca18(param_3,0);
  puVar3 = System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt32_TypeInfo;
  puVar2 = System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt16_TypeInfo;
  if ((uVar6 & 1) == 0) {
    lVar8 = FUN_06404c74(&uStack_70,param_3,0);
    if (lVar8 != 0) {
      FUN_064021ac(param_1,lVar8,0,param_4);
    }
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    iVar9 = *(int *)(lVar8 + 0x18);
    if (-1 < iVar9 + -1) {
      do {
        iVar9 = iVar9 + -1;
        lVar7 = FUN_03f2b33c(lVar8,iVar9,*(undefined8 *)puVar2);
        lVar4 = lStack_68;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        if (*(char *)(lVar7 + 0x48) == '\0') {
          if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          FUN_03f2ccc8(lStack_68,iVar9,*(undefined8 *)puVar3);
          lVar8 = lVar4;
        }
      } while (0 < iVar9);
      lVar8 = lStack_68;
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
    }
    FUN_03f2b81c(lVar8,param_4,
                 *(undefined8 *)
                  System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftInt64_TypeInfo);
    uVar6 = uStack_70;
    if (*(int *)(lVar8 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar5 = FUN_040deecc(*(long *)(param_1 + 0x40),uStack_70,lVar8,
                           *(undefined8 *)
                            Unity_Services_Leaderboards_Models_LeaderboardVersionTierScoresPage_<>c_TypeInfo
                          );
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_040df9fc(*(long *)(param_1 + 0x40),uVar5,
                   *(undefined8 *)
                    Unity_Services_Leaderboards_Models_LeaderboardVersions_<>c_TypeInfo);
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_03ed9ff8(*(long *)(param_1 + 0x48),uVar5,*(undefined8 *)PTR_DAT_06a70470);
      FUN_06401c94(param_1,uVar6 & 0xffffffff,1);
    }
  }
LAB_0640240c:
  lVar8 = lStack_90;
  FUN_05029aa0(plStack_88,*(undefined8 *)puVar1);
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccbc(lVar8);
  }
  return;
}


