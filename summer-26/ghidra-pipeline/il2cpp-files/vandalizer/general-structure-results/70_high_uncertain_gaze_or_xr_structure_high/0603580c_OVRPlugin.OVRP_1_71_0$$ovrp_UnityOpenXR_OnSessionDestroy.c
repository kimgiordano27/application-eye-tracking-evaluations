/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 0603580c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *unaff_x22;
  }
  puVar1 = PTR_DAT_075f79d8;
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f79c8);
    FUN_042e1c2c(uVar3,uVar5,*(undefined8 *)PTR_DAT_075f79e8,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_0329bf60(puVar4,uVar3);
  }
  uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04cfe314(uVar3,2);
  return uVar3;
}


