/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 05d78c48
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_072b1470;
  if ((DAT_076d8801 & 1) == 0) {
                    /* try { // try from 05d78c64 to 05e78c83 has its CatchHandler @ 05d78eb8 */
    thunk_FUN_032e1da0(PTR_DAT_0727ee10);
    thunk_FUN_032e1da0(PTR_DAT_072b1478);
    thunk_FUN_032e1da0(PTR_DAT_072b1480);
    thunk_FUN_032e1da0(PTR_DAT_072b1488);
    thunk_FUN_032e1da0(PTR_DAT_072b1470);
                    /* try { // try from 05d78ca0 to 05e78cc7 has its CatchHandler @ 05d78eb4 */
    DAT_076d8801 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
    FUN_0589e07c(lVar5,uVar6,*(undefined8 *)PTR_DAT_072b1488,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_0333a630(plVar4,lVar5);
  }
  puVar2 = PTR_DAT_072b1480;
  puVar1 = PTR_DAT_072b1478;
  if (param_1 != 0) {
    *(long *)(param_1 + 0x78) = lVar5;
    thunk_FUN_0333a630((long *)(param_1 + 0x78),lVar5);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_04ef03b8(param_1,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


