/*
FUNCTION_NAME: FUN_0103c044
ENTRY_POINT: 0103c044
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_0103c044(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_03775f9a & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<JsonSchemaGenerator_TypeSchema>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ExposedTeleportPoint>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f2390);
    thunk_FUN_00d48444(Method_System_IO_Compression_DeflateStream_get_Position__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_12>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Transform,_GrabbablePoseCombiner>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_11190);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                      );
    DAT_03775f9a = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  FUN_00e77150(param_1,0);
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
  puVar3 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
  ;
  puVar2 = Method_System_Collections_Generic_List<JsonSchemaGenerator_TypeSchema>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<ExposedTeleportPoint>__ctor__;
  if (lVar4 != 0) {
    FUN_016f27fc(lVar4,param_1,*(undefined8 *)StringLiteral_11190,0);
    FUN_00fe0700(*(undefined8 *)puVar3,lVar4,0);
    uVar5 = FUN_010c3404(param_1,*(undefined8 *)puVar2);
    lVar4 = FUN_010dfe04(uVar5,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0x78) = lVar4;
    puVar3 = Method_System_IO_Compression_DeflateStream_get_Position__;
    puVar2 = 
    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_12>__ctor__
    ;
    puVar1 = PTR_DAT_033f2390;
    if (lVar4 != 0) {
      FUN_01323390(lVar4,&local_48,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<Transform,_GrabbablePoseCombiner>_Add__
                  );
      while( true ) {
        uVar6 = FUN_012b894c(&local_48,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          FUN_012b8948(&local_48,*(undefined8 *)puVar1);
          return;
        }
        lVar4 = FUN_00ad89a4(&local_48,*(undefined8 *)puVar2);
        if (lVar4 == 0) break;
        FUN_00ecb760(lVar4,0);
        FUN_00ecb74c(lVar4,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


