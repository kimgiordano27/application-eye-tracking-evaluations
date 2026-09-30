/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_aux_set_capture_device_t$$Dispose
ENTRY_POINT: 0794efb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 Unity_Services_Vivox_vx_req_aux_set_capture_device_t__Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  FUN_03a8a718(Oculus_Platform_Models_AppDownloadProgressResult_TypeInfo);
  FUN_03a8a718(Oculus_Platform_Models_AppDownloadResult_TypeInfo);
  FUN_03a8a718(Normal_Realtime_AppInvalidEntitlement_TypeInfo);
  FUN_03a8a718(Unity_Services_Friends_Http_ApiTelemetryScopeFactory_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xe72) = 1;
  puVar1 = Unity_Services_Friends_Http_ApiTelemetryScopeFactory_TypeInfo;
  if (unaff_x19 != 0) {
    lVar2 = *(long *)Unity_Services_Friends_Http_ApiTelemetryScopeFactory_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
    puVar4 = *(undefined8 **)(lVar2 + 0xb8);
    if (puVar4[6] == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar5 = *puVar4;
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Func<Task<byte[]>>_TypeInfo);
      FUN_0495c41c(uVar3,uVar5,*(undefined8 *)Oculus_Platform_Models_AppDownloadResult_TypeInfo,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *puVar4 = uVar3;
      thunk_FUN_03afed3c(puVar4,uVar3);
      lVar2 = *(long *)puVar1;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
    puVar4 = *(undefined8 **)(lVar2 + 0xb8);
    if (puVar4[7] == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar5 = *puVar4;
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  Oculus_Platform_Models_AppDownloadProgressResult_TypeInfo);
      FUN_0495c41c(uVar3,uVar5,*(undefined8 *)Normal_Realtime_AppInvalidEntitlement_TypeInfo,0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *puVar4 = uVar3;
      thunk_FUN_03afed3c(puVar4,uVar3);
    }
    uVar3 = FUN_044dec2c();
    return uVar3;
  }
  return 0;
}


