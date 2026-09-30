/*
FUNCTION_NAME: FUN_017df9a0
ENTRY_POINT: 017df9a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_017df9a0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
  if ((DAT_037791cd & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceq_s16__);
    thunk_FUN_00d48444(FullSerializer_fsISerializationCallbacks_var);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_get_Task__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ee288);
    DAT_037791cd = 1;
  }
  uVar2 = FUN_017dfdd4(param_3);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(long **)(lVar3 + 0x10) = param_2;
    if (param_2 != (long *)0x0) {
      if (*param_2 == *(long *)PTR_DAT_033ee288) {
        lVar4 = thunk_FUN_00d62348();
        if (lVar4 == 0) goto LAB_017dfac4;
        FUN_017d5f88(lVar4,lVar3,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_get_Task__
                    );
        goto LAB_017dfaa8;
      }
    }
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceq_s16__);
    if (lVar4 != 0) {
      FUN_017d5c2c(lVar4,lVar3,*(undefined8 *)FullSerializer_fsISerializationCallbacks_var);
LAB_017dfaa8:
      FUN_017dfe80(param_1,lVar4,uVar2);
      return;
    }
  }
LAB_017dfac4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


