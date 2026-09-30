/*
FUNCTION_NAME: OculusSampleFramework.TrainButtonVisualController$$ActionOrInContactZoneStayEvent
ENTRY_POINT: 01fe42c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


void OculusSampleFramework_TrainButtonVisualController__ActionOrInContactZoneStayEvent(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar8;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  byte unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long lStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_000000c0;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x1c0));
  thunk_FUN_01efb3a4(
                    Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_InputType__
                    );
  thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
  thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
  thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
  *(undefined1 *)(unaff_x28 + 0xe42) = 1;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = in_stack_000000c0;
  if (*(int *)(unaff_x19 + 0x20) == 1) {
    in_stack_00000058 = 0;
    in_stack_00000040 = 0;
    in_stack_00000038 = 0;
    in_stack_00000028 = unaff_x24;
    in_stack_00000030 = unaff_x23;
    thunk_FUN_01f51358(&stack0x00000028,0);
    in_stack_00000038 = unaff_x22;
    in_stack_00000040 = unaff_x21;
    thunk_FUN_01f51358(&stack0x00000038,0);
    lStack0000000000000048 = ((ulong)unaff_w26 & 0xffffff01) << 0x20;
    uStack0000000000000050 = CONCAT44(unaff_w20,uVar3);
    in_stack_00000058 = 0;
    thunk_FUN_01f51358(&stack0x00000058,0);
    *(undefined8 *)(unaff_x19 + 0x90) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x88) = uStack0000000000000050;
    *(long *)(unaff_x19 + 0x80) = lStack0000000000000048;
    *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000040;
    *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000038;
    *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000030;
    *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x25;
    thunk_FUN_01f51358(unaff_x19 + 0x60,0);
    plVar8 = (long *)(unaff_x19 + 8);
    if (*plVar8 == 0) {
      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__)
      ;
      FUN_031bfa8c(lVar4,*(undefined8 *)
                          Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_InputType__
                  );
      *plVar8 = lVar4;
      thunk_FUN_01f51358(plVar8,lVar4);
    }
    puVar2 = Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__;
    plVar8 = (long *)(unaff_x19 + 0x10);
    if (*plVar8 == 0) {
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_032ecb30(&stack0x00000008,0x80,4,0,
                   *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
      *(long *)(unaff_x19 + 0x18) = in_stack_00000010;
      *plVar8 = in_stack_00000008;
      if (0 < *(int *)(unaff_x19 + 0x18)) {
        lVar9 = 0;
        lVar4 = 0;
        do {
          uVar5 = FUN_03af4138(4,0);
          plVar8 = (long *)((ulong)plVar8 & 0xffffffff00000000 | uVar5 & 0xffffffff);
          in_stack_00000008 = 0;
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_03b1707c(&stack0x00000008,0,4,plVar8,0);
          lVar4 = lVar4 + 1;
          plVar1 = (long *)(*(long *)(unaff_x19 + 0x10) + lVar9);
          plVar1[2] = in_stack_00000018;
          plVar1[1] = in_stack_00000010;
          *plVar1 = in_stack_00000008;
          lVar9 = lVar9 + 0x18;
        } while (lVar4 < *(int *)(unaff_x19 + 0x18));
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    *(undefined4 *)(unaff_x19 + 0x20) = 2;
    return;
  }
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  FUN_0356ad6c(uVar6,0);
  uVar7 = thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


