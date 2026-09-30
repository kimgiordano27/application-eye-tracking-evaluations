/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$GetReasonForTypeNonBlittableImpl
ENTRY_POINT: 0356bbc4
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


undefined8 Unity_Collections_LowLevel_Unsafe_UnsafeUtility__GetReasonForTypeNonBlittableImpl(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined8 uVar11;
  long *unaff_x28;
  long in_stack_00000010;
  undefined4 in_stack_00000018;
  
  uVar5 = FUN_0219c130();
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xb8) != 0) {
      FUN_0219b634(*(long *)(unaff_x19 + 0xb8),&stack0x0000002c,&stack0x00000018,
                   *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
      FUN_035680e4(uVar6,unaff_w20);
      *unaff_x21 = uVar6;
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
  lVar8 = *(long *)(unaff_x19 + 0xd8);
  if (lVar8 == 0) goto LAB_0356c124;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
  plVar7 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
  if (plVar7 == (long *)0x0) goto LAB_0356c124;
  uVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
  if ((uVar5 & 1) == 0) {
    lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
    if (lVar8 == 0) goto LAB_0356c124;
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) =
           *(undefined8 *)Koenigz_PerfectCulling_PerfectCullingSceneGroup_<>c_TypeInfo;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar8 + 0x20));
      uVar6 = FUN_036d3824();
      if (1 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x28) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar8 + 0x28),uVar6);
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x30) =
               *(undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo
          ;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar9 = *(long *)(unaff_x19 + 0xd8);
          if (lVar9 == 0) goto LAB_0356c124;
          if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar9 + 0x18)) {
            lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
            if (lVar9 == 0) goto LAB_0356c124;
            uVar6 = FUN_036d3824(lVar9,0);
            if (3 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x38) = uVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar8 + 0x38),uVar6);
              if (4 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x40) =
                     *(undefined8 *)Mono_CSharp_PendingImplementation_<>c_TypeInfo;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                uVar6 = FUN_025be564(lVar8,0);
                lVar8 = *(long *)(unaff_x19 + 0xd8);
                if (lVar8 == 0) goto LAB_0356c124;
                if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar8 + 0x18)) {
                  uVar10 = *(undefined8 *)
                            (lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_0367b470(uVar6,uVar10,0);
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
  lVar8 = *(long *)(unaff_x19 + 0xd8);
  if (lVar8 == 0) goto LAB_0356c124;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
  plVar7 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
  if (plVar7 == (long *)0x0) goto LAB_0356c124;
  iVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
  if (iVar4 == 0) {
LAB_0356bd14:
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_0356c124;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
    lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (lVar8 == 0) goto LAB_0356c124;
    UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
              (lVar8,*(undefined4 *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10c),0);
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_0356c124;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
    uVar6 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03778c94(uVar6,0);
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_0356c124;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
    plVar7 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (plVar7 == (long *)0x0) goto LAB_0356c124;
    iVar4 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    if (iVar4 == 0) goto LAB_0356bd14;
  }
  lVar8 = *(long *)(unaff_x19 + 0xd8);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) {
LAB_0356c128:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar1 = *(undefined4 *)(unaff_x19 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x19 + 0xe8);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x114);
    uVar11 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_03777970(unaff_w22,uVar1,0,uVar10,uVar6,uVar2,uVar11,&stack0x00000010);
    if ((uVar5 & 1) == 0) {
      if (*(char *)(unaff_x19 + 0xe4) == '\0') {
        return 0;
      }
      FUN_0356f120();
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_0356c124;
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_0356c128;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x110);
      uVar6 = *(undefined8 *)(unaff_x19 + 0xe8);
      uVar10 = *(undefined8 *)(unaff_x19 + 0xf0);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x114);
      uVar11 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_03777970(unaff_w22,uVar1,0,uVar10,uVar6,uVar2,uVar11,&stack0x00000010);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    if (in_stack_00000010 != 0) {
      FUN_03776ec0(in_stack_00000010,*(undefined4 *)(unaff_x19 + 0xe0),0);
      if (*(long *)(unaff_x19 + 0xb0) != 0) {
        FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),in_stack_00000010,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
        if (*(long *)(unaff_x19 + 0xb8) != 0) {
          in_stack_00000018 = unaff_w22;
          FUN_0219b9a4(*(long *)(unaff_x19 + 0xb8),&stack0x00000018,in_stack_00000010,
                       *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
          uVar6 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar6,unaff_w20);
          *unaff_x21 = uVar6;
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
                in_stack_00000018 = unaff_w22;
                FUN_01b5f01c(*(long *)(unaff_x19 + 0x1d8),&stack0x00000018,
                             *(undefined8 *)
                              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                            );
                if (*(long *)(unaff_x19 + 0x1e0) != 0) {
                  FUN_01b5f01c(*(long *)(unaff_x19 + 0x1e0),&stack0x00000018,*(undefined8 *)puVar3);
                  uVar5 = FUN_035975dc(0);
                  if ((uVar5 & 1) != 0) {
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
LAB_0356c124:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


