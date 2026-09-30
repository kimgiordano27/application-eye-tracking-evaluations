/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$MemSet
ENTRY_POINT: 0356b984
PROGRAM: vrlegs-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet
          (long param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_70;
  uint local_68;
  undefined4 uStack_64;
  uint local_54;
  
  if ((DAT_0412dfce & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_Operator_OpType_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ccd4f0);
    FUN_01ab69ac(PTR_DAT_03ccd4e8);
    FUN_01ab69ac(_Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_PendingImplementation_<>c_TypeInfo);
    FUN_01ab69ac(
                Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo
                );
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingSceneGroup_<>c_TypeInfo);
    DAT_0412dfce = 1;
  }
  local_70 = 0;
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  if (*(long *)(param_1 + 0x210) == 0) goto LAB_0356c124;
  local_68 = param_2;
  uVar6 = FUN_021e4dc4(*(long *)(param_1 + 0x210),&local_68,*(undefined8 *)PTR_DAT_03ccd4e8);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = FUN_03776950(param_1 + 0x50,0);
  puVar2 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
  }
  iVar4 = FUN_0377715c(uVar11,uVar3,0);
  if (iVar4 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_037775a0(param_2,0);
  if (uVar5 == 0) {
    if ((param_2 == 0x2011) || (param_2 == 0xad)) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = 0x2d;
LAB_0356bb98:
      uVar5 = FUN_037775a0(uVar11,0);
      if (uVar5 != 0) goto LAB_0356bba8;
    }
    else if (param_2 == 0xa0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = 0x20;
      goto LAB_0356bb98;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      local_68 = param_2;
      FUN_021e5f08(*(long *)(param_1 + 0x210),&local_68,*(undefined8 *)PTR_DAT_03ccd4f0);
      return 0;
    }
    goto LAB_0356c124;
  }
