/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler$$ExecuteBeginRenderPass
ENTRY_POINT: 034258b8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;pose_vector;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_21;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__ExecuteBeginRenderPass
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined2 *puVar12;
  void *__dest;
  long *plVar13;
  int iVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined1 local_64 [4];
  
  plVar15 = (long *)
            PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_TypeInfo_03cd71a8
  ;
  puVar7 = 
  PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<NativePassCompiler_NativeCompilerProfileId>___03cd70d0
  ;
  if ((DAT_03ef59f1 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBuffer_TypeInfo_03cd6918);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_Item___03cd7190
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_size___03cd71f0
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_TypeInfo_03cd71a8
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<SubPassDescriptor>___03cd7220
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeListUnsafeUtility_GetUnsafeReadOnlyPtr<SubPassDescriptor>___03cd7228
                );
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray___03cd7230);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<PassData>_ElementAt___03cd6368);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt___03cd7238)
    ;
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize___03cd7240);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor___03cd7248);
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>_get_IsCreated___03cd70c8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<NativePassCompiler_NativeCompilerProfileId>___03cd70d0
                );
    FUN_01c5c92c(PTR_Method_System_ReadOnlySpan<byte>_get_Empty___03cd7250);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef59f1 = 1;
  }
  local_64[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uVar10 = UnityEngine_Rendering_ProfilingSampler__Get<Int32Enum>(8,*(undefined8 *)puVar7);
  UnityEngine_Rendering_ProfilingScope___ctor(local_64,uVar10,0);
  local_c0 = 0;
  puStack_b8 = local_64;
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  iVar3 = *(int *)(param_4 + 0x294);
  lVar11 = Unity_Collections_NativeList<PassData>__ElementAt
                     (*(long *)(param_1 + 0x30) + 0x18,*(undefined4 *)(param_4 + 0x298),
                      *(undefined8 *)
                       PTR_Method_Unity_Collections_NativeList<PassData>_ElementAt___03cd6368);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar4 = *(undefined4 *)(lVar11 + 0x5c);
  uVar1 = *(undefined4 *)(lVar11 + 0x54);
  uVar2 = *(undefined4 *)(lVar11 + 0x58);
  uVar5 = *(undefined4 *)(lVar11 + 0x60);
  lVar11 = Unity_Collections_LowLevel_Unsafe_NativeListUnsafeUtility__GetUnsafeReadOnlyPtr<SubPassDescriptor>
                     (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68),
                      *(undefined8 *)
                       PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeListUnsafeUtility_GetUnsafeReadOnlyPtr<SubPassDescriptor>___03cd7228
                     );
  auVar16 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<SubPassDescriptor>
                      (lVar11 + (long)*(int *)(param_4 + 0x2a4) * 0x4c,
                       *(undefined4 *)(param_4 + 0x2a8),1,
                       *(undefined8 *)
                        PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<SubPassDescriptor>___03cd7220
                      );
  if (*(char *)(param_4 + 0x2bd) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(*(long *)(param_2 + 0x18),1,0);
  }
  plVar13 = (long *)(param_1 + 0x58);
  if (*plVar13 == 0) {
    uVar9 = Unity_Collections_AllocatorManager_AllocatorHandle__op_Implicit(4,0);
    local_1d0 = 0;
    Unity_Collections_NativeList<AttachmentDescriptor>___ctor
              (&local_1d0,8,uVar9,
               *(undefined8 *)
                PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>__ctor___03cd7248);
    *plVar13 = local_1d0;
  }
  Unity_Collections_NativeList<AttachmentDescriptor>__Resize
            (plVar13,iVar3,0,
             *(undefined8 *)
              PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>_Resize___03cd7240);
  puVar8 = PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>_ElementAt___03cd7238;
  puVar7 = 
  PTR_Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_get_Item___03cd7190
  ;
  if (0 < iVar3) {
    iVar14 = 0;
    do {
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      puVar12 = (undefined2 *)
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                          (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__GetRenderTargetInfo
                (param_3,puVar12,&local_80);
      __dest = (void *)Unity_Collections_NativeList<AttachmentDescriptor>__ElementAt
                                 (plVar13,iVar14,*(undefined8 *)puVar8);
      local_160 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      local_180 = 0;
      local_168 = 0;
      uStack_170 = 0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      UnityEngine_Rendering_AttachmentDescriptor___ctor(&local_1d0,local_70 & 0xffffffff,0);
      memcpy(__dest,&local_1d0,0x78);
      lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                         (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      if (*(char *)(lVar11 + 0x14) == '\0') {
        if (*(int *)(*(long *)
                      PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068 +
                    0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        lVar11 = UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__GetTextureResource
                           (param_3,*puVar12);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        uVar10 = *(undefined8 *)(lVar11 + 0xb8);
        UnityEngine_Rendering_RTHandle__op_Implicit(&local_1d0,uVar10,0);
        uStack_a8 = uStack_1c8;
        local_b0 = local_1d0;
        uStack_98 = uStack_1b8;
        uStack_a0 = local_1c0;
        local_90 = local_1b0;
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                           (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
        uVar9 = *(undefined4 *)(lVar11 + 0x18);
        lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                           (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
        local_1b0 = 0;
        local_d0 = local_90;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_e8 = uStack_a8;
        local_f0 = local_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        UnityEngine_Rendering_RenderTargetIdentifier___ctor
                  (&local_1d0,&local_f0,uVar9,0xffffffff,*(undefined4 *)(lVar11 + 0x1c),0);
        local_100 = local_1b0;
        uStack_118 = uStack_1c8;
        local_120 = local_1d0;
        uStack_108 = uStack_1b8;
        uStack_110 = local_1c0;
        UnityEngine_Rendering_AttachmentDescriptor__set_loadStoreTarget(__dest,&local_120,0);
        lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                           (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
        plVar15 = (long *)
                  PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_TypeInfo_03cd71a8
        ;
        if (*(int *)(lVar11 + 0x10) != 1) {
          if (*(int *)(*(long *)
                        PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_TypeInfo_03cd71a8
                      + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                             (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
          if (*(int *)(lVar11 + 0x10) != 2) goto LAB_03425d20;
        }
        UnityEngine_Rendering_RTHandle__op_Implicit(&local_1d0,uVar10,0);
        local_130 = local_1b0;
        uStack_148 = uStack_1c8;
        local_150 = local_1d0;
        uStack_138 = uStack_1b8;
        uStack_140 = local_1c0;
        UnityEngine_Rendering_AttachmentDescriptor__set_resolveTarget(__dest,&local_150,0);
      }
LAB_03425d20:
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                         (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      UnityEngine_Rendering_AttachmentDescriptor__set_loadAction
                (__dest,*(undefined4 *)(lVar11 + 0xc),0);
      lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                         (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      UnityEngine_Rendering_AttachmentDescriptor__set_storeAction
                (__dest,*(undefined4 *)(lVar11 + 0x10),0);
      lVar11 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>__get_Item
                         (param_4 + 0x194,iVar14,*(undefined8 *)puVar7);
      if (*(int *)(lVar11 + 0xc) == 1) {
        UnityEngine_Rendering_AttachmentDescriptor__set_clearColor
                  (0x3f800000,0,0,0x3f800000,__dest,0);
        UnityEngine_Rendering_AttachmentDescriptor__set_clearDepth(0x3f800000,__dest,0);
        UnityEngine_Rendering_AttachmentDescriptor__set_clearStencil(__dest,0,0);
        UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__GetTextureResourceDesc
                  (&local_1d0,param_3,puVar12,1);
        if ((iVar14 == 0) && (*(char *)(param_4 + 700) != '\0')) {
          UnityEngine_Rendering_AttachmentDescriptor__set_clearDepth
                    (0x3f800000,local_168._4_4_,local_160 & 0xffffffff,local_160._4_4_,__dest,0);
        }
        else {
          UnityEngine_Rendering_AttachmentDescriptor__set_clearColor
                    (local_168 & 0xffffffff,__dest,0);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar3 != iVar14);
  }
  auVar17 = Unity_Collections_NativeList<AttachmentDescriptor>__AsArray
                      (plVar13,*(undefined8 *)
                                PTR_Method_Unity_Collections_NativeList<AttachmentDescriptor>_AsArray___03cd7230
                      );
  cVar6 = *(char *)(param_4 + 700);
  auVar18 = System_ReadOnlySpan<byte>__get_Empty
                      (*(undefined8 *)PTR_Method_System_ReadOnlySpan<byte>_get_Empty___03cd7250);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    UnityEngine_Rendering_CommandBuffer__BeginRenderPass
              (*(long *)(param_2 + 0x18),uVar1,uVar2,uVar4,uVar5,auVar17._0_8_,auVar17._8_8_,
               cVar6 + -1,auVar16,auVar18,0);
    **(undefined1 **)(*(long *)PTR_UnityEngine_Rendering_CommandBuffer_TypeInfo_03cd6918 + 0xb8) = 1
    ;
    UnityEngine_Rendering_ProfilingScope__Dispose(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


