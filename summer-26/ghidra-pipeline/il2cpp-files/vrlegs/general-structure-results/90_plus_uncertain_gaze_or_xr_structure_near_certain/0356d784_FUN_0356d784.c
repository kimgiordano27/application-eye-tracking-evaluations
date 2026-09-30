/*
FUNCTION_NAME: FUN_0356d784
ENTRY_POINT: 0356d784
PROGRAM: vrlegs-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_12
*/


byte FUN_0356d784(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 local_80;
  long local_78;
  uint local_6c;
  uint local_68;
  undefined4 uStack_64;
  
  if ((DAT_0412dfcc & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo)
    ;
    FUN_01ab69ac(Mono_CSharp_Operator_OpType_TypeInfo);
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_GatherEntitiesWithoutFilter_00000A32_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ccd4f0);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo)
    ;
    FUN_01ab69ac(_Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                );
    FUN_01ab69ac(Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo);
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo)
    ;
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Fusion_OrderSorter_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbf7d8);
    FUN_01ab69ac(PTR_DAT_03cc45b0);
    FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_1_TypeInfo)
    ;
    FUN_01ab69ac(
                Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_<>c__DisplayClass3_0_TypeInfo
                );
    FUN_01ab69ac(Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo);
    DAT_0412dfcc = 1;
  }
  puVar5 = Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo;
  local_80 = 0;
  local_78 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0x48) == 0)) {
    iVar13 = *(int *)(param_1 + 0x48);
    uVar23 = FUN_036d3824(param_1,0);
    puVar19 = (undefined8 *)
              Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_<>c__DisplayClass3_0_TypeInfo;
    if (iVar13 != 0) {
      puVar19 = (undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_1_TypeInfo;
    }
    uVar23 = FUN_025bdc88(*(undefined8 *)puVar5,uVar23,*puVar19,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
    }
    FUN_0367b470(uVar23,param_1,0);
    *param_3 = 0;
    param_2 = 0;
LAB_0356d9f4:
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,param_2);
    return 0;
  }
  uVar23 = *(undefined8 *)(param_1 + 0x40);
  uVar12 = FUN_03776950(param_1 + 0x50,0);
  puVar5 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
  }
  iVar13 = FUN_0377715c(uVar23,uVar12,0);
  if (iVar13 != 0) {
    param_2 = FUN_01f70920(param_2,*(undefined8 *)
                                    Unity_Entities_ChunkIterationUtility_GatherEntitiesWithoutFilter_00000A32_PostfixBurstDelegate_var
                          );
    *param_3 = param_2;
    goto LAB_0356d9f4;
  }
  if ((*(long *)(param_1 + 200) == 0) || (*(long *)(param_1 + 0xb8) == 0)) {
    FUN_03568878(param_1);
  }
  plVar26 = (long *)
            UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
  ;
  lVar21 = *(long *)(param_1 + 0x1e8);
  if (lVar21 == 0) goto LAB_0356e280;
  lVar20 = *(long *)
            UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
  ;
  *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
  uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(lVar21 + 0x18) = 0;
  }
  else {
    iVar13 = *(int *)(lVar21 + 0x18);
    *(undefined4 *)(lVar21 + 0x18) = 0;
    if (0 < iVar13) {
      FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar13,0);
    }
  }
  puVar4 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo;
  if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_0356e280;
  FUN_021e4d64(*(long *)(param_1 + 0x1f0),
               *(undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo);
  lVar21 = *(long *)(param_1 + 0x1f8);
  if (lVar21 == 0) goto LAB_0356e280;
  lVar20 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
  *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
  uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(lVar21 + 0x18) = 0;
  }
  else {
    iVar13 = *(int *)(lVar21 + 0x18);
    *(undefined4 *)(lVar21 + 0x18) = 0;
    if (0 < iVar13) {
      FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar13,0);
    }
  }
  if (*(long *)(param_1 + 0x200) == 0) goto LAB_0356e280;
  FUN_021e4d64(*(long *)(param_1 + 0x200),*(undefined8 *)puVar4);
  lVar21 = *(long *)(param_1 + 0x208);
  if (lVar21 == 0) goto LAB_0356e280;
  lVar20 = *plVar26;
  *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
  uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(lVar21 + 0x18) = 0;
  }
  else {
    iVar13 = *(int *)(lVar21 + 0x18);
    *(undefined4 *)(lVar21 + 0x18) = 0;
    if (0 < iVar13) {
      FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar13,0);
    }
  }
  puVar4 = PTR_DAT_03cc4750;
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar16 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    if (uVar16 != 0) {
      bVar3 = 0;
      uVar24 = 0;
      do {
        if (*(long *)(param_1 + 200) == 0) goto LAB_0356e280;
        uVar15 = *(uint *)(param_2 + 0x20 + uVar24 * 4);
        local_68 = uVar15;
        uVar17 = FUN_0219c130(*(long *)(param_1 + 200),&local_68,*(undefined8 *)puVar4);
        if ((uVar17 & 1) == 0) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_037775a0(uVar15,0);
          if (uVar14 == 0) {
            if ((uVar15 == 0x2011) || (uVar15 == 0xad)) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar23 = 0x2d;
LAB_0356dc28:
              uVar14 = FUN_037775a0(uVar23,0);
              if (uVar14 != 0) goto LAB_0356dc38;
            }
            else if (uVar15 == 0xa0) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar23 = 0x20;
              goto LAB_0356dc28;
            }
            if (*(long *)(param_1 + 0x208) == 0) goto LAB_0356e280;
            local_68 = uVar15;
            FUN_01b5f01c(*(long *)(param_1 + 0x208),&local_68,
                         *(undefined8 *)
                          Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                        );
            bVar3 = 1;
          }
          else {
LAB_0356dc38:
            lVar21 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
            FUN_03568160(lVar21,uVar15,uVar14,0);
            if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0356e280;
            local_68 = uVar14;
            uVar17 = FUN_0219c130(*(long *)(param_1 + 0xb8),&local_68,
                                  *(undefined8 *)
                                   System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo
                                 );
            if ((uVar17 & 1) == 0) {
              if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_0356e280;
              local_68 = uVar14;
              uVar17 = FUN_021e5f08(*(long *)(param_1 + 0x1f0),&local_68,
                                    *(undefined8 *)PTR_DAT_03ccd4f0);
              if ((uVar17 & 1) != 0) {
                if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_0356e280;
                local_68 = uVar14;
                FUN_01b5f01c(*(long *)(param_1 + 0x1e8),&local_68,
                             *(undefined8 *)
                              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                            );
              }
              if (*(long *)(param_1 + 0x200) == 0) goto LAB_0356e280;
              local_68 = uVar15;
              uVar17 = FUN_021e5f08(*(long *)(param_1 + 0x200),&local_68,
                                    *(undefined8 *)PTR_DAT_03ccd4f0);
              if ((uVar17 & 1) != 0) {
                if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_0356e280;
                FUN_01b5f01c(*(long *)(param_1 + 0x1f8),lVar21,
                             *(undefined8 *)
                              _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                            );
              }
            }
            else {
              if ((*(long *)(param_1 + 0xb8) == 0) ||
                 (local_6c = uVar14,
                 FUN_0219b634(*(long *)(param_1 + 0xb8),&local_6c,&local_68,
                              *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo), lVar21 == 0))
              goto LAB_0356e280;
              *(ulong *)(lVar21 + 0x20) = CONCAT44(uStack_64,local_68);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              *(long *)(lVar21 + 0x18) = param_1;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((long *)(lVar21 + 0x18),param_1);
              if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0356e280;
              FUN_01b5f01c(*(long *)(param_1 + 0xc0),lVar21,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
              if (*(long *)(param_1 + 200) == 0) goto LAB_0356e280;
              local_68 = uVar15;
              FUN_0219b9a4(*(long *)(param_1 + 200),&local_68,lVar21,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
            }
          }
        }
        plVar26 = (long *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
        ;
        if (uVar16 - 1 == uVar24) goto LAB_0356dde8;
        uVar24 = uVar24 + 1;
      } while (uVar24 < *(uint *)(param_2 + 0x18));
    }
    goto LAB_0356e284;
  }
  bVar3 = 0;
