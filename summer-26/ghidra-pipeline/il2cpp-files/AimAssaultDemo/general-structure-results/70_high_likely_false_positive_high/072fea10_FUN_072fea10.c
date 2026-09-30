/*
FUNCTION_NAME: FUN_072fea10
ENTRY_POINT: 072fea10
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;strong_file_logging_hits_8;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;functionality_data_collection_or_telemetry_hits_9
*/


void FUN_072fea10(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar13;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  uint uVar14;
  long *plVar15;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000c8;
  
code_r0x072fea10:
  (*(code *)*param_1)(unaff_x27,unaff_x28,param_1[1]);
  if (unaff_x29 == 0) {
    unaff_x29 = thunk_FUN_037788cc(*(undefined8 *)
                                    System_ComponentModel_CollectionChangeEventHandler_TypeInfo);
    FUN_048d0be0(unaff_x29,1,*(undefined8 *)FMODUnity_CodecChannelCount_TypeInfo);
  }
  uVar5 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
  uVar5 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07da5f28,uVar5,0);
  uVar6 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
  uVar7 = thunk_FUN_037788cc(*(undefined8 *)System_Xml_ByteStack_TypeInfo);
  FUN_0732a8ec(uVar7,uVar5,uVar6,0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_056df994(&stack0x00000030,uVar7,unaff_x26,
               *(undefined8 *)System_Runtime_Serialization_CollectionDataNode_TypeInfo);
  if (unaff_x29 != 0) {
    lVar10 = *(long *)(unaff_x29 + 0x10);
    lVar11 = *(long *)CloudsVolumeSettingPass_TypeInfo;
    *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(unaff_x29 + 0x18);
      if (*(uint *)(lVar10 + 0x18) <= uVar1) {
        lVar11 = *(long *)(lVar11 + 0x20);
        lVar10 = unaff_x29;
        goto UnityEngine_XR_Interaction_Toolkit_Locomotion_DelegateXRBodyTransformation__Apply;
      }
      lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x29 + 0x18) = uVar1 + 1;
      do {
        *(undefined8 *)(lVar10 + 0x20) = in_stack_00000030;
        *(undefined8 *)(lVar10 + 0x28) = in_stack_00000038;
        thunk_FUN_037aeb94((undefined8 *)(lVar10 + 0x20),0);
LAB_072feb58:
        lVar10 = *(long *)(unaff_x19 + 0xe0);
        uVar5 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        if (lVar10 == 0) break;
        FUN_049cec78(lVar10,unaff_w24,uVar5,*(undefined8 *)PTR_DAT_07dd7c30);
        do {
          unaff_w24 = unaff_w24 + 1;
          if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w24) {
            bVar4 = in_stack_00000018 == 0;
            if (in_stack_00000018 != 0) {
              FUN_048d1e64(&stack0x00000030,in_stack_00000018,
                           *(undefined8 *)System_Globalization_CodePageDataItem_TypeInfo);
              puVar3 = System_Net_CloseExState_TypeInfo;
              puVar2 = UnityEngine_Rendering_Universal_ClipperException_TypeInfo;
              in_stack_00000098 = in_stack_00000038;
              in_stack_00000090 = in_stack_00000030;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              goto LAB_072febdc;
            }
            bVar4 = true;
            goto LAB_072fed3c;
          }
          if (*(uint *)(unaff_x22 + 0x18) <= unaff_w24) goto LAB_072fee9c;
          if (*(long *)(unaff_x19 + 0xe0) == 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
          ;
          unaff_x25 = *(long **)(unaff_x22 + (long)(int)unaff_w24 * 8 + 0x20);
          uVar5 = FUN_049cec24(*(long *)(unaff_x19 + 0xe0),unaff_w24,*unaff_x20);
          if (unaff_x25 == (long *)0x0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
          ;
          uVar6 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
          uVar8 = FUN_060bf954(uVar6,uVar5,0);
        } while ((uVar8 & 1) == 0);
        plVar13 = *(long **)(unaff_x19 + 0x40);
        uVar6 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07d8b768,uVar5,0);
        if (plVar13 == (long *)0x0) break;
        lVar10 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d99f58) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_072fe3e4;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_0377596c(plVar13,*(long *)PTR_DAT_07d99f58,2);
LAB_072fe3e4:
        uVar8 = (*(code *)*puVar9)(plVar13,uVar6,&stack0x000000c8,puVar9[1]);
        if ((uVar8 & 1) == 0) {
          plVar13 = *(long **)(unaff_x19 + 0x48);
          uVar5 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07da5f28,uVar5,0);
          if (plVar13 == (long *)0x0) break;
          lVar10 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)UnityEngine_ProBuilder_Bounds2D_TypeInfo) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_072fe5fc;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_0377596c(plVar13,*(long *)UnityEngine_ProBuilder_Bounds2D_TypeInfo,2);
