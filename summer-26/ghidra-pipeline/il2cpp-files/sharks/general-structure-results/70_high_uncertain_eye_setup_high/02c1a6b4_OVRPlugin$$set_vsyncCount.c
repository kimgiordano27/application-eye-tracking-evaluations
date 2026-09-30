/*
FUNCTION_NAME: OVRPlugin$$set_vsyncCount
ENTRY_POINT: 02c1a6b4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_vsyncCount(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  uint unaff_w20;
  
  lVar1 = thunk_FUN_01861bbc();
  FUN_02be0f90(lVar1,0);
  if (unaff_x19 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_01861ac0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0)) {
LAB_02c1a76c:
      uVar3 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar3,0);
    }
    if ((int)unaff_x19[3] == 0) {
LAB_02c1a768:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    unaff_x19[4] = lVar1;
    thunk_FUN_0188fd20(unaff_x19 + 4,lVar1);
    if ((unaff_w20 >> 0xc & 1) != 0) {
      lVar1 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b808);
      FUN_02afa000(lVar1,0);
      if (unaff_x19 == (long *)0x0) goto LAB_02c1a764;
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_01861ac0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
      goto LAB_02c1a76c;
      if (*(uint *)(unaff_x19 + 3) < 2) goto LAB_02c1a768;
      unaff_x19[5] = lVar1;
      thunk_FUN_0188fd20(unaff_x19 + 5,lVar1);
    }
    return;
  }
LAB_02c1a764:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


