/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$IsConsentSettingsChangeEnabled
ENTRY_POINT: 063b085c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnifiedConsent__IsConsentSettingsChangeEnabled(void)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  
  if (unaff_x20 == 0) {
    if (*(char *)(unaff_x19 + 0x71) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      uVar2 = 3;
      if (*(char *)(unaff_x19 + 0xa8) != '\0') {
        uVar2 = 4;
      }
      FUN_062dac5c();
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db7038);
      FUN_062855bc(lVar7,0);
      *(undefined1 *)(lVar7 + 0x10) = uVar2;
      FUN_063b0e78();
      uVar4 = FUN_063b0dc0();
      *(undefined4 *)(lVar7 + 0x14) = uVar4;
    }
  }
  else {
    iVar1 = *(int *)(unaff_x20 + 0x14) + -1;
    if (*(int *)(unaff_x20 + 0x18) < iVar1) {
      cVar3 = *(char *)(unaff_x20 + 0x10);
      uVar2 = FUN_063b03a0();
      *(undefined1 *)(unaff_x19 + 0x98) = uVar2;
      FUN_063b03d4();
      if (cVar3 == '\x04') {
        FUN_063b0f68();
      }
      else {
        FUN_062dc8f8();
      }
    }
    else {
      puVar5 = PTR_DAT_07db7040;
      if ((*(int *)(unaff_x20 + 0x18) != iVar1) ||
         (cVar3 = FUN_063b14b0(), puVar5 = PTR_DAT_07db7048, cVar3 != '\0')) {
        thunk_FUN_037a15ac(puVar5);
        uVar8 = FUN_062d9a10();
        uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db7050);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar8,uVar6);
      }
      FUN_063b14e4();
      lVar7 = *(long *)(unaff_x19 + 0xa0);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + *(int *)(unaff_x20 + 0x14);
      }
      FUN_062dac5c();
    }
    uVar8 = 1;
  }
  return uVar8;
}


