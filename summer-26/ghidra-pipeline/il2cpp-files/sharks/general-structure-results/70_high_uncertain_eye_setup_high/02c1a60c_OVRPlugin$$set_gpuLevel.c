/*
FUNCTION_NAME: OVRPlugin$$set_gpuLevel
ENTRY_POINT: 02c1a60c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__set_gpuLevel(ulong param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380b808);
    FUN_017fc350(PTR_DAT_037f2f98);
    FUN_017fc350(PTR_DAT_0380b810);
    *(undefined1 *)(unaff_x20 + 0xec4) = 1;
  }
  if (param_2 == 0) goto LAB_02c1a764;
  uVar1 = FUN_02be8788(param_2,0);
  if ((uVar1 >> 0xc & 1) == 0) {
    if ((uVar1 >> 0xd & 1) == 0) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,uVar1 >> 0xd & 1);
LAB_02c1a6a8:
    lVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b810);
    FUN_02be0f90(lVar3,0);
    if (plVar2 == (long *)0x0) goto LAB_02c1a764;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01861ac0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_02c1a76c;
    if ((int)plVar2[3] == 0) goto LAB_02c1a768;
    plVar2[4] = lVar3;
    thunk_FUN_0188fd20(plVar2 + 4,lVar3);
    if ((uVar1 >> 0xc & 1) == 0) {
      return plVar2;
    }
    uVar1 = 1;
  }
  else {
    uVar6 = 1;
    if ((uVar1 & 0x2000) != 0) {
      uVar6 = 2;
    }
    plVar2 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,uVar6);
    if ((uVar1 >> 0xd & 1) != 0) goto LAB_02c1a6a8;
    uVar1 = 0;
  }
  lVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380b808);
  FUN_02afa000(lVar3,0);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 == 0) ||
       (lVar4 = thunk_FUN_01861ac0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 != 0)) {
      if (uVar1 < *(uint *)(plVar2 + 3)) {
        plVar2[(ulong)uVar1 + 4] = lVar3;
        thunk_FUN_0188fd20(plVar2 + (ulong)uVar1 + 4,lVar3);
        return plVar2;
      }
LAB_02c1a768:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
LAB_02c1a76c:
    uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar5,0);
  }
LAB_02c1a764:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


