/*
FUNCTION_NAME: FUN_024be4e0
ENTRY_POINT: 024be4e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_024be4e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0378271e & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TrackableId,_AREnvironmentProbe>_GetEnumerator__
                      );
    thunk_FUN_00d48444(StringLiteral_3875);
    thunk_FUN_00d48444(StringLiteral_13826);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_Stream_SynchronousAsyncResult_EndRead__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ManagedWebSocket_<SendFrameFallbackAsync>d__56>__
                      );
    thunk_FUN_00d48444(StringLiteral_4099);
    thunk_FUN_00d48444(StringLiteral_13220);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(PTR_DAT_033ed298);
    DAT_0378271e = 1;
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  FUN_024be810(param_1,0);
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_02681b9c(uVar5,0,0);
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x130);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    if ((lVar4 == 0) ||
       (FUN_026c8404(lVar4,param_1,
                     *(undefined8 *)Method_System_IO_Stream_SynchronousAsyncResult_EndRead__,0),
       lVar6 == 0)) goto LAB_024be80c;
    FUN_0273b5d4(lVar6,lVar4,0);
    lVar6 = *(long *)(param_1 + 0x130);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar4 == 0) ||
       (FUN_026c8404(lVar4,param_1,*(undefined8 *)StringLiteral_13220,0), lVar6 == 0))
    goto LAB_024be80c;
    FUN_0273b5d4(lVar6,lVar4,0);
    uVar5 = *(undefined8 *)(param_1 + 0x148);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_02681b9c(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x148) == 0) goto LAB_024be80c;
      lVar6 = *(long *)(*(long *)(param_1 + 0x148) + 0x110);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__
                                );
      if ((lVar4 == 0) ||
         (FUN_013df2bc(lVar4,param_1,*(undefined8 *)StringLiteral_4099,0), lVar6 == 0))
      goto LAB_024be80c;
      FUN_013df7e0(lVar6,lVar4,*(undefined8 *)PTR_DAT_033ed298);
    }
  }
  if (*(int *)(*(long *)StringLiteral_3875 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0272e764(param_1,0);
  uVar5 = *(undefined8 *)(param_1 + 0x250);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_02681b9c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x250) == 0) goto LAB_024be80c;
    FUN_02858f60(*(long *)(param_1 + 0x250),0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x260);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
  uVar3 = FUN_02681b9c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x260);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0268c1d0(uVar5,0);
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<TrackableId,_AREnvironmentProbe>_GetEnumerator__;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar4 != 0) &&
     (FUN_011c181c(lVar4,param_1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ManagedWebSocket_<SendFrameFallbackAsync>d__56>__
                   ,0), lVar6 != 0)) {
    FUN_012c7ad4(lVar6,lVar4,*(undefined8 *)StringLiteral_13826);
    FUN_02873150(param_1,0);
    return;
  }
LAB_024be80c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


