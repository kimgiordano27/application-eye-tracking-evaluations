/*
FUNCTION_NAME: FUN_03139398
ENTRY_POINT: 03139398
PROGRAM: vrlegs-libil2cpp.so
SCORE: 249
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_14;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_03139398(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined8 local_1e0 [4];
  undefined8 local_1c0 [4];
  undefined8 local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  
  puVar1 = System_Collections_Generic_HashSet<ITypeDefinition>_TypeInfo;
  if ((DAT_0412bc6e & 1) == 0) {
    FUN_01ab69ac(System_Collections_Generic_HashSet<LabelScopeInfo>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<MaskableGraphic>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Material>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<IXRInteractor>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Mesh>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<MeshRenderer>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<NetworkId>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<object>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Object>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<OrderNode>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<ParameterExpression>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<RTHandle>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Renderer>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<IValueAnimationUpdate>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Rigidbody>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<ScheduledItem>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<ScriptableRenderer>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Shader>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<float>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<IXRInteractionGroup>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<StylePropertyId>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<TalkiesBase>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Tick>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Transform>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<Type>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<TypeIndex>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<ushort>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<ITypeDefinition>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<VisualElement>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<VisualTreeAsset>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_HashSet<MaterialValueBindingMerger_MaterialTarget>_TypeInfo
                );
    FUN_01ab69ac(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<ResourceManager_InstanceOperation>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<SVGDocument_ElemHandler>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo);
    FUN_01ab69ac(
                System_Collections_Generic_HashSet<VRMSpringBoneColliderGroup_SphereCollider>_TypeInfo
                );
    FUN_01ab69ac(Unity_Services_CloudSave_Internal_Http_HttpException<BasicErrorResponse>_TypeInfo);
    FUN_01ab69ac(
                Unity_Services_CloudSave_Internal_Http_HttpException<BatchConflictErrorResponse>_TypeInfo
                );
    FUN_01ab69ac(
                Unity_Services_CloudSave_Internal_Http_HttpException<BatchValidationErrorResponse>_TypeInfo
                );
    DAT_0412bc6e = 1;
  }
  puVar2 = System_Collections_Generic_HashSet<IXRInteractor>_TypeInfo;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_150 = 0;
  local_148 = 0;
  local_160 = 0;
  local_158 = 0;
  local_170 = 0;
  local_168 = 0;
  local_180 = 0;
  local_178 = 0;
  auVar4 = FUN_020da0f0(param_3,*(undefined8 *)puVar1);
  puVar3 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<IXRInteractionGroup>_TypeInfo;
  local_c0 = auVar4._0_8_;
  local_b4 = auVar4._12_4_ + 1;
  local_b8 = auVar4._8_4_;
  if (local_b4 < local_b8) {
    do {
      FUN_021d3e84(&local_c0,&local_a8,*(undefined8 *)puVar1);
      *(undefined4 *)(param_1 + 0x20) = 0;
      local_ac = local_a8;
      local_a8 = param_2;
      FUN_020dd354(param_1,&local_a8,&local_ac,*(undefined8 *)puVar3);
      local_b4 = local_b4 + 1;
    } while (local_b4 < local_b8);
  }
  FUN_021b2770(&local_c0,*(undefined8 *)puVar2);
  puVar1 = System_Collections_Generic_HashSet<object>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0x30,
                        *(undefined8 *)System_Collections_Generic_HashSet<ushort>_TypeInfo);
  puVar3 = Unity_Services_CloudSave_Internal_Http_HttpException<BasicErrorResponse>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<Tick>_TypeInfo;
  local_d0 = auVar4._0_8_;
  local_c8._4_4_ = auVar4._12_4_ + 1;
  local_c8._0_4_ = auVar4._8_4_;
  if (local_c8._4_4_ < (int)local_c8) {
    do {
      FUN_021d3e84(&local_d0,local_a0,*(undefined8 *)puVar2);
      local_90 = param_2;
      FUN_020dd354(param_1 + 0x38,&local_90,local_a0,*(undefined8 *)puVar3);
      local_c8._4_4_ = local_c8._4_4_ + 1;
    } while (local_c8._4_4_ < (int)local_c8);
  }
  FUN_021b2770(&local_d0,*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_HashSet<NetworkId>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0x78,
                        *(undefined8 *)System_Collections_Generic_HashSet<TypeIndex>_TypeInfo);
  puVar3 = 
  Unity_Services_CloudSave_Internal_Http_HttpException<BatchValidationErrorResponse>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<TalkiesBase>_TypeInfo;
  local_e0 = auVar4._0_8_;
  local_d8._4_4_ = auVar4._12_4_ + 1;
  local_d8._0_4_ = auVar4._8_4_;
  if (local_d8._4_4_ < (int)local_d8) {
    do {
      FUN_021d3e84(&local_e0,&local_1a0,*(undefined8 *)puVar2);
      uStack_f8 = uStack_198;
      local_100 = local_1a0;
      uStack_ec = uStack_18c;
      local_e8 = uStack_188;
      uStack_f4 = uStack_194;
      local_f0 = local_190;
      local_1c0[0] = local_1a0;
      local_8c = param_2;
      FUN_020dd354(param_1 + 0x48,&local_8c,local_1c0,*(undefined8 *)puVar3);
      local_d8._4_4_ = local_d8._4_4_ + 1;
    } while (local_d8._4_4_ < (int)local_d8);
  }
  FUN_021b2770(&local_e0,*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_HashSet<Material>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0x48,
                        *(undefined8 *)System_Collections_Generic_HashSet<VisualTreeAsset>_TypeInfo)
  ;
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<StylePropertyId>_TypeInfo;
  local_110 = auVar4._0_8_;
  local_108._4_4_ = auVar4._12_4_ + 1;
  local_108._0_4_ = auVar4._8_4_;
  if (local_108._4_4_ < (int)local_108) {
    do {
      FUN_021d3e84(&local_110,local_a0,*(undefined8 *)puVar2);
      local_88 = param_2;
      FUN_020dd354(param_1 + 0x58,&local_88,local_a0,*(undefined8 *)puVar3);
      local_108._4_4_ = local_108._4_4_ + 1;
    } while (local_108._4_4_ < (int)local_108);
  }
  FUN_021b2770(&local_110,*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_HashSet<MaskableGraphic>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0x60,
                        *(undefined8 *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo);
  puVar3 = System_Collections_Generic_HashSet<VRMSpringBoneColliderGroup_SphereCollider>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<Text>_TypeInfo;
  local_120 = auVar4._0_8_;
  local_118._4_4_ = auVar4._12_4_ + 1;
  local_118._0_4_ = auVar4._8_4_;
  if (local_118._4_4_ < (int)local_118) {
    do {
      FUN_021d3e84(&local_120,&local_1a0,*(undefined8 *)puVar2);
      uStack_138 = CONCAT44(uStack_194,uStack_198);
      local_130 = CONCAT44(uStack_18c,local_190);
      local_140 = local_1a0;
      local_1e0[0] = local_1a0;
      local_84 = param_2;
      FUN_020dd354(param_1 + 0x68,&local_84,local_1e0,*(undefined8 *)puVar3);
      local_118._4_4_ = local_118._4_4_ + 1;
    } while (local_118._4_4_ < (int)local_118);
  }
  FUN_021b2770(&local_120,*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_HashSet<Object>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0x90,
                        *(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
  puVar3 = System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
  local_150 = auVar4._0_8_;
  local_148._4_4_ = auVar4._12_4_ + 1;
  local_148._0_4_ = auVar4._8_4_;
  if (local_148._4_4_ < (int)local_148) {
    do {
      FUN_021d3e84(&local_150,local_78,*(undefined8 *)puVar2);
      local_7c = param_2;
      FUN_020dd354(param_1 + 0x78,&local_7c,local_78,*(undefined8 *)puVar3);
      local_148._4_4_ = local_148._4_4_ + 1;
    } while (local_148._4_4_ < (int)local_148);
  }
  FUN_021b2770(&local_150,*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_HashSet<MeshRenderer>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0xa8,
                        *(undefined8 *)
                         System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo
                       );
  puVar3 = System_Collections_Generic_HashSet<SVGDocument_ElemHandler>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<string>_TypeInfo;
  local_160 = auVar4._0_8_;
  local_158._4_4_ = auVar4._12_4_ + 1;
  local_158._0_4_ = auVar4._8_4_;
  if (local_158._4_4_ < (int)local_158) {
    do {
      FUN_021d3e84(&local_160,local_a0,*(undefined8 *)puVar2);
      local_58 = param_2;
      FUN_020dd354(param_1 + 0x88,&local_58,local_a0,*(undefined8 *)puVar3);
      local_158._4_4_ = local_158._4_4_ + 1;
    } while (local_158._4_4_ < (int)local_158);
  }
  FUN_021b2770(&local_160,*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_HashSet<LabelScopeInfo>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0xc0,
                        *(undefined8 *)
                         System_Collections_Generic_HashSet<MaterialValueBindingMerger_MaterialTarget>_TypeInfo
                       );
  puVar3 = System_Collections_Generic_HashSet<ResourceManager_InstanceOperation>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<Transform>_TypeInfo;
  local_170 = auVar4._0_8_;
  local_168._4_4_ = auVar4._12_4_ + 1;
  local_168._0_4_ = auVar4._8_4_;
  if (local_168._4_4_ < (int)local_168) {
    do {
      FUN_021d3e84(&local_170,&local_1a0,*(undefined8 *)puVar2);
      local_54 = param_2;
      FUN_020dd354(param_1 + 0xa8,&local_54,&local_1a0,*(undefined8 *)puVar3);
      local_168._4_4_ = local_168._4_4_ + 1;
    } while (local_168._4_4_ < (int)local_168);
  }
  FUN_021b2770(&local_170,*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_HashSet<Mesh>_TypeInfo;
  auVar4 = FUN_020da0f0(param_3 + 0xd8,
                        *(undefined8 *)System_Collections_Generic_HashSet<uint>_TypeInfo);
  puVar3 = Unity_Services_CloudSave_Internal_Http_HttpException<BatchConflictErrorResponse>_TypeInfo
  ;
  puVar2 = System_Collections_Generic_HashSet<float>_TypeInfo;
  local_180 = auVar4._0_8_;
  local_178._4_4_ = auVar4._12_4_ + 1;
  local_178._0_4_ = auVar4._8_4_;
  if (local_178._4_4_ < (int)local_178) {
    do {
      FUN_021d3e84(&local_180,local_68,*(undefined8 *)puVar2);
      local_80 = SUB84(local_68._0_8_,4);
      FUN_020dd354(param_1 + 0x28,&local_80,local_68,*(undefined8 *)puVar3);
      local_178._4_4_ = local_178._4_4_ + 1;
    } while (local_178._4_4_ < (int)local_178);
  }
  FUN_021b2770(&local_180,*(undefined8 *)puVar1);
  if (*(int *)(param_3 + 0xf0) != 0) {
    local_a4 = param_2;
    FUN_020d8994(param_1 + 0xb8,&local_a4,
                 *(undefined8 *)System_Collections_Generic_HashSet<Type>_TypeInfo);
  }
  return;
}


