/*
FUNCTION_NAME: FUN_06c69224
ENTRY_POINT: 06c69224
PROGRAM: vandalizer-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_4
*/


void FUN_06c69224(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar9 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar8 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar7 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  puVar6 = System_Collections_Generic_HashSet<Event_Type>_TypeInfo;
  puVar5 = System_Collections_Generic_HashSet<XRLoader>_TypeInfo;
  puVar4 = System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo;
  puVar3 = System_Collections_Generic_HashSet<X509Name>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<X509CrlEntry>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<X509Crl>_TypeInfo;
  if ((DAT_07a5060b & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509Crl>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509V2AttributeCertificate>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509Name>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<X509CrlEntry>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_07a5060b = 1;
  }
  *(undefined4 *)(param_1 + 0x138) = 1;
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  *(undefined2 *)(param_1 + 0x1e8) = 0x101;
  uVar10 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_042cbcbc(uVar10,0,*(undefined8 *)puVar2,0);
  uVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_04601630(uVar11,uVar10,0,0,0,0,10000,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x1f8) = uVar11;
  thunk_FUN_0329bf60(param_1 + 0x1f8,uVar11);
  uVar10 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_042cbcbc(uVar10,0,*(undefined8 *)puVar6,0);
  uVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar7);
  FUN_04601630(uVar11,uVar10,0,0,0,0,10000,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x200) = uVar11;
  thunk_FUN_0329bf60(param_1 + 0x200,uVar11);
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06cd1334(param_1,0);
  return;
}


