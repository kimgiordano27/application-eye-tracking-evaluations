/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 05d67dec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__InitOVRManager(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  thunk_FUN_032e1da0(PTR_DAT_0727ee10);
  thunk_FUN_032e1da0(PTR_DAT_072b1270);
  thunk_FUN_032e1da0(PTR_DAT_072b1268);
  *(undefined1 *)(unaff_x20 + 0x63d) = 1;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
    FUN_0589e07c(lVar3,uVar4,*(undefined8 *)PTR_DAT_072b1270,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    thunk_FUN_0333a630(plVar2,lVar3);
  }
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x20) = lVar3;
    thunk_FUN_0333a630((long *)(unaff_x19 + 0x20),lVar3);
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
    thunk_FUN_06be6094();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


