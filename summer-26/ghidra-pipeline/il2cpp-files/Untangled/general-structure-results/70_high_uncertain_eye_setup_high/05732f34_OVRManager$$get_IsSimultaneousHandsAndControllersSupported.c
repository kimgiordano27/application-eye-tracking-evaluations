/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 05732f34
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_IsSimultaneousHandsAndControllersSupported(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  while (*(long *)(unaff_x22 + 0x58) != 0) {
    iVar1 = FUN_049950e8(*(long *)(unaff_x22 + 0x58),*unaff_x26);
    if (iVar1 <= unaff_w23) {
                    /* WARNING: Could not recover jumptable at 0x05733010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 0x228))();
      return;
    }
    if ((*(long *)(unaff_x22 + 0x58) == 0) ||
       (plVar2 = (long *)FUN_04995178(*(long *)(unaff_x22 + 0x58),unaff_w23,*unaff_x27),
       plVar2 == (long *)0x0)) break;
    uVar3 = (**(code **)(*plVar2 + 0x1f8))();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x25);
    }
    uVar4 = FUN_056d7324(uVar3,0);
    unaff_w23 = unaff_w23 + 1;
    if ((uVar4 & 1) == 0) {
      FUN_05733018();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


