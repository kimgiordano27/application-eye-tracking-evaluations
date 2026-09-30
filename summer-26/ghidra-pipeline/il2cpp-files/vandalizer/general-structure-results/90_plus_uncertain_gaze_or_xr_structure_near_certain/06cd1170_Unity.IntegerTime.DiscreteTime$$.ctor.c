/*
FUNCTION_NAME: Unity.IntegerTime.DiscreteTime$$.ctor
ENTRY_POINT: 06cd1170
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void Unity_IntegerTime_DiscreteTime___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x19;
  long lVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_042cbcbc();
  puVar5 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
  *puVar5 = param_1;
  thunk_FUN_0329bf60(puVar5,param_1);
  uVar6 = thunk_FUN_0322f148(*unaff_x24);
  FUN_04601630(uVar6,param_1,0,0,0,0,10000,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar6;
  thunk_FUN_0329bf60(unaff_x19 + 0x160,uVar6);
  lVar7 = *unaff_x22;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *unaff_x22;
  }
  puVar4 = System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_TypeInfo;
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_0322f148(*(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo)
    ;
    FUN_042cbcbc(lVar9,uVar6,*(undefined8 *)System_Collections_Generic_List<Data_RoomData>_TypeInfo,
                 0);
    plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar8 = lVar9;
    thunk_FUN_0329bf60(plVar8,lVar9);
  }
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04601630(uVar6,lVar9,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar6;
  thunk_FUN_0329bf60(unaff_x19 + 0x168,uVar6);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_05e44034(uVar6,0);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar6;
  thunk_FUN_0329bf60(unaff_x19 + 0x170,uVar6);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_05e44034(uVar6,0);
  *(undefined8 *)(unaff_x19 + 0x178) = uVar6;
  thunk_FUN_0329bf60(unaff_x19 + 0x178,uVar6);
  *(undefined1 *)(unaff_x19 + 0x210) = 1;
  *(undefined1 *)(unaff_x19 + 600) = 1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334();
  return;
}


