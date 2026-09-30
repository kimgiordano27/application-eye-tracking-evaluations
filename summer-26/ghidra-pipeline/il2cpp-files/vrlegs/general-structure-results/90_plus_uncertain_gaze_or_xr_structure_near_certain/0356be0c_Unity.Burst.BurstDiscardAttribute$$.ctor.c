/*
FUNCTION_NAME: Unity.Burst.BurstDiscardAttribute$$.ctor
ENTRY_POINT: 0356be0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Unity_Burst_BurstDiscardAttribute___ctor(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_x9;
  uint in_w10;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined8 uVar7;
  long *unaff_x28;
  long in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (in_w10 <= (uint)in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = *(undefined4 *)(unaff_x19 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x19 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xf0);
  uVar3 = *(undefined4 *)(unaff_x19 + 0x114);
  uVar7 = *(undefined8 *)(param_1 + in_x9 * 8 + 0x20);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_03777970(unaff_w22,uVar2,0,uVar1,uVar6,uVar3,uVar7,&stack0x00000010);
  if ((uVar5 & 1) == 0) {
    return 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


