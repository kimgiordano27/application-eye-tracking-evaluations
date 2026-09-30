/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$.ctor
ENTRY_POINT: 08a807c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0___ctor
               (undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x21;
  undefined8 uVar3;
  long *unaff_x22;
  
  uVar1 = FUN_08a3ef88(param_1,0);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c(lVar2);
    lVar2 = *unaff_x22;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08d93358(uVar1,uVar3,0);
  FUN_08d93650();
  return;
}


