/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 05fefd50
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSaveComplete(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  
  lVar1 = FUN_06e550fc();
  if (lVar1 != 0) {
    FUN_03e0d654(lVar1,*(undefined8 *)PTR_DAT_075f6be0);
    FUN_05fefe74();
    if (*(long *)(unaff_x19 + 0x180) == 0) {
      lVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759b3a8);
      FUN_06e5a7e4(lVar1,*(undefined8 *)PTR_DAT_075f6bf0,0);
      if ((lVar1 == 0) ||
         (plVar2 = (long *)FUN_03e0d654(lVar1,*(undefined8 *)PTR_DAT_075f6be8),
         plVar2 == (long *)0x0)) goto LAB_05fefe70;
      *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(unaff_x19 + 0x130);
      if (*(long *)(unaff_x19 + 0x140) != 0) {
        lVar3 = FUN_03e0d654(lVar1,*(undefined8 *)PTR_DAT_075f6bd8);
        if (lVar3 == 0) goto LAB_05fefe70;
        thunk_FUN_05fc1454(lVar3,*(undefined8 *)(unaff_x19 + 0x140),0);
        lVar1 = FUN_06e59884(lVar1,0);
                    /* try { // try from 05fefe14 to 060efea7 has its CatchHandler @ 05fefe14
                       catch() { ... } // from try @ 05fefe14 with catch @ 05fefe14
                       catch() { ... } // from try @ 05ff010c with catch @ 05fefe14
                       catch() { ... } // from try @ 05ff0190 with catch @ 05fefe14
                       catch() { ... } // from try @ 05ff0240 with catch @ 05fefe14 */
        plVar2[5] = lVar1;
        thunk_FUN_0329bf60();
      }
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f6b58);
      FUN_05fed758(uVar4,plVar2,*(undefined8 *)(*plVar2 + 400));
      *(undefined8 *)(unaff_x19 + 0x180) = uVar4;
      thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x180),uVar4);
    }
    FUN_05f209c0();
    return;
  }
LAB_05fefe70:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


