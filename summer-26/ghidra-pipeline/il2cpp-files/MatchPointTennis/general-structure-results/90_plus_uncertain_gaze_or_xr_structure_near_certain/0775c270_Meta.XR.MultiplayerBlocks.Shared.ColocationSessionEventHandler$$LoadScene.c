/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$LoadScene
ENTRY_POINT: 0775c270
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__LoadScene
          (double *param_1,long param_2)

{
  double *unaff_x19;
  long *unaff_x20;
  double dVar1;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double dVar2;
  
  dVar1 = *param_1;
  if (unaff_d11 - dVar1 <= unaff_d12) {
    dVar2 = unaff_x19[1];
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_2 = *unaff_x20;
      dVar1 = **(double **)(param_2 + 0xb8);
    }
    if (unaff_d9 - dVar1 <= dVar2) {
      dVar2 = *unaff_x19;
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        param_2 = *unaff_x20;
        dVar1 = **(double **)(param_2 + 0xb8);
      }
      if (dVar2 <= unaff_d11 + unaff_d10 + dVar1) {
        dVar2 = unaff_x19[1];
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          dVar1 = **(double **)(*unaff_x20 + 0xb8);
        }
        if (dVar2 <= unaff_d9 + unaff_d8 + dVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}


