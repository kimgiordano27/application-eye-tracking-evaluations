/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpaceSharing>d__15$$MoveNext
ENTRY_POINT: 0775d070
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpaceSharing>d__15__MoveNext
               (double *param_1,double *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  puVar2 = PTR_DAT_09f32a88;
  if ((DAT_0a5232a6 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f214f8);
    FUN_04447ba8(PTR_DAT_09f32a88);
    DAT_0a5232a6 = 1;
  }
  puVar1 = PTR_DAT_09f214f8;
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar9 = param_1[2];
  dVar11 = param_1[3];
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar10 = param_2[2];
  dVar12 = param_2[3];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  iVar3 = FUN_079a7804((dVar5 + dVar9 * 0.5) - (dVar7 + dVar10 * 0.5),0);
  iVar4 = FUN_079a7804((dVar6 + dVar11 * 0.5) - (dVar8 + dVar12 * 0.5),0);
  FUN_0775c9d4(*param_2 + (double)iVar3,param_2[1] + (double)iVar4,param_2[2],param_2[3],param_1);
  return;
}


