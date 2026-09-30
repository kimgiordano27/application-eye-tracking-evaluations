/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceVisemesState
ENTRY_POINT: 07cb2030
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


void OVRPlugin_OVRP_1_104_0__ovrp_GetFaceVisemesState(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f25658);
    FUN_04447ba8(PTR_DAT_09f25660);
    FUN_04447ba8(PTR_DAT_09f51378);
    *(undefined1 *)(unaff_x21 + 0xaee) = 1;
  }
  puVar2 = PTR_DAT_09f51378;
  puVar1 = PTR_DAT_09f25658;
  if (unaff_x20 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
    uVar4 = thunk_FUN_0448520c();
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f25668);
    FUN_07a757d0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f51380);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,uVar5);
  }
  lVar3 = *(long *)PTR_DAT_09f25658;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_07a80df4(lVar3,0);
  *(long *)(lVar3 + 0x10) = unaff_x20;
  thunk_FUN_044bb4b4();
  if (lVar6 != 0) {
    FUN_07506d90(lVar6,unaff_w19,lVar3,*(undefined8 *)PTR_DAT_09f25660);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


