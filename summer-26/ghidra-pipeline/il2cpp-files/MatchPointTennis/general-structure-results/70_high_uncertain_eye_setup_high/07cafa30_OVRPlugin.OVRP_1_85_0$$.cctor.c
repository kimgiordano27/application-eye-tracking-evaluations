/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$.cctor
ENTRY_POINT: 07cafa30
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_85_0___cctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_09f1e538;
  if (in_w8 == 0) {
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_09531730(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_07cafb20;
    uVar4 = FUN_094acfac(*(long *)(unaff_x19 + 0x20),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar1);
    }
    uVar2 = FUN_09531730(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar3 = FUN_094acfac(*(long *)(unaff_x19 + 0x20),0), lVar3 == 0)) goto LAB_07cafb20;
      uVar4 = thunk_FUN_0952ff6c(lVar3,0);
      uVar2 = thunk_FUN_078b3114(uVar4,*(undefined8 *)PTR_DAT_09f512e8,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_07cafb20;
        FUN_094ad4b0(*(long *)(unaff_x19 + 0x20),0);
      }
    }
  }
  lVar3 = FUN_04c6bfdc();
  if (lVar3 != 0) {
    FUN_07cae8ec();
    FUN_094ae228(*(undefined8 *)(unaff_x19 + 0x40),0);
    return;
  }
LAB_07cafb20:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


