/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$<RequestScenePermissionIfNeeded>b__0
ENTRY_POINT: 08a807c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0__<RequestScenePermissionIfNeeded>b__0
               (undefined8 param_1)

{
  long lVar1;
  long *unaff_x21;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c(lVar1);
    lVar1 = *unaff_x22;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08d93358(param_1,uVar2,0);
  FUN_08d93650();
  return;
}