LAB_072fe5fc:
          uVar8 = (*(code *)*puVar9)(plVar13,uVar5,&stack0x000000b8,puVar9[1]);
          if ((uVar8 & 1) != 0) {
            if (in_stack_000000b8 == (long *)0x0) break;
            uVar5 = (**(code **)(*in_stack_000000b8 + 0x298))
                              (in_stack_000000b8,*(undefined8 *)(*in_stack_000000b8 + 0x2a0));
            lVar10 = *unaff_x21;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar10);
              lVar10 = *unaff_x21;
            }
            lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
            if (lVar11 == 0) {
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar10);
                lVar10 = *unaff_x21;
              }
              uVar6 = **(undefined8 **)(lVar10 + 0xb8);
              lVar11 = thunk_FUN_037788cc(*(undefined8 *)
                                           CustomWebSocketSharp_CloseEventArgs_TypeInfo);
              FUN_044a4918(lVar11,uVar6,
                           *(undefined8 *)
                            System_Runtime_Serialization_CollectionDataContractAttribute_TypeInfo,0)
              ;
              plVar13 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
              *plVar13 = lVar11;
              thunk_FUN_037aeb94(plVar13,lVar11);
            }
            uVar5 = FUN_03f6a6a8(uVar5,lVar11,
                                 *(undefined8 *)System_Runtime_Remoting_ClientIdentity_TypeInfo);
            unaff_x26 = FUN_03f756d8(uVar5,*(undefined8 *)
                                            CustomWebSocketSharp_Net_ClientSslConfiguration_TypeInfo
                                    );
            if (unaff_x26 == 0) break;
            uVar1 = *(uint *)(unaff_x26 + 0x18);
            if ((int)uVar1 < 1) goto LAB_072fe73c;
            uVar14 = 0;
            goto LAB_072fe704;
          }
          goto LAB_072feb58;
        }
        if (in_stack_000000c8 == (long *)0x0) break;
        uVar5 = (**(code **)(*in_stack_000000c8 + 0x298))
                          (in_stack_000000c8,*(undefined8 *)(*in_stack_000000c8 + 0x2a0));
        lVar10 = *unaff_x21;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar10);
          lVar10 = *unaff_x21;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
        if (lVar11 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar10);
            lVar10 = *unaff_x21;
          }
          uVar6 = **(undefined8 **)(lVar10 + 0xb8);
          lVar11 = thunk_FUN_037788cc(*(undefined8 *)
                                       StrikerLink_ThirdParty_WebSocketSharp_CloseEventArgs_TypeInfo
                                     );
          FUN_044a4918(lVar11,uVar6,
                       *(undefined8 *)System_Runtime_Serialization_CollectionDataContract_TypeInfo,0
                      );
          plVar13 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
          *plVar13 = lVar11;
          thunk_FUN_037aeb94(plVar13,lVar11);
        }
        uVar5 = FUN_03f6a6a8(uVar5,lVar11,
                             *(undefined8 *)Netcode_Extensions_ClientNetworkAnimator_TypeInfo);
        lVar10 = FUN_03f756d8(uVar5,*(undefined8 *)
                                     StrikerLink_ThirdParty_WebSocketSharp_Net_ClientSslConfiguration_TypeInfo
                             );
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) goto LAB_072fee9c;
            plVar13 = *(long **)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
            if (plVar13 == (long *)0x0)
            goto 
            UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
            ;
            (**(code **)(*plVar13 + 0x328))
                      (plVar13,in_stack_000000c8,*(undefined8 *)(*plVar13 + 0x330));
            uVar1 = *(uint *)(lVar10 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar1);
        }
        plVar13 = in_stack_000000c8;
        plVar15 = *(long **)(unaff_x19 + 0x40);
        if (plVar15 == (long *)0x0) break;
        lVar11 = *plVar15;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Net_CloseExState_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 6) * 0x10 + 0x138);
              goto LAB_072fe7a0;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_0377596c(plVar15,*(long *)System_Net_CloseExState_TypeInfo,6);
