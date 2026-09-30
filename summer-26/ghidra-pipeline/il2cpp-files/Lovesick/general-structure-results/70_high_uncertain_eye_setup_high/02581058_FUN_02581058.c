/*
FUNCTION_NAME: FUN_02581058
ENTRY_POINT: 02581058
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02581058(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  
  puVar1 = System_Collections_Generic_List<fsData>_TypeInfo;
  if ((DAT_03782ec7 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<fsData>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_80__);
    thunk_FUN_00d48444(Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseOpen__);
    DAT_03782ec7 = 1;
  }
  lVar2 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + -1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar2 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_80__) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto UnityEngine_ScalableBufferManager__ResizeBuffers;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724(param_2,*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_80__,5);
UnityEngine_ScalableBufferManager__ResizeBuffers:
  (*(code *)*puVar3)(param_2,param_1,puVar3[1]);
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN_0132448c(*(long *)(param_1 + 0x268),param_2,
                 *(undefined8 *)Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseOpen__)
    ;
    return;
  }
  return;
}


