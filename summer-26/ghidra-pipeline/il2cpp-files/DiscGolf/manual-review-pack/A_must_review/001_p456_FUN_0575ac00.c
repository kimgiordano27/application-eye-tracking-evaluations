/*
FUNCTION_NAME: FUN_0575ac00
ENTRY_POINT: 0575ac00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 308
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_0575ac00(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong *puVar18;
  int *piVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 local_9f0;
  undefined4 uStack_9e8;
  ulong local_9cc;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  uint uStack_9bc;
  undefined8 uStack_9b8;
  ulong local_9b0;
  uint local_9a8;
  undefined8 local_9a4;
  undefined8 local_99c;
  undefined4 local_994;
  ulong local_990;
  ulong *local_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined4 local_968;
  int iStack_964;
  ulong local_960;
  undefined4 uStack_958;
  undefined4 uStack_954;
  uint uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  ulong local_940;
  ulong uStack_938;
  ulong local_930;
  ulong local_920;
  ulong *puStack_918;
  long *local_910;
  undefined8 local_900;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 local_8f0;
  undefined4 uStack_8ec;
  int local_8e8;
  ulong local_8e0;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  uint local_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  uint uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 local_898;
  int local_894;
  undefined1 auStack_490 [8];
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 auStack_46c [1028];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_06dbef5c & 1) == 0) {
    FUN_02d965b8(System_Linq_Expressions_Compiler_DelegateHelpers_TypeInfo);
    FUN_02d965b8(System_ComponentModel_DelegatingTypeDescriptionProvider_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Models_Data_Player_DeleteAllOptions_TypeInfo);
    FUN_02d965b8(Unity_Services_Matchmaker_Backfill_DeleteBackfillTicketRequest_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Models_DeleteFile400OneOf_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Models_DeleteItem400OneOf_TypeInfo);
                    /* try { // try from 0575ac84 to 0585ad9f has its CatchHandler @ 0575ac84
                       catch() { ... } // from try @ 0575ac84 with catch @ 0575ac84
                       catch() { ... } // from try @ 0575ae2c with catch @ 0575ac84
                       catch() { ... } // from try @ 0575b0a8 with catch @ 0575ac84
                       catch() { ... } // from try @ 0575b12c with catch @ 0575ac84 */
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Models_DeleteItems400OneOf_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Data_DeleteItemsRequest_TypeInfo);
    FUN_02d965b8(Unity_Services_Lobbies_Lobby_DeleteLobbyRequest_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Data_DeletePublicItemsRequest_TypeInfo);
    FUN_02d965b8(System_Data_DeletedRowInaccessibleException_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Controls_DeltaControl_TypeInfo);
    FUN_02d965b8(Mono_DependencyInjector_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Internal_DependencyTree_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Internal_DependencyTreeComponentHashException_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Internal_DependencyTreePackageHashException_TypeInfo);
    FUN_02d965b8(Unity_Services_Core_Internal_DependencyTreeSortFailedException_TypeInfo);
    FUN_02d965b8(Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo);
    FUN_02d965b8(Meta_XR_EnvironmentDepth_DepthProviderNotSupported_TypeInfo);
    FUN_02d965b8(UnityEngine_Rendering_DepthState_TypeInfo);
    FUN_02d965b8(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    FUN_02d965b8(System_ComponentModel_DescriptionAttribute_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_DeserializationEventHandler_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Http_DeserializationException_TypeInfo);
    FUN_02d965b8(Unity_Services_Matchmaker_Http_DeserializationException_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Http_DeserializationSettings_TypeInfo);
    FUN_02d965b8(Unity_Services_Matchmaker_Http_DeserializationSettings_TypeInfo);
    FUN_02d965b8(System_ComponentModel_DesignOnlyAttribute_TypeInfo);
    FUN_02d965b8(System_ComponentModel_DesignTimeVisibleAttribute_TypeInfo);
    FUN_02d965b8(System_ComponentModel_DesignerCategoryAttribute_TypeInfo);
    FUN_02d965b8(System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_Destination_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_DestinationList_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00f68);
    FUN_02d965b8(PTR_DAT_06a00f70);
    FUN_02d965b8(UnityEngine_UIElements_DetachFromPanelEvent_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_AchievementUpdate_TypeInfo);
    FUN_02d965b8(System_Xml_NameTable_Entry___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson___TypeInfo);
    FUN_02d965b8(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_UIR_DetachedAllocator_TypeInfo);
    FUN_02d965b8(UnityEngine_DetailPrototype_TypeInfo);
    FUN_02d965b8(Unity_XR_Oculus_Development_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_TypeInfo);
    FUN_02d965b8(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_DeviceBasedSnapTurnProvider_TypeInfo);
    DAT_06dbef5c = 1;
  }
  puVar7 = Unity_Services_Matchmaker_Backfill_DeleteBackfillTicketRequest_TypeInfo;
  puVar6 = System_ComponentModel_DelegatingTypeDescriptionProvider_TypeInfo;
  puVar4 = PTR_DAT_06a00f68;
  memset(auStack_490,0,0x428);
  local_900 = 0;
  uStack_8f8 = 0;
  uStack_8f4 = 0;
  local_8e8 = 0;
  local_8f0 = 0;
  uStack_8ec = 0;
  local_920 = 0;
  puStack_918 = (ulong *)0x0;
  local_910 = (long *)0x0;
  local_940 = 0;
  uStack_938 = 0;
  local_930 = 0;
  uStack_958 = 0;
  uStack_954 = 0;
  local_960 = 0;
  uStack_948 = 0;
  uStack_944 = 0;
  uStack_950 = 0;
  uStack_94c = 0;
