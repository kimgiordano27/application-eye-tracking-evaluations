/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$CalculatePixels
ENTRY_POINT: 04c69238
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__CalculatePixels(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar1 = PTR_DAT_065e7920;
  if ((DAT_06a6da0f & 1) == 0) {
                    /* try { // try from 04c69260 to 04d69287 has its CatchHandler @ 04c693b8 */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7920);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7928);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7930);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7938);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7940);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7948);
    DAT_06a6da0f = 1;
  }
  puVar2 = PTR_DAT_065e7948;
  DelegateList<DiagnosticEvent>__Remove(param_1,*(undefined8 *)puVar1);
  if (*(char *)(param_1 + 0x61) == '\0') {
    bVar3 = true;
  }
  else if (((*(long *)(param_1 + 0x48) == 0) && (*(long *)(param_1 + 0x38) == 0)) &&
          (*(long *)(param_1 + 0x10) == 0)) {
    bVar3 = *(long *)(param_1 + 0x18) == 0;
  }
  else {
    bVar3 = false;
  }
  FUN_04bc9f2c(bVar3,*(undefined8 *)puVar2,0);
  return;
}


