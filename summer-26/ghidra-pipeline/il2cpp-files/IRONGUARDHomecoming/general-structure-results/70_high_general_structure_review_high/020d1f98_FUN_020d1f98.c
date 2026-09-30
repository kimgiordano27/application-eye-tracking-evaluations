/*
FUNCTION_NAME: FUN_020d1f98
ENTRY_POINT: 020d1f98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_13;telemetry_or_network_hits_21
*/


void FUN_020d1f98(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((DAT_0482f9f3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<float>_op_Inequality__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Texture>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Texture>_GetHashCode__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TextureCurve>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__);
    DAT_0482f9f3 = 1;
  }
  puVar2 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  switch(*(undefined4 *)(param_1 + 0xf8)) {
  case 0:
    if (*(int *)(*(long *)
                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (param_2 == 0) goto LAB_020d2434;
    FUN_0404e3bc(param_2,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                 *(undefined8 *)(param_1 + 0xa8),0);
    break;
  case 1:
    if (param_2 == 0) goto LAB_020d2434;
    FUN_0404e958(param_2,*(int *)(param_1 + 0x2b8) + 1,0);
    FUN_0404e2f4(param_2,*(undefined8 *)(param_1 + 0x108),0);
    puVar2 = 
    Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
    ;
    lVar4 = *(long *)
             Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
    ;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar2;
    }
    FUN_0404fa3c(*(undefined4 *)(param_1 + 0x1ac),param_2,
                 *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xc),0);
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_020d2434;
    FUN_0404e2f4(*(long *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x108),0);
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_020d2434;
    FUN_0404fa3c(*(undefined4 *)(param_1 + 0x1ac),*(long *)(param_1 + 0x200),
                 *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),0);
    lVar4 = *(long *)(param_1 + 0x200);
    if (lVar4 == 0) goto LAB_020d2434;
    uVar6 = *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__;
LAB_020d2120:
    FUN_0404e9d8(lVar4,uVar6,0);
    break;
  case 2:
    if (*(long *)(param_1 + 0x218) == 0) goto LAB_020d2434;
    lVar4 = FUN_0404cef0(*(long *)(param_1 + 0x218),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar5 = FUN_04073094(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if ((lVar4 == 0) || (uVar6 = FUN_0404e190(lVar4,0), param_2 == 0)) goto LAB_020d2434;
      FUN_0404e2f4(param_2,uVar6,0);
      FUN_0404e6b0(lVar4,0);
      FUN_0404e78c(param_2,0);
      FUN_0404e490(lVar4,0);
      FUN_0404e598(param_2,0);
      puVar2 = 
      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
      ;
      lVar4 = *(long *)
               Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
      ;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar2;
      }
      FUN_0404fa3c(*(undefined4 *)(param_1 + 0x1ac),param_2,
                   *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xc),0);
      uVar6 = *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__;
      lVar4 = param_2;
      if (0.0 < *(float *)(param_1 + 0x1ac)) goto LAB_020d2120;
      FUN_0404ea1c(param_2,uVar6,0);
    }
    break;
  case 3:
    if (*(int *)(*(long *)
                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (param_2 == 0) goto LAB_020d2434;
    FUN_0404fa3c(*(undefined4 *)(param_1 + 0x1b0),param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
    break;
  case 4:
    if (*(int *)(*(long *)
                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (param_2 == 0) goto LAB_020d2434;
    thunk_FUN_0404eefc(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x178),
                       *(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x180),param_2,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14),0);
    break;
  case 5:
    if (*(int *)(*(long *)
                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (param_2 == 0) goto LAB_020d2434;
    thunk_FUN_0404eefc(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c),
                       *(undefined4 *)(param_1 + 0x170),0,param_2,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_04073094(uVar6,0,0);
  puVar2 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  if ((uVar5 & 1) == 0) {
    if (param_2 == 0) goto LAB_020d2434;
    FUN_0404ea1c(param_2,*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<float>_op_Inequality__,0);
  }
  else {
    if (*(int *)(*(long *)
                  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (param_2 == 0) {
LAB_020d2434:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0404e3bc(param_2,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),
                 *(undefined8 *)(param_1 + 0x80),0);
    FUN_0404e9d8(param_2,*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<float>_op_Inequality__,0);
  }
  puVar2 = Method_UnityEngine_Rendering_VolumeParameter<Texture>__ctor__;
  if (*(char *)(param_1 + 0x351) == '\0') {
    FUN_0404ea1c(param_2,*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<TextureCurve>__ctor__,0);
  }
  else {
    FUN_0404e9d8();
  }
  if (*(char *)(param_1 + 0x352) == '\0') {
    FUN_0404ea1c(param_2,*(undefined8 *)puVar2,0);
  }
  else {
    FUN_0404e9d8();
  }
  puVar2 = Method_UnityEngine_Rendering_VolumeParameter<Texture>_GetHashCode__;
  uVar6 = *(undefined8 *)(param_1 + 0x148);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  bVar3 = FUN_04073094(uVar6,0,0);
  *(byte *)(param_1 + 0x353) = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    FUN_0404e9d8(param_2,*(undefined8 *)puVar2,0);
    return;
  }
  FUN_0404ea1c(param_2,*(undefined8 *)puVar2,0);
  return;
}


