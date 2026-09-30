/*
FUNCTION_NAME: UnityEngine.Application$$InvokeOnAdvertisingIdentifierCallback
ENTRY_POINT: 0356e660
PROGRAM: vrlegs-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_8
*/


byte UnityEngine_Application__InvokeOnAdvertisingIdentifierCallback
               (long param_1,long param_2,long *param_3,uint param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  uint uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if ((DAT_0412dfcd & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo)
    ;
    FUN_01ab69ac(Mono_CSharp_Operator_OpType_TypeInfo);
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
    FUN_01ab69ac(Fusion_OrderSorter_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbf7d8);
    FUN_01ab69ac(PTR_DAT_03cc45b0);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_01ab69ac(
                Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_<>c__DisplayClass3_0_TypeInfo
                );
    FUN_01ab69ac(UnityEngine_Physics_ContactEventDelegate_TypeInfo);
    FUN_01ab69ac(Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo);
    DAT_0412dfcd = 1;
  }
  puVar5 = Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uVar15 = FUN_025be440(param_2,0);
  iVar12 = *(int *)(param_1 + 0x48);
  if ((uVar15 & 1) == 0) {
    if (iVar12 != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x40);
      uVar11 = FUN_03776950(param_1 + 0x50,0);
      puVar5 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
      if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
      }
      iVar12 = FUN_0377715c(uVar16,uVar11,0);
      if (iVar12 != 0) goto LAB_0356e90c;
      if ((*(long *)(param_1 + 200) == 0) || (*(long *)(param_1 + 0xb8) == 0)) {
        FUN_03568878(param_1);
      }
      puVar3 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
      ;
      lVar21 = *(long *)(param_1 + 0x1e8);
      if (lVar21 == 0) goto LAB_0356f0dc;
      lVar19 = *(long *)
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
      ;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
      if ((uVar15 & 1) == 0) {
        *(undefined4 *)(lVar21 + 0x18) = 0;
      }
      else {
        iVar12 = *(int *)(lVar21 + 0x18);
        *(undefined4 *)(lVar21 + 0x18) = 0;
        if (0 < iVar12) {
          FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar12,0);
        }
      }
      puVar4 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo;
      if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_0356f0dc;
      FUN_021e4d64(*(long *)(param_1 + 0x1f0),
                   *(undefined8 *)
                    Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo
                  );
      lVar21 = *(long *)(param_1 + 0x1f8);
      if (lVar21 == 0) goto LAB_0356f0dc;
      lVar19 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
      if ((uVar15 & 1) == 0) {
        *(undefined4 *)(lVar21 + 0x18) = 0;
      }
      else {
        iVar12 = *(int *)(lVar21 + 0x18);
        *(undefined4 *)(lVar21 + 0x18) = 0;
        if (0 < iVar12) {
          FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar12,0);
        }
      }
      if (*(long *)(param_1 + 0x200) == 0) goto LAB_0356f0dc;
      FUN_021e4d64(*(long *)(param_1 + 0x200),*(undefined8 *)puVar4);
      lVar21 = *(long *)(param_1 + 0x208);
      if (lVar21 == 0) goto LAB_0356f0dc;
      lVar19 = *(long *)puVar3;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
      if ((uVar15 & 1) == 0) {
        *(undefined4 *)(lVar21 + 0x18) = 0;
      }
      else {
        iVar12 = *(int *)(lVar21 + 0x18);
        *(undefined4 *)(lVar21 + 0x18) = 0;
        if (0 < iVar12) {
          FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar12,0);
        }
      }
      puVar4 = PTR_DAT_03ccd4f0;
      puVar3 = PTR_DAT_03cc4750;
      if (param_2 == 0) goto LAB_0356f0dc;
      iVar12 = *(int *)(param_2 + 0x10);
      if (iVar12 < 1) {
        bVar2 = 0;
      }
      else {
        bVar2 = 0;
        iVar23 = 0;
        do {
          uVar13 = FUN_025b8a2c(param_2,iVar23,0);
          if (*(long *)(param_1 + 200) == 0) goto LAB_0356f0dc;
          uVar13 = uVar13 & 0xffff;
          uStack0000000000000028 = uVar13;
          uVar15 = FUN_0219c130(*(long *)(param_1 + 200),&stack0x00000028,*(undefined8 *)puVar3);
          if ((uVar15 & 1) == 0) {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_037775a0(uVar13,0);
            if (uVar14 == 0) {
              if ((uVar13 == 0x2011) || (uVar13 == 0xad)) {
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar16 = 0x2d;
LAB_0356eaec:
                uVar14 = FUN_037775a0(uVar16,0);
                if (uVar14 != 0) goto LAB_0356eafc;
              }
              else if (uVar13 == 0xa0) {
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar16 = 0x20;
                goto LAB_0356eaec;
              }
              if (*(long *)(param_1 + 0x208) == 0) goto LAB_0356f0dc;
              uStack0000000000000028 = uVar13;
              FUN_01b5f01c(*(long *)(param_1 + 0x208),&stack0x00000028,
                           *(undefined8 *)
                            Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                          );
              bVar2 = 1;
            }
            else {
LAB_0356eafc:
              lVar21 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              FUN_03568160(lVar21,uVar13,uVar14,0);
              if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0356f0dc;
              uStack0000000000000028 = uVar14;
              uVar15 = FUN_0219c130(*(long *)(param_1 + 0xb8),&stack0x00000028,
                                    *(undefined8 *)
                                     System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo
                                   );
              if ((uVar15 & 1) == 0) {
                if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_0356f0dc;
                uStack0000000000000028 = uVar14;
                uVar15 = FUN_021e5f08(*(long *)(param_1 + 0x1f0),&stack0x00000028,
                                      *(undefined8 *)puVar4);
                if ((uVar15 & 1) != 0) {
                  if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_0356f0dc;
                  uStack0000000000000028 = uVar14;
                  FUN_01b5f01c(*(long *)(param_1 + 0x1e8),&stack0x00000028,
                               *(undefined8 *)
                                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                              );
                }
                if (*(long *)(param_1 + 0x200) == 0) goto LAB_0356f0dc;
                uStack0000000000000028 = uVar13;
                uVar15 = FUN_021e5f08(*(long *)(param_1 + 0x200),&stack0x00000028,
                                      *(undefined8 *)puVar4);
                if ((uVar15 & 1) != 0) {
                  if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_0356f0dc;
                  FUN_01b5f01c(*(long *)(param_1 + 0x1f8),lVar21,
                               *(undefined8 *)
                                _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                              );
                }
              }
              else {
                if ((*(long *)(param_1 + 0xb8) == 0) ||
                   (in_stack_00000020._4_4_ = uVar14,
                   FUN_0219b634(*(long *)(param_1 + 0xb8),(long)&stack0x00000020 + 4,
                                &stack0x00000028,*(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo
                               ), lVar21 == 0)) goto LAB_0356f0dc;
                *(ulong *)(lVar21 + 0x20) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                *(long *)(lVar21 + 0x18) = param_1;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((long *)(lVar21 + 0x18),param_1);
                if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0356f0dc;
                FUN_01b5f01c(*(long *)(param_1 + 0xc0),lVar21,
                             *(undefined8 *)
                              _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                            );
                if (*(long *)(param_1 + 200) == 0) goto LAB_0356f0dc;
                uStack0000000000000028 = uVar13;
                FUN_0219b9a4(*(long *)(param_1 + 200),&stack0x00000028,lVar21,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
              }
            }
          }
          iVar23 = iVar23 + 1;
        } while (iVar12 != iVar23);
      }
      puVar3 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
      ;
      if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_0356f0dc;
      if (*(int *)(*(long *)(param_1 + 0x1e8) + 0x18) == 0) goto LAB_0356e90c;
      lVar21 = *(long *)(param_1 + 0xd8);
      if (lVar21 == 0) goto LAB_0356f0dc;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356f11c;
      plVar17 = *(long **)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
      if (plVar17 == (long *)0x0) goto LAB_0356f0dc;
      iVar12 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
      if (iVar12 == 0) {
LAB_0356ed04:
        lVar21 = *(long *)(param_1 + 0xd8);
        if (lVar21 == 0) goto LAB_0356f0dc;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356f11c;
        lVar21 = *(long *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (lVar21 == 0) goto LAB_0356f0dc;
        UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
                  (lVar21,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0);
        lVar21 = *(long *)(param_1 + 0xd8);
        if (lVar21 == 0) goto LAB_0356f0dc;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356f11c;
        uVar16 = *(undefined8 *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03778c94(uVar16,0);
      }
      else {
        lVar21 = *(long *)(param_1 + 0xd8);
        if (lVar21 == 0) goto LAB_0356f0dc;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356f11c;
        plVar17 = *(long **)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (plVar17 == (long *)0x0) goto LAB_0356f0dc;
        iVar12 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
        if (iVar12 == 0) goto LAB_0356ed04;
      }
      lVar21 = *(long *)(param_1 + 0xd8);
      if (lVar21 != 0) {
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xe0)) {
LAB_0356f11c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar22 = *(undefined8 *)(param_1 + 0x1e8);
        uVar11 = *(undefined4 *)(param_1 + 0x110);
        uVar16 = *(undefined8 *)(param_1 + 0xe8);
        uVar18 = *(undefined8 *)(param_1 + 0xf0);
        uVar1 = *(undefined4 *)(param_1 + 0x114);
        uVar24 = *(undefined8 *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        bVar10 = FUN_03777f70(uVar22,uVar11,0,uVar18,uVar16,uVar1,uVar24,&stack0x00000018);
        puVar6 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
        puVar4 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
        puVar5 = 
        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
        ;
        if (in_stack_00000018 != 0) {
          lVar21 = 0;
          do {
            if ((int)*(uint *)(in_stack_00000018 + 0x18) <= (int)(uint)lVar21) {
LAB_0356eeb4:
              lVar21 = *(long *)(param_1 + 0x1e8);
              if (lVar21 != 0) {
                lVar19 = *(long *)puVar3;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                uVar15 = FUN_01ab7534(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
                if ((uVar15 & 1) == 0) {
                  *(undefined4 *)(lVar21 + 0x18) = 0;
                }
                else {
                  iVar12 = *(int *)(lVar21 + 0x18);
                  *(undefined4 *)(lVar21 + 0x18) = 0;
                  if (0 < iVar12) {
                    FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar12,0);
                  }
                }
                puVar8 = 
                Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo;
                puVar7 = 
                Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo;
                puVar6 = System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo;
                puVar4 = 
                _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                ;
                puVar3 = PTR_DAT_03cc45b0;
                lVar21 = *(long *)(param_1 + 0x1f8);
                if (lVar21 != 0) {
                  iVar12 = 0;
                  goto LAB_0356ef3c;
                }
              }
              break;
            }
            if (*(uint *)(in_stack_00000018 + 0x18) <= (uint)lVar21) goto LAB_0356f11c;
            lVar19 = *(long *)(in_stack_00000018 + lVar21 * 8 + 0x20);
            if (lVar19 == 0) goto LAB_0356eeb4;
            uVar13 = FUN_03776e5c(lVar19,0);
            FUN_03776ec0(lVar19,*(undefined4 *)(param_1 + 0xe0),0);
            if (*(long *)(param_1 + 0xb0) == 0) break;
            FUN_01b5f01c(*(long *)(param_1 + 0xb0),lVar19,*(undefined8 *)puVar4);
            if (*(long *)(param_1 + 0xb8) == 0) break;
            uStack0000000000000028 = uVar13;
            FUN_0219b9a4(*(long *)(param_1 + 0xb8),&stack0x00000028,lVar19,*(undefined8 *)puVar6);
            if (*(long *)(param_1 + 0x1e0) == 0) break;
            uStack0000000000000028 = uVar13;
            FUN_01b5f01c(*(long *)(param_1 + 0x1e0),&stack0x00000028,*(undefined8 *)puVar5);
            if (*(long *)(param_1 + 0x1d8) == 0) break;
            uStack0000000000000028 = uVar13;
            FUN_01b5f01c(*(long *)(param_1 + 0x1d8),&stack0x00000028,*(undefined8 *)puVar5);
            lVar21 = lVar21 + 1;
          } while (in_stack_00000018 != 0);
        }
      }
LAB_0356f0dc:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar16 = FUN_036d3824(param_1,0);
    uVar18 = *(undefined8 *)puVar5;
    puVar20 = (undefined8 *)
              Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_<>c__DisplayClass3_0_TypeInfo;
  }
  else {
    uVar16 = FUN_036d3824(param_1,0);
    uVar18 = *(undefined8 *)puVar5;
    puVar20 = (undefined8 *)
              Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_<>c__DisplayClass3_0_TypeInfo;
    if (iVar12 != 0) {
      puVar20 = (undefined8 *)UnityEngine_Physics_ContactEventDelegate_TypeInfo;
    }
  }
  uVar16 = FUN_025bdc88(uVar18,uVar16,*puVar20,0);
  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
  }
  FUN_0367b470(uVar16,param_1,0);
LAB_0356e90c:
  *param_3 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,param_2);
  return 0;
LAB_0356ef3c:
  if (iVar12 < *(int *)(lVar21 + 0x18)) {
    FUN_02215a88(lVar21,iVar12,&stack0x00000028,*(undefined8 *)puVar3);
    lVar21 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    if ((lVar21 == 0) || (*(long *)(param_1 + 0xb8) == 0)) goto LAB_0356f0dc;
    uStack0000000000000028 = *(uint *)(lVar21 + 0x28);
    uVar15 = FUN_0219f8b8(*(long *)(param_1 + 0xb8),&stack0x00000028,&stack0x00000010,
                          *(undefined8 *)puVar7);
    if ((uVar15 & 1) == 0) {
      if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_0356f0dc;
      uStack0000000000000028 = *(uint *)(lVar21 + 0x28);
      FUN_01b5f01c(*(long *)(param_1 + 0x1e8),&stack0x00000028,*(undefined8 *)puVar5);
    }
    else {
      *(undefined8 *)(lVar21 + 0x20) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(long *)(lVar21 + 0x18) = param_1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar21 + 0x18),param_1);
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0356f0dc;
      FUN_01b5f01c(*(long *)(param_1 + 0xc0),lVar21,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 200) == 0) goto LAB_0356f0dc;
      uStack0000000000000028 = *(uint *)(lVar21 + 0x14);
      FUN_0219b9a4(*(long *)(param_1 + 200),&stack0x00000028,lVar21,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_0356f0dc;
      FUN_022190f4(*(long *)(param_1 + 0x1f8),iVar12,*(undefined8 *)puVar8);
      iVar12 = iVar12 + -1;
    }
    lVar21 = *(long *)(param_1 + 0x1f8);
    iVar12 = iVar12 + 1;
    if (lVar21 == 0) goto LAB_0356f0dc;
    goto LAB_0356ef3c;
  }
  bVar9 = *(char *)(param_1 + 0xe4) != '\0';
  if ((bVar10 & 1) == 0 && bVar9) {
    do {
      uVar15 = FUN_0356e288(param_1);
    } while ((uVar15 & 1) == 0);
    bVar10 = 1;
  }
  else {
    bVar10 = bVar10 | bVar9;
  }
  if ((param_4 & 1) != 0) {
    FUN_0356d1ac(param_1);
  }
  *param_3 = **(long **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3);
  lVar21 = *(long *)(param_1 + 0x1f8);
  if (lVar21 != 0) {
    iVar12 = 0;
    while (iVar12 < *(int *)(lVar21 + 0x18)) {
      FUN_02215a88(lVar21,iVar12,&stack0x00000028,*(undefined8 *)puVar3);
      if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
         (*(long *)(param_1 + 0x208) == 0)) goto LAB_0356f0dc;
      uStack0000000000000028 =
           *(uint *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x14);
      FUN_01b5f01c(*(long *)(param_1 + 0x208),&stack0x00000028,*(undefined8 *)puVar5);
      lVar21 = *(long *)(param_1 + 0x1f8);
      iVar12 = iVar12 + 1;
      if (lVar21 == 0) goto LAB_0356f0dc;
    }
    lVar21 = *(long *)(param_1 + 0x208);
    if (lVar21 != 0) {
      if (0 < *(int *)(lVar21 + 0x18)) {
        lVar21 = FUN_035679ec(lVar21,0);
        *param_3 = lVar21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,lVar21);
      }
      return bVar10 & (bVar2 ^ 1);
    }
  }
  goto LAB_0356f0dc;
}


