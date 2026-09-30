/*
FUNCTION_NAME: FUN_0377cc40
ENTRY_POINT: 0377cc40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined4 FUN_0377cc40(long param_1,uint param_2,undefined8 *param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long local_78;
  uint local_70;
  undefined4 uStack_6c;
  uint local_64;
  
  if ((DAT_041374ab & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Clear__
                );
    FUN_01ab69ac(PTR_DAT_03cbe438);
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
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(Mono_CSharp_PendingImplementation_<>c_TypeInfo);
    FUN_01ab69ac(
                Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo
                );
    FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingSceneGroup_<>c_TypeInfo);
    DAT_041374ab = 1;
  }
  local_78 = 0;
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_0377d40c;
  local_70 = param_2;
  uVar7 = FUN_021e4dc4(*(long *)(param_1 + 0x1e8),&local_70,*(undefined8 *)PTR_DAT_03ccd4e8);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  iVar5 = FUN_0377baf8(param_1);
  puVar4 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if (iVar5 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_037775a0(param_2,0);
  if (uVar6 == 0) {
    if ((param_2 == 0x2011) || (param_2 == 0xad)) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = 0x2d;
LAB_0377ce2c:
      uVar6 = FUN_037775a0(uVar8,0);
      if (uVar6 != 0) goto LAB_0377ce3c;
    }
    else if (param_2 == 0xa0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = 0x20;
      goto LAB_0377ce2c;
    }
    if (*(long *)(param_1 + 0x1e8) != 0) {
      local_70 = param_2;
      FUN_021e5f08(*(long *)(param_1 + 0x1e8),&local_70,*(undefined8 *)PTR_DAT_03ccd4f0);
      return 0;
    }
    goto LAB_0377d40c;
  }
LAB_0377ce3c:
  if (*(long *)(param_1 + 0x120) == 0) goto LAB_0377d40c;
  local_70 = uVar6;
  uVar7 = FUN_0219c130(*(long *)(param_1 + 0x120),&local_70,
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x120) != 0) {
      local_64 = uVar6;
      FUN_0219b634(*(long *)(param_1 + 0x120),&local_64,&local_70,
                   *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
      uVar8 = CONCAT44(uStack_6c,local_70);
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Clear__
                                );
      FUN_03779430(uVar9,param_2,param_1,uVar8);
      *param_3 = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar9);
      if (*(long *)(param_1 + 0x128) != 0) {
        FUN_01b5f01c(*(long *)(param_1 + 0x128),*param_3,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__);
        if (*(long *)(param_1 + 0x130) != 0) {
          local_70 = param_2;
          FUN_0219b9a4(*(long *)(param_1 + 0x130),&local_70,*param_3,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_List<LocalVoice>>_set_Item__
                      );
          return 1;
        }
      }
    }
    goto LAB_0377d40c;
  }
  local_78 = 0;
  lVar11 = *(long *)(param_1 + 0x140);
  if (lVar11 == 0) goto LAB_0377d40c;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x148)) goto LAB_0377d410;
  plVar10 = *(long **)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_0377d40c;
  uVar7 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
  if ((uVar7 & 1) == 0) {
    lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
    if (lVar11 == 0) goto LAB_0377d40c;
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 *)(lVar11 + 0x20) =
           *(undefined8 *)Koenigz_PerfectCulling_PerfectCullingSceneGroup_<>c_TypeInfo;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar11 + 0x20));
      uVar8 = FUN_036d3824(param_1,0);
      if (1 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + 0x28) = uVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar11 + 0x28),uVar8);
        if (2 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x30) =
               *(undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo
          ;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar12 = *(long *)(param_1 + 0x140);
          if (lVar12 == 0) goto LAB_0377d40c;
          if (*(uint *)(param_1 + 0x148) < *(uint *)(lVar12 + 0x18)) {
            lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
            if (lVar12 == 0) goto LAB_0377d40c;
            uVar8 = FUN_036d3824(lVar12,0);
            if (3 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x38) = uVar8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar11 + 0x38),uVar8);
              if (4 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x40) =
                     *(undefined8 *)Mono_CSharp_PendingImplementation_<>c_TypeInfo;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                uVar8 = FUN_025be564(lVar11,0);
                lVar11 = *(long *)(param_1 + 0x140);
                if (lVar11 == 0) goto LAB_0377d40c;
                if (*(uint *)(param_1 + 0x148) < *(uint *)(lVar11 + 0x18)) {
                  uVar9 = *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20)
                  ;
                  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_0367b470(uVar8,uVar9,0);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_0377d410;
  }
  lVar11 = *(long *)(param_1 + 0x140);
  if (lVar11 == 0) goto LAB_0377d40c;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x148)) goto LAB_0377d410;
  plVar10 = *(long **)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_0377d40c;
  iVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
  if (iVar5 == *(int *)(param_1 + 0x150)) {
    lVar11 = *(long *)(param_1 + 0x140);
    if (lVar11 == 0) goto LAB_0377d40c;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x148)) goto LAB_0377d410;
    plVar10 = *(long **)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_0377d40c;
    iVar5 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if (iVar5 != *(int *)(param_1 + 0x154)) goto LAB_0377cfb4;
  }
  else {
LAB_0377cfb4:
    lVar11 = *(long *)(param_1 + 0x140);
    if (lVar11 == 0) goto LAB_0377d40c;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x148)) goto LAB_0377d410;
    lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
    if (lVar11 == 0) goto LAB_0377d40c;
    FUN_036afd58(lVar11,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),0);
    lVar11 = *(long *)(param_1 + 0x140);
    if (lVar11 == 0) goto LAB_0377d40c;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x148)) goto LAB_0377d410;
    uVar8 = *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03778c94(uVar8,0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03777934(0,0);
  lVar11 = *(long *)(param_1 + 0x140);
  if (lVar11 != 0) {
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x148)) {
LAB_0377d410:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar7 = FUN_03777970(uVar6,*(undefined4 *)(param_1 + 0x158),0,*(undefined8 *)(param_1 + 0x168),
                         *(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x15c),
                         *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20),
                         &local_78,0);
    if ((uVar7 & 1) == 0) {
      if (*(char *)(param_1 + 0x14c) == '\0') {
        return 0;
      }
      FUN_03780838(param_1);
      lVar11 = *(long *)(param_1 + 0x140);
      if (lVar11 == 0) goto LAB_0377d40c;
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x148)) goto LAB_0377d410;
      uVar1 = *(undefined4 *)(param_1 + 0x158);
      uVar8 = *(undefined8 *)(param_1 + 0x160);
      uVar9 = *(undefined8 *)(param_1 + 0x168);
      uVar2 = *(undefined4 *)(param_1 + 0x15c);
      uVar13 = *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_03777970(uVar6,uVar1,0,uVar9,uVar8,uVar2,uVar13,&local_78,0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    if (local_78 != 0) {
      FUN_03776ec0(local_78,*(undefined4 *)(param_1 + 0x148),0);
      if (*(long *)(param_1 + 0x118) != 0) {
        FUN_01b5f01c(*(long *)(param_1 + 0x118),local_78,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
        if (*(long *)(param_1 + 0x120) != 0) {
          local_70 = uVar6;
          FUN_0219b9a4(*(long *)(param_1 + 0x120),&local_70,local_78,
                       *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
          lVar11 = local_78;
          uVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Clear__
                                    );
          FUN_03779430(uVar8,param_2,param_1,lVar11);
          *param_3 = uVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar8);
          if (*(long *)(param_1 + 0x128) != 0) {
            FUN_01b5f01c(*(long *)(param_1 + 0x128),*param_3,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__);
            if (*(long *)(param_1 + 0x130) != 0) {
              local_70 = param_2;
              FUN_0219b9a4(*(long *)(param_1 + 0x130),&local_70,*param_3,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_List<LocalVoice>>_set_Item__
                          );
              puVar3 = 
              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
              ;
              if (*(long *)(param_1 + 0x1b0) != 0) {
                local_70 = uVar6;
                FUN_01b5f01c(*(long *)(param_1 + 0x1b0),&local_70,
                             *(undefined8 *)
                              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                            );
                if (*(long *)(param_1 + 0x1b8) != 0) {
                  local_70 = uVar6;
                  FUN_01b5f01c(*(long *)(param_1 + 0x1b8),&local_70,*(undefined8 *)puVar3);
                  if ((param_4 & 1) != 0) {
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__
                                + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_0377e010(param_1);
                  }
                  lVar11 = *(long *)(param_1 + 0x140);
                  if (lVar11 != 0) {
                    if (*(uint *)(param_1 + 0x148) < *(uint *)(lVar11 + 0x18)) {
                      uVar8 = *(undefined8 *)
                               (lVar11 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__
                                  + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0377e370(uVar8);
                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_03777934(1,0);
                      return 1;
                    }
                    goto LAB_0377d410;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0377d40c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


