/*
FUNCTION_NAME: FUN_0103c27c
ENTRY_POINT: 0103c27c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_10
*/


void FUN_0103c27c(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_03775f9b & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(PTR_DAT_033f2390);
    thunk_FUN_00d48444(Method_System_IO_Compression_DeflateStream_get_Position__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_12>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Transform,_GrabbablePoseCombiner>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_11190);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                      );
    DAT_03775f9b = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  lVar4 = FUN_0268fd10(param_4,0);
  puVar1 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
  if (lVar4 != 0) {
    fVar6 = (float)FUN_0269f578(lVar4,0);
    fVar8 = param_2;
    fVar9 = param_3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03774e19 == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
      DAT_03774e19 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
                    /* try { // try from 0103c38c to 0113c587 has its CatchHandler @ 0103c38c
                       catch() { ... } // from try @ 0103c38c with catch @ 0103c38c
                       catch() { ... } // from try @ 0103c680 with catch @ 0103c38c
                       catch() { ... } // from try @ 0103c754 with catch @ 0103c38c
                       catch() { ... } // from try @ 0103c75c with catch @ 0103c38c
                       catch() { ... } // from try @ 0103c814 with catch @ 0103c38c */
    if (((**(long **)(lVar4 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x30), lVar4 != 0)) &&
       (lVar4 = FUN_0268fd10(lVar4,0), lVar4 != 0)) {
      fVar7 = (float)FUN_0269f578(lVar4,0);
      if (DAT_03774e1a == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03774e1a = '\x01';
      }
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (4.0 <= SQRT((param_3 - fVar9) * (param_3 - fVar9) +
                      (fVar6 - fVar7) * (fVar6 - fVar7) + (param_2 - fVar8) * (param_2 - fVar8))) {
        return;
      }
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
      puVar1 = 
      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
      ;
      if (lVar4 != 0) {
        FUN_016f27fc(lVar4,param_4,*(undefined8 *)StringLiteral_11190,0);
        FUN_00fe0764(*(undefined8 *)puVar1,lVar4,0);
        *(undefined1 *)(param_4 + 0xa8) = 1;
        puVar3 = Method_System_IO_Compression_DeflateStream_get_Position__;
        puVar2 = 
        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_12>__ctor__
        ;
        puVar1 = PTR_DAT_033f2390;
        if (*(long *)(param_4 + 0x78) != 0) {
          FUN_01323390(*(long *)(param_4 + 0x78),&local_78,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Transform,_GrabbablePoseCombiner>_Add__
                      );
          while( true ) {
            uVar5 = FUN_012b894c(&local_78,*(undefined8 *)puVar3);
            if ((uVar5 & 1) == 0) {
              FUN_012b8948(&local_78,*(undefined8 *)puVar1);
              FUN_0103c5a4(param_4);
              return;
            }
            lVar4 = FUN_00ad89a4(&local_78,*(undefined8 *)puVar2);
            if (lVar4 == 0) break;
            FUN_00ecb7a8(lVar4,0);
            FUN_00ecb758(lVar4,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


