/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetMultimodalHandsControllersSupported
ENTRY_POINT: 07cafc44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_SetMultimodalHandsControllersSupported(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  iVar1 = FUN_094ae2fc(*(undefined8 *)(unaff_x19 + 0x40),0);
  if (iVar1 < 1) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f512f0);
    uVar2 = FUN_078a7764(uVar2,uVar3,0);
    thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
    uVar3 = thunk_FUN_0448520c();
    FUN_07a757d0(uVar3,uVar2,0);
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f512f8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar2);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_094ad2cc(*(long *)(unaff_x19 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


