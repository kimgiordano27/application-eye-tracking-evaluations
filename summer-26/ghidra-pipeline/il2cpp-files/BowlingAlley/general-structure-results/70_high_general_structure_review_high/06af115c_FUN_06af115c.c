/*
FUNCTION_NAME: FUN_06af115c
ENTRY_POINT: 06af115c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x06af14e8) */
/* WARNING: Removing unreachable block (ram,0x06af143c) */
/* WARNING: Removing unreachable block (ram,0x06af14f4) */
/* WARNING: Removing unreachable block (ram,0x06af14d8) */

void FUN_06af115c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  long local_68;
  
  puVar1 = 
  Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnUploadProgressChange__;
  if ((DAT_076e336e & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnComplete__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnUploadProgressChange__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_SetDownloadProgress__
                      );
    thunk_FUN_032e1da0(Method_System_Numerics_Vector<ushort>_get_Count__);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Results__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_set_Results__
                      );
    thunk_FUN_032e1da0(Method_System_Numerics_Vector<ushort>_op_Inequality__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_VolumeParameter<BloomDownscaleMode>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_UnitPortCollection<ControlInput>__ctor__);
    DAT_076e336e = 1;
  }
  puVar3 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnComplete__
  ;
  puVar2 = Method_Unity_VisualScripting_UnitPortCollection<ControlInput>__ctor__;
  local_78._8_8_ = 0;
  local_68 = 0;
  local_80 = 0;
  local_78._0_8_ = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_b0 = 0;
  FUN_06e1d0b8(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  local_78 = FUN_04c0cec8(&local_68,*(undefined8 *)puVar3);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar11 = *(long *)puVar2;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_050f8f40(&local_e8,lVar11,
               *(undefined8 *)
                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_SetDownloadProgress__
              );
  puVar8 = Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__;
  puVar7 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Results__
  ;
  puVar6 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
  ;
  puVar5 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
  ;
  puVar4 = Method_System_Numerics_Vector<ushort>_op_Inequality__;
  puVar3 = Method_System_Numerics_Vector<ushort>_get_Count__;
  puVar1 = PTR_DAT_072794f0;
  uStack_98 = uStack_e0;
  local_a0 = local_e8;
  uStack_88 = uStack_d0;
  local_90 = local_d8;
  local_80 = local_c8;
  while (uVar12 = FUN_05391a64(&local_a0,*(undefined8 *)puVar6), uVar10 = uStack_88,
        uVar9 = local_90, (uVar12 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = FUN_06bece64(uVar10,param_1,0);
    if ((uVar12 & 1) != 0) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_03d0b564(local_68,uVar9,*(undefined8 *)puVar4);
    }
  }
  FUN_05391b84(&local_a0,*(undefined8 *)puVar5);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar11 = *(long *)puVar2;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar11 = FUN_050f8a90(lVar11,param_1,*(undefined8 *)puVar3);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_03d0aee8(&local_e8,lVar11,*(undefined8 *)puVar8);
  uStack_b8 = uStack_e0;
  local_c0 = local_e8;
  local_b0 = local_d8;
  while (uVar12 = System_Collections_Generic_ArraySortHelper<KeyValuePair<Rect,_object>>__Swap
                            (&local_c0,*(undefined8 *)puVar7),
        puVar1 = 
        Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
        , (uVar12 & 1) != 0) {
    if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_03d0b564(local_68,local_b0,*(undefined8 *)puVar4);
  }
  FUN_052d3d34(&local_c0,
               *(undefined8 *)
                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
              );
  if (local_68 != 0) {
    FUN_03d0aee8(&local_e8,local_68,*(undefined8 *)puVar8);
    uStack_b8 = uStack_e0;
    local_c0 = local_e8;
    local_b0 = local_d8;
    while (uVar12 = System_Collections_Generic_ArraySortHelper<KeyValuePair<Rect,_object>>__Swap
                              (&local_c0,*(undefined8 *)puVar7), (uVar12 & 1) != 0) {
      UnityEngine_SystemInfo__GetGraphicsDeviceID(param_1,local_b0);
    }
    FUN_052d3d34(&local_c0,*(undefined8 *)puVar1);
    FUN_0479c0b0(local_78,*(undefined8 *)
                           Method_UnityEngine_Rendering_VolumeParameter<BloomDownscaleMode>__ctor__)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


