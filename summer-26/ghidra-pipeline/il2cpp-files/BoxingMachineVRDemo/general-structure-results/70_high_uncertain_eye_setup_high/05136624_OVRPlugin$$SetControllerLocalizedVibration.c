/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 05136624
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerLocalizedVibration(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(unaff_x19 + 0xe);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar1 = thunk_FUN_02d9d438(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_0677d968);
  FUN_0512b384(lVar4,uVar1,uVar5);
  if (*unaff_x20 != 0) {
    lVar4 = FUN_0512bd30(*unaff_x20,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 10));
    if (lVar4 != 0) {
      auVar6 = FUN_0507b064(lVar4,0,0);
      uVar2 = FUN_04f2d31c();
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar6;
        thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
        if (*(int *)(*(long *)PTR_DAT_06781368 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03024330(unaff_x19 + 2);
      }
      else {
        FUN_04f2d338();
        puVar3 = (undefined8 *)(unaff_x19 + 0xe);
        uVar1 = *puVar3;
        *unaff_x19 = 0xfffffffe;
        *puVar3 = 0;
        thunk_FUN_02dd37b4(puVar3,0);
        if (*(int *)(*(long *)PTR_DAT_06781368 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03ded864(unaff_x19 + 2,uVar1,*(undefined8 *)PTR_DAT_06781560);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


