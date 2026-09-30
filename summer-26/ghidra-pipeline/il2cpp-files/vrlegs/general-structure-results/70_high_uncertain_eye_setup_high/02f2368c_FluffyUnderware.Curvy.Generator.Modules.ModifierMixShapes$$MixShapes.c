/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.Modules.ModifierMixShapes$$MixShapes
ENTRY_POINT: 02f2368c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f23854) */

long * FluffyUnderware_Curvy_Generator_Modules_ModifierMixShapes__MixShapes
                 (long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  lVar6 = **(long **)(param_1 + 0xd50);
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_01a47054(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar5 = FUN_0278a094(param_2,**(undefined8 **)(lVar5 + 0xb8),0);
  if (*(int *)(*(long *)PTR_DAT_03cd8520 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_0267bc38(lVar5,0,0);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_03cbec30;
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_01a47054(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01a46ff8();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01a46ff8();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar3 = (long *)FUN_0267bbcc(lVar5,**(undefined8 **)(lVar6 + 0xb8),0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3);
    }
    uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
  }
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *unaff_x23;
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar4 + 0x318))();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return plVar3;
}


