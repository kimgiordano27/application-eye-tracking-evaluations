/*
FUNCTION_NAME: OVRPlugin$$get_vsyncCount
ENTRY_POINT: 02c1a664
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__get_vsyncCount(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint unaff_w20;
  uint uVar6;
  
  uVar5 = 1;
  if ((unaff_w20 & 0x2000) != 0) {
    uVar5 = 2;
  }
  plVar1 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,uVar5);
  if ((unaff_w20 >> 0xd & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b810);
    FUN_02be0f90(lVar2,0);
    if (plVar1 == (long *)0x0) goto LAB_02c1a764;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01861ac0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_02c1a76c;
    if ((int)plVar1[3] == 0) goto LAB_02c1a768;
    plVar1[4] = lVar2;
    thunk_FUN_0188fd20(plVar1 + 4,lVar2);
    if ((unaff_w20 >> 0xc & 1) == 0) {
      return plVar1;
    }
    uVar6 = 1;
  }
  lVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b808);
  FUN_02afa000(lVar2,0);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 == 0) ||
       (lVar3 = thunk_FUN_01861ac0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 != 0)) {
      if (uVar6 < *(uint *)(plVar1 + 3)) {
        plVar1[(ulong)uVar6 + 4] = lVar2;
        thunk_FUN_0188fd20(plVar1 + (ulong)uVar6 + 4,lVar2);
        return plVar1;
      }
LAB_02c1a768:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
LAB_02c1a76c:
    uVar4 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar4,0);
  }
LAB_02c1a764:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


