/*
FUNCTION_NAME: FUN_03780aa4
ENTRY_POINT: 03780aa4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined8 FUN_03780aa4(long param_1,int param_2,undefined8 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_44;
  
  if ((DAT_041374ac & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Clear__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<LocalVoice>>_set_Item__);
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_Operator_OpType_TypeInfo);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__);
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ccd4f0);
    FUN_01ab69ac(PTR_DAT_03ccd4e8);
    FUN_01ab69ac(_Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__);
    DAT_041374ac = 1;
  }
  local_60 = 0;
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_03780eb0;
  local_58 = param_2;
  uVar4 = FUN_021e4dc4(*(long *)(param_1 + 0x1e8),&local_58,*(undefined8 *)PTR_DAT_03ccd4e8);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  iVar3 = FUN_0377baf8(param_1);
  puVar2 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if (iVar3 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar3 = FUN_037775a0(param_2,0);
  if (iVar3 == 0) {
    if ((param_2 == 0x2011) || (param_2 == 0xad)) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = 0x2d;
LAB_03780c48:
      iVar3 = FUN_037775a0(uVar5,0);
      if (iVar3 != 0) goto LAB_03780c58;
    }
    else if (param_2 == 0xa0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = 0x20;
      goto LAB_03780c48;
    }
    if (*(long *)(param_1 + 0x1e8) != 0) {
      local_58 = param_2;
      FUN_021e5f08(*(long *)(param_1 + 0x1e8),&local_58,*(undefined8 *)PTR_DAT_03ccd4f0);
      return 0;
    }
  }
  else {
LAB_03780c58:
    if (*(long *)(param_1 + 0x120) != 0) {
      local_58 = iVar3;
      uVar4 = FUN_0219c130(*(long *)(param_1 + 0x120),&local_58,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
      if ((uVar4 & 1) == 0) {
        local_60 = 0;
        uVar7 = 8;
        if ((*(uint *)(param_1 + 0x15c) & 4) != 0) {
          uVar7 = 10;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_03777788(iVar3,uVar7,&local_60,0);
        puVar2 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x118) != 0) {
          FUN_01b5f01c(*(long *)(param_1 + 0x118),local_60,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          if (*(long *)(param_1 + 0x120) != 0) {
            local_58 = iVar3;
            FUN_0219b9a4(*(long *)(param_1 + 0x120),&local_58,local_60,
                         *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
            uVar5 = local_60;
            uVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Clear__
                                      );
            FUN_03779430(uVar6,param_2,param_1,uVar5);
            *param_3 = uVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar6);
            if (*(long *)(param_1 + 0x128) != 0) {
              FUN_01b5f01c(*(long *)(param_1 + 0x128),*param_3,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__);
              if (*(long *)(param_1 + 0x130) != 0) {
                local_58 = param_2;
                FUN_0219b9a4(*(long *)(param_1 + 0x130),&local_58,*param_3,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_List<LocalVoice>>_set_Item__
                            );
                puVar1 = 
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                ;
                if (*(long *)(param_1 + 0x1b0) != 0) {
                  local_58 = iVar3;
                  FUN_01b5f01c(*(long *)(param_1 + 0x1b0),&local_58,
                               *(undefined8 *)
                                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                              );
                  if (*(long *)(param_1 + 0x1b8) != 0) {
                    local_58 = iVar3;
                    FUN_01b5f01c(*(long *)(param_1 + 0x1b8),&local_58,*(undefined8 *)puVar1);
                    if ((param_4 & 1) != 0) {
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__
                                  + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0377e010(param_1);
                    }
                    if (*(long *)(param_1 + 0x1a0) != 0) {
                      FUN_01b5f01c(*(long *)(param_1 + 0x1a0),local_60,*(undefined8 *)puVar2);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (*(long *)(param_1 + 0x120) != 0) {
        local_44 = iVar3;
        FUN_0219b634(*(long *)(param_1 + 0x120),&local_44,&local_58,
                     *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
        uVar5 = CONCAT44(uStack_54,local_58);
        uVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Clear__
                                  );
        FUN_03779430(uVar6,param_2,param_1,uVar5);
        *param_3 = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar6);
        if (*(long *)(param_1 + 0x128) != 0) {
          FUN_01b5f01c(*(long *)(param_1 + 0x128),*param_3,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__);
          if (*(long *)(param_1 + 0x130) != 0) {
            local_58 = param_2;
            FUN_0219b9a4(*(long *)(param_1 + 0x130),&local_58,*param_3,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_List<LocalVoice>>_set_Item__
                        );
            return 1;
          }
        }
      }
    }
  }
LAB_03780eb0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


