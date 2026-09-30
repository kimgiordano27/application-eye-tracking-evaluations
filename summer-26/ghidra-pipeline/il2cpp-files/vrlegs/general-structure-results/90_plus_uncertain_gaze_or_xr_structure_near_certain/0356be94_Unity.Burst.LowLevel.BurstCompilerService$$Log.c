/*
FUNCTION_NAME: Unity.Burst.LowLevel.BurstCompilerService$$Log
ENTRY_POINT: 0356be94
PROGRAM: vrlegs-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Unity_Burst_LowLevel_BurstCompilerService__Log
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_01b5f01c(param_2,param_3,*param_1);
  if (*(long *)(unaff_x19 + 0xb8) != 0) {
    in_stack_00000018 = unaff_w22;
    FUN_0219b9a4(*(long *)(unaff_x19 + 0xb8),&stack0x00000018,in_stack_00000010,
                 *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_035680e4(uVar2,unaff_w20);
    *unaff_x21 = uVar2;
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
            uVar3 = FUN_035975dc(0);
            if ((uVar3 & 1) != 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


