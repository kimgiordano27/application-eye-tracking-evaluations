/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 03395998
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  lVar1 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03295500(0);
  plVar3 = *(long **)(unaff_x21 + 0x60);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  uVar4 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
  FUN_033704d4(uVar4,uVar2);
  uVar2 = FUN_0335cdc4();
  uVar4 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar4);
}


