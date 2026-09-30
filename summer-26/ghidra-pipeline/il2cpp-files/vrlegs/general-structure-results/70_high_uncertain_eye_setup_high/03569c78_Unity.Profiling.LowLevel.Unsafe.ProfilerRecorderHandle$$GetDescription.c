/*
FUNCTION_NAME: Unity.Profiling.LowLevel.Unsafe.ProfilerRecorderHandle$$GetDescription
ENTRY_POINT: 03569c78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Profiling_LowLevel_Unsafe_ProfilerRecorderHandle__GetDescription
               (float param_1,float param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x29;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  
  uStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  FUN_03776cbc(0,0,0,0,param_1 / param_2,&stack0x00000038,0);
  if (*(int *)(*(long *)
                System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03776a78(0);
  uVar1 = thunk_FUN_01a89e68(*unaff_x29);
  FUN_03776f7c(0x3f800000,uVar1,0);
  if (*(long *)(unaff_x19 + 0xb0) != 0) {
    FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),uVar1,
                 *(undefined8 *)
                  _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    lVar2 = *(long *)(unaff_x19 + 0xc0);
    uVar1 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_035680e4(uVar1,0x20);
    if (lVar2 != 0) {
      FUN_01b5f01c(lVar2,uVar1,
                   *(undefined8 *)
                    _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                  );
      FUN_03568878();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


