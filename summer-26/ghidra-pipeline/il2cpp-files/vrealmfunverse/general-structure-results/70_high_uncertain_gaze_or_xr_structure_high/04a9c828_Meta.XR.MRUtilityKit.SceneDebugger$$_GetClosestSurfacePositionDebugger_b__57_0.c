/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSurfacePositionDebugger>b__57_0
ENTRY_POINT: 04a9c828
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSurfacePositionDebugger>b__57_0
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long in_x9;
  int *in_x10;
  int unaff_w20;
  int unaff_w23;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02b7654c();
      goto LAB_04a9c854;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar2 + 3) * 0x10 + 0x138);
LAB_04a9c854:
                    /* catch() { ... } // from try @ 04a9ca94 with catch @ 04a9c854
                       catch() { ... } // from try @ 04a9caf4 with catch @ 04a9c854
                       catch() { ... } // from try @ 04a9cb40 with catch @ 04a9c854
                       catch() { ... } // from try @ 04a9cb8c with catch @ 04a9c854 */
  (*(code *)*puVar3)();
  return unaff_w23 < unaff_w20;
}


