/*
FUNCTION_NAME: FUN_0356f38c
ENTRY_POINT: 0356f38c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_0356f38c(long param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  int local_44;
  
  if ((DAT_0412dfcf & 1) == 0) {
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
    FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    DAT_0412dfcf = 1;
  }
  local_58 = 0;
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  if (*(long *)(param_1 + 0x210) == 0) goto LAB_0356f7ec;
  local_50 = param_2;
  uVar5 = FUN_021e4dc4(*(long *)(param_1 + 0x210),&local_50,*(undefined8 *)PTR_DAT_03ccd4e8);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = FUN_03776950(param_1 + 0x50,0);
  puVar2 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
  }
  iVar4 = FUN_0377715c(uVar7,uVar3,0);
  if (iVar4 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar4 = FUN_037775a0(param_2,0);
  if (iVar4 == 0) {
    if ((param_2 == 0x2011) || (param_2 == 0xad)) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = 0x2d;
LAB_0356f554:
      iVar4 = FUN_037775a0(uVar7,0);
      if (iVar4 != 0) goto LAB_0356f564;
    }
    else if (param_2 == 0xa0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = 0x20;
      goto LAB_0356f554;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      local_50 = param_2;
      FUN_021e5f08(*(long *)(param_1 + 0x210),&local_50,*(undefined8 *)PTR_DAT_03ccd4f0);
      return 0;
    }
  }
  else {
LAB_0356f564:
    if (*(long *)(param_1 + 0xb8) != 0) {
      local_50 = iVar4;
      uVar5 = FUN_0219c130(*(long *)(param_1 + 0xb8),&local_50,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
      if ((uVar5 & 1) == 0) {
        local_58 = 0;
        uVar3 = 8;
        if ((*(uint *)(param_1 + 0x114) & 4) != 0) {
          uVar3 = 10;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_03777788(iVar4,uVar3,&local_58,0);
        puVar2 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0xb0) != 0) {
          FUN_01b5f01c(*(long *)(param_1 + 0xb0),local_58,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          if (*(long *)(param_1 + 0xb8) != 0) {
            local_50 = iVar4;
            FUN_0219b9a4(*(long *)(param_1 + 0xb8),&local_50,local_58,
                         *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
            uVar7 = local_58;
            uVar6 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
            FUN_035680e4(uVar6,param_2,param_1,uVar7,0);
            *param_3 = uVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar6);
            if (*(long *)(param_1 + 0xc0) != 0) {
              FUN_01b5f01c(*(long *)(param_1 + 0xc0),*param_3,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
              if (*(long *)(param_1 + 200) != 0) {
                local_50 = param_2;
                FUN_0219b9a4(*(long *)(param_1 + 200),&local_50,*param_3,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
                puVar1 = 
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                ;
                if (*(long *)(param_1 + 0x1d8) != 0) {
                  local_50 = iVar4;
                  FUN_01b5f01c(*(long *)(param_1 + 0x1d8),&local_50,
                               *(undefined8 *)
                                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                              );
                  if (*(long *)(param_1 + 0x1e0) != 0) {
                    local_50 = iVar4;
                    FUN_01b5f01c(*(long *)(param_1 + 0x1e0),&local_50,*(undefined8 *)puVar1);
                    uVar5 = FUN_035975dc(0);
                    if ((uVar5 & 1) != 0) {
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0356cf20(param_1);
                    }
                    if (*(long *)(param_1 + 0x1c8) != 0) {
                      FUN_01b5f01c(*(long *)(param_1 + 0x1c8),local_58,*(undefined8 *)puVar2);
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0356d4d8(param_1);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (*(long *)(param_1 + 0xb8) != 0) {
        local_44 = iVar4;
        FUN_0219b634(*(long *)(param_1 + 0xb8),&local_44,&local_50,
                     *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
        uVar7 = CONCAT44(uStack_4c,local_50);
        uVar6 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
        FUN_035680e4(uVar6,param_2,param_1,uVar7,0);
        *param_3 = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar6);
        if (*(long *)(param_1 + 0xc0) != 0) {
          FUN_01b5f01c(*(long *)(param_1 + 0xc0),*param_3,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                      );
          if (*(long *)(param_1 + 200) != 0) {
            local_50 = param_2;
            FUN_0219b9a4(*(long *)(param_1 + 200),&local_50,*param_3,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
            return 1;
          }
        }
      }
    }
  }
LAB_0356f7ec:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


