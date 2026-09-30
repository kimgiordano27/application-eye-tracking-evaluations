/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionDiscovered
ENTRY_POINT: 05b35404
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionDiscovered
               (long param_1)

{
  void *__src;
  long in_x9;
  long *unaff_x19;
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x40) == in_x9) {
    __src = (void *)thunk_FUN_0322f29c();
    memcpy(&stack0x00000000,__src,0x48);
    pcVar1 = *(code **)(*unaff_x19 + 0x1c8);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2730();
}


