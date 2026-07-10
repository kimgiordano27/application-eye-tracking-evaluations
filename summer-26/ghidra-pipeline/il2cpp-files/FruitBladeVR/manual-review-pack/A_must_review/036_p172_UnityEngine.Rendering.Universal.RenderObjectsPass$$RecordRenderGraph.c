/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.RenderObjectsPass$$RecordRenderGraph
ENTRY_POINT: 034d4380
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ui_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_foveation_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x034d4f7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_Rendering_Universal_RenderObjectsPass__RecordRenderGraph
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  long local_70;
  long *local_68;
  
  if ((DAT_03ef5f90 & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<RenderObjectsPass_PassData,_RasterGraphContext>_TypeInfo_03cdc5a8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalLightData>___03cdabc0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalRenderingData>___03cdabc8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalResourceData>___03cdab40
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                );
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<RenderObjectsPass_PassData>___03cdc5b0
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>___03cdc5b8
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ScriptableRenderPass_TypeInfo_03cdab70);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_<RecordRenderGraph>b__33_0___03cdc5c0
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_TypeInfo_03cdc5c8);
    FUN_01c5c92c(PTR_StringLiteral_797_03cdc5d0);
    DAT_03ef5f90 = 1;
  }
  puVar2 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalRenderingData>___03cdabc8;
  puVar3 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalLightData>___03cdabc0;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (param_3 == 0) {
LAB_034d4f74:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar7 = FUN_0348482c(param_3,*(undefined8 *)
                                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38
                      );
  uVar8 = FUN_0348482c(param_3,*(undefined8 *)puVar2);
                    /* try { // try from 034d44c4 to 035d44cb has its CatchHandler @ 034d4680 */
  uVar9 = FUN_0348482c(param_3,*(undefined8 *)puVar3);
  uVar19 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 034d44d8 to 035d44df has its CatchHandler @ 034d4644 */
  uVar10 = UnityEngine_Rendering_Universal_ScriptableRenderPass__get_profilingSampler(param_1,0);
  puVar3 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalResourceData>___03cdab40;
  if (param_2 == 0) goto LAB_034d4f74;
                    /* try { // try from 034d44e8 to 035d44ef has its CatchHandler @ 034d4640 */
                    /* try { // try from 034d4508 to 035d450f has its CatchHandler @ 034d4548 */
                    /* try { // try from 034d4518 to 035d4523 has its CatchHandler @ 034d4544 */
  local_68 = (long *)UnityEngine_Rendering_RenderGraphModule_RenderGraph__AddRasterRenderPass<object>
                               (param_2,uVar19,&local_70,uVar10,
                                *(undefined8 *)PTR_StringLiteral_797_03cdc5d0,0x112,
                                *(undefined8 *)
                                 PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<RenderObjectsPass_PassData>___03cdc5b8
                               );
  lVar11 = FUN_0348482c(param_3,*(undefined8 *)puVar3);
                    /* try { // try from 034d4534 to 035d4537 has its CatchHandler @ 034d4634 */
                    /* try { // try from 034d4538 to 035d455b has its CatchHandler @ 034d433c */
                    /* catch() { ... } // from try @ 034d4518 with catch @ 034d4544 */
  UnityEngine_Rendering_Universal_RenderObjectsPass__InitPassData(param_1,lVar7,&local_70);
  lVar15 = local_70;
                    /* catch() { ... } // from try @ 034d4508 with catch @ 034d4548 */
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  auVar20 = UnityEngine_Rendering_Universal_UniversalResourceData__get_activeColorTexture(lVar11,0);
  plVar5 = local_68;
                    /* try { // try from 034d455c to 035d455f has its CatchHandler @ 034d4618 */
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
                    /* try { // try from 034d4560 to 035d45fb has its CatchHandler @ 034d433c */
  *(undefined1 (*) [16])(lVar15 + 0x1c) = auVar20;
  auVar20 = UnityEngine_Rendering_Universal_UniversalResourceData__get_activeColorTexture(lVar11,0);
  puVar3 = PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar15 = *plVar5;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)
           PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350)
      {
        puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_034d45d8;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_01c8cb54(plVar5,*(long *)
                                 PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                         ,0);
LAB_034d45d8:
  (*(code *)*puVar12)(plVar5,auVar20._0_8_,auVar20._8_8_,0,2,puVar12[1]);
  plVar5 = local_68;
                    /* try { // try from 034d45fc to 035d45ff has its CatchHandler @ 034d4630 */
                    /* try { // try from 034d4600 to 035d4603 has its CatchHandler @ 034d462c */
  auVar20 = UnityEngine_Rendering_Universal_UniversalResourceData__get_activeDepthTexture(lVar11,0);
                    /* try { // try from 034d4604 to 035d460b has its CatchHandler @ 034d4628 */
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar15 = *plVar5;
                    /* try { // try from 034d460c to 035d461b has its CatchHandler @ 034d433c */
                    /* catch() { ... } // from try @ 034d455c with catch @ 034d4618 */
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    /* try { // try from 034d461c to 035d4623 has its CatchHandler @ 034d467c */
  if (uVar18 != 0) {
                    /* try { // try from 034d4624 to 035d465b has its CatchHandler @ 034d433c */
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 034d4604 with catch @ 034d4628 */
                    /* catch() { ... } // from try @ 034d4600 with catch @ 034d462c */
                    /* catch() { ... } // from try @ 034d45fc with catch @ 034d4630 */
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                    /* try { // try from 034d465c to 035d465f has its CatchHandler @ 034d4668 */
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
        goto LAB_034d4660;
      }
                    /* catch() { ... } // from try @ 034d4534 with catch @ 034d4634 */
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
                    /* catch() { ... } // from try @ 034d44e8 with catch @ 034d4640 */
                    /* catch() { ... } // from try @ 034d44d8 with catch @ 034d4644 */
  puVar12 = (undefined8 *)FUN_01c8cb54(plVar5,*(long *)puVar3,4);
LAB_034d4660:
                    /* catch() { ... } // from try @ 034d465c with catch @ 034d4668 */
                    /* try { // try from 034d466c to 035d4673 has its CatchHandler @ 034d467c */
                    /* try { // try from 034d4674 to 035d4683 has its CatchHandler @ 034d433c */
  (*(code *)*puVar12)(plVar5,auVar20._0_8_,auVar20._8_8_,2,puVar12[1]);
                    /* catch() { ... } // from try @ 034d461c with catch @ 034d467c
                       catch() { ... } // from try @ 034d466c with catch @ 034d467c */
                    /* catch() { ... } // from try @ 034d44c4 with catch @ 034d4680 */
  local_80 = UnityEngine_Rendering_Universal_UniversalResourceData__get_mainShadowsTexture(lVar11,0)
  ;
                    /* try { // try from 034d4684 to 035d476f has its CatchHandler @ 034d4684
                       catch() { ... } // from try @ 034d4684 with catch @ 034d4684
                       catch() { ... } // from try @ 034d4790 with catch @ 034d4684
                       catch() { ... } // from try @ 034d47b8 with catch @ 034d4684
                       catch() { ... } // from try @ 034d47e4 with catch @ 034d4684
                       catch() { ... } // from try @ 034d4808 with catch @ 034d4684 */
  local_90 = UnityEngine_Rendering_Universal_UniversalResourceData__get_additionalShadowsTexture
                       (lVar11,0);
  puVar3 = PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968;
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968
              + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(*(long *)
                        PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968)
    ;
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  puVar2 = PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068;
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068
              + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  puVar4 = PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458;
  uVar1 = (uint)(ushort)local_80._2_2_;
  if (local_80._2_2_ != 0) {
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar2;
    }
    piVar16 = *(int **)(lVar15 + 0xb8);
    if (uVar1 << 0x10 != *piVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar16[1]) goto LAB_034d47d0;
    }
    plVar5 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
                    /* try { // try from 034d4770 to 035d4777 has its CatchHandler @ 034d47c4 */
    lVar15 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
                    /* try { // try from 034d4788 to 035d478f has its CatchHandler @ 034d47c0 */
                    /* try { // try from 034d4790 to 035d47b3 has its CatchHandler @ 034d4684 */
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                    /* try { // try from 034d47b4 to 035d47b7 has its CatchHandler @ 034d47bc */
                    /* try { // try from 034d47b8 to 035d47df has its CatchHandler @ 034d4684 */
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_034d47bc;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,0);
LAB_034d47bc:
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 034d47b4 with catch @ 034d47bc
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 034d4788 with catch @ 034d47c0
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 034d4770 with catch @ 034d47c4
                        */
    (*(code *)*puVar12)(plVar5,local_80,1,puVar12[1]);
  }
