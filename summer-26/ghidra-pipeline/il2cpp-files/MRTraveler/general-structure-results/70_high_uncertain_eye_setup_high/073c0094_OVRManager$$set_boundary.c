/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 073c0094
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_boundary(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  FUN_03c8f898(PTR_DAT_08eb54e8);
  FUN_03c8f898(PTR_DAT_08e6a798);
  FUN_03c8f898(PTR_DAT_08eb54d0);
  FUN_03c8f898(PTR_DAT_08eb54f0);
  *(undefined1 *)(unaff_x22 + 0x600) = 1;
  thunk_FUN_03cf5234(*unaff_x20);
  FUN_07064478();
  FUN_072f4d80();
  if (*(long *)(unaff_x19 + 0x128) == 0) {
    lVar1 = FUN_085dbb98();
    if (lVar1 == 0) goto LAB_073c0228;
    FUN_0469cb0c(lVar1,*(undefined8 *)PTR_DAT_08eb54e0);
    FUN_073c022c();
  }
  if (*(long *)(unaff_x19 + 0x180) == 0) {
    lVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a798);
    FUN_085df0ec(lVar1,*(undefined8 *)PTR_DAT_08eb54f0,0);
    if ((lVar1 == 0) ||
       (plVar2 = (long *)FUN_0469cb0c(lVar1,*(undefined8 *)PTR_DAT_08eb54e8), plVar2 == (long *)0x0)
       ) {
LAB_073c0228:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(unaff_x19 + 0x130);
    if (*(long *)(unaff_x19 + 0x140) != 0) {
      lVar3 = FUN_0469cb0c(lVar1,*(undefined8 *)PTR_DAT_08eb54d8);
      if (lVar3 == 0) goto LAB_073c0228;
      thunk_FUN_0739193c(lVar3,*(undefined8 *)(unaff_x19 + 0x140),0);
      lVar1 = FUN_085dee20(lVar1,0);
      plVar2[5] = lVar1;
      thunk_FUN_03d233cc();
    }
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5458);
    FUN_073bdb14(uVar4,plVar2,*(undefined8 *)(*plVar2 + 400));
    *(undefined8 *)(unaff_x19 + 0x180) = uVar4;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x180),uVar4);
  }
  FUN_072f4e24();
  return;
}


