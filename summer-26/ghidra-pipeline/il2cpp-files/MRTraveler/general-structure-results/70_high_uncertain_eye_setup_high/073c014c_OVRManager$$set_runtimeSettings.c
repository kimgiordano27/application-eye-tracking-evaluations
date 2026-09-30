/*
FUNCTION_NAME: OVRManager$$set_runtimeSettings
ENTRY_POINT: 073c014c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_runtimeSettings(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  FUN_085df0ec(param_1,*(undefined8 *)PTR_DAT_08eb54f0,0);
  if ((param_1 != 0) &&
     (plVar1 = (long *)FUN_0469cb0c(param_1,*(undefined8 *)PTR_DAT_08eb54e8), plVar1 != (long *)0x0)
     ) {
    *(undefined4 *)(plVar1 + 4) = *(undefined4 *)(unaff_x19 + 0x130);
    if (*(long *)(unaff_x19 + 0x140) != 0) {
      lVar2 = FUN_0469cb0c(param_1,*(undefined8 *)PTR_DAT_08eb54d8);
      if (lVar2 == 0) goto LAB_073c0228;
      thunk_FUN_0739193c(lVar2,*(undefined8 *)(unaff_x19 + 0x140),0);
      lVar2 = FUN_085dee20(param_1,0);
      plVar1[5] = lVar2;
      thunk_FUN_03d233cc();
    }
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5458);
    FUN_073bdb14(uVar3,plVar1,*(undefined8 *)(*plVar1 + 400));
    *(undefined8 *)(unaff_x19 + 0x180) = uVar3;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x180),uVar3);
    FUN_072f4e24();
    return;
  }
LAB_073c0228:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