LAB_0575aecc:
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (*(int *)(*(long *)PTR_DAT_06a00f70 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar11 = FUN_0577d904(*(long *)(*(long *)puVar4 + 0xb8) + 0x1a0,0);
  if ((uVar11 & 1) == 0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_0575bf90;
  }
  lVar12 = *(long *)puVar4;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar12 = *(long *)puVar4;
  }
  lVar17 = *(long *)(lVar12 + 0xb8);
  uVar2 = *(uint *)(lVar17 + 0x1a0);
  if ((int)uVar2 < 0x179) {
    if ((int)uVar2 < 0x3b) {
      if (0x34 < (int)uVar2) {
        if ((int)uVar2 < 0x38) {
          if (uVar2 != 0x35) {
            if (uVar2 == 0x36) {
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
              }
              FUN_03732ea8(&local_8c0,*(undefined8 *)(lVar17 + 0x1a8),
                           *(undefined8 *)Mono_DependencyInjector_TypeInfo);
              uVar10 = uStack_8a4;
              uVar11 = local_8c0;
              uVar2 = (uint)uStack_8b8;
              auVar22._8_4_ = (uint)uStack_8b8;
              auVar22._0_8_ = local_8c0;
              uVar16 = CONCAT44(uStack_8b0,uStack_8b8._4_4_);
              uVar1 = CONCAT44(uStack_8a8,uStack_8ac);
              if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              local_9b0 = uVar11;
              local_9a8 = uVar2;
              local_994 = uVar10;
              local_9a4 = uVar16;
              local_99c = uVar1;
              FUN_056fdfac(&local_9b0,0);
              lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
              if (lVar12 != 0) {
                (**(code **)(lVar12 + 0x18))
                          (*(undefined8 *)(lVar12 + 0x40),uVar11,~uVar2 >> 0x1f,uVar16,uVar1,uVar10,
                           *(undefined8 *)(lVar12 + 0x28));
              }
              uVar16 = *(undefined8 *)UnityEngine_UIElements_UIR_DetachedAllocator_TypeInfo;
              goto LAB_0575bb5c;
            }
            goto LAB_0575b654;
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar12 = *(long *)puVar4;
            lVar17 = *(long *)(lVar12 + 0xb8);
          }
          if (*(long *)(lVar17 + 0xb8) != 0) {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
            }
            FUN_03733520(&local_8c0,*(undefined8 *)(lVar17 + 0x1a8),
                         *(undefined8 *)
                          Unity_Services_Core_Internal_DependencyTreeSortFailedException_TypeInfo);
            uVar2 = uStack_8b0;
            uVar11 = local_8c0;
            uVar16 = CONCAT44(uStack_8a8,uStack_8ac);
            uVar1 = CONCAT44(uStack_8a0,uStack_8a4);
            lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
            uVar14 = FUN_057b48c4(uStack_8b8,0);
            if (lVar12 == 0) goto LAB_0575bf58;
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),uVar11,uVar14,~uVar2 >> 0x1f,uVar16,uVar1,
                       *(undefined8 *)(lVar12 + 0x28));
          }
        }
        else if (uVar2 == 0x38) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          auVar20 = FUN_037338a0(*(undefined8 *)(lVar17 + 0x1a8),
                                 *(undefined8 *)
                                  Meta_XR_EnvironmentDepth_DepthProviderNotSupported_TypeInfo);
          auVar21 = FUN_03767208(auVar20._8_8_ & 0xffffffff,
                                 *(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
          FUN_037694f0(auVar20._0_8_,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,
                       *(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
          lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
joined_r0x0575b9cc:
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),auVar20._0_8_,auVar20._8_8_ & 0xffffffff,
                       *(undefined8 *)(lVar12 + 0x28));
          }
        }
        else {
          if (uVar2 == 0x39) {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
            }
            auVar20 = FUN_03733054(*(undefined8 *)(lVar17 + 0x1a8),
                                   *(undefined8 *)
                                    Unity_Services_Core_Internal_DependencyTree_TypeInfo);
            if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_056fdde0(auVar20._0_8_,auVar20._8_8_,0);
            lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
            goto joined_r0x0575b9cc;
          }
          if (uVar2 != 0x3a) goto LAB_0575b654;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          FUN_0376062c(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                       *(undefined8 *)System_ComponentModel_DesignTimeVisibleAttribute_TypeInfo);
          uVar2 = uStack_8b0;
          puVar18 = uStack_8b8;
          if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_056fbe38(puVar18,uVar2,0);
        }
        goto LAB_0575aecc;
      }
      if (0x31 < (int)uVar2) {
        if (uVar2 == 0x32) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          FUN_037336e0(&local_8c0,*(undefined8 *)(lVar17 + 0x1a8),
                       *(undefined8 *)Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo);
          iVar9 = local_894;
          uVar10 = local_898;
          uVar11 = local_8c0;
          uVar2 = (uint)uStack_8b8;
          uVar16 = CONCAT44(uStack_8ac,uStack_8b0);
          uVar1 = CONCAT44(uStack_8a4,uStack_8a8);
          puVar18 = uStack_8b8;
          uVar14 = CONCAT44(uStack_89c,uStack_8a0);
          lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
          if (lVar12 != 0) {
            uVar15 = FUN_057b48c4(uVar16,0);
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),uVar11,~uVar2 >> 0x1f,uVar15,uVar1,uVar14,
                       uVar10,iVar9 != 0,*(undefined8 *)(lVar12 + 0x28));
          }
          FUN_037698e8(uVar11,~uVar2 >> 0x1f,
                       *(undefined8 *)UnityEngine_UIElements_UIR_DetachedAllocator_TypeInfo);
          if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          local_990 = uVar11;
          local_968 = uVar10;
          iStack_964 = iVar9;
          local_988 = puVar18;
          local_980 = uVar16;
          uStack_978 = uVar1;
          FUN_056fccb4(&local_990,0);
        }
        else if (uVar2 == 0x33) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar12 = *(long *)puVar4;
            lVar17 = *(long *)(lVar12 + 0xb8);
          }
          if (*(long *)(lVar17 + 0xa8) != 0) {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
            }
            uVar16 = FUN_0373338c(*(undefined8 *)(lVar17 + 0x1a8),
                                  *(undefined8 *)
                                   Unity_Services_Core_Internal_DependencyTreePackageHashException_TypeInfo
                                 );
            lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
            if (lVar12 == 0) goto LAB_0575bf58;
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),uVar16,*(undefined8 *)(lVar12 + 0x28));
          }
        }
        else {
          if (uVar2 != 0x34) goto LAB_0575b654;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          auVar20 = FUN_037331f0(*(undefined8 *)(lVar17 + 0x1a8),
                                 *(undefined8 *)
                                  Unity_Services_Core_Internal_DependencyTreeComponentHashException_TypeInfo
                                );
          lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),auVar20._0_8_,~auVar20._8_4_ >> 0x1f,
                       *(undefined8 *)(lVar12 + 0x28));
          }
          if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_056fd3b4(auVar20._0_8_,auVar20._8_8_,0);
        }
        goto LAB_0575aecc;
      }
      if (uVar2 == 1) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar12 = *(long *)puVar4;
          lVar17 = *(long *)(lVar12 + 0xb8);
        }
        if (*(long *)(lVar17 + 0x90) != 0) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          FUN_037326a8(*(undefined8 *)(lVar17 + 0x1a8),
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_DeleteItemsRequest_TypeInfo);
          lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
          if (lVar12 == 0) goto LAB_0575bf58;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
        }
        goto LAB_0575aecc;
      }
      if (uVar2 == 0x31) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        FUN_03733d74(&local_8c0,*(undefined8 *)(lVar17 + 0x1a8),
                     *(undefined8 *)System_ComponentModel_DescriptionAttribute_TypeInfo);
        uVar11 = local_8c0;
        puVar5 = PTR_DAT_06a0d0a8;
        uVar2 = (uint)uStack_8b8;
        uVar16 = CONCAT44(uStack_8ac,uStack_8b0);
        uVar1 = CONCAT44(uStack_8a4,uStack_8a8);
        uVar14 = CONCAT44(uStack_89c,uStack_8a0);
        if ((int)(uint)uStack_8b8 < 0) {
          lVar12 = *(long *)PTR_DAT_06a0d0a8;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar12 = *(long *)puVar5;
          }
          puVar18 = *(ulong **)(lVar12 + 0xb8);
          uStack_938 = puVar18[1];
          local_8c0 = *puVar18;
          local_930 = puVar18[2];
        }
        else {
          local_8c0 = 0;
          uStack_8b8._0_4_ = 0;
          uStack_8b8._4_4_ = 0;
          uStack_8b0 = 0;
          uStack_8ac = 0;
          FUN_056f8c08(&local_8c0,uVar16,uVar1,uVar14,0);
          uStack_938 = CONCAT44(uStack_8b8._4_4_,(uint)uStack_8b8);
          local_930 = CONCAT44(uStack_8ac,uStack_8b0);
        }
        uStack_8b0 = (uint)local_930;
        uStack_8ac = (undefined4)(local_930 >> 0x20);
        uStack_8b8._0_4_ = (uint)uStack_938;
        uStack_8b8._4_4_ = (undefined4)(uStack_938 >> 0x20);
        local_940 = local_8c0;
        FUN_03769b6c(uVar11,&local_8c0,*(undefined8 *)UnityEngine_DetailPrototype_TypeInfo);
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar12 = *(long *)puVar4;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x98);
        if (lVar12 != 0) {
          uVar16 = FUN_057b48c4(uVar16,0);
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),uVar11,~uVar2 >> 0x1f,uVar16,uVar1,uVar14,
                     *(undefined8 *)(lVar12 + 0x28));
        }
        goto LAB_0575aecc;
      }
    }
    else if ((int)uVar2 < 0x173) {
      if (0x12d < (int)uVar2) {
        if (uVar2 == 0x12e) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          auVar20 = FUN_03733bd8(*(undefined8 *)(lVar17 + 0x1a8),
                                 *(undefined8 *)
                                  System_Security_Cryptography_DerSequenceReader_TypeInfo);
          uVar16 = auVar20._0_8_;
          if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_056fa374(uVar16,auVar20._8_8_,0);
          auVar20 = FUN_03767208(auVar20._8_8_ & 0xffffffff,
                                 *(undefined8 *)
                                  UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson___TypeInfo
                                );
          puVar13 = (undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo;
        }
        else {
          if (uVar2 != 0x12f) {
            if (uVar2 != 0x172) goto LAB_0575b654;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
            }
            FUN_037607e8(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),
                         2,*(undefined8 *)System_ComponentModel_DesignerCategoryAttribute_TypeInfo);
            FUN_05711608(uStack_8b8,uStack_8b0,CONCAT44(uStack_8a8,uStack_8ac),
                         CONCAT44(uStack_8a0,uStack_8a4),0);
            goto LAB_0575aecc;
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          auVar20 = FUN_03733a3c(*(undefined8 *)(lVar17 + 0x1a8),
                                 *(undefined8 *)UnityEngine_Rendering_DepthState_TypeInfo);
          uVar16 = auVar20._0_8_;
          if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          OVRSkeletonRenderer_SkeletonRendererData__get_ShouldUseSystemGestureMaterial
                    (uVar16,auVar20._8_8_,0);
          auVar20 = FUN_03767208(auVar20._8_8_ & 0xffffffff,
                                 *(undefined8 *)System_Xml_NameTable_Entry___TypeInfo);
          puVar13 = (undefined8 *)Unity_XR_Oculus_Development_TypeInfo;
        }
        FUN_037694f0(uVar16,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*puVar13);
        goto LAB_0575aecc;
      }
      if (uVar2 == 100) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        auVar22 = FUN_037329dc(*(undefined8 *)(lVar17 + 0x1a8),
                               *(undefined8 *)
                                Unity_Services_CloudSave_Internal_Data_DeletePublicItemsRequest_TypeInfo
                              );
        lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
        if (lVar12 != 0) {
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),auVar22._0_8_,~auVar22._8_4_ >> 0x1f,
                     *(undefined8 *)(lVar12 + 0x28));
        }
        uVar16 = *(undefined8 *)UnityEngine_UIElements_UIR_DetachedAllocator_TypeInfo;
