/*
FUNCTION_NAME: Unity.Burst.LowLevel.BurstCompilerService$$RuntimeLog
ENTRY_POINT: 0356bf00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Unity_Burst_LowLevel_BurstCompilerService__RuntimeLog(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined4 in_stack_00000018;
  
  if (param_1 != 0) {
    FUN_01b5f01c(param_1,*unaff_x21,
                 *(undefined8 *)
                  _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                );
    if (*(long *)(unaff_x19 + 200) != 0) {
      in_stack_00000018 = unaff_w20;
      FUN_0219b9a4(*(long *)(unaff_x19 + 200),&stack0x00000018,*unaff_x21,
                   *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo
                  );
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


