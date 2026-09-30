/*
FUNCTION_NAME: OVRManager$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 06931234
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__IsMultimodalHandsControllersSupported(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  uint unaff_w22;
  
  uVar1 = FUN_07c9c218(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    if ((unaff_x21 != 0) && (plVar3 = *(long **)(unaff_x21 + 0x20), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x5e8))
                (plVar3,*(undefined8 *)PTR_DAT_084b5c28,*(undefined8 *)(*plVar3 + 0x5f0));
LAB_069312a0:
      uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(DAT_015c5b5c,uVar2,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return unaff_w22 < 2;
    }
  }
  else if ((unaff_x21 != 0) && (unaff_x20 != 0)) {
    plVar3 = *(long **)(unaff_x21 + 0x20);
    uVar2 = thunk_FUN_07ca227c();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x5f0));
      goto LAB_069312a0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


