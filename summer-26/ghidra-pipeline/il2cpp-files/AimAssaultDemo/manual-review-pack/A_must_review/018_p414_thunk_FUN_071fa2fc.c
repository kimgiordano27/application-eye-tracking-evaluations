/*
FUNCTION_NAME: thunk_FUN_071fa2fc
ENTRY_POINT: 071fa2f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 289
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_4
*/


void thunk_FUN_071fa2fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo;
  puVar1 = PTR_DAT_07d889b8;
  if ((DAT_082684cc & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d889b8);
    FUN_0373b518(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_0373b518(System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo
                );
    DAT_082684cc = 1;
  }
  uVar4 = FUN_03f0da94(param_1,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_037aeb94();
  lVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_049ce6c0(lVar5,*(undefined8 *)puVar3);
  plVar7 = (long *)(param_1 + 0x28);
  *plVar7 = lVar5;
  thunk_FUN_037aeb94(plVar7,lVar5);
  lVar6 = *plVar7;
  lVar5 = FUN_075a7484(param_1,0);
  if ((lVar5 != 0) &&
     (uVar4 = FUN_03fe2b68(lVar5,*(undefined8 *)
                                  System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                          ), lVar6 != 0)) {
    FUN_049cf100(lVar6,uVar4,
                 *(undefined8 *)
                  System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


