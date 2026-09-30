/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARHumanBody$$get_joints
ENTRY_POINT: 072671c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 199
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_XR_ARFoundation_ARHumanBody__get_joints(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *in_x9;
  undefined8 uVar4;
  long *unaff_x22;
  
  uVar1 = thunk_FUN_037788cc(*in_x9);
  FUN_044b4d4c();
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
  *puVar2 = uVar1;
  thunk_FUN_037aeb94(puVar2,uVar1);
  FUN_03ebbe24();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x60) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Renderer>_TypeInfo);
    FUN_044b4990(uVar1,uVar4,*(undefined8 *)Unity_Netcode_NetworkVariable<ulong>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ebb488();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x68) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rigidbody2D>_TypeInfo)
    ;
    FUN_044b4fcc(uVar1,uVar4,
                 *(undefined8 *)
                  Unity_Netcode_NetworkVariable<EnemyEquipmentRandomizer_Equipment>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee49e0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x70) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFCache>_TypeInfo);
    FUN_044b4ad0(uVar1,uVar4,*(undefined8 *)System_Nullable<BigInteger>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  Unity_Collections_FixedList__Capacity<FixedBytes4096Align8,_byte>();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x78) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerSetupInfo>_TypeInfo);
    FUN_044b510c(uVar1,uVar4,*(undefined8 *)System_Nullable<bool>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee4d14();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x80) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
    FUN_044b4c10(uVar1,uVar4,*(undefined8 *)System_Nullable<byte>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ebbaf0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x88) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pid>_TypeInfo);
    FUN_044af144(uVar1,uVar4,*(undefined8 *)System_Nullable<char>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03eb4ad4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x90) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerLoopSystemInternal>_TypeInfo);
    FUN_044af910(uVar1,uVar4,*(undefined8 *)System_Nullable<Color>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03eb5e0c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x98) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SignalAsset>_TypeInfo)
    ;
    FUN_044af554(uVar1,uVar4,*(undefined8 *)System_Nullable<DateTime>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03eb5470();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xa0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RuntimeType>_TypeInfo)
    ;
    FUN_044afb90(uVar1,uVar4,*(undefined8 *)System_Nullable<DateTimeOffset>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03eb6474();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xa8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RenderTexture>_TypeInfo);
    FUN_044af694(uVar1,uVar4,*(undefined8 *)System_Nullable<double>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03eb57a4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xb0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RaycastResult>_TypeInfo);
    FUN_044afcd0(uVar1,uVar4,*(undefined8 *)System_Nullable<Guid>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03eb67a8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xb8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ShadowCaster2D>_TypeInfo);
    FUN_044af7d4(uVar1,uVar4,*(undefined8 *)System_Nullable<short>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03eb5ad8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xc0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Playable>_TypeInfo);
    FUN_044b6b94(uVar1,uVar4,*(undefined8 *)System_Nullable<int>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee7050();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 200) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectMask2D>_TypeInfo);
    FUN_044b7360(uVar1,uVar4,*(undefined8 *)System_Nullable<long>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee8388();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xd0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Pose>_TypeInfo);
    FUN_044b6fa4(uVar1,uVar4,*(undefined8 *)System_Nullable<JsonSchemaType>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee79ec();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xd8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
    FUN_044b75e0(uVar1,uVar4,*(undefined8 *)System_Nullable<sbyte>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee89f0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<float>_TypeInfo);
    FUN_044b70e4(uVar1,uVar4,
                 *(undefined8 *)System_Nullable<SecureRemotingCertificateValidationResult>_TypeInfo,
                 0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee7d20();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xe8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RegexOptions>_TypeInfo
                              );
    FUN_044b7720(uVar1,uVar4,*(undefined8 *)System_Nullable<float>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee8d24();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RadioButton>_TypeInfo)
    ;
    FUN_044b7224(uVar1,uVar4,*(undefined8 *)System_Nullable<TimeSpan>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee8054();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0xf8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<StageController>_TypeInfo);
    FUN_044b7860(uVar1,uVar4,*(undefined8 *)System_Nullable<uint>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8);
    *puVar2 = uVar1;
    thunk_FUN_037aeb94(puVar2,uVar1);
  }
  FUN_03ee9058();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x100) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo);
    FUN_044afe10(uVar1,uVar4,*(undefined8 *)System_Nullable<ulong>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x100) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x100,uVar1);
  }
  FUN_03eb6adc();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x108) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo);
    FUN_044b09b4(uVar1,uVar4,*(undefined8 *)System_Nullable<Vector3>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x108) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x108,uVar1);
  }
  FUN_03eb7e14();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x110) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RendererListHandle>_TypeInfo);
    FUN_044b0220(uVar1,uVar4,
                 *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x110) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x110,uVar1);
  }
  FUN_03eb7478();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RayfireDust>_TypeInfo)
    ;
    FUN_044b0c34(uVar1,uVar4,
                 *(undefined8 *)System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x118) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x118,uVar1);
  }
  FUN_03eb847c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ScheduledItem>_TypeInfo);
    FUN_044b04b8(uVar1,uVar4,*(undefined8 *)OVRResult<Int32Enum>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x120) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x120,uVar1);
  }
  FUN_03eb77ac();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Player>_TypeInfo);
    FUN_044b0d74(uVar1,uVar4,*(undefined8 *)OVRResult<OVRAnchor_SaveResult>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x128) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x128,uVar1);
  }
  FUN_03eb87b0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Platform>_TypeInfo);
    FUN_044b05f4(uVar1,uVar4,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x130) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x130,uVar1);
  }
  FUN_03eb7ae0();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<StudioListener>_TypeInfo);
    FUN_044b799c(uVar1,uVar4,*(undefined8 *)OVRResult<object,_Int32Enum>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x138) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x138,uVar1);
  }
  FUN_03ee938c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RendererList>_TypeInfo
                              );
    FUN_044b8164(uVar1,uVar4,*(undefined8 *)OVRResult<ulong,_Int32Enum>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x140) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x140,uVar1);
  }
  FUN_03eea6c4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo);
    FUN_044b7dac(uVar1,uVar4,*(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x148) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x148,uVar1);
  }
  FUN_03ee9d28();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFFace>_TypeInfo);
    FUN_044b83e4(uVar1,uVar4,*(undefined8 *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x150) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x150,uVar1);
  }
  FUN_03eead2c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
    FUN_044b7eec(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x158) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x158,uVar1);
  }
  FUN_03eea05c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
    FUN_044b8524(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x160) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x160,uVar1);
  }
  FUN_03eeb060();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ProBuilderMesh>_TypeInfo);
    FUN_044b8028(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x168) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x168,uVar1);
  }
  FUN_03eea390();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RayfireDebris>_TypeInfo);
    FUN_044b8660(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x170) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x170,uVar1);
  }
  FUN_03eeb394();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<PositionType>_TypeInfo
                              );
    FUN_044b12ec(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x178) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x178,uVar1);
  }
  FUN_03eb8ae4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PxrSpatialMeshInfo>_TypeInfo);
    FUN_044b1aa8(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x180) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x180,uVar1);
  }
  FUN_03eb9e1c();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<ShaderTagId>_TypeInfo)
    ;
    FUN_044b16f4(uVar1,uVar4,
                 *(undefined8 *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo,
                 0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x188) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x188,uVar1);
  }
  FUN_03eb9480();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RFShard>_TypeInfo);
    FUN_044b1d20(uVar1,uVar4,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                 ,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 400) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 400,uVar1);
  }
  FUN_03eba484();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<RenderGraph>_TypeInfo)
    ;
    FUN_044b1830(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x198) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x198,uVar1);
  }
  FUN_03eb97b4();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<PlayerLoopSystem>_TypeInfo);
    FUN_044b1e5c(uVar1,uVar4,
                 *(undefined8 *)OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a0) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x1a0,uVar1);
  }
  FUN_03eba7b8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<Rect>_TypeInfo);
    FUN_044b196c(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1a8) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x1a8,uVar1);
  }
  FUN_03eb9ae8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<SerializedCommand>_TypeInfo);
    FUN_044b879c(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b0) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x1b0,uVar1);
  }
  FUN_03eeb6c8();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<ProductInfoHeaderValue>_TypeInfo);
    FUN_044b91bc(uVar1,uVar4,*(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1b8) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x1b8,uVar1);
  }
  FUN_03eecd34();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)System_Collections_Generic_List<SpriteGlyph>_TypeInfo)
    ;
    FUN_044b92f8(uVar1,uVar4,*(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c0) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x1c0,uVar1);
  }
  FUN_03eed068();
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Collections_Generic_List<RenderGraphPass>_TypeInfo);
    FUN_044b9434(uVar1,uVar4,
                 *(undefined8 *)
                  OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar3 + 0x1c8) = uVar1;
    thunk_FUN_037aeb94(lVar3 + 0x1c8,uVar1);
  }
  FUN_03eed39c();
  return;
}


