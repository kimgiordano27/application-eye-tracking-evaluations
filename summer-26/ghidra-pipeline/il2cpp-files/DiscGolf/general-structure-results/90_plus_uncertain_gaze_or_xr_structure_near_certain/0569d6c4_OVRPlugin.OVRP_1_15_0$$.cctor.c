/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$.cctor
ENTRY_POINT: 0569d6c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_15_0___cctor(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  lVar1 = *unaff_x26;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar1 = *unaff_x26;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  lVar4 = puVar3[2];
  if (lVar4 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar3 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Unity_Services_DistributedAuthority_Response<Session>_TypeInfo);
    FUN_03b78560(lVar4,uVar5,*(undefined8 *)Unity_Services_Lobbies_Response<Lobby>_TypeInfo,0);
    plVar2 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x10);
    *plVar2 = lVar4;
    LeanTween__value(plVar2,lVar4);
  }
  uVar5 = FUN_0360a330(param_1,lVar4,*unaff_x25);
  lVar1 = FUN_03606bf0(uVar5,*unaff_x24);
  if (lVar1 == 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_054c8b04(0);
  }
  else {
    FUN_054a9700(lVar1,0);
  }
  return;
}