LAB_034d47d0:
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
                    /* try { // try from 034d47e0 to 035d47e3 has its CatchHandler @ 034d47fc */
                    /* try { // try from 034d47e4 to 035d47ff has its CatchHandler @ 034d4684 */
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
                    /* catch() { ... } // from try @ 034d47e0 with catch @ 034d47fc */
                    /* try { // try from 034d4800 to 035d4807 has its CatchHandler @ 034d4810 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 034d4808 to 035d4813 has its CatchHandler @ 034d4684 */
    thunk_FUN_01cb0d4c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034d4800 with catch @ 034d4810
                        */
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar1 = (uint)(ushort)local_90._2_2_;
  if (local_90._2_2_ != 0) {
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar2;
    }
    piVar16 = *(int **)(lVar15 + 0xb8);
    if (uVar1 << 0x10 != *piVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar16[1]) goto LAB_034d48e0;
    }
    plVar5 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar15 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_034d48cc;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,0);
LAB_034d48cc:
    (*(code *)*puVar12)(plVar5,local_90,1,puVar12[1]);
  }
LAB_034d48e0:
  lVar15 = UnityEngine_Rendering_Universal_UniversalResourceData__get_dBuffer(lVar11,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
    uVar18 = 0;
    uVar17 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    do {
      if (uVar17 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      lVar13 = lVar15 + uVar18 * 0x10;
      uStack_a8 = *(undefined8 *)(lVar13 + 0x28);
      local_b0 = *(undefined8 *)(lVar13 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (DAT_03ef5451 == '\0') {
        FUN_01c5c92c(puVar2);
        DAT_03ef5451 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (DAT_03ef5452 == '\0') {
        FUN_01c5c92c(puVar2);
        DAT_03ef5452 = '\x01';
      }
      uVar1 = (uint)local_b0._2_2_;
      if (local_b0._2_2_ != 0) {
        lVar13 = *(long *)puVar2;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar13 = *(long *)puVar2;
        }
        piVar16 = *(int **)(lVar13 + 0xb8);
        if (uVar1 << 0x10 != *piVar16) {
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
          }
          if (uVar1 << 0x10 != piVar16[1]) goto LAB_034d4a28;
        }
        plVar5 = local_68;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        lVar13 = *local_68;
        uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar17 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_034d4a14;
            }
            uVar17 = uVar17 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,0);
LAB_034d4a14:
        (*(code *)*puVar12)(plVar5,&local_b0,1,puVar12[1]);
      }
LAB_034d4a28:
      uVar17 = (ulong)*(uint *)(lVar15 + 0x18);
      uVar18 = uVar18 + 1;
    } while ((long)uVar18 < (long)(int)*(uint *)(lVar15 + 0x18));
  }
  local_a0 = UnityEngine_Rendering_Universal_UniversalResourceData__get_ssaoTexture(lVar11,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(*(long *)puVar3);
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar1 = (uint)(ushort)local_a0._2_2_;
  if (local_a0._2_2_ != 0) {
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar2;
    }
    piVar16 = *(int **)(lVar15 + 0xb8);
    if (uVar1 << 0x10 != *piVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        piVar16 = *(int **)(*(long *)puVar2 + 0xb8);
      }
      if (uVar1 << 0x10 != piVar16[1]) goto LAB_034d4b60;
    }
    plVar5 = local_68;
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar15 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_034d4b4c;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,0);
LAB_034d4b4c:
    (*(code *)*puVar12)(plVar5,local_a0,1,puVar12[1]);
  }
