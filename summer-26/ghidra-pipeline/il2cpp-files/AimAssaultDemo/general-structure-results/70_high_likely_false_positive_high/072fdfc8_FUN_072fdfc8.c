/*
FUNCTION_NAME: FUN_072fdfc8
ENTRY_POINT: 072fdfc8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;strong_file_logging_hits_12;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;functionality_data_collection_or_telemetry_hits_14
*/


void FUN_072fdfc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long local_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_08268cd4 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db0410);
    FUN_0373b518(PTR_DAT_07db6e18);
    FUN_0373b518(PTR_DAT_07db0418);
    FUN_0373b518(System_Runtime_Remoting_ClientIdentity_TypeInfo);
    FUN_0373b518(Netcode_Extensions_ClientNetworkAnimator_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_ClickEvent_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_Net_ClientSslConfiguration_TypeInfo);
    FUN_0373b518(StrikerLink_ThirdParty_WebSocketSharp_Net_ClientSslConfiguration_TypeInfo);
    FUN_0373b518(Unity_Netcode_ClientsAndHostRpcTarget_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettings_TypeInfo);
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettingsDatumProperty_TypeInfo
                );
    FUN_0373b518(UnityEngine_Rendering_Universal_Clipper_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_Universal_ClipperException_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_Universal_ClipperOffset_TypeInfo);
    FUN_0373b518(UnityEngine_UI_ClipperRegistry_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Cloning_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_CloningContext_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_CloseEventArgs_TypeInfo);
    FUN_0373b518(StrikerLink_ThirdParty_WebSocketSharp_CloseEventArgs_TypeInfo);
    FUN_0373b518(System_Net_CloseExState_TypeInfo);
    FUN_0373b518(SteamAudio_ClosestHitCallback_TypeInfo);
    FUN_0373b518(UnityEngine_ProBuilder_Bounds2D_TypeInfo);
    FUN_0373b518(PTR_DAT_07d99f58);
    FUN_0373b518(CloudsVolumeSettingPass_TypeInfo);
    FUN_0373b518(System_Linq_Expressions_CoalesceConversionBinaryExpression_TypeInfo);
    FUN_0373b518(System_Linq_Expressions_Interpreter_CoalescingBranchInstruction_TypeInfo);
    FUN_0373b518(System_Security_CodeAccessPermission_TypeInfo);
    FUN_0373b518(System_Xml_Serialization_CodeIdentifier_TypeInfo);
    FUN_0373b518(System_Globalization_CodePageDataItem_TypeInfo);
    FUN_0373b518(Mono_Globalization_Unicode_CodePointIndexer_TypeInfo);
    FUN_0373b518(System_Runtime_Serialization_CodeTypeReference_TypeInfo);
    FUN_0373b518(FMODUnity_CodecChannelCount_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8de20);
    FUN_0373b518(PTR_DAT_07d8bfc0);
    FUN_0373b518(PTR_DAT_07dd7c30);
    FUN_0373b518(UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo);
    FUN_0373b518(System_ComponentModel_CollectionChangeEventArgs_TypeInfo);
    FUN_0373b518(System_ComponentModel_CollectionChangeEventHandler_TypeInfo);
    FUN_0373b518(PTR_DAT_07d95cc0);
    FUN_0373b518(PTR_DAT_07d95cc8);
    FUN_0373b518(PTR_DAT_07d95cd0);
    FUN_0373b518(System_Runtime_Serialization_CollectionDataContract_TypeInfo);
    FUN_0373b518(System_Runtime_Serialization_CollectionDataContractAttribute_TypeInfo);
    FUN_0373b518(System_Security_Claims_Claim_TypeInfo);
    FUN_0373b518(Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button_TypeInfo);
    FUN_0373b518(System_ByteMatcher_TypeInfo);
    FUN_0373b518(System_Xml_ByteStack_TypeInfo);
    FUN_0373b518(System_Runtime_Serialization_CollectionDataNode_TypeInfo);
    FUN_0373b518(Unity_XR_CoreUtils_CollectionExtensions_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_CollectionVirtualizationMethod_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8b768);
    FUN_0373b518(PTR_DAT_07da5f28);
    DAT_08268cd4 = 1;
  }
  puVar1 = UnityEngine_UIElements_ClickEvent_TypeInfo;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar4 = FUN_072435c0(*(long *)(param_1 + 0x90),0);
    lVar5 = FUN_03f756d8(uVar4,*(undefined8 *)puVar1);
    uVar7 = 0;
    if (*(long *)(param_1 + 0xe0) != 0) {
      local_100 = 0;
      FUN_04e5efe4(&local_100,*(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x18),
                   *(undefined8 *)PTR_DAT_07d95cc8);
      uVar7 = local_100;
    }
    puVar2 = System_Security_Claims_Claim_TypeInfo;
    puVar1 = PTR_DAT_07d8bfc0;
    if (lVar5 != 0) {
      if ((uVar7 & 0xff) != 0) {
        uVar12 = uVar7 >> 0x20;
        iVar11 = (int)(uVar7 >> 0x20);
        if ((iVar11 == *(int *)(lVar5 + 0x18)) && (0 < iVar11)) {
          local_108 = 0;
          lVar24 = 0;
          lVar17 = 0;
          uVar18 = 0;
          do {
            if ((uint)uVar12 <= uVar18) {
LAB_072fee9c:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            if (*(long *)(param_1 + 0xe0) == 0)
            goto 
            UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
            ;
            plVar19 = *(long **)(lVar5 + (long)(int)uVar18 * 8 + 0x20);
            uVar4 = FUN_049cec24(*(long *)(param_1 + 0xe0),uVar18,*(undefined8 *)puVar1);
            if (plVar19 == (long *)0x0)
            goto 
            UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
            ;
            uVar6 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
            uVar7 = FUN_060bf954(uVar6,uVar4,0);
            if ((uVar7 & 1) != 0) {
              plVar21 = *(long **)(param_1 + 0x40);
              uVar6 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07d8b768,uVar4,0);
              if (plVar21 == (long *)0x0)
              goto 
              UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
              ;
              lVar13 = *plVar21;
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar7 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07d99f58) {
                    puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                    goto LAB_072fe3e4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_0377596c(plVar21,*(long *)PTR_DAT_07d99f58,2);
LAB_072fe3e4:
              uVar7 = (*(code *)*puVar8)(plVar21,uVar6,&local_68,puVar8[1]);
              if ((uVar7 & 1) == 0) {
                plVar21 = *(long **)(param_1 + 0x48);
                uVar4 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07da5f28,uVar4,0);
                if (plVar21 == (long *)0x0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                ;
                lVar13 = *plVar21;
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar7 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)UnityEngine_ProBuilder_Bounds2D_TypeInfo
                       ) {
                      puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_072fe5fc;
                    }
                    uVar7 = uVar7 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_0377596c(plVar21,*(long *)UnityEngine_ProBuilder_Bounds2D_TypeInfo,2);
LAB_072fe5fc:
                uVar7 = (*(code *)*puVar8)(plVar21,uVar4,&local_78,puVar8[1]);
                if ((uVar7 & 1) != 0) {
                  if (local_78 == (long *)0x0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  uVar4 = (**(code **)(*local_78 + 0x298))
                                    (local_78,*(undefined8 *)(*local_78 + 0x2a0));
                  lVar13 = *(long *)puVar2;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar13);
                    lVar13 = *(long *)puVar2;
                  }
                  lVar22 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
                  if (lVar22 == 0) {
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar13);
                      lVar13 = *(long *)puVar2;
                    }
                    uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                    lVar22 = thunk_FUN_037788cc(*(undefined8 *)
                                                 CustomWebSocketSharp_CloseEventArgs_TypeInfo);
                    FUN_044a4918(lVar22,uVar6,
                                 *(undefined8 *)
                                  System_Runtime_Serialization_CollectionDataContractAttribute_TypeInfo
                                 ,0);
                    plVar21 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
                    *plVar21 = lVar22;
                    thunk_FUN_037aeb94(plVar21,lVar22);
                  }
                  uVar4 = FUN_03f6a6a8(uVar4,lVar22,
                                       *(undefined8 *)
                                        System_Runtime_Remoting_ClientIdentity_TypeInfo);
                  lVar13 = FUN_03f756d8(uVar4,*(undefined8 *)
                                               CustomWebSocketSharp_Net_ClientSslConfiguration_TypeInfo
                                       );
                  if (lVar13 == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  uVar16 = *(uint *)(lVar13 + 0x18);
                  if (0 < (int)uVar16) {
                    uVar20 = 0;
                    do {
                      if (uVar16 <= uVar20) goto LAB_072fee9c;
                      plVar21 = *(long **)(lVar13 + (long)(int)uVar20 * 8 + 0x20);
                      if (plVar21 == (long *)0x0)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                      ;
                      (**(code **)(*plVar21 + 0x328))
                                (plVar21,local_78,*(undefined8 *)(*plVar21 + 0x330));
                      uVar16 = *(uint *)(lVar13 + 0x18);
                      uVar20 = uVar20 + 1;
                    } while ((int)uVar20 < (int)uVar16);
                  }
                  plVar21 = local_78;
                  plVar23 = *(long **)(param_1 + 0x48);
                  if (plVar23 == (long *)0x0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  lVar22 = *plVar23;
                  uVar7 = (ulong)*(ushort *)(lVar22 + 0x12e);
                  if (uVar7 != 0) {
                    piVar15 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)SteamAudio_ClosestHitCallback_TypeInfo
                         ) {
                        puVar8 = (undefined8 *)(lVar22 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                        goto FUN_072fea10;
                      }
                      uVar7 = uVar7 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar8 = (undefined8 *)
                           FUN_0377596c(plVar23,*(long *)SteamAudio_ClosestHitCallback_TypeInfo,6);
FUN_072fea10:
                  (*(code *)*puVar8)(plVar23,plVar21,puVar8[1]);
                  lVar22 = local_108;
                  if (local_108 == 0) {
                    lVar22 = thunk_FUN_037788cc(*(undefined8 *)
                                                 System_ComponentModel_CollectionChangeEventHandler_TypeInfo
                                               );
                    FUN_048d0be0(lVar22,1,*(undefined8 *)FMODUnity_CodecChannelCount_TypeInfo);
                  }
                  uVar4 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0))
                  ;
                  uVar4 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07da5f28,uVar4,0);
                  uVar6 = (**(code **)(*plVar19 + 0x1e8))(plVar19,*(undefined8 *)(*plVar19 + 0x1f0))
                  ;
                  uVar9 = thunk_FUN_037788cc(*(undefined8 *)System_Xml_ByteStack_TypeInfo);
                  FUN_0732a8ec(uVar9,uVar4,uVar6,0);
                  local_100 = 0;
                  uStack_f8 = 0;
                  FUN_056df994(&local_100,uVar9,lVar13,
                               *(undefined8 *)
                                System_Runtime_Serialization_CollectionDataNode_TypeInfo);
                  if (lVar22 == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  lVar13 = *(long *)(lVar22 + 0x10);
                  lVar14 = *(long *)CloudsVolumeSettingPass_TypeInfo;
                  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  if (lVar13 == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  uVar16 = *(uint *)(lVar22 + 0x18);
                  local_108 = lVar22;
                  if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    lVar13 = *(long *)(lVar14 + 0x20);
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Locomotion_DelegateXRBodyTransformation__Apply
                    ;
                  }
                  lVar13 = lVar13 + (long)(int)uVar16 * 0x10;
                  *(uint *)(lVar22 + 0x18) = uVar16 + 1;
LAB_072feb30:
                  *(ulong *)(lVar13 + 0x20) = local_100;
                  *(undefined8 *)(lVar13 + 0x28) = uStack_f8;
                  thunk_FUN_037aeb94((ulong *)(lVar13 + 0x20),0);
                }
              }
              else {
                if (local_68 == (long *)0x0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                ;
                uVar4 = (**(code **)(*local_68 + 0x298))
                                  (local_68,*(undefined8 *)(*local_68 + 0x2a0));
                lVar13 = *(long *)puVar2;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar13);
                  lVar13 = *(long *)puVar2;
                }
                lVar22 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
                if (lVar22 == 0) {
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar13);
                    lVar13 = *(long *)puVar2;
                  }
                  uVar6 = **(undefined8 **)(lVar13 + 0xb8);
                  lVar22 = thunk_FUN_037788cc(*(undefined8 *)
                                               StrikerLink_ThirdParty_WebSocketSharp_CloseEventArgs_TypeInfo
                                             );
                  FUN_044a4918(lVar22,uVar6,
                               *(undefined8 *)
                                System_Runtime_Serialization_CollectionDataContract_TypeInfo,0);
                  plVar21 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
                  *plVar21 = lVar22;
                  thunk_FUN_037aeb94(plVar21,lVar22);
                }
                uVar4 = FUN_03f6a6a8(uVar4,lVar22,
                                     *(undefined8 *)
                                      Netcode_Extensions_ClientNetworkAnimator_TypeInfo);
                lVar13 = FUN_03f756d8(uVar4,*(undefined8 *)
                                             StrikerLink_ThirdParty_WebSocketSharp_Net_ClientSslConfiguration_TypeInfo
                                     );
                if (lVar13 == 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                ;
                uVar16 = *(uint *)(lVar13 + 0x18);
                if (0 < (int)uVar16) {
                  uVar20 = 0;
                  do {
                    if (uVar16 <= uVar20) goto LAB_072fee9c;
                    plVar21 = *(long **)(lVar13 + (long)(int)uVar20 * 8 + 0x20);
                    if (plVar21 == (long *)0x0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                    ;
                    (**(code **)(*plVar21 + 0x328))
                              (plVar21,local_68,*(undefined8 *)(*plVar21 + 0x330));
                    uVar16 = *(uint *)(lVar13 + 0x18);
                    uVar20 = uVar20 + 1;
                  } while ((int)uVar20 < (int)uVar16);
                }
                plVar21 = local_68;
                plVar23 = *(long **)(param_1 + 0x40);
                if (plVar23 == (long *)0x0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                ;
                lVar22 = *plVar23;
                uVar7 = (ulong)*(ushort *)(lVar22 + 0x12e);
                if (uVar7 != 0) {
                  piVar15 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)System_Net_CloseExState_TypeInfo) {
                      puVar8 = (undefined8 *)(lVar22 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                      goto LAB_072fe7a0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar7 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_0377596c(plVar23,*(long *)System_Net_CloseExState_TypeInfo,6);
LAB_072fe7a0:
                (*(code *)*puVar8)(plVar23,plVar21,puVar8[1]);
                if (lVar24 == 0) {
                  lVar24 = thunk_FUN_037788cc(*(undefined8 *)
                                               UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo
                                             );
                  FUN_048d0be0(lVar24,1,*(undefined8 *)
                                         System_Runtime_Serialization_CodeTypeReference_TypeInfo);
                }
                uVar4 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                uVar4 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07d8b768,uVar4,0);
                uVar6 = (**(code **)(*plVar19 + 0x1e8))(plVar19,*(undefined8 *)(*plVar19 + 0x1f0));
                uVar9 = thunk_FUN_037788cc(*(undefined8 *)System_ByteMatcher_TypeInfo);
                FUN_07328ef0(uVar9,uVar4,uVar6,0);
                local_100 = 0;
                uStack_f8 = 0;
                FUN_056df994(&local_100,uVar9,lVar13,
                             *(undefined8 *)
                              UnityEngine_UIElements_CollectionVirtualizationMethod_TypeInfo);
                if (lVar24 == 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                ;
                lVar13 = *(long *)(lVar24 + 0x10);
                lVar22 = *(long *)
                          System_Linq_Expressions_Interpreter_CoalescingBranchInstruction_TypeInfo;
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar13 == 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                ;
                uVar16 = *(uint *)(lVar24 + 0x18);
                if (uVar16 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)uVar16 * 0x10;
                  *(uint *)(lVar24 + 0x18) = uVar16 + 1;
                  puVar10 = (ulong *)(lVar13 + 0x20);
                  *puVar10 = local_100;
                  *(undefined8 *)(lVar13 + 0x28) = uStack_f8;
                  thunk_FUN_037aeb94(puVar10,0);
                }
                else {
                  FUN_048d13f0(lVar24,local_100,uStack_f8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                if ((local_68 == (long *)0x0) || (*(long *)(param_1 + 0x68) == 0))
                goto 
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                ;
                uVar7 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                                  (*(long *)(param_1 + 0x68),local_68[3],&local_70,
                                   *(undefined8 *)PTR_DAT_07db6e18);
                if ((uVar7 & 1) != 0) {
                  if ((local_68 == (long *)0x0) || (*(long *)(param_1 + 0x68) == 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  FUN_05b10be4(*(long *)(param_1 + 0x68),local_68[3],*(undefined8 *)PTR_DAT_07db0410
                              );
                  lVar22 = lVar17;
                  if (lVar17 == 0) {
                    lVar22 = thunk_FUN_037788cc(*(undefined8 *)
                                                 System_ComponentModel_CollectionChangeEventArgs_TypeInfo
                                               );
                    FUN_048d0be0(lVar22,1,*(undefined8 *)
                                           Mono_Globalization_Unicode_CodePointIndexer_TypeInfo);
                  }
                  uVar4 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0))
                  ;
                  uVar4 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07d8b768,uVar4,0);
                  local_100 = 0;
                  uStack_f8 = 0;
                  FUN_056df994(&local_100,uVar4,local_70,
                               *(undefined8 *)Unity_XR_CoreUtils_CollectionExtensions_TypeInfo);
                  if (lVar22 == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  lVar13 = *(long *)(lVar22 + 0x10);
                  lVar14 = *(long *)
                            System_Linq_Expressions_CoalesceConversionBinaryExpression_TypeInfo;
                  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  if (lVar13 == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
                  ;
                  uVar16 = *(uint *)(lVar22 + 0x18);
                  lVar17 = lVar22;
                  if (uVar16 < *(uint *)(lVar13 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)uVar16 * 0x10;
                    *(uint *)(lVar22 + 0x18) = uVar16 + 1;
                    goto LAB_072feb30;
                  }
                  lVar13 = *(long *)(lVar14 + 0x20);
UnityEngine_XR_Interaction_Toolkit_Locomotion_DelegateXRBodyTransformation__Apply:
                  FUN_048d13f0(lVar22,local_100,uStack_f8,
                               *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x70));
                }
              }
              lVar13 = *(long *)(param_1 + 0xe0);
              uVar4 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
              if (lVar13 == 0)
              goto 
              UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
              ;
              FUN_049cec78(lVar13,uVar18,uVar4,*(undefined8 *)PTR_DAT_07dd7c30);
            }
            uVar12 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)*(uint *)(lVar5 + 0x18));
          bVar3 = lVar24 == 0;
          if (lVar24 == 0) {
            bVar3 = true;
          }
          else {
            FUN_048d1e64(&local_100,lVar24,
                         *(undefined8 *)System_Globalization_CodePageDataItem_TypeInfo);
            puVar2 = System_Net_CloseExState_TypeInfo;
            puVar1 = UnityEngine_Rendering_Universal_ClipperException_TypeInfo;
            uStack_98 = uStack_f8;
            local_a0 = local_100;
            lStack_88 = lStack_e8;
            local_90 = uStack_f0;
            while (uVar7 = FUN_05d36c68(&local_a0,*(undefined8 *)puVar1), lVar5 = lStack_88,
                  uVar4 = local_90, (uVar7 & 1) != 0) {
              plVar19 = *(long **)(param_1 + 0x40);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar24 = *plVar19;
              uVar7 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar7 != 0) {
                piVar15 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar24 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                    goto LAB_072fec48;
                  }
                  uVar7 = uVar7 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_0377596c(plVar19,*(long *)puVar2,2);
LAB_072fec48:
              (*(code *)*puVar8)(plVar19,uVar4,puVar8[1]);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar18 = *(uint *)(lVar5 + 0x18);
              if (0 < (int)uVar18) {
                uVar16 = 0;
                do {
                  if (uVar18 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7bc();
                  }
                  plVar19 = *(long **)(lVar5 + (long)(int)uVar16 * 8 + 0x20);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  (**(code **)(*plVar19 + 0x308))(plVar19,uVar4,*(undefined8 *)(*plVar19 + 0x310));
                  uVar18 = *(uint *)(lVar5 + 0x18);
                  uVar16 = uVar16 + 1;
                } while ((int)uVar16 < (int)uVar18);
              }
            }
            FUN_05d36c64(&local_a0,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettings_TypeInfo
                        );
            if (lVar17 != 0) {
              FUN_048d1e64(&local_100,lVar17,
                           *(undefined8 *)System_Xml_Serialization_CodeIdentifier_TypeInfo);
              puVar2 = UnityEngine_Rendering_Universal_ClipperOffset_TypeInfo;
              puVar1 = PTR_DAT_07db0418;
              uStack_b8 = uStack_f8;
              local_c0 = local_100;
              lStack_a8 = lStack_e8;
              local_b0 = uStack_f0;
              while (uVar7 = FUN_05d36c68(&local_c0,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
                if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                FUN_05b0f6ec(*(long *)(param_1 + 0x68),local_b0,lStack_a8,*(undefined8 *)puVar1);
              }
              FUN_05d36c64(&local_c0,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettingsDatumProperty_TypeInfo
                          );
            }
          }
          if (local_108 == 0) {
            if (bVar3) {
              return;
            }
          }
          else {
            FUN_048d1e64(&local_100,local_108,
                         *(undefined8 *)System_Security_CodeAccessPermission_TypeInfo);
            puVar2 = SteamAudio_ClosestHitCallback_TypeInfo;
            puVar1 = UnityEngine_Rendering_Universal_Clipper_TypeInfo;
            uStack_d8 = uStack_f8;
            local_e0 = local_100;
            lStack_c8 = lStack_e8;
            local_d0 = uStack_f0;
            while (uVar7 = FUN_05d36c68(&local_e0,*(undefined8 *)puVar1), lVar5 = lStack_c8,
                  uVar4 = local_d0, (uVar7 & 1) != 0) {
              plVar19 = *(long **)(param_1 + 0x48);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar17 = *plVar19;
              uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar7 != 0) {
                piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar17 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyYawRotation__set_angleDelta;
                  }
                  uVar7 = uVar7 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar7 != 0);
              }
              puVar8 = (undefined8 *)FUN_0377596c(plVar19,*(long *)puVar2,2);
UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyYawRotation__set_angleDelta:
              (*(code *)*puVar8)(plVar19,uVar4,puVar8[1]);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar18 = *(uint *)(lVar5 + 0x18);
              if (0 < (int)uVar18) {
                uVar16 = 0;
                do {
                  if (uVar18 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7bc();
                  }
                  plVar19 = *(long **)(lVar5 + (long)(int)uVar16 * 8 + 0x20);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  (**(code **)(*plVar19 + 0x308))(plVar19,uVar4,*(undefined8 *)(*plVar19 + 0x310));
                  uVar18 = *(uint *)(lVar5 + 0x18);
                  uVar16 = uVar16 + 1;
                } while ((int)uVar16 < (int)uVar18);
              }
            }
            FUN_05d36c64(&local_e0,*(undefined8 *)Unity_Netcode_ClientsAndHostRpcTarget_TypeInfo);
          }
          FUN_0732d5f8(param_1,0);
        }
      }
      return;
    }
  }
UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