LAB_0356dde8:
  if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_0356e280;
  if (*(int *)(*(long *)(param_1 + 0x1e8) + 0x18) == 0) {
    *param_3 = param_2;
    goto LAB_0356d9f4;
  }
  lVar21 = *(long *)(param_1 + 0xd8);
  if (lVar21 == 0) goto LAB_0356e280;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356e284;
  plVar18 = *(long **)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
  if (plVar18 == (long *)0x0) goto LAB_0356e280;
  iVar13 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
  if (iVar13 == 0) {
LAB_0356de60:
    lVar21 = *(long *)(param_1 + 0xd8);
    if (lVar21 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356e284;
    lVar21 = *(long *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (lVar21 == 0) goto LAB_0356e280;
    UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
              (lVar21,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0);
    lVar21 = *(long *)(param_1 + 0xd8);
    if (lVar21 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356e284;
    uVar23 = *(undefined8 *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03778c94(uVar23,0);
  }
  else {
    lVar21 = *(long *)(param_1 + 0xd8);
    if (lVar21 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356e284;
    plVar18 = *(long **)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (plVar18 == (long *)0x0) goto LAB_0356e280;
    iVar13 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
    if (iVar13 == 0) goto LAB_0356de60;
  }
  lVar21 = *(long *)(param_1 + 0xd8);
  if (lVar21 != 0) {
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) {
LAB_0356e284:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar22 = *(undefined8 *)(param_1 + 0x1e8);
    uVar12 = *(undefined4 *)(param_1 + 0x110);
    uVar23 = *(undefined8 *)(param_1 + 0xe8);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0x114);
    uVar25 = *(undefined8 *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar11 = FUN_03777f70(uVar22,uVar12,0,uVar1,uVar23,uVar2,uVar25,&local_78,0);
    puVar6 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
    puVar4 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
    puVar5 = 
    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
    ;
    if (local_78 != 0) {
      lVar21 = 0;
      do {
        if ((int)*(uint *)(local_78 + 0x18) <= (int)(uint)lVar21) {
LAB_0356e010:
          lVar21 = *(long *)(param_1 + 0x1e8);
          if (lVar21 != 0) {
            lVar20 = *plVar26;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200))
            ;
            if ((uVar16 & 1) == 0) {
              *(undefined4 *)(lVar21 + 0x18) = 0;
            }
            else {
              iVar13 = *(int *)(lVar21 + 0x18);
              *(undefined4 *)(lVar21 + 0x18) = 0;
              if (0 < iVar13) {
                FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar13,0);
              }
            }
            puVar9 = 
            Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo;
            puVar8 = 
            Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo;
            puVar7 = System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo;
            puVar6 = 
            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
            ;
            puVar4 = PTR_DAT_03cc45b0;
            lVar21 = *(long *)(param_1 + 0x1f8);
            if (lVar21 != 0) {
              iVar13 = 0;
              goto LAB_0356e0a8;
            }
          }
          break;
        }
        if (*(uint *)(local_78 + 0x18) <= (uint)lVar21) goto LAB_0356e284;
        lVar20 = *(long *)(local_78 + lVar21 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_0356e010;
        uVar15 = FUN_03776e5c(lVar20,0);
        FUN_03776ec0(lVar20,*(undefined4 *)(param_1 + 0xe0),0);
        if (*(long *)(param_1 + 0xb0) == 0) break;
        FUN_01b5f01c(*(long *)(param_1 + 0xb0),lVar20,*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0xb8) == 0) break;
        local_68 = uVar15;
        FUN_0219b9a4(*(long *)(param_1 + 0xb8),&local_68,lVar20,*(undefined8 *)puVar6);
        if (*(long *)(param_1 + 0x1e0) == 0) break;
        local_68 = uVar15;
        FUN_01b5f01c(*(long *)(param_1 + 0x1e0),&local_68,*(undefined8 *)puVar5);
        if (*(long *)(param_1 + 0x1d8) == 0) break;
        local_68 = uVar15;
        FUN_01b5f01c(*(long *)(param_1 + 0x1d8),&local_68,*(undefined8 *)puVar5);
        lVar21 = lVar21 + 1;
      } while (local_78 != 0);
    }
  }
LAB_0356e280:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0356e0a8:
  if (iVar13 < *(int *)(lVar21 + 0x18)) {
    FUN_02215a88(lVar21,iVar13,&local_68,*(undefined8 *)puVar4);
    lVar21 = CONCAT44(uStack_64,local_68);
    if ((lVar21 == 0) || (*(long *)(param_1 + 0xb8) == 0)) goto LAB_0356e280;
    local_68 = *(uint *)(lVar21 + 0x28);
    uVar16 = FUN_0219f8b8(*(long *)(param_1 + 0xb8),&local_68,&local_80,*(undefined8 *)puVar8);
    if ((uVar16 & 1) == 0) {
      if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_0356e280;
      local_68 = *(uint *)(lVar21 + 0x28);
      FUN_01b5f01c(*(long *)(param_1 + 0x1e8),&local_68,*(undefined8 *)puVar5);
    }
    else {
      *(undefined8 *)(lVar21 + 0x20) = local_80;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(long *)(lVar21 + 0x18) = param_1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar21 + 0x18),param_1);
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0356e280;
      FUN_01b5f01c(*(long *)(param_1 + 0xc0),lVar21,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 200) == 0) goto LAB_0356e280;
      local_68 = *(uint *)(lVar21 + 0x14);
      FUN_0219b9a4(*(long *)(param_1 + 200),&local_68,lVar21,*(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_0356e280;
      FUN_022190f4(*(long *)(param_1 + 0x1f8),iVar13,*(undefined8 *)puVar9);
      iVar13 = iVar13 + -1;
    }
    lVar21 = *(long *)(param_1 + 0x1f8);
    iVar13 = iVar13 + 1;
    if (lVar21 == 0) goto LAB_0356e280;
    goto LAB_0356e0a8;
  }
  bVar10 = *(char *)(param_1 + 0xe4) != '\0';
  if ((bVar11 & 1) == 0 && bVar10) {
    do {
      uVar16 = FUN_0356e288(param_1);
    } while ((uVar16 & 1) == 0);
    bVar11 = 1;
  }
  else {
    bVar11 = bVar11 | bVar10;
  }
  if ((param_4 & 1) != 0) {
    FUN_0356d1ac(param_1);
  }
  lVar21 = *(long *)(param_1 + 0x1f8);
  if (lVar21 == 0) goto LAB_0356e280;
  iVar13 = 0;
  while (iVar13 < *(int *)(lVar21 + 0x18)) {
    FUN_02215a88(lVar21,iVar13,&local_68,*(undefined8 *)puVar4);
    if ((CONCAT44(uStack_64,local_68) == 0) || (*(long *)(param_1 + 0x208) == 0)) goto LAB_0356e280;
    local_68 = *(uint *)(CONCAT44(uStack_64,local_68) + 0x14);
    FUN_01b5f01c(*(long *)(param_1 + 0x208),&local_68,*(undefined8 *)puVar5);
    lVar21 = *(long *)(param_1 + 0x1f8);
    iVar13 = iVar13 + 1;
    if (lVar21 == 0) goto LAB_0356e280;
  }
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  lVar21 = *(long *)(param_1 + 0x208);
  if (lVar21 != 0) {
    if (0 < *(int *)(lVar21 + 0x18)) {
      lVar21 = FUN_022195a8(lVar21,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                           );
      *param_3 = lVar21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,lVar21);
    }
    return bVar11 & (bVar3 ^ 1);
  }
  goto LAB_0356e280;
}