LAB_034d4b60:
  UnityEngine_Rendering_Universal_RenderObjectsPass__InitRendererLists
            (param_1,uVar8,uVar9,&local_70,0,param_2,1);
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar8 = *(undefined8 *)(local_70 + 0x40);
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_Universal_ScriptableRenderPass_TypeInfo_03cdab70 +
              0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  lVar11 = UnityEngine_Rendering_Universal_ScriptableRenderPass__GetActiveDebugHandler(uVar8,0);
  plVar5 = local_68;
  lVar15 = local_70;
  if (lVar11 == 0) {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar11 = *local_68;
    uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar16 + 9) * 0x10 + 0x138);
          goto LAB_034d4c34;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,9);
LAB_034d4c34:
    (*(code *)*puVar12)(plVar5,lVar15 + 0x2c,puVar12[1]);
  }
  else {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(long *)(local_70 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    UnityEngine_Rendering_Universal_DebugRendererLists__PrepareRendererListForRasterPass
              (*(long *)(local_70 + 0x38),local_68,0);
  }
  plVar5 = local_68;
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar15 = *local_68;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
        goto LAB_034d4c9c;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,0xb);
LAB_034d4c9c:
  (*(code *)*puVar12)(plVar5,0,puVar12[1]);
  plVar5 = local_68;
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar15 = *local_68;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
        goto LAB_034d4d04;
      }
      uVar18 = uVar18 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,0xc);
