/*
FUNCTION_NAME: FUN_01fe4270
ENTRY_POINT: 01fe4270
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


void FUN_01fe4270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__;
  if ((DAT_0482ee42 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_InputType__
                      );
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    DAT_0482ee42 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    local_a0 = param_2;
    uStack_98 = param_3;
    local_90 = param_4;
    thunk_FUN_01f51358(&uStack_98,0);
    local_88 = param_5;
    uStack_80 = param_6;
    thunk_FUN_01f51358(&local_88,0);
    local_78 = ((ulong)CONCAT31(local_78._5_3_,param_7) & 0xffffff01) << 0x20;
    uStack_70 = CONCAT44(param_8,param_9);
    local_68 = 0;
    thunk_FUN_01f51358(&local_68,0);
    *(undefined8 *)(param_1 + 0x90) = local_68;
    *(undefined8 *)(param_1 + 0x88) = uStack_70;
    *(long *)(param_1 + 0x80) = local_78;
    *(undefined8 *)(param_1 + 0x78) = uStack_80;
    *(undefined8 *)(param_1 + 0x70) = local_88;
    *(undefined8 *)(param_1 + 0x68) = local_90;
    *(undefined8 *)(param_1 + 0x60) = uStack_98;
    *(undefined8 *)(param_1 + 0x58) = local_a0;
    thunk_FUN_01f51358(param_1 + 0x60,0);
    plVar7 = (long *)(param_1 + 8);
    if (*plVar7 == 0) {
      lVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__)
      ;
      FUN_031bfa8c(lVar3,*(undefined8 *)
                          Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_InputType__
                  );
      *plVar7 = lVar3;
      thunk_FUN_01f51358(plVar7,lVar3);
    }
    puVar2 = Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__;
    plVar7 = (long *)(param_1 + 0x10);
    if (*plVar7 == 0) {
      local_b8 = 0;
      lStack_b0 = 0;
      FUN_032ecb30(&local_b8,0x80,4,0,
                   *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
      *(long *)(param_1 + 0x18) = lStack_b0;
      *plVar7 = local_b8;
      if (0 < *(int *)(param_1 + 0x18)) {
        lVar8 = 0;
        lVar3 = 0;
        do {
          uVar4 = FUN_03af4138(4,0);
          plVar7 = (long *)((ulong)plVar7 & 0xffffffff00000000 | uVar4 & 0xffffffff);
          local_b8 = 0;
          lStack_b0 = 0;
          local_a8 = 0;
          FUN_03b1707c(&local_b8,0,4,plVar7,0);
          lVar3 = lVar3 + 1;
          plVar1 = (long *)(*(long *)(param_1 + 0x10) + lVar8);
          plVar1[2] = local_a8;
          plVar1[1] = lStack_b0;
          *plVar1 = local_b8;
          lVar8 = lVar8 + 0x18;
        } while (lVar3 < *(int *)(param_1 + 0x18));
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    *(undefined4 *)(param_1 + 0x20) = 2;
    return;
  }
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  FUN_0356ad6c(uVar5,0);
  uVar6 = thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}


