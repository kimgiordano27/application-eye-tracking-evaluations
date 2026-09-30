/*
FUNCTION_NAME: System.Runtime.CompilerServices.AsyncTaskMethodBuilder<bool>$$Start<ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13>
ENTRY_POINT: 02f0ea90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


int System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>__Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>
              (long param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int in_w8;
  int in_w9;
  int in_w10;
  long unaff_x19;
  
  do {
    if (*(short *)(param_1 + (long)in_w10 * 2) == *(short *)(unaff_x19 + (long)in_w9 * 2)) {
      in_w9 = in_w9 + 1;
      if (param_5 == in_w9) {
        return param_2;
      }
    }
    else {
      param_2 = param_2 + 1;
      if (in_w8 < param_2) {
        return -1;
      }
      in_w9 = 0;
    }
    in_w10 = param_2 + in_w9;
  } while( true );
}


