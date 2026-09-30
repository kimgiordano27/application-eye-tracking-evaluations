/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 051a966c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__OnApplicationPause
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_06a712a6 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608728);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608730);
    DAT_06a712a6 = 1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 1) {
      plVar2 = (long *)FUN_03968108(lVar1,0,*(undefined8 *)PTR_DAT_06608730);
      if (plVar2 == (long *)0x0) goto LAB_051a9754;
      (**(code **)(*plVar2 + 0x1a8))
                (param_2,plVar2,param_4,param_5,*(undefined8 *)(param_3 + 0x18),param_6,param_7,
                 *(undefined8 *)(*plVar2 + 0x1b0));
    }
    else {
      if (*(int *)(lVar1 + 0x18) < 2) {
        return 0;
      }
      FUN_051ad028(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    return 1;
  }
LAB_051a9754:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


