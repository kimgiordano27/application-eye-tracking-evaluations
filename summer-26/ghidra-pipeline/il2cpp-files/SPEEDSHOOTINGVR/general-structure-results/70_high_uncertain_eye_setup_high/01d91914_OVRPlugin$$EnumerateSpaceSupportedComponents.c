/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 01d91914
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__EnumerateSpaceSupportedComponents(undefined8 param_1)

{
  bool in_ZR;
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint unaff_w20;
  uint uVar6;
  
  uVar5 = 1;
  if (!in_ZR) {
    uVar5 = 2;
  }
  plVar1 = (long *)FUN_00fdc388(param_1,uVar5);
  if ((unaff_w20 >> 0xd & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598c8);
    FUN_01d5ac30(lVar2,0);
    if (plVar1 == (long *)0x0) goto LAB_01d91a04;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_0103ffe0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_01d91a0c;
    if ((int)plVar1[3] == 0) goto LAB_01d91a08;
    plVar1[4] = lVar2;
    thunk_FUN_0106e12c(plVar1 + 4,lVar2);
    if ((unaff_w20 >> 0xc & 1) == 0) {
      return plVar1;
    }
    uVar6 = 1;
  }
  lVar2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598c0);
  FUN_01cb9b2c(lVar2,0);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 == 0) ||
       (lVar3 = thunk_FUN_0103ffe0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 != 0)) {
      if (uVar6 < *(uint *)(plVar1 + 3)) {
        plVar1[(ulong)uVar6 + 4] = lVar2;
        thunk_FUN_0106e12c(plVar1 + (ulong)uVar6 + 4,lVar2);
        return plVar1;
      }
LAB_01d91a08:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
LAB_01d91a0c:
    uVar4 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar4,0);
  }
LAB_01d91a04:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


