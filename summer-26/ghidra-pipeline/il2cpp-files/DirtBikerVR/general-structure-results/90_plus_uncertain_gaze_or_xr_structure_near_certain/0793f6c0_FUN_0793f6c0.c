/*
FUNCTION_NAME: FUN_0793f6c0
ENTRY_POINT: 0793f6c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_0793f6c0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined8 local_38;
  
                    /* try { // try from 0793f6d0 to 07a3f753 has its CatchHandler @ 0793f0fc */
  if ((DAT_08987dd1 & 1) == 0) {
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_Texture3DAtlas_AtlasElement___TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    FUN_03a8a718(OVRPlugin_Vector3f___TypeInfo);
    FUN_03a8a718(PTR_DAT_08491378);
    FUN_03a8a718(UnityEngine_Rendering_STP_PerViewConfig___TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_PostProcessing_ScreenSpaceReflectionsRenderer_QualityPreset___TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
    FUN_03a8a718(UnityEngine_SendMouseEvents_HitInfo___TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
    FUN_03a8a718(System_Net_Sockets_Socket_WSABUF___TypeInfo);
    FUN_03a8a718(PTR_DAT_0848acd8);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_TextureCache_SliceEntry___TypeInfo);
    FUN_03a8a718(System_TimeZoneInfo_AdjustmentRule___TypeInfo);
    DAT_08987dd1 = 1;
  }
  puVar3 = OVRPlugin_Vector3f___TypeInfo;
  local_38 = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_0793f9f8;
    }
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_TimeZoneInfo_AdjustmentRule___TypeInfo);
    FUN_0679343c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0xe);
    thunk_FUN_03afed3c();
    iVar1 = param_1[0x10];
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_1 + 0x12);
    *(int *)(lVar4 + 0x30) = iVar1;
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_1 + 0x14);
    thunk_FUN_03afed3c();
    puVar2 = PTR_DAT_0848acd8;
    if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (DAT_08975f9e == '\0') {
      FUN_03a8a718(PTR_DAT_0848acd8);
      DAT_08975f9e = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_STP_PerViewConfig___TypeInfo);
    FUN_04957830(uVar8,lVar4,
                 *(undefined8 *)
                  UnityEngine_Rendering_HighDefinition_TextureCache_SliceEntry___TypeInfo,0);
    if (*(int *)(*(long *)PTR_DAT_08491378 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_067b2f84(0);
    if (DAT_08987e60 == '\0') {
      FUN_03a8a718(Unity_Netcode_NetworkMessageManager_MessageHandler___TypeInfo);
      DAT_08987e60 = '\x01';
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = System_Array__BinarySearch<DataBindingManager_BindingRequest>
                      (lVar5,uVar8,uVar6,0,
                       *(undefined8 *)
                        (*(long *)(*(long *)
                                    Unity_Netcode_NetworkMessageManager_MessageHandler___TypeInfo +
                                  0xb8) + 8),
                       *(undefined8 *)UnityEngine_SendMouseEvents_HitInfo___TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar4,*(undefined8 *)System_Net_Sockets_Socket_WSABUF___TypeInfo);
    uVar7 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          UnityEngine_Rendering_PostProcessing_ScreenSpaceReflectionsRenderer_QualityPreset___TypeInfo
                        );
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x16) = local_38;
      thunk_FUN_03afed3c(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe3180(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo);
      return;
    }
  }
  lVar4 = FUN_0587c704(&local_38,
                       *(undefined8 *)
                        UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_ShaderPasses___TypeInfo
                      );
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_48 = FUN_058b71ec(lVar4,*(undefined8 *)
                                 UnityEngine_Rendering_RenderersParameters_ParamInfo___TypeInfo);
  uVar7 = FUN_0587c6c4(&local_48,
                       *(undefined8 *)
                        UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo)
  ;
  if ((uVar7 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x18) = local_48;
    thunk_FUN_03afed3c(param_1 + 0x18,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fe3180(param_1 + 2,&local_48,param_1,
                 *(undefined8 *)
                  UnityEngine_Rendering_HighDefinition_Texture3DAtlas_AtlasElement___TypeInfo);
    return;
  }
LAB_0793f9f8:
  uVar8 = FUN_0587c704(&local_48,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  puVar2 = UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar8,*(undefined8 *)puVar2);
  return;
}


