/*
FUNCTION_NAME: FUN_06a20214
ENTRY_POINT: 06a20214
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a20214(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_30 [16];
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e2a0d & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_0727fcb8);
    thunk_FUN_032e1da0(Method_System_Linq_Expressions_PrimitiveParameterExpression<DateTime>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Linq_Expressions_PrimitiveParameterExpression<Decimal>__ctor__)
    ;
    thunk_FUN_032e1da0(System_Runtime_Remoting_ChannelData_TypeInfo);
    DAT_076e2a0d = 1;
  }
  puVar2 = Method_System_Linq_Expressions_PrimitiveParameterExpression<DateTime>__ctor__;
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  lVar5 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_06becf70(lVar5,0);
  uVar6 = *(undefined8 *)puVar2;
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)System_Runtime_Remoting_ChannelData_TypeInfo;
  }
  else {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    local_30 = FUN_05013cdc(*param_1,*(undefined8 *)
                                      Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__
                           );
    if (*(int *)(*(long *)PTR_DAT_0727fcb8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06a4af64(local_30,0);
  }
  FUN_057aaeec(uVar6,uVar4,
               *(undefined8 *)
                Method_System_Linq_Expressions_PrimitiveParameterExpression<Decimal>__ctor__,0);
  return;
}


