/*
FUNCTION_NAME: FUN_020d3e74
ENTRY_POINT: 020d3e74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_10
*/


void FUN_020d3e74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  puVar10 = Method_System_WeakReference<SslStream>_TryGetTarget__;
  puVar9 = Method_System_WeakReference<SslStream>__ctor__;
  puVar8 = Method_System_WeakReference<RegexReplacement>_TryGetTarget__;
  puVar7 = Method_System_WeakReference<RegexReplacement>_SetTarget__;
  puVar6 = Method_System_WeakReference<RegexReplacement>__ctor__;
  puVar5 = Method_System_WeakReference<Camera>_TryGetTarget__;
  puVar4 = Method_System_WeakReference<Camera>__ctor__;
  puVar3 = Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__;
  puVar2 = Method_UnityEngine_Rendering_VolumeParameter<Vector4>__ctor__;
  puVar1 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  if ((DAT_0482fa01 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                      );
    thunk_FUN_01efb3a4(Method_System_WeakReference<Camera>__ctor__);
    thunk_FUN_01efb3a4(Method_System_WeakReference<SslStream>__ctor__);
    thunk_FUN_01efb3a4(Method_System_WeakReference<RegexReplacement>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_WeakReference<SslStream>_TryGetTarget__);
    thunk_FUN_01efb3a4(Method_System_WeakReference<Camera>_TryGetTarget__);
    thunk_FUN_01efb3a4(Method_System_WeakReference<RegexReplacement>_SetTarget__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Vector4>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TrySetCompleted__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TrySetException__
                      );
    thunk_FUN_01efb3a4(Method_System_WeakReference<RegexReplacement>_TryGetTarget__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__);
    thunk_FUN_01efb3a4(
                      Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_get_CurrentResult__
                      );
    DAT_0482fa01 = 1;
  }
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar2,0);
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar3,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)puVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)
                         Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TrySetException__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)
                         Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_get_CurrentResult__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)
                         Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>__ctor__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_0404bafc(*(undefined8 *)
                         Method_System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TrySetCompleted__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar11;
  return;
}


