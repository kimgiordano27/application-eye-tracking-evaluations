/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$GetReasonForArrayNonBlittable
ENTRY_POINT: 0356bdb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Unity_Collections_LowLevel_Unsafe_UnsafeUtility__GetReasonForArrayNonBlittable(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int in_w9;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined8 uVar8;
  long *unaff_x28;
  long in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (in_w9 == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_03777970(unaff_w22,unaff_w23,0);
  if ((uVar5 & 1) == 0) {
    if (*(char *)(unaff_x19 + 0xe4) == '\0') {
      return 0;
    }
    FUN_0356f120();
    lVar7 = *(long *)(unaff_x19 + 0xd8);
    if (lVar7 == 0) goto LAB_0356c124;
    if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar2 = *(undefined4 *)(unaff_x19 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x19 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar3 = *(undefined4 *)(unaff_x19 + 0x114);
    uVar8 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_03777970(unaff_w22,uVar2,0,uVar1,uVar6,uVar3,uVar8,&stack0x00000010);
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
            puVar4 = 
            Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
            ;
            if (*(long *)(unaff_x19 + 0x1d8) != 0) {
              in_stack_00000018 = unaff_w22;
              FUN_01b5f01c(*(long *)(unaff_x19 + 0x1d8),&stack0x00000018,
                           *(undefined8 *)
                            Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                          );
              if (*(long *)(unaff_x19 + 0x1e0) != 0) {
                FUN_01b5f01c(*(long *)(unaff_x19 + 0x1e0),&stack0x00000018,*(undefined8 *)puVar4);
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
LAB_0356c124:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


