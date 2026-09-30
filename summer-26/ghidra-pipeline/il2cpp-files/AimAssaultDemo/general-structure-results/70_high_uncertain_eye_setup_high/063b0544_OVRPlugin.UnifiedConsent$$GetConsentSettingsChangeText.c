/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentSettingsChangeText
ENTRY_POINT: 063b0544
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetConsentSettingsChangeText(void)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  int iVar7;
  int unaff_w23;
  long lVar8;
  undefined4 unaff_w24;
  int iVar9;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  byte unaff_w27;
  
  do {
    FUN_060cde14(unaff_x20,*(undefined8 *)(unaff_x19 + 0x90),0,unaff_w24,0);
    iVar9 = (int)unaff_x25;
    if ((int)unaff_w22 < (int)unaff_x21 + -1) {
      iVar7 = (int)unaff_x21 + ~unaff_w22;
      FUN_06265b84(*(undefined8 *)(unaff_x19 + 0x88),unaff_w23,*(undefined8 *)(unaff_x19 + 0x88),0,
                   iVar7,0);
    }
    else {
      iVar7 = 0;
      if ((unaff_w27 & 1) == 0) {
        lVar8 = *(long *)(unaff_x19 + 0xa0);
        if (lVar8 != 0) {
          *(int *)(lVar8 + 0x18) = iVar9 + *(int *)(lVar8 + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x063b05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x168))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x170));
          return;
        }
LAB_063b0650:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    if (iVar7 < 0x80) {
      unaff_x21 = 0;
      unaff_w27 = false;
      lVar8 = (long)iVar7;
      do {
        plVar4 = *(long **)(unaff_x19 + 0x78);
        if (plVar4 == (long *)0x0) goto LAB_063b0650;
        cVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if (cVar2 == '\0') {
          if ((unaff_x20 != (long *)0x0) || ((bool)unaff_w27 == true)) {
            unaff_x25 = unaff_x21 + (unaff_x25 & 0xffffffff);
            goto LAB_063b04e0;
          }
          plVar4 = (long *)FUN_060dca3c(0);
          if (plVar4 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar4 + 0x2e8))
                              (plVar4,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_x21 & 0xffffffff,
                               *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar4 + 0x2f0))
            ;
            lVar8 = *(long *)(unaff_x19 + 0xa0);
            if (lVar8 != 0) {
              *(int *)(lVar8 + 0x18) = iVar9 + *(int *)(lVar8 + 0x18) + (int)unaff_x21 + 1;
              FUN_060c7254(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar3,0);
              return;
            }
          }
          goto LAB_063b0650;
        }
        lVar6 = *(long *)(unaff_x19 + 0x88);
        if (lVar6 == 0) goto LAB_063b0650;
        if (*(uint *)(lVar6 + 0x18) <= (uint)(iVar7 + (int)unaff_x21)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar1 = lVar8 + unaff_x21;
        lVar6 = lVar6 + lVar8 + unaff_x21;
        unaff_x21 = unaff_x21 + 1;
        unaff_w27 = 0x7e < lVar1;
        *(char *)(lVar6 + 0x20) = cVar2;
      } while (lVar8 + unaff_x21 != 0x80);
      iVar5 = 0x80;
    }
    else {
      unaff_w27 = true;
      iVar5 = iVar7;
    }
    unaff_x21 = (ulong)(uint)(iVar5 - iVar7);
    unaff_x25 = (ulong)(uint)((iVar5 - iVar7) + iVar9);
LAB_063b04e0:
    unaff_w22 = FUN_063b1754();
    plVar4 = (long *)FUN_060dca3c(0);
    if (plVar4 == (long *)0x0) goto LAB_063b0650;
    unaff_w23 = unaff_w22 + 1;
    unaff_w24 = (**(code **)(*plVar4 + 0x2e8))
                          (plVar4,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w23,
                           *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar4 + 0x2f0));
    if (unaff_x20 == (long *)0x0) {
      unaff_x20 = (long *)thunk_FUN_037788cc(*unaff_x26);
      FUN_060cc794(unaff_x20,0x100,0);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_063b0650;
  } while( true );
}


