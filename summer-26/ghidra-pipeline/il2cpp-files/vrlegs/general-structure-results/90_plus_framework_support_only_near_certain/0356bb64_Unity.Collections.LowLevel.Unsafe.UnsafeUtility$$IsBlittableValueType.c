/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$IsBlittableValueType
ENTRY_POINT: 0356bb64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 133
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Unity_Collections_LowLevel_Unsafe_UnsafeUtility__IsBlittableValueType(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  int unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar12;
  long *unaff_x28;
  long in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if (unaff_w20 == 0xa0) {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar4 = FUN_037775a0(0x20,0);
    if (iVar4 != 0) {
      if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_0356c124;
      in_stack_00000018 = iVar4;
      uVar6 = FUN_0219c130(*(long *)(unaff_x19 + 0xb8),&stack0x00000018,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0xb8) != 0) {
          in_stack_00000028._4_4_ = iVar4;
          FUN_0219b634(*(long *)(unaff_x19 + 0xb8),(long)&stack0x00000028 + 4,&stack0x00000018,
                       *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
          uVar7 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar7,0xa0);
          *unaff_x21 = uVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          if (*(long *)(unaff_x19 + 0xc0) != 0) {
            FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),*unaff_x21,
                         *(undefined8 *)
                          _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                        );
            if (*(long *)(unaff_x19 + 200) != 0) {
              FUN_0219b9a4(*(long *)(unaff_x19 + 200),&stack0x00000018,*unaff_x21,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
              return 1;
            }
          }
        }
        goto LAB_0356c124;
      }
      in_stack_00000010 = 0;
      lVar9 = *(long *)(unaff_x19 + 0xd8);
      if (lVar9 == 0) goto LAB_0356c124;
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
      plVar8 = *(long **)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
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
          uVar7 = FUN_036d3824();
          if (1 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x28) = uVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar9 + 0x28),uVar7);
            if (2 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x30) =
                   *(undefined8 *)
                    Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo
              ;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar10 = *(long *)(unaff_x19 + 0xd8);
              if (lVar10 == 0) goto LAB_0356c124;
              if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar10 + 0x18)) {
                lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0356c124;
                uVar7 = FUN_036d3824(lVar10,0);
                if (3 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x38) = uVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar9 + 0x38),uVar7);
                  if (4 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x40) =
                         *(undefined8 *)Mono_CSharp_PendingImplementation_<>c_TypeInfo;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    uVar7 = FUN_025be564(lVar9,0);
                    lVar9 = *(long *)(unaff_x19 + 0xd8);
                    if (lVar9 == 0) goto LAB_0356c124;
                    if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar9 + 0x18)) {
                      uVar11 = *(undefined8 *)
                                (lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0367b470(uVar7,uVar11,0);
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
      lVar9 = *(long *)(unaff_x19 + 0xd8);
      if (lVar9 == 0) goto LAB_0356c124;
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
      plVar8 = *(long **)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_0356c124;
      iVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      if (iVar5 == 0) {
LAB_0356bd14:
        lVar9 = *(long *)(unaff_x19 + 0xd8);
        if (lVar9 == 0) goto LAB_0356c124;
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
        lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
        if (lVar9 == 0) goto LAB_0356c124;
        UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
                  (lVar9,*(undefined4 *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10c),0);
        lVar9 = *(long *)(unaff_x19 + 0xd8);
        if (lVar9 == 0) goto LAB_0356c124;
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
        uVar7 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03778c94(uVar7,0);
      }
      else {
        lVar9 = *(long *)(unaff_x19 + 0xd8);
        if (lVar9 == 0) goto LAB_0356c124;
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
        plVar8 = *(long **)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_0356c124;
        iVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        if (iVar5 == 0) goto LAB_0356bd14;
      }
      lVar9 = *(long *)(unaff_x19 + 0xd8);
      if (lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) {
LAB_0356c128:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar1 = *(undefined4 *)(unaff_x19 + 0x110);
        uVar7 = *(undefined8 *)(unaff_x19 + 0xe8);
        uVar11 = *(undefined8 *)(unaff_x19 + 0xf0);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x114);
        uVar12 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_03777970(iVar4,uVar1,0,uVar11,uVar7,uVar2,uVar12,&stack0x00000010);
        if ((uVar6 & 1) == 0) {
          if (*(char *)(unaff_x19 + 0xe4) == '\0') {
            return 0;
          }
          FUN_0356f120();
          lVar9 = *(long *)(unaff_x19 + 0xd8);
          if (lVar9 == 0) goto LAB_0356c124;
          if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x110);
          uVar7 = *(undefined8 *)(unaff_x19 + 0xe8);
          uVar11 = *(undefined8 *)(unaff_x19 + 0xf0);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x114);
          uVar12 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar6 = FUN_03777970(iVar4,uVar1,0,uVar11,uVar7,uVar2,uVar12,&stack0x00000010);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
        }
        if (in_stack_00000010 != 0) {
          FUN_03776ec0(in_stack_00000010,*(undefined4 *)(unaff_x19 + 0xe0),0);
          if (*(long *)(unaff_x19 + 0xb0) != 0) {
            FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),in_stack_00000010,
                         *(undefined8 *)
                          _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                        );
            if (*(long *)(unaff_x19 + 0xb8) != 0) {
              in_stack_00000018 = iVar4;
              FUN_0219b9a4(*(long *)(unaff_x19 + 0xb8),&stack0x00000018,in_stack_00000010,
                           *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
              uVar7 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              FUN_035680e4(uVar7,0xa0);
              *unaff_x21 = uVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if (*(long *)(unaff_x19 + 0xc0) != 0) {
                FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),*unaff_x21,
                             *(undefined8 *)
                              _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                            );
                if (*(long *)(unaff_x19 + 200) != 0) {
                  in_stack_00000018 = unaff_w20;
                  FUN_0219b9a4(*(long *)(unaff_x19 + 200),&stack0x00000018,*unaff_x21,
                               *(undefined8 *)
                                System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
                  puVar3 = 
                  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                  ;
                  if (*(long *)(unaff_x19 + 0x1d8) != 0) {
                    in_stack_00000018 = iVar4;
                    FUN_01b5f01c(*(long *)(unaff_x19 + 0x1d8),&stack0x00000018,
                                 *(undefined8 *)
                                  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                                );
                    if (*(long *)(unaff_x19 + 0x1e0) != 0) {
                      in_stack_00000018 = iVar4;
                      FUN_01b5f01c(*(long *)(unaff_x19 + 0x1e0),&stack0x00000018,
                                   *(undefined8 *)puVar3);
                      uVar6 = FUN_035975dc(0);
                      if ((uVar6 & 1) != 0) {
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_0356cf20();
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
      goto LAB_0356c124;
    }
  }
  if (*(long *)(unaff_x19 + 0x210) != 0) {
    FUN_021e5f08(*(long *)(unaff_x19 + 0x210),&stack0x00000018,*(undefined8 *)PTR_DAT_03ccd4f0);
    return 0;
  }
LAB_0356c124:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


