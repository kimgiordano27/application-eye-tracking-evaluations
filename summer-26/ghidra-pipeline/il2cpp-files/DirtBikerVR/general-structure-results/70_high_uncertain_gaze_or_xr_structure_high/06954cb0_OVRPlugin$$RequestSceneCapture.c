/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 06954cb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x3d) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b6a50);
    *(undefined1 *)(unaff_x21 + 0x3d) = 1;
  }
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
                    /* try { // try from 06954d04 to 06a54eb3 has its CatchHandler @ 06954d04
                       catch() { ... } // from try @ 06954d04 with catch @ 06954d04
                       catch() { ... } // from try @ 06955140 with catch @ 06954d04
                       catch() { ... } // from try @ 06955148 with catch @ 06954d04
                       catch() { ... } // from try @ 069551d4 with catch @ 06954d04
                       catch() { ... } // from try @ 06955298 with catch @ 06954d04 */
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = *(long *)PTR_DAT_084b6a50;
    bVar1 = *(byte *)(lVar2 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar3 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x20) = plVar3;
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_03afed3c(param_1 + 0x20,param_2);
  return;
}


