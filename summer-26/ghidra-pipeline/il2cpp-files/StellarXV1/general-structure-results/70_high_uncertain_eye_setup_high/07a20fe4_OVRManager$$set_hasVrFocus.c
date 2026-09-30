/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 07a20fe4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_hasVrFocus(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(unaff_x20 + 0x188) = 1;
  if (*(char *)(unaff_x19 + 0x5c) != '\0') {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_089ca704(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092ba188);
      FUN_06e59bfc();
      if (lVar3 != 0) {
        FUN_05886128(lVar3,uVar2,*(undefined8 *)PTR_DAT_092eff10);
        lVar3 = *(long *)(unaff_x19 + 0x20);
        uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285e40);
        FUN_075d444c();
        if (lVar3 != 0) {
          FUN_05886288(lVar3,uVar2,*(undefined8 *)PTR_DAT_092eff08);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  return;
}


