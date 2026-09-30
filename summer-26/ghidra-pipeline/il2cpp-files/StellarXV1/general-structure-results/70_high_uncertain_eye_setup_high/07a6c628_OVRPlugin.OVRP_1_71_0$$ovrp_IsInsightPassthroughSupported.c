/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_IsInsightPassthroughSupported
ENTRY_POINT: 07a6c628
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_71_0__ovrp_IsInsightPassthroughSupported(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar6;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x21 + 0x616) = 1;
  lVar3 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_06efbe2c(lVar3,*unaff_x20);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar4 = FUN_07a6c6ec();
  iVar2 = FUN_076d5100(uVar4,0);
  puVar1 = PTR_DAT_09288d68;
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_07a6c768();
      uVar5 = FUN_07a6c7d0();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_06efc7c4(lVar3,uVar4,uVar5,*(undefined8 *)puVar1);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  return lVar3;
}


