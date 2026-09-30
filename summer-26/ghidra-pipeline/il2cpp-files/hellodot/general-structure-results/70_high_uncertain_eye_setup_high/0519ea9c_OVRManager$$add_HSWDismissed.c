/*
FUNCTION_NAME: OVRManager$$add_HSWDismissed
ENTRY_POINT: 0519ea9c
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HSWDismissed(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8998);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066083e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608478);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608480);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608488);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca370);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608470);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608490);
  *(undefined1 *)(unaff_x22 + 0x219) = 1;
  thunk_FUN_02cea894(*unaff_x20);
  FUN_04e9e238();
  FUN_050e6afc();
  if (*(long *)(unaff_x19 + 0x128) == 0) {
    lVar1 = FUN_05ef2cf0();
    if (lVar1 == 0) goto LAB_0519ec44;
    FUN_034248f0(lVar1,*(undefined8 *)PTR_DAT_06608480);
    FUN_0519ec48();
  }
  if (*(long *)(unaff_x19 + 0x180) == 0) {
    lVar1 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca370);
    FUN_05ef6494(lVar1,*(undefined8 *)PTR_DAT_06608490,0);
    if ((lVar1 == 0) ||
       (plVar2 = (long *)FUN_034248f0(lVar1,*(undefined8 *)PTR_DAT_06608488), plVar2 == (long *)0x0)
       ) {
LAB_0519ec44:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(unaff_x19 + 0x130);
    if (*(long *)(unaff_x19 + 0x140) != 0) {
      lVar3 = FUN_034248f0(lVar1,*(undefined8 *)PTR_DAT_06608478);
      if (lVar3 == 0) goto LAB_0519ec44;
      thunk_FUN_051797b8(lVar3,*(undefined8 *)(unaff_x19 + 0x140),0);
      lVar1 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar1,0);
      plVar2[5] = lVar1;
    }
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066083e8);
    FUN_0519ecc8(uVar4,plVar2,*(undefined8 *)(*plVar2 + 400));
    *(undefined8 *)(unaff_x19 + 0x180) = uVar4;
  }
  FUN_050e6ba0();
  return;
}


