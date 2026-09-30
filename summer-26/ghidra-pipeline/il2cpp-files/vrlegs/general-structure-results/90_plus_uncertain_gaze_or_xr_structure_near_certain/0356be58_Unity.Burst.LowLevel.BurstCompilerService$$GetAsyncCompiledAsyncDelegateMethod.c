/*
FUNCTION_NAME: Unity.Burst.LowLevel.BurstCompilerService$$GetAsyncCompiledAsyncDelegateMethod
ENTRY_POINT: 0356be58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Unity_Burst_LowLevel_BurstCompilerService__GetAsyncCompiledAsyncDelegateMethod(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined8 uStack0000000000000000;
  long in_stack_00000010;
  undefined4 in_stack_00000018;
  
  uStack0000000000000000 = 0;
  uVar2 = FUN_03777970();
  if ((uVar2 & 1) == 0) {
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
        uVar3 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
        FUN_035680e4(uVar3,unaff_w20);
        *unaff_x21 = uVar3;
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
            puVar1 = 
            Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
            ;
            if (*(long *)(unaff_x19 + 0x1d8) != 0) {
              in_stack_00000018 = unaff_w22;
              FUN_01b5f01c(*(long *)(unaff_x19 + 0x1d8),&stack0x00000018,
                           *(undefined8 *)
                            Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                          );
              if (*(long *)(unaff_x19 + 0x1e0) != 0) {
                FUN_01b5f01c(*(long *)(unaff_x19 + 0x1e0),&stack0x00000018,*(undefined8 *)puVar1);
                uVar2 = FUN_035975dc(0);
                if ((uVar2 & 1) != 0) {
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


