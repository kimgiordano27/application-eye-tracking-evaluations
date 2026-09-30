/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 051a4a4c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_06a71262 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065defe0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8998);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608688);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608690);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608678);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608680);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a71262 = 1;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = FUN_05ef59b8(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065defe0);
      FUN_047b28cc(uVar2,param_1,*(undefined8 *)PTR_DAT_06608680,0);
      if (lVar3 != 0) {
        FUN_036c3144(lVar3,uVar2,*(undefined8 *)PTR_DAT_06608690);
        lVar3 = *(long *)(param_1 + 0x20);
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8998);
        FUN_04e9e238(uVar2,param_1,*(undefined8 *)PTR_DAT_06608678,0);
        if (lVar3 != 0) {
          FUN_036c3290(lVar3,uVar2,*(undefined8 *)PTR_DAT_06608688);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  return;
}


