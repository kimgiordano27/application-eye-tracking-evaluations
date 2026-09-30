/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetNodeFrustum2
ENTRY_POINT: 0569d5dc
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


void OVRPlugin_OVRP_1_15_0__ovrp_GetNodeFrustum2(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  FUN_03b7820c();
  uVar1 = FUN_036170b4();
  lVar2 = *unaff_x26;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *unaff_x26;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar4 = *(undefined8 **)(*unaff_x26 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                Unity_Services_DistributedAuthority_Response<Session>_TypeInfo);
    FUN_03b78560(lVar5,uVar6,*(undefined8 *)Unity_Services_Lobbies_Response<List<string>>_TypeInfo,0
                );
    plVar3 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
    *plVar3 = lVar5;
    LeanTween__value(plVar3,lVar5);
  }
  uVar1 = FUN_0360a330(uVar1,lVar5,*unaff_x25);
  lVar2 = FUN_03606bf0(uVar1,*unaff_x24);
  if (lVar2 == 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_054c8b04(0);
  }
  else {
    FUN_054a9700(lVar2,0);
  }
  return;
}


