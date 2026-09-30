/*
FUNCTION_NAME: FUN_059af7fc
ENTRY_POINT: 059af7fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_059af7fc(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
  if ((DAT_06bc1bec & 1) == 0) {
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    FUN_02f08768(Method_System_Memory<char>__ctor__);
    DAT_06bc1bec = 1;
  }
  puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
  puVar2 = Method_System_Memory<char>__ctor__;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *(undefined4 *)(param_1 + 0x87) = 1;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0401416c(param_1,*(undefined8 *)puVar4);
  FUN_059af8e4(param_1,*(undefined8 *)puVar2);
  FUN_059af77c(param_1,1);
  FUN_059af93c(param_1,0);
  FUN_059af994(param_1,100);
  (**(code **)(*param_1 + 0xc68))(param_1,0,*(undefined8 *)(*param_1 + 0xc70));
                    /* WARNING: Could not recover jumptable at 0x059af8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc88))(param_1,100,*(undefined8 *)(*param_1 + 0xc90));
  return;
}


