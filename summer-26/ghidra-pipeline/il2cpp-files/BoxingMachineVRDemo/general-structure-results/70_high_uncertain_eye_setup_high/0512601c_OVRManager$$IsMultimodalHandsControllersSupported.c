/*
FUNCTION_NAME: OVRManager$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 0512601c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsMultimodalHandsControllersSupported(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xc07) & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780458);
    *(undefined1 *)(unaff_x21 + 0xc07) = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_051260dc:
      FUN_0511c3e4(param_1,param_2);
      return;
    }
    plVar1 = *(long **)(param_1 + 0x18);
    if (plVar1 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x178))
                        (plVar1,*(long *)(param_2 + 0x10),*(undefined8 *)(*plVar1 + 0x180));
      if (lVar2 == 0) goto LAB_051260dc;
      plVar1 = *(long **)(param_1 + 0x10);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x578))(plVar1,*(undefined8 *)(*plVar1 + 0x580));
        plVar1 = *(long **)(param_1 + 0x10);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x5d8))
                    (plVar1,*(undefined8 *)PTR_DAT_06780458,*(undefined8 *)(*plVar1 + 0x5e0));
          plVar1 = *(long **)(param_1 + 0x10);
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x698))
                      (plVar1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*plVar1 + 0x6a0));
            plVar1 = *(long **)(param_1 + 0x10);
            if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x051260d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar1 + 0x588))(plVar1,*(undefined8 *)(*plVar1 + 0x590));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


