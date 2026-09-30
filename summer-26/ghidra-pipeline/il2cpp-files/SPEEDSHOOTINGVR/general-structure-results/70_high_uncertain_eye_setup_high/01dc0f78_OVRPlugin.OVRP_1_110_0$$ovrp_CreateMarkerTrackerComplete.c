/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$ovrp_CreateMarkerTrackerComplete
ENTRY_POINT: 01dc0f78
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_110_0__ovrp_CreateMarkerTrackerComplete(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auVar5 [16];
  undefined *puVar4;
  
  puVar4 = PTR_DAT_023509b0;
  if (unaff_w21 < 0) {
    puVar4 = PTR_DAT_0235aad0;
    if (-1 < unaff_w21) {
      puVar4 = PTR_DAT_02355018;
    }
    uVar1 = thunk_FUN_010303a8(puVar4);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar2 = thunk_FUN_010400dc();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar2,uVar1,uVar3,0);
    uVar1 = thunk_FUN_010303a8(PTR_DAT_0235aae0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,uVar1);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w21 < unaff_w19) {
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar1 = thunk_FUN_010400dc();
    uVar2 = thunk_FUN_010303a8(PTR_DAT_02355000);
    puVar4 = PTR_DAT_02350eb0;
  }
  else {
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x23 + 0x18))) {
      if (unaff_w19 != 0) {
        auVar5 = FUN_01a2d1a0();
        FUN_011b22cc(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)puVar4);
                    /* WARNING: Could not recover jumptable at 0x01dc1008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*unaff_x22 + 600))();
        return uVar1;
      }
      return 0;
    }
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar1 = thunk_FUN_010400dc();
    uVar2 = thunk_FUN_010303a8(PTR_DAT_0235aac8);
    puVar4 = PTR_DAT_0234be50;
  }
  uVar3 = thunk_FUN_010303a8(puVar4);
  FUN_01c62494(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0235aae0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar1,uVar2);
}


