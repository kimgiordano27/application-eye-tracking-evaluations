/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
ENTRY_POINT: 07898d94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  plVar3 = *(long **)(unaff_x19 + 0xb10);
  if ((*(byte *)(unaff_x20 + 0x829) & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_List<ERRoundaboutElement>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08493b10);
    *(undefined1 *)(unaff_x20 + 0x829) = 1;
  }
  puVar2 = System_Collections_Generic_List<ERRoundaboutElement>_TypeInfo;
  puVar1 = 
  UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<StoreAudit>_TypeInfo
  ;
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0484fdc4(*(undefined8 *)puVar1);
  FUN_0484fdc4(*(undefined8 *)puVar2);
  return;
}


