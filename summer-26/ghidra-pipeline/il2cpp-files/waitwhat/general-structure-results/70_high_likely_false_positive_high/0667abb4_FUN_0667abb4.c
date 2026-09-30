/*
FUNCTION_NAME: FUN_0667abb4
ENTRY_POINT: 0667abb4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0667abb4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_07557e0d & 1) == 0) {
    FUN_03188a78(GameEventDataSessionStarted_TypeInfo);
    FUN_03188a78(GameEventDataSocialButtonClicked_TypeInfo);
    FUN_03188a78(PTR_DAT_070c22f8);
    FUN_03188a78(PTR_DAT_070c4168);
    DAT_07557e0d = 1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
LAB_0667ad1c:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar7 = *(undefined8 *)PTR_DAT_070c4168;
  lVar6 = FUN_056eb0fc(*(long *)(param_1 + 0x80),
                       *(undefined8 *)GameEventDataSocialButtonClicked_TypeInfo);
  puVar5 = PTR_DAT_070c22f8;
  if (lVar6 != 0) {
    uVar2 = *(uint *)(param_1 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = *(int *)(lVar6 + 0x18) - 1;
    if (DAT_0754a3a6 == '\0') {
      FUN_03188a78(PTR_DAT_070f5aa8);
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_0754a3a6 = '\x01';
    }
    if ((int)uVar4 < 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_03b14860(0,uVar4,*(undefined8 *)PTR_DAT_070f5aa8);
    }
    uVar3 = *(uint *)(lVar6 + 0x18);
    uVar1 = uVar2;
    if ((int)uVar4 <= (int)uVar2) {
      uVar1 = uVar4;
    }
    uVar4 = 0;
    if (-1 < (int)uVar2) {
      uVar4 = uVar1;
    }
    *(uint *)(param_1 + 0x88) = uVar4;
    if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_0667ad1c;
    uVar7 = thunk_FUN_069dc13c(lVar6,0);
  }
  FUN_050796d8(param_1,uVar7,*(undefined8 *)GameEventDataSessionStarted_TypeInfo);
  return;
}


