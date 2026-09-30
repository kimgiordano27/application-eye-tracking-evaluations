/*
FUNCTION_NAME: FUN_01fe527c
ENTRY_POINT: 01fe527c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01fe527c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_0482ee4a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    DAT_0482ee4a = 1;
  }
  FUN_04035fe0(param_1 + 0x38,0);
  FUN_04035fe0(param_1 + 0x28,0);
  lVar6 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  puVar3 = Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0358d1e4(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    uVar5 = FUN_0239ade0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                         *(undefined8 *)puVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    FUN_01fe4098(uVar5,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


