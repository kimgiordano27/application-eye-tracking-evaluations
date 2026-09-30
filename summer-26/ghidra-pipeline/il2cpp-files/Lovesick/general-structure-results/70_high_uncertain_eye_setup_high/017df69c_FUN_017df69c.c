/*
FUNCTION_NAME: FUN_017df69c
ENTRY_POINT: 017df69c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_017df69c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_037791c7 & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceq_s16__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    DAT_037791c7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  puVar2 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
  puVar1 = Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
  if (lVar6 != 0) {
    lVar3 = *(long *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_017da14c(lVar6,uVar5,param_1);
    return;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*plVar4 == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceq_s16__) {
                    /* WARNING: Could not recover jumptable at 0x017df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar4[3])(plVar4[8],param_2,plVar4[5]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


