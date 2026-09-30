/*
FUNCTION_NAME: FUN_07e4a8e0
ENTRY_POINT: 07e4a8e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07e4a8e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar7 = OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo;
  puVar6 = 
  UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeInfo;
  puVar5 = 
  UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Context_TypeInfo;
  puVar4 = UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_TypeInfo;
  puVar1 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo;
  puVar3 = PTR_DAT_084bb4b0;
  puVar2 = PTR_DAT_08491a00;
  if ((DAT_0899a751 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084bb4b0);
    FUN_03a8a718(Unity_Netcode_NetworkConfig_<>c_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488640);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Context_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo_TypeInfo
                );
    FUN_03a8a718(OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo);
    FUN_03a8a718(
                Method_<>f__AnonymousType0<string,_string,_string,_string,_Dictionary<string,_Dictionary<string,_string>>>__ctor__
                );
    FUN_03a8a718(Method_Unity_Collections_AllocatorHelper<RewindableAllocator>__ctor__);
    FUN_03a8a718(PTR_DAT_08491a00);
    DAT_0899a751 = 1;
  }
  puVar8 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo_TypeInfo
  ;
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar9 = 0;
  thunk_FUN_03afed3c(puVar9,0);
  uVar10 = *(undefined8 *)puVar1;
  *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = 0;
  uVar10 = thunk_FUN_03ac74bc(uVar10);
  FUN_04de7d48(uVar10,*(undefined8 *)puVar4);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar9 = uVar10;
  thunk_FUN_03afed3c(puVar9,uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_04de7d48(uVar10,*(undefined8 *)puVar4);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  *puVar9 = uVar10;
  thunk_FUN_03afed3c(puVar9,uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_04de7d48(uVar10,*(undefined8 *)puVar4);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
  *puVar9 = uVar10;
  thunk_FUN_03afed3c(puVar9,uVar10);
  uVar10 = *(undefined8 *)puVar5;
  lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
  *(undefined1 *)(lVar11 + 0x30) = 1;
  *(undefined8 *)(lVar11 + 0x34) = 0xffffffff00000000;
  *(undefined1 *)(lVar11 + 0x4a) = 1;
  uVar10 = thunk_FUN_03ac74bc(uVar10);
  FUN_04de7d48(uVar10,*(undefined8 *)puVar6);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
  *puVar9 = uVar10;
  thunk_FUN_03afed3c(puVar9,uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_05e35d30(uVar10,0,*(undefined8 *)puVar7,0);
  if (DAT_0899a820 == '\0') {
    FUN_03a8a718(OVR_OpenVR_IVRRenderModels__GetComponentButtonMask_TypeInfo);
    DAT_0899a820 = '\x01';
  }
  puVar4 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
  ;
  puVar1 = Unity_Netcode_NetworkConfig_<>c_TypeInfo;
  puVar2 = OVR_OpenVR_IVRRenderModels__GetComponentButtonMask_TypeInfo;
  puVar9 = (undefined8 *)
           (*(long *)(*(long *)OVR_OpenVR_IVRRenderModels__GetComponentButtonMask_TypeInfo + 0xb8) +
           0x10);
  *puVar9 = uVar10;
  thunk_FUN_03afed3c(puVar9,uVar10);
  lVar11 = *(long *)puVar8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar11 = *(long *)puVar8;
  }
  puVar5 = 
  Method_<>f__AnonymousType0<string,_string,_string,_string,_Dictionary<string,_Dictionary<string,_string>>>__ctor__
  ;
  uVar12 = **(undefined8 **)(lVar11 + 0xb8);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_05f21d70(uVar10,uVar12,*(undefined8 *)puVar4,0);
  if (DAT_0899a821 == '\0') {
    FUN_03a8a718(OVR_OpenVR_IVRRenderModels__GetComponentButtonMask_TypeInfo);
    DAT_0899a821 = '\x01';
  }
  puVar4 = Method_Unity_Collections_AllocatorHelper<RewindableAllocator>__ctor__;
  puVar1 = PTR_DAT_08488640;
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar9 = uVar10;
  thunk_FUN_03afed3c(puVar9,uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_05e35d30(uVar10,0,*(undefined8 *)puVar5,0);
  if (DAT_0899a822 == '\0') {
    FUN_03a8a718(OVR_OpenVR_IVRRenderModels__GetComponentButtonMask_TypeInfo);
    DAT_0899a822 = '\x01';
  }
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  *puVar9 = uVar10;
  thunk_FUN_03afed3c(puVar9,uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_066b5934(uVar10,0,*(undefined8 *)puVar4,0);
  FUN_07f5b9a8(uVar10,0);
  return;
}