LAB_0356bba8:
  if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0356c124;
  local_68 = uVar5;
  uVar6 = FUN_0219c130(*(long *)(param_1 + 0xb8),&local_68,
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0xb8) != 0) {
      local_54 = uVar5;
      FUN_0219b634(*(long *)(param_1 + 0xb8),&local_54,&local_68,
                   *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
      uVar11 = CONCAT44(uStack_64,local_68);
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
      FUN_035680e4(uVar7,param_2,param_1,uVar11,0);
      *param_3 = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar7);
      if (*(long *)(param_1 + 0xc0) != 0) {
        FUN_01b5f01c(*(long *)(param_1 + 0xc0),*param_3,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                    );
        if (*(long *)(param_1 + 200) != 0) {
          local_68 = param_2;
          FUN_0219b9a4(*(long *)(param_1 + 200),&local_68,*param_3,
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
          return 1;
        }
      }
    }
    goto LAB_0356c124;
  }
  local_70 = 0;
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 == 0) goto LAB_0356c124;
  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356c128;
  plVar8 = *(long **)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
  if (plVar8 == (long *)0x0) goto LAB_0356c124;
  uVar6 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
  if ((uVar6 & 1) == 0) {
    lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
    if (lVar9 == 0) goto LAB_0356c124;
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) =
           *(undefined8 *)Koenigz_PerfectCulling_PerfectCullingSceneGroup_<>c_TypeInfo;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar9 + 0x20));
      uVar11 = FUN_036d3824(param_1,0);
      if (1 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x28) = uVar11;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar9 + 0x28),uVar11);
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) =
               *(undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo
          ;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar10 = *(long *)(param_1 + 0xd8);
          if (lVar10 == 0) goto LAB_0356c124;
          if (*(uint *)(param_1 + 0xe0) < *(uint *)(lVar10 + 0x18)) {
            lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
            if (lVar10 == 0) goto LAB_0356c124;
            uVar11 = FUN_036d3824(lVar10,0);
            if (3 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x38) = uVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar9 + 0x38),uVar11);
              if (4 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x40) =
                     *(undefined8 *)Mono_CSharp_PendingImplementation_<>c_TypeInfo;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                uVar11 = FUN_025be564(lVar9,0);
                lVar9 = *(long *)(param_1 + 0xd8);
                if (lVar9 == 0) goto LAB_0356c124;
                if (*(uint *)(param_1 + 0xe0) < *(uint *)(lVar9 + 0x18)) {
                  uVar7 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_0367b470(uVar11,uVar7,0);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_0356c128;
  }
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 == 0) goto LAB_0356c124;
  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356c128;
  plVar8 = *(long **)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
  if (plVar8 == (long *)0x0) goto LAB_0356c124;
  iVar4 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
  if (iVar4 == 0) {
LAB_0356bd14:
    lVar9 = *(long *)(param_1 + 0xd8);
    if (lVar9 == 0) goto LAB_0356c124;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356c128;
    lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (lVar9 == 0) goto LAB_0356c124;
    UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
              (lVar9,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0);
    lVar9 = *(long *)(param_1 + 0xd8);
    if (lVar9 == 0) goto LAB_0356c124;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356c128;
    uVar11 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03778c94(uVar11,0);
  }
  else {
    lVar9 = *(long *)(param_1 + 0xd8);
    if (lVar9 == 0) goto LAB_0356c124;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356c128;
    plVar8 = *(long **)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_0356c124;
    iVar4 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    if (iVar4 == 0) goto LAB_0356bd14;
  }
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) {
LAB_0356c128:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x110);
    uVar11 = *(undefined8 *)(param_1 + 0xe8);
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    uVar1 = *(undefined4 *)(param_1 + 0x114);
    uVar12 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_03777970(uVar5,uVar3,0,uVar7,uVar11,uVar1,uVar12,&local_70,0);
    if ((uVar6 & 1) == 0) {
      if (*(char *)(param_1 + 0xe4) == '\0') {
        return 0;
      }
      FUN_0356f120(param_1);
      lVar9 = *(long *)(param_1 + 0xd8);
      if (lVar9 == 0) goto LAB_0356c124;
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_0356c128;
      uVar3 = *(undefined4 *)(param_1 + 0x110);
      uVar11 = *(undefined8 *)(param_1 + 0xe8);
      uVar7 = *(undefined8 *)(param_1 + 0xf0);
      uVar1 = *(undefined4 *)(param_1 + 0x114);
      uVar12 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_03777970(uVar5,uVar3,0,uVar7,uVar11,uVar1,uVar12,&local_70,0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
    }
    if (local_70 != 0) {
      FUN_03776ec0(local_70,*(undefined4 *)(param_1 + 0xe0),0);
      if (*(long *)(param_1 + 0xb0) != 0) {
        FUN_01b5f01c(*(long *)(param_1 + 0xb0),local_70,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
        if (*(long *)(param_1 + 0xb8) != 0) {
          local_68 = uVar5;
          FUN_0219b9a4(*(long *)(param_1 + 0xb8),&local_68,local_70,
                       *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
          lVar9 = local_70;
          uVar11 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar11,param_2,param_1,lVar9,0);
          *param_3 = uVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar11);
          if (*(long *)(param_1 + 0xc0) != 0) {
            FUN_01b5f01c(*(long *)(param_1 + 0xc0),*param_3,
                         *(undefined8 *)
                          _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                        );
            if (*(long *)(param_1 + 200) != 0) {
              local_68 = param_2;
              FUN_0219b9a4(*(long *)(param_1 + 200),&local_68,*param_3,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
              puVar2 = 
              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
              ;
              if (*(long *)(param_1 + 0x1d8) != 0) {
                local_68 = uVar5;
                FUN_01b5f01c(*(long *)(param_1 + 0x1d8),&local_68,
                             *(undefined8 *)
                              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                            );
                if (*(long *)(param_1 + 0x1e0) != 0) {
                  local_68 = uVar5;
                  FUN_01b5f01c(*(long *)(param_1 + 0x1e0),&local_68,*(undefined8 *)puVar2);
                  uVar6 = FUN_035975dc(0);
                  if ((uVar6 & 1) != 0) {
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_0356cf20(param_1);
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0356c124:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