LAB_034d4d04:
  (*(code *)*puVar12)(plVar5,1,puVar12[1]);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar18 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(lVar7 + 0x1a0),0);
  plVar5 = local_68;
  if ((uVar18 & 1) != 0) {
    if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar18 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                       (*(long *)(lVar7 + 0x1a0),0);
    if ((uVar18 & 1) == 0) {
      bVar6 = false;
    }
    else {
      lVar7 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      bVar6 = *(char *)(lVar7 + 0x737) != '\0';
    }
    if (plVar5 == (long *)0x0) goto LAB_034d4f78;
    lVar7 = *plVar5;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
          goto LAB_034d4dc4;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c8cb54(plVar5,*(long *)puVar4,0xd);
LAB_034d4dc4:
    (*(code *)*puVar12)(plVar5,bVar6,puVar12[1]);
  }
  plVar5 = local_68;
  puVar3 = PTR_UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_TypeInfo_03cdc5c8;
  lVar7 = *(long *)PTR_UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_TypeInfo_03cdc5c8;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar7 = *(long *)puVar3;
  }
  puVar12 = *(undefined8 **)(lVar7 + 0xb8);
  lVar15 = puVar12[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar8 = *puVar12;
    lVar15 = thunk_FUN_01c8fc48(*(undefined8 *)
                                 PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<RenderObjectsPass_PassData,_RasterGraphContext>_TypeInfo_03cdc5a8
                               );
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<object,_RasterGraphContext>___ctor
              (lVar15,uVar8,
               *(undefined8 *)
                PTR_Method_UnityEngine_Rendering_Universal_RenderObjectsPass_<>c_<RecordRenderGraph>b__33_0___03cdc5c0
               ,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar14 = lVar15;
    thunk_FUN_01cc8040(plVar14,lVar15);
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    lVar11 = *(long *)
              PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<RenderObjectsPass_PassData>___03cdc5b0
    ;
    uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar18 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_034d4eb8;
        }
        uVar18 = uVar18 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar18 != 0);
    }
    lVar7 = FUN_01c8cb54(plVar5);
LAB_034d4eb8:
    lVar7 = thunk_FUN_01c78174(*(undefined8 *)(lVar7 + 8),lVar11);
    (**(code **)(lVar7 + 8))(plVar5,lVar15,lVar7);
    plVar5 = local_68;
    if (local_68 != (long *)0x0) {
      lVar7 = *local_68;
      uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar18 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_System_IDisposable_TypeInfo_03cb5b98) {
            puVar12 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_034d4f38;
          }
          uVar18 = uVar18 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c8cb54(local_68,*(long *)PTR_System_IDisposable_TypeInfo_03cb5b98,0);
LAB_034d4f38:
      (*(code *)*puVar12)(plVar5,puVar12[1]);
    }
    return;
  }
LAB_034d4f78:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


