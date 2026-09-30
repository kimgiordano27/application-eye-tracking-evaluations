/*
FUNCTION_NAME: Unity.XR.CoreUtils.XROrigin$$SetupCamera
ENTRY_POINT: 05e05b84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 151
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_XR_CoreUtils_XROrigin__SetupCamera(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  puVar2 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData>__
  ;
  if ((DAT_06bc3e00 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3e00 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar3 = *(long *)(lVar3 + 0xb8);
  local_50 = *(undefined4 *)(lVar3 + 0x34);
  uStack_58 = *(undefined8 *)(lVar3 + 0x2c);
  local_60 = *(undefined8 *)(lVar3 + 0x24);
  uStack_68 = *(undefined8 *)(lVar3 + 0x1c);
  local_70 = *(undefined8 *)(lVar3 + 0x14);
  local_80 = *(undefined8 *)(lVar3 + 4);
  uStack_78._0_4_ = *(int *)(param_1 + 0x28);
  uStack_78._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0xc) >> 0x20);
  if (1 < (int)uStack_78) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,param_1 + 0x10,&local_80,uVar1,1,1,uVar4,0);
  }
  uStack_78._0_4_ = *(int *)(param_1 + 0x48);
  if (1 < (int)uStack_78) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,param_1 + 0x30,&local_80,uVar1,1,1,uVar4,0);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = CONCAT44(uStack_78._4_4_,1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05daf224(0,param_1 + 0x18,&local_80,uVar1,1,1,uVar4,0);
  FUN_05daf224(0,param_1 + 0x38,&local_80,*(undefined4 *)(param_1 + 0x50),1,1,
               *(undefined8 *)(param_1 + 0x40),0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_05c9ac9c(&local_a8,*(undefined8 *)(param_1 + 0x18),0);
  if (param_2 != 0) {
    uStack_c8 = uStack_a0;
    local_d0 = local_a8;
    uStack_b8 = uStack_90;
    uStack_c0 = local_98;
    local_b0 = local_88;
    FUN_0611f5d0(param_2,uVar4,&local_d0,0);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    FUN_05c9ac9c(&local_f8,*(undefined8 *)(param_1 + 0x38),0);
    uStack_118 = uStack_f0;
    local_120 = local_f8;
    uStack_108 = uStack_e0;
    uStack_110 = local_e8;
    local_100 = local_d8;
    FUN_0611f5d0(param_2,uVar4,&local_120,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


