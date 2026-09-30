/*
FUNCTION_NAME: FUN_05841870
ENTRY_POINT: 05841870
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05841870(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar5 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__;
  puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__;
  puVar3 = Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__;
  if ((DAT_066d2dbe & 1) == 0) {
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
    DAT_066d2dbe = 1;
  }
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_037a5cd0(uVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar7);
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_04493218(uVar7,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),uVar7);
  FUN_04dbdb8c(param_1,0);
  if (param_2 != 0) {
    uVar6 = FUN_0583f4dc(param_2,param_3,0);
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x118);
    uVar6 = *(undefined4 *)(param_2 + 300);
    uVar1 = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x20) = uVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar7 = *(undefined8 *)(param_2 + 0x124);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


