/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentNotificationMarkdownText
ENTRY_POINT: 063b04c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentNotificationMarkdownText(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  byte unaff_w27;
  uint unaff_w28;
  
LAB_063b04e0:
  do {
    uVar3 = FUN_063b1754();
    plVar5 = (long *)FUN_060dca3c(0);
    if (plVar5 == (long *)0x0) {
LAB_063b0650:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar4 = (**(code **)(*plVar5 + 0x2e8))
                      (plVar5,*(undefined8 *)(unaff_x19 + 0x88),0,uVar3 + 1,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar5 + 0x2f0));
    if (unaff_w28 != 0) {
      unaff_x20 = (long *)thunk_FUN_037788cc(*unaff_x26);
      FUN_060cc794(unaff_x20,0x100,0);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_063b0650;
    FUN_060cde14(unaff_x20,*(undefined8 *)(unaff_x19 + 0x90),0,uVar4,0);
    iVar10 = (int)unaff_x25;
    if ((int)uVar3 < (int)unaff_x21 + -1) {
      iVar8 = (int)unaff_x21 + ~uVar3;
      FUN_06265b84(*(undefined8 *)(unaff_x19 + 0x88),uVar3 + 1,*(undefined8 *)(unaff_x19 + 0x88),0,
                   iVar8,0);
    }
    else {
      iVar8 = 0;
      if ((unaff_w27 & 1) == 0) {
        lVar9 = *(long *)(unaff_x19 + 0xa0);
        if (lVar9 != 0) {
          *(int *)(lVar9 + 0x18) = iVar10 + *(int *)(lVar9 + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x063b05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x168))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x170));
          return;
        }
        goto LAB_063b0650;
      }
    }
    if (iVar8 < 0x80) {
      unaff_x21 = 0;
      unaff_w27 = false;
      lVar9 = (long)iVar8;
      do {
        plVar5 = *(long **)(unaff_x19 + 0x78);
        if (plVar5 == (long *)0x0) goto LAB_063b0650;
        cVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if (cVar2 == '\0') {
          unaff_w28 = (uint)(unaff_x20 == (long *)0x0);
          if ((unaff_x20 != (long *)0x0) || ((bool)unaff_w27 == true)) {
            unaff_x25 = unaff_x21 + (unaff_x25 & 0xffffffff);
            goto LAB_063b04e0;
          }
          plVar5 = (long *)FUN_060dca3c(0);
          if (plVar5 != (long *)0x0) {
            uVar4 = (**(code **)(*plVar5 + 0x2e8))
                              (plVar5,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_x21 & 0xffffffff,
                               *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar5 + 0x2f0))
            ;
            lVar9 = *(long *)(unaff_x19 + 0xa0);
            if (lVar9 != 0) {
              *(int *)(lVar9 + 0x18) = iVar10 + *(int *)(lVar9 + 0x18) + (int)unaff_x21 + 1;
              FUN_060c7254(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar4,0);
              return;
            }
          }
          goto LAB_063b0650;
        }
        lVar7 = *(long *)(unaff_x19 + 0x88);
        if (lVar7 == 0) goto LAB_063b0650;
        if (*(uint *)(lVar7 + 0x18) <= (uint)(iVar8 + (int)unaff_x21)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar1 = lVar9 + unaff_x21;
        lVar7 = lVar7 + lVar9 + unaff_x21;
        unaff_x21 = unaff_x21 + 1;
        unaff_w27 = 0x7e < lVar1;
        *(char *)(lVar7 + 0x20) = cVar2;
      } while (lVar9 + unaff_x21 != 0x80);
      iVar6 = 0x80;
    }
    else {
      unaff_w27 = true;
      iVar6 = iVar8;
    }
    unaff_x21 = (ulong)(uint)(iVar6 - iVar8);
    unaff_x25 = (ulong)(uint)((iVar6 - iVar8) + iVar10);
    unaff_w28 = (uint)(unaff_x20 == (long *)0x0);
  } while( true );
}


