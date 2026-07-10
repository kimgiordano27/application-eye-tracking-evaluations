/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$ExecuteRenderPass
ENTRY_POINT: 0349f34c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: foveation_rendering_review_high
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;foveation_rendering;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_7;strong_foveation_hits_4;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0349f520) */
/* WARNING: Removing unreachable block (ram,0x0349f72c) */

void UnityEngine_Rendering_Universal_ScriptableRenderer__ExecuteRenderPass
               (long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_78;
  undefined1 *puStack_70;
  long local_68;
  undefined1 *local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined8 local_48;
  
  local_48 = param_2;
  if ((DAT_03ef5e5c & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0);
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_Universal_ScriptableRenderer_Profiling_RenderPass_TypeInfo_03cdb5a0
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo_03cdb3a8);
    FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
    DAT_03ef5e5c = 1;
  }
  local_54[0] = 0;
  local_58[0] = 0;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar4 = UnityEngine_Rendering_Universal_ScriptableRenderPass__get_profilingSampler(param_3);
  UnityEngine_Rendering_ProfilingScope___ctor(local_54,uVar4,0);
  local_68 = 0;
  local_60 = local_54;
  plVar5 = (long *)UnityEngine_Rendering_Universal_RenderingData__get_commandBuffer(param_5,0);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (*(long *)(param_4 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar8 = *plVar5;
  uVar6 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                    (*(long *)(param_4 + 0x1a0),0);
  puVar2 = PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500;
  if (((uVar6 & 1) == 0) || (uVar1 = *(uint *)(param_3 + 2), (int)uVar1 < 0x96)) goto LAB_0349f4a8;
  if (0x225 < uVar1) {
    if (uVar1 < 0x3e9) goto LAB_0349f4a8;
    if (*(int *)(*(long *)PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500 + 0xe4)
        == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (DAT_03ef5445 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
      DAT_03ef5445 = '\x01';
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar7 = *(long *)puVar2;
    }
    if ((*(byte *)(*(long *)(lVar7 + 0xb8) + 0x4c) & 1) == 0) goto LAB_0349f4a8;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(lVar8,1,0);
LAB_0349f4a8:
  puVar2 = 
  PTR_UnityEngine_Rendering_Universal_ScriptableRenderer_Profiling_RenderPass_TypeInfo_03cdb5a0;
  lVar7 = *(long *)
           PTR_UnityEngine_Rendering_Universal_ScriptableRenderer_Profiling_RenderPass_TypeInfo_03cdb5a0
  ;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar7 = *(long *)puVar2;
  }
  local_78 = local_78 & 0xffffffffffffff00;
                    /* try { // try from 0349f4d8 to 0359f64f has its CatchHandler @ 0349f4d8
                       catch() { ... } // from try @ 0349f4d8 with catch @ 0349f4d8
                       catch() { ... } // from try @ 034a0190 with catch @ 0349f4d8
                       catch() { ... } // from try @ 034a02ec with catch @ 0349f4d8 */
  UnityEngine_Rendering_ProfilingScope___ctor
            (&local_78,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
  local_58[0] = (undefined1)local_78;
  local_78 = 0;
  puStack_70 = local_58;
  UnityEngine_Rendering_Universal_ScriptableRenderer__SetRenderPassAttachments
            (param_1,lVar8,param_3,param_4);
  UnityEngine_Rendering_ProfilingScope__Dispose(local_58,0);
  puVar2 = PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388;
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388 + 0xe4)
      == 0) {
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBuffer(&local_48,lVar8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  UnityEngine_Rendering_CommandBuffer__Clear(lVar8,0);
  if (((*(char *)((long)param_3 + 0x52) == '\0') || (*(char *)(param_1 + 0x134) == '\0')) ||
     (uVar6 = UnityEngine_Rendering_Universal_UniversalCameraData__get_isRenderPassSupportedCamera
                        (param_4,0), (uVar6 & 1) == 0)) {
    (**(code **)(*param_3 + 0x1d8))(param_3,local_48,param_5,*(undefined8 *)(*param_3 + 0x1e0));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBuffer(&local_48,lVar8,0);
    UnityEngine_Rendering_CommandBuffer__Clear(lVar8,0);
  }
  else {
    UnityEngine_Rendering_Universal_ScriptableRenderer__ExecuteNativeRenderPass
              (param_1,local_48,param_3,param_4,param_5);
  }
  if (*(long *)(param_4 + 0x1a0) != 0) {
    uVar6 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(param_4 + 0x1a0),0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_4 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0349f73c to 0359f747 has its CatchHandler @ 034a0194 */
        FUN_01c5cbd4();
      }
      uVar6 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                        (*(long *)(param_4 + 0x1a0),0);
      if ((uVar6 & 1) != 0) {
        UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(lVar8,0,0);
      }
      puVar3 = PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0;
      if (*(int *)(*(long *)PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0 + 0xe4)
          == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (DAT_03ef5dac == '\0') {
        FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0);
        DAT_03ef5dac = '\x01';
      }
      lVar7 = *(long *)puVar3;
                    /* try { // try from 0349f650 to 0359f65b has its CatchHandler @ 034a0288 */
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar7 = *(long *)puVar3;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      plVar5 = (long *)(**(long **)(lVar7 + 0xb8) + 0x10);
      *plVar5 = lVar8;
                    /* try { // try from 0349f674 to 0359f677 has its CatchHandler @ 034a025c */
      thunk_FUN_01cc8040(plVar5,lVar8);
      uVar9 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
      uVar4 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(param_4,0);
                    /* try { // try from 0349f690 to 0359f693 has its CatchHandler @ 034a0284 */
                    /* try { // try from 0349f6a4 to 0359f6af has its CatchHandler @ 034a01a4 */
      if (*(int *)(*(long *)PTR_UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo_03cdb3a8
                  + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Rendering_Universal_XRSystemUniversal__UnmarkShaderProperties(uVar9,uVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
                    /* try { // try from 0349f6d8 to 0359f6ef has its CatchHandler @ 034a025c */
      UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBuffer(&local_48,lVar8,0);
      UnityEngine_Rendering_CommandBuffer__Clear(lVar8,0);
    }
    lVar8 = local_68;
    UnityEngine_Rendering_ProfilingScope__Dispose(local_60,0);
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbcc(lVar8);
    }
                    /* try { // try from 0349f714 to 0359f71f has its CatchHandler @ 034a0198 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


