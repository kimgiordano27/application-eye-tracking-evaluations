/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.Modules.ModifierMixShapes$$.ctor
ENTRY_POINT: 02f23734
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f23854) */

long * FluffyUnderware_Curvy_Generator_Modules_ModifierMixShapes___ctor(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
    FUN_01a47054();
    param_1 = *(long *)(unaff_x22 + 0x38);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar3 = (long *)FUN_0267bbcc();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03d22a90)) {
    uVar4 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if ((uVar4 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x23;
    }
    plVar5 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar5 + 0x318))();
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6ee0(plVar3);
}


