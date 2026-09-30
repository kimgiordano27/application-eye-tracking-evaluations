/*
FUNCTION_NAME: FUN_0520e4f4
ENTRY_POINT: 0520e4f4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0520e7ac) */

undefined8 FUN_0520e4f4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  long local_98;
  char *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_5c [4];
  undefined8 local_58;
  
  if ((DAT_06a5207a & 1) == 0) {
    FUN_02d4dc40(Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>_TypeInfo);
                    /* try { // try from 0520e52c to 0530e56b has its CatchHandler @ 0520e52c
                       catch() { ... } // from try @ 0520e52c with catch @ 0520e52c
                       catch() { ... } // from try @ 0520e600 with catch @ 0520e52c
                       catch() { ... } // from try @ 0520e63c with catch @ 0520e52c
                       catch() { ... } // from try @ 0520e70c with catch @ 0520e52c */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData,_ComputeGraphContext>_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_BloomPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02d4dc40(Photon_Voice_AudioSyncBuffer<float>_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object[]>_TypeInfo);
                    /* try { // try from 0520e56c to 0530e573 has its CatchHandler @ 0520e604 */
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02d4dc40(
                Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_TypeInfo
                );
    FUN_02d4dc40(Oculus_Platform_Message_Callback<ApplicationVersion>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
    DAT_06a5207a = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
                    /* try { // try from 0520e5b4 to 0530e5e7 has its CatchHandler @ 0520e60c */
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0)) {
    uVar11 = 0;
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 0x28);
    local_90 = local_5c;
    local_5c[0] = '\0';
    local_98 = 0;
    local_88 = &local_58;
    FUN_05065dd8(local_58,local_5c,0);
    lVar12 = *(long *)(param_1 + 0x28);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar1 = *(int *)(lVar12 + 0x18);
                    /* try { // try from 0520e5f8 to 0530e5fb has its CatchHandler @ 0520e608 */
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    /* try { // try from 0520e5fc to 0530e5ff has its CatchHandler @ 0520e600 */
    if (0 < iVar1) {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0520e5fc with catch @ 0520e600
                       try { // try from 0520e600 to 0530e623 has its CatchHandler @ 0520e52c */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0520e56c with catch @ 0520e604
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0520e5f8 with catch @ 0520e608
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0520e5b4 with catch @ 0520e60c
                        */
      FUN_05025690(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
                    /* try { // try from 0520e624 to 0530e63b has its CatchHandler @ 0520e704 */
    FUN_036a68ac(&local_b0,*(long *)(param_1 + 0x10),
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_DoFBokehPassData,_UnsafeGraphContext>_TypeInfo
                );
    puVar7 = Oculus_Platform_Message_Callback<ApplicationVersion>_TypeInfo;
    puVar6 = 
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData,_ComputeGraphContext>_TypeInfo
    ;
    puVar5 = UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo;
    puVar4 = Photon_Voice_AudioSyncBuffer<float>_TypeInfo;
    puVar3 = Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>_TypeInfo;
                    /* try { // try from 0520e63c to 0530e6f3 has its CatchHandler @ 0520e52c */
    uStack_78 = puStack_a8;
    local_80 = local_b0;
    local_70 = local_a0;
    puStack_a8 = &local_80;
    local_b0 = 0;
    while (uVar8 = FUN_049c6928(&local_80,*(undefined8 *)puVar6), uVar11 = local_70,
          (uVar8 & 1) != 0) {
      uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
      FUN_04d28f90(uVar9,param_1,*(undefined8 *)puVar7,0);
      lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
      FUN_0520ee98(lVar12,uVar11,uVar9,0);
      lVar10 = *(long *)(param_1 + 0x28);
      if (lVar10 == 0) {
LAB_0520e798:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar13 = *(long *)(lVar10 + 0x10);
      lVar15 = *(long *)puVar4;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_0520e798;
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                    /* try { // try from 0520e6f4 to 0530e703 has its CatchHandler @ 0520e704 */
        plVar14 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
        *plVar14 = lVar12;
        thunk_FUN_02dc1ef0(plVar14,lVar12);
                    /* catch() { ... } // from try @ 0520e624 with catch @ 0520e704
                       catch() { ... } // from try @ 0520e6f4 with catch @ 0520e704 */
      }
      else {
                    /* try { // try from 0520e708 to 0530e70b has its CatchHandler @ 0520e714 */
                    /* try { // try from 0520e70c to 0530e717 has its CatchHandler @ 0520e52c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0520e708 with catch @ 0520e714
                        */
        FUN_036a5e08(lVar10,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0520f0dc(lVar12,0);
    }
    FUN_049c6924(&local_80,
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData,_ComputeGraphContext>_TypeInfo
                );
    if (*local_90 != '\0') {
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_88,0);
    }
    if (local_98 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee0();
    }
    uVar11 = 1;
  }
  return uVar11;
}


