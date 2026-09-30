/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$get_leftEyePose
ENTRY_POINT: 07293918
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 296
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction;possible_biometrics;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_3;functionality_possible_biometrics_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRFace__get_leftEyePose(long param_1)

{
  undefined8 uVar1;
  int in_w8;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
    param_1 = *unaff_x22;
  }
  uVar3 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PathPoint>_TypeInfo);
  FUN_044b58c8(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<ushort,_sbyte>_TypeInfo,0);
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar2 + 0x2b8) = uVar1;
  thunk_FUN_037aeb94(lVar2 + 0x2b8,uVar1);
  FUN_03ee5d18();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2c0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexNode>_TypeInfo);
    FUN_044b61b0(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<ushort,_float>_TypeInfo,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2c0) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2c0,uVar1);
  }
  FUN_03ee6d1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2c8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo);
    FUN_044b5c9c(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<ushort,_string>_TypeInfo,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2c8) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2c8,uVar1);
  }
  FUN_03ee6380();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2d0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SpriteCharacter>_TypeInfo);
    FUN_044b5508(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<ushort,_uint>_TypeInfo,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2d0) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2d0,uVar1);
  }
  FUN_03ee537c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2d8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SkinnedMeshRenderer>_TypeInfo);
    FUN_044ad3dc(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_bool>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2d8) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2d8,uVar1);
  }
  FUN_03eb0df8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2e0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SkinSettings>_TypeInfo
                              );
    FUN_044adba4(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_byte>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2e0) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2e0,uVar1);
  }
  FUN_03eb1dfc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexFC>_TypeInfo);
    FUN_044ad6f4(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_char>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2e8) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2e8,uVar1);
  }
  FUN_03eb1460();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PropertyInfo>_TypeInfo
                              );
    FUN_044add34(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_double>_TypeInfo,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f0) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2f0,uVar1);
  }
  FUN_03eb2130();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayableDirector>_TypeInfo);
    FUN_044ad884(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_short>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f8) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x2f8,uVar1);
  }
  FUN_03eb1794();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ScriptableRendererFeature>_TypeInfo)
    ;
    FUN_044adec4(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_int>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x300) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x300,uVar1);
  }
  FUN_03eb2464();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RangePositionInfo>_TypeInfo);
    FUN_044ada14(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x308) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x308,uVar1);
  }
  FUN_03eb1ac8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<QueryExpression>_TypeInfo);
    FUN_044ae054(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_object>_TypeInfo,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x310) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x310,uVar1);
  }
  FUN_03eb2798();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Purchase>_TypeInfo);
    FUN_044ad56c(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_sbyte>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x318) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x318,uVar1);
  }
  FUN_03eb112c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SerializedData>_TypeInfo);
    FUN_044ae1e4(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<uint,_float>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 800) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 800,uVar1);
  }
  FUN_03eb2acc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RangeItemHeaderValue>_TypeInfo);
    FUN_044ae820(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<int,_float>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x328) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x328,uVar1);
  }
  FUN_03eb3ad0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PersistentCall>_TypeInfo);
    FUN_044ae464(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<int,_string>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x330) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x330,uVar1);
  }
  FUN_03eb3134();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rigidbody>_TypeInfo);
    FUN_044aeaa0(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<int,_StyleFloat>_TypeInfo
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x338) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x338,uVar1);
  }
  FUN_03eb4138();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ShadowCasterGroup2D>_TypeInfo);
    FUN_044ae5a4(uVar1,uVar3,
                 *(undefined8 *)Unity_Properties_TypeConverter<int,_StyleLength>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x340) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x340,uVar1);
  }
  FUN_03eb3468();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SortColumnDescription>_TypeInfo);
    FUN_044aebe0(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<int,_ushort>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x348) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x348,uVar1);
  }
  FUN_03eb446c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SceneOverride>_TypeInfo);
    FUN_044ae6e4(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<int,_uint>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x350) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x350,uVar1);
  }
  FUN_03eb379c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SharedVertex>_TypeInfo
                              );
    FUN_044aed20(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<int,_ulong>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x358) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x358,uVar1);
  }
  FUN_03eb47a0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ShaderTextureProperty>_TypeInfo);
    FUN_044ae960(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<long,_bool>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x360) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x360,uVar1);
  }
  FUN_03eb3e04();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RectTransform>_TypeInfo);
    FUN_044ae324(uVar1,uVar3,*(undefined8 *)Unity_Properties_TypeConverter<long,_byte>_TypeInfo,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x368) = uVar1;
    thunk_FUN_037aeb94(lVar2 + 0x368,uVar1);
  }
  FUN_03eb2e00();
  return;
}