LAB_072fe7a0:
        (*(code *)*puVar9)(plVar15,plVar13,puVar9[1]);
        if (in_stack_00000018 == 0) {
          in_stack_00000018 =
               thunk_FUN_037788cc(*(undefined8 *)
                                   UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo);
          FUN_048d0be0(in_stack_00000018,1,
                       *(undefined8 *)System_Runtime_Serialization_CodeTypeReference_TypeInfo);
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        uVar5 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07d8b768,uVar5,0);
        uVar6 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
        uVar7 = thunk_FUN_037788cc(*(undefined8 *)System_ByteMatcher_TypeInfo);
        FUN_07328ef0(uVar7,uVar5,uVar6,0);
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_056df994(&stack0x00000030,uVar7,lVar10,
                     *(undefined8 *)UnityEngine_UIElements_CollectionVirtualizationMethod_TypeInfo);
        if (in_stack_00000018 == 0) break;
        lVar10 = *(long *)(in_stack_00000018 + 0x10);
        lVar11 = *(long *)System_Linq_Expressions_Interpreter_CoalescingBranchInstruction_TypeInfo;
        *(int *)(in_stack_00000018 + 0x1c) = *(int *)(in_stack_00000018 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(in_stack_00000018 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
          *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar10 + 0x20);
          *puVar9 = in_stack_00000030;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000038;
          thunk_FUN_037aeb94(puVar9,0);
        }
        else {
          FUN_048d13f0(in_stack_00000018,in_stack_00000030,in_stack_00000038,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
        uVar8 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                          (*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],&stack0x000000c0,
                           *(undefined8 *)PTR_DAT_07db6e18);
        unaff_x22 = in_stack_00000020;
        if ((uVar8 & 1) == 0) goto LAB_072feb58;
        if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
        FUN_05b10be4(*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],
                     *(undefined8 *)PTR_DAT_07db0410);
        if (unaff_x23 == 0) {
          unaff_x23 = thunk_FUN_037788cc(*(undefined8 *)
                                          System_ComponentModel_CollectionChangeEventArgs_TypeInfo);
          FUN_048d0be0(unaff_x23,1,
                       *(undefined8 *)Mono_Globalization_Unicode_CodePointIndexer_TypeInfo);
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        uVar5 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07d8b768,uVar5,0);
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_056df994(&stack0x00000030,uVar5,in_stack_000000c0,
                     *(undefined8 *)Unity_XR_CoreUtils_CollectionExtensions_TypeInfo);
        if (unaff_x23 == 0) break;
        lVar10 = *(long *)(unaff_x23 + 0x10);
        lVar11 = *(long *)System_Linq_Expressions_CoalesceConversionBinaryExpression_TypeInfo;
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        if (*(uint *)(lVar10 + 0x18) <= uVar1) {
          lVar11 = *(long *)(lVar11 + 0x20);
          lVar10 = unaff_x23;
UnityEngine_XR_Interaction_Toolkit_Locomotion_DelegateXRBodyTransformation__Apply:
          FUN_048d13f0(lVar10,in_stack_00000030,in_stack_00000038,
                       *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
          goto LAB_072feb58;
        }
        lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      } while( true );
    }
  }
UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_072febdc:
  uVar8 = FUN_05d36c68(&stack0x00000090,*(undefined8 *)puVar2);
  lVar10 = in_stack_000000a8;
  uVar5 = in_stack_000000a0;
  if ((uVar8 & 1) == 0) {
    FUN_05d36c64(&stack0x00000090,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettings_TypeInfo);
    if (unaff_x23 != 0) {
      FUN_048d1e64(&stack0x00000030,unaff_x23,
                   *(undefined8 *)System_Xml_Serialization_CodeIdentifier_TypeInfo);
      puVar3 = UnityEngine_Rendering_Universal_ClipperOffset_TypeInfo;
      puVar2 = PTR_DAT_07db0418;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      while (uVar8 = FUN_05d36c68(&stack0x00000070,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_05b0f6ec(*(long *)(unaff_x19 + 0x68),in_stack_00000080,in_stack_00000088,
                     *(undefined8 *)puVar2);
      }
      FUN_05d36c64(&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettingsDatumProperty_TypeInfo
                  );
    }
LAB_072fed3c:
    if (unaff_x29 == 0) {
      if (bVar4) {
        return;
      }
    }
    else {
      FUN_048d1e64(&stack0x00000030,unaff_x29,
                   *(undefined8 *)System_Security_CodeAccessPermission_TypeInfo);
      puVar3 = SteamAudio_ClosestHitCallback_TypeInfo;
      puVar2 = UnityEngine_Rendering_Universal_Clipper_TypeInfo;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      while (uVar8 = FUN_05d36c68(&stack0x00000050,*(undefined8 *)puVar2),
            lVar10 = in_stack_00000068, uVar5 = in_stack_00000060, (uVar8 & 1) != 0) {
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar11 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyYawRotation__set_angleDelta;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar3,2);
UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyYawRotation__set_angleDelta:
        (*(code *)*puVar9)(plVar13,uVar5,puVar9[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            plVar13 = *(long **)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            (**(code **)(*plVar13 + 0x308))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x310));
            uVar1 = *(uint *)(lVar10 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar1);
        }
      }
      FUN_05d36c64(&stack0x00000050,*(undefined8 *)Unity_Netcode_ClientsAndHostRpcTarget_TypeInfo);
    }
    FUN_0732d5f8();
    return;
  }
  plVar13 = *(long **)(unaff_x19 + 0x40);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar11 = *plVar13;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
        goto LAB_072fec48;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar3,2);
LAB_072fec48:
  (*(code *)*puVar9)(plVar13,uVar5,puVar9[1]);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar1 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar1) {
    uVar14 = 0;
    do {
      if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar13 = *(long **)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*plVar13 + 0x308))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x310));
      uVar1 = *(uint *)(lVar10 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar1);
  }
  goto LAB_072febdc;
  while( true ) {
    (**(code **)(*plVar13 + 0x328))(plVar13,in_stack_000000b8,*(undefined8 *)(*plVar13 + 0x330));
    uVar1 = *(uint *)(unaff_x26 + 0x18);
    uVar14 = uVar14 + 1;
    if ((int)uVar1 <= (int)uVar14) break;
LAB_072fe704:
    if (uVar1 <= uVar14) {
LAB_072fee9c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar13 = *(long **)(unaff_x26 + (long)(int)uVar14 * 8 + 0x20);
    if (plVar13 == (long *)0x0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection;
  }
LAB_072fe73c:
  unaff_x28 = in_stack_000000b8;
  unaff_x27 = *(long **)(unaff_x19 + 0x48);
  if (unaff_x27 == (long *)0x0)
  goto UnityEngine_XR_Interaction_Toolkit_Locomotion_XRCameraForwardXZAlignment__set_targetDirection
  ;
  lVar10 = *unaff_x27;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)SteamAudio_ClosestHitCallback_TypeInfo) {
        param_1 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
        goto code_r0x072fea10;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar8 != 0);
  }
  param_1 = (undefined8 *)FUN_0377596c(unaff_x27,*(long *)SteamAudio_ClosestHitCallback_TypeInfo,6);
  goto code_r0x072fea10;
}


