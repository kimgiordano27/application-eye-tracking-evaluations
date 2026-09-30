/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 02c1de7c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetControllerHapticsDesc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  if (param_1 == 0) {
LAB_02c1df60:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_02c1df60;
    uVar4 = (**(code **)(*unaff_x19 + 0x818))();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*unaff_x21);
    }
    uVar2 = FUN_02be74a8(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = (**(code **)(*unaff_x19 + 0x818))();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*unaff_x22);
      }
      plVar1 = (long *)FUN_02c1b6b4(uVar4);
      if (plVar1 != (long *)0x0) {
        return plVar1;
      }
    }
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar3 = *unaff_x22;
    }
    plVar1 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  }
  else {
    iVar6 = (int)*(long *)(param_1 + 0x18);
    if (1 < iVar6) {
      thunk_FUN_01851c08(PTR_DAT_037feb28);
      uVar4 = thunk_FUN_01861bbc();
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b918);
      FUN_02bb89a0(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b920);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,uVar5);
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    plVar1 = *(long **)(param_1 + 0x20);
    if ((plVar1 != (long *)0x0) && (*plVar1 != *(long *)PTR_DAT_03806228)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
  }
  return plVar1;
}


