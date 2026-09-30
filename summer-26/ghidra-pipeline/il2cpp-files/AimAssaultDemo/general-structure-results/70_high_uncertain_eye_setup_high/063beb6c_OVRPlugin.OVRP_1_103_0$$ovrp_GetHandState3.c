/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_GetHandState3
ENTRY_POINT: 063beb6c
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


void OVRPlugin_OVRP_1_103_0__ovrp_GetHandState3(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar6;
  
  puVar2 = PTR_DAT_07db76b0;
  puVar1 = PTR_DAT_07d96018;
  if (unaff_x20 == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d864a0);
    uVar4 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d96028);
    FUN_0627a0a0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db76b8);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,uVar5);
  }
  lVar3 = *(long *)PTR_DAT_07d96018;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_062855bc(lVar3,0);
  *(long *)(lVar3 + 0x10) = unaff_x20;
  thunk_FUN_037aeb94();
  if (lVar6 != 0) {
    FUN_05bd173c(lVar6,unaff_w19,lVar3,*(undefined8 *)PTR_DAT_07d96020);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