LAB_0575bb5c:
        FUN_037698e8(auVar22._0_8_,~auVar22._8_4_ >> 0x1f,uVar16);
        goto LAB_0575aecc;
      }
      if (uVar2 == 300) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        uVar16 = FUN_03732d14(*(undefined8 *)(lVar17 + 0x1a8),
                              *(undefined8 *)UnityEngine_InputSystem_Controls_DeltaControl_TypeInfo)
        ;
        if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_06a0d0a8);
        }
        FUN_056f8884(uVar16,0);
        goto LAB_0575aecc;
      }
      if (uVar2 == 0x12d) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        auVar20 = FUN_03732b78(*(undefined8 *)(lVar17 + 0x1a8),
                               *(undefined8 *)System_Data_DeletedRowInaccessibleException_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_056f8380(auVar20._0_8_,auVar20._8_8_,0);
        goto LAB_0575aecc;
      }
    }
    else {
      if (0x175 < (int)uVar2) {
        if (uVar2 == 0x176) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          FUN_0375fed8(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                       *(undefined8 *)
                        Unity_Services_Matchmaker_Http_DeserializationException_TypeInfo);
          memcpy(auStack_490,&local_8c0,0x428);
          FUN_05711838(local_488,local_480,local_478,local_470,auStack_46c,0);
        }
        else if (uVar2 == 0x177) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          FUN_0375fd1c(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Http_DeserializationException_TypeInfo);
          FUN_05711a20(uStack_8b8,uStack_8b0,0);
        }
        else {
          if (uVar2 != 0x178) goto LAB_0575b654;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          FUN_03760d24(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                       *(undefined8 *)Oculus_Platform_Models_DestinationList_TypeInfo);
          FUN_057117b8(uStack_8b8,uStack_8b0,0);
        }
        goto LAB_0575aecc;
      }
      if (uVar2 == 0x173) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        FUN_037341b4(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                     *(undefined8 *)
                      System_Runtime_Serialization_DeserializationEventHandler_TypeInfo);
        FUN_05711964(uStack_8b8,uStack_8b0,0);
        goto LAB_0575aecc;
      }
      if (uVar2 == 0x174) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        FUN_03760b68(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                     *(undefined8 *)Oculus_Platform_Models_Destination_TypeInfo);
        FUN_057116b8(uStack_8b8,uStack_8b0,0);
        goto LAB_0575aecc;
      }
      if (uVar2 == 0x175) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        FUN_037609ac(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                     *(undefined8 *)
                      System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo);
        FUN_05711738(uStack_8b8,uStack_8b0,0);
        goto LAB_0575aecc;
      }
    }
  }
  else if (uVar2 < 0x1ff) {
    if (uVar2 == 500) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar12 = *(long *)puVar4;
        lVar17 = *(long *)(lVar12 + 0xb8);
      }
      if (*(long *)(lVar17 + 0xe0) != 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        uVar10 = FUN_0373284c(*(undefined8 *)(lVar17 + 0x1a8),
                              *(undefined8 *)
                               Unity_Services_Lobbies_Lobby_DeleteLobbyRequest_TypeInfo);
        lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
        if (lVar12 == 0) goto LAB_0575bf58;
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),uVar10,*(undefined8 *)(lVar12 + 0x28));
      }
      goto LAB_0575aecc;
    }
    if (uVar2 == 0x1fe) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      iVar9 = FUN_03732518(*(undefined8 *)(lVar17 + 0x1a8),
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Models_DeleteItems400OneOf_TypeInfo);
      lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),iVar9,*(undefined8 *)(lVar12 + 0x28));
      }
      *(bool *)(param_1 + 0x10b) = iVar9 == 2;
      goto LAB_0575aecc;
    }
  }
  else {
    if (uVar2 == 0x28a) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      FUN_037600f4(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Http_DeserializationSettings_TypeInfo);
      uVar2 = uStack_8b0;
      puVar18 = uStack_8b8;
      auVar20 = FUN_057da938(uStack_8b8,local_8c0 & 0xffffffff,0);
      FUN_0435be98(&local_8e0,puVar18,uVar2,
                   *(undefined8 *)Oculus_Platform_Models_AchievementUpdate_TypeInfo);
      uStack_8b8._0_4_ = uStack_8d8;
      uStack_8b8._4_4_ = uStack_8d4;
      local_8c0 = local_8e0;
      uStack_8b0 = local_8d0;
      uStack_8ac = uStack_8cc;
      FUN_03769664(auVar20._0_8_,auVar20._8_8_,&local_8c0,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_DeviceBasedSnapTurnProvider_TypeInfo);
      goto LAB_0575aecc;
    }
    if (uVar2 == 0x28b) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      FUN_03760470(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                   *(undefined8 *)System_ComponentModel_DesignOnlyAttribute_TypeInfo);
      uVar2 = uStack_8b0;
      auVar20 = FUN_057da938(uStack_8b8,local_8c0 & 0xffffffff,0);
      auVar21 = FUN_043590f0(uVar2,*(undefined8 *)
                                    UnityEngine_UIElements_DetachFromPanelEvent_TypeInfo);
      FUN_037693b4(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_TypeInfo);
      goto LAB_0575aecc;
    }
    if (uVar2 == 0x488) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      FUN_037602b0(&local_8c0,*(undefined8 *)(lVar17 + 0x1a0),*(undefined8 *)(lVar17 + 0x1a8),2,
                   *(undefined8 *)Unity_Services_Matchmaker_Http_DeserializationSettings_TypeInfo);
      uVar10 = local_8c0._4_4_;
      local_900 = CONCAT44(uStack_8a8,uStack_8ac);
      uStack_8f8 = uStack_8a4;
      lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
      uStack_8ec = local_898;
      local_8e8 = local_894;
      uStack_8f4 = uStack_8a0;
      local_8f0 = uStack_89c;
      if (lVar12 != 0) {
        if (uStack_8b0 == 1) {
          uStack_9e8 = uStack_8a4;
          local_9f0 = local_900;
          FUN_0571224c(&local_9cc,&local_9f0,0);
          uStack_8b8._0_4_ = 0;
          uStack_8b8._4_4_ = 0;
          local_8c0 = 0;
          uStack_8a8 = 0;
          uStack_8a4 = 0;
          uStack_8b0 = 0;
          uStack_8ac = 0;
          uStack_8d8 = uStack_9c4;
          local_8e0 = local_9cc;
          uStack_8cc = (undefined4)uStack_9b8;
          uStack_8c8 = (undefined4)((ulong)uStack_9b8 >> 0x20);
          uStack_8d4 = uStack_9c0;
          local_8d0 = uStack_9bc;
          UnityEngine_UIElements_PointerEventBase<object>__IsTouch
                    (&local_8c0,&local_8e0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Models_DeleteItem400OneOf_TypeInfo);
          uStack_958 = (uint)uStack_8b8;
          uStack_954 = uStack_8b8._4_4_;
          uStack_948 = uStack_8a8;
          uStack_944 = uStack_8a4;
          uStack_950 = uStack_8b0;
          uStack_94c = uStack_8ac;
          local_960 = local_8c0;
        }
        else {
          uStack_958 = 0;
          uStack_954 = 0;
          local_960 = 0;
          uStack_948 = 0;
          uStack_944 = 0;
          uStack_950 = 0;
          uStack_94c = 0;
        }
        uStack_8b8._0_4_ = uStack_958;
        uStack_8b8._4_4_ = uStack_954;
        local_8c0 = local_960;
        uStack_8a8 = uStack_948;
        uStack_8a4 = uStack_944;
        uStack_8b0 = uStack_950;
        uStack_8ac = uStack_94c;
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),uVar10,&local_8c0,*(undefined8 *)(lVar12 + 0x28));
      }
      goto LAB_0575aecc;
    }
  }
LAB_0575b654:
  if (*(long *)(param_1 + 0x128) == 0) {
LAB_0575bf58:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
LAB_0575bf90:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_03c23590(&local_8c0,*(long *)(param_1 + 0x128),
               *(undefined8 *)Unity_Services_CloudSave_Internal_Models_DeleteFile400OneOf_TypeInfo);
  local_910 = (long *)CONCAT44(uStack_8ac,uStack_8b0);
  puStack_918 = uStack_8b8;
  uStack_8b8 = &local_920;
  local_920 = local_8c0;
  local_8c0 = 0;
  while( true ) {
    uVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                       (&local_920,*(undefined8 *)puVar6);
    plVar8 = local_910;
    if ((uVar11 & 1) == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (plVar8 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0575bf90;
    }
    lVar12 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1a0);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1a8);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
          puVar13 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0575b708;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar7,0);
LAB_0575b708:
    (*(code *)*puVar13)(plVar8,uVar16,uVar1,puVar13[1]);
  }
  FUN_05156050(&local_920,*(undefined8 *)System_Linq_Expressions_Compiler_DelegateHelpers_TypeInfo);
  goto LAB_0575aecc;
}


