/*
FUNCTION_NAME: FUN_078129ec
ENTRY_POINT: 078129ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_3;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_078129ec(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar4 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo;
  puVar3 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo;
  puVar2 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo;
  if ((DAT_0898739b & 1) == 0) {
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo);
    FUN_03a8a718(System_EventHandler<KeyEventArg<string>>_TypeInfo);
    FUN_03a8a718(System_EventHandler<QueueItemAddedEventArgs<IChannelTextMessage>>_TypeInfo);
    FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08492700);
    FUN_03a8a718(PTR_DAT_0849b808);
    FUN_03a8a718(PTR_DAT_0849b800);
    FUN_03a8a718(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerEnterHandler>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_HashSet_Enumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_List_Enumerator<KeyValuePair<uint,_RealtimeModel>>_TypeInfo
                );
    FUN_03a8a718(System_EventHandler<QueueItemAddedEventArgs<IDirectedTextMessage>>_TypeInfo);
    FUN_03a8a718(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<short>_TypeInfo);
    FUN_03a8a718(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<int>_TypeInfo);
    FUN_03a8a718(System_EventHandler<QueueItemAddedEventArgs<ITranscribedMessage>>_TypeInfo);
    FUN_03a8a718(System_EventHandler<BindablePropertyChangedEventArgs>_TypeInfo);
    FUN_03a8a718(System_EventHandler<CloseEventArgs>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List_Enumerator<BsonProperty>_TypeInfo);
    DAT_0898739b = 1;
  }
  lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_05f9f7c4(lVar12,*(undefined8 *)puVar3);
  uVar16 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar16 = FUN_0675ff58(uVar16,0);
  puVar11 = System_EventHandler<CloseEventArgs>_TypeInfo;
  puVar10 = System_EventHandler<QueueItemAddedEventArgs<ITranscribedMessage>>_TypeInfo;
  puVar9 = System_EventHandler<QueueItemAddedEventArgs<IChannelTextMessage>>_TypeInfo;
  puVar8 = System_EventHandler<KeyEventArg<string>>_TypeInfo;
  puVar7 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerEnterHandler>_TypeInfo;
  puVar6 = Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<int>_TypeInfo;
  puVar5 = System_Collections_Generic_List_Enumerator<BsonProperty>_TypeInfo;
  puVar3 = 
  System_Collections_Generic_HashSet_Enumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
  ;
  puVar2 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
  if (lVar12 != 0) {
    FUN_05fa0540(lVar12,*(undefined8 *)
                         System_Collections_Generic_List_Enumerator<KeyValuePair<uint,_RealtimeModel>>_TypeInfo
                 ,uVar16,*(undefined8 *)
                          Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo
                );
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar8,0);
    FUN_05fa0540(lVar12,*(undefined8 *)puVar10,uVar16,*(undefined8 *)puVar2);
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar9,0);
    FUN_05fa0540(lVar12,*(undefined8 *)puVar11,uVar16,*(undefined8 *)puVar2);
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar12,*(undefined8 *)puVar5,uVar16,*(undefined8 *)puVar2);
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar4,0);
    FUN_05fa0540(lVar12,*(undefined8 *)puVar6,uVar16,*(undefined8 *)puVar2);
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar8,0);
    FUN_05fa0540(lVar12,*(undefined8 *)
                         System_EventHandler<QueueItemAddedEventArgs<IDirectedTextMessage>>_TypeInfo
                 ,uVar16,*(undefined8 *)puVar2);
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar9,0);
    FUN_05fa0540(lVar12,*(undefined8 *)
                         System_EventHandler<BindablePropertyChangedEventArgs>_TypeInfo,uVar16,
                 *(undefined8 *)puVar2);
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar12,*(undefined8 *)
                         Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<short>_TypeInfo,
                 uVar16,*(undefined8 *)puVar2);
    **(long **)(*(long *)puVar7 + 0xb8) = lVar12;
    thunk_FUN_03afed3c(*(undefined8 *)(*(long *)puVar7 + 0xb8),lVar12);
    lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0849b800);
    FUN_04de7d48(lVar12,*(undefined8 *)PTR_DAT_0849b808);
    uVar16 = FUN_0675ff58(*(undefined8 *)puVar4,0);
    puVar2 = PTR_DAT_08492700;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar15 = *(long *)PTR_DAT_08492700;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0(lVar12,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        uVar16 = FUN_0675ff58(*(undefined8 *)puVar8,0);
        lVar14 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar12,uVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          uVar16 = FUN_0675ff58(*(undefined8 *)puVar9,0);
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar15 = *(long *)puVar2;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
              thunk_FUN_03afed3c();
            }
            else {
              FUN_04de85b0(lVar12,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            uVar16 = FUN_0675ff58(*(undefined8 *)puVar3,0);
            lVar14 = *(long *)(lVar12 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar16;
                thunk_FUN_03afed3c();
              }
              else {
                FUN_04de85b0(lVar12,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
              *plVar13 = lVar12;
              thunk_FUN_03afed3c(plVar13,lVar12);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


