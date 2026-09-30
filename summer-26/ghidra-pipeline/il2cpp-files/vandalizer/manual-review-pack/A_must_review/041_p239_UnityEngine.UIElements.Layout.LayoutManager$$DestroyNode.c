/*
FUNCTION_NAME: UnityEngine.UIElements.Layout.LayoutManager$$DestroyNode
ENTRY_POINT: 06f4f840
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


long UnityEngine_UIElements_Layout_LayoutManager__DestroyNode(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 unaff_w19;
  long *unaff_x20;
  int iVar12;
  ulong unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  
                    /* try { // try from 06f4f848 to 0704f8a7 has its CatchHandler @ 06f4f848
                       catch() { ... } // from try @ 06f4f848 with catch @ 06f4f848
                       catch() { ... } // from try @ 06f4f964 with catch @ 06f4f848
                       catch() { ... } // from try @ 06f4f9a0 with catch @ 06f4f848 */
  FUN_031f20f4(PTR_DAT_075b7458);
  FUN_031f20f4(PTR_DAT_075b7460);
  FUN_031f20f4(PTR_DAT_075b74a8);
  FUN_031f20f4(PTR_DAT_075b74a0);
  FUN_031f20f4(Unity_MemoryProfiler_MetadataInjector_TypeInfo);
  FUN_031f20f4(UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo);
  FUN_031f20f4(PTR_DAT_0759b2a8);
  *(undefined1 *)(unaff_x22 + 0x6c4) = 1;
  puVar2 = PTR_DAT_0759b2a8;
                    /* try { // try from 06f4f8a8 to 0704f8c7 has its CatchHandler @ 06f4f984 */
  in_stack_00000008 = 0;
  if (DAT_07a596a0 == '\0') {
    FUN_031f20f4(Meta_XR_MRUtilityKit_MRUKNativeFuncs_TypeInfo);
    DAT_07a596a0 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 06f4f8dc to 0704f8e7 has its CatchHandler @ 06f4f980 */
  uVar6 = FUN_06e5ba28();
                    /* try { // try from 06f4f8ec to 0704f8f7 has its CatchHandler @ 06f4f97c */
  uVar7 = 0;
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (unaff_x20 != (long *)0x0) {
    lVar8 = unaff_x20[0x18];
    if (lVar8 == 0) {
                    /* try { // try from 06f4f904 to 0704f92f has its CatchHandler @ 06f4f988 */
      FUN_06f4fbd0();
      lVar8 = unaff_x20[0x18];
    }
    uVar7 = 0;
    if (lVar8 != 0) {
      uVar7 = FUN_058ccd6c(lVar8,unaff_w19,&stack0x00000008,
                           *(undefined8 *)Meta_XR_MetaXRFoveationFeature_TypeInfo);
      puVar4 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo;
      if ((uVar7 & 1) != 0) {
        return in_stack_00000008;
      }
      if ((unaff_x21 & 1) != 0) {
                    /* try { // try from 06f4f944 to 0704f963 has its CatchHandler @ 06f4f98c */
        if (**(long **)(*(long *)
                         UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo +
                       0xb8) == 0) {
                    /* try { // try from 06f4f964 to 0704f99b has its CatchHandler @ 06f4f848 */
          uVar9 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075b74a0);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06f4f8ec with catch @ 06f4f97c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06f4f8dc with catch @ 06f4f980
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06f4f8a8 with catch @ 06f4f984
                        */
          FUN_0439c03c(uVar9,*(undefined8 *)PTR_DAT_075b74a8);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06f4f904 with catch @ 06f4f988
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06f4f944 with catch @ 06f4f98c
                        */
          **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
                    /* try { // try from 06f4f99c to 0704f99f has its CatchHandler @ 06f4f9b4 */
                    /* try { // try from 06f4f9a0 to 0704f9bb has its CatchHandler @ 06f4f848 */
          thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar9);
        }
        else {
          FUN_0439c6d0(**(long **)(*(long *)
                                    UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo
                                  + 0xb8),*(undefined8 *)PTR_DAT_075b7460);
        }
                    /* catch() { ... } // from try @ 06f4f99c with catch @ 06f4f9b4 */
        lVar8 = **(long **)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 06f4f9bc to 0704f9c3 has its CatchHandler @ 06f4f9c4 */
        uVar7 = (**(code **)(*unaff_x20 + 0x158))();
        puVar3 = PTR_DAT_075b7458;
        if (lVar8 == 0) goto LAB_06f4fab4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06f4f9bc with catch @ 06f4f9c4
                        */
        FUN_0439d228(lVar8,uVar7 & 0xffffffff,*(undefined8 *)PTR_DAT_075b7458);
        puVar5 = UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo;
        lVar8 = unaff_x20[0x1b];
        if ((lVar8 != 0) && (iVar1 = *(int *)(lVar8 + 0x18), 0 < iVar1)) {
          iVar12 = 0;
          do {
            plVar10 = (long *)FUN_047af170(lVar8,iVar12,*(undefined8 *)puVar5);
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar11);
            }
            uVar7 = FUN_06e5ba28(plVar10,0,0);
            if ((uVar7 & 1) == 0) {
              if (plVar10 == (long *)0x0) goto LAB_06f4fab4;
              uVar7 = (**(code **)(*plVar10 + 0x158))(plVar10,*(undefined8 *)(*plVar10 + 0x160));
              if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_06f4fab4;
              uVar7 = FUN_0439d228(**(long **)(*(long *)puVar4 + 0xb8),uVar7 & 0xffffffff,
                                   *(undefined8 *)puVar3);
              if (((uVar7 & 1) != 0) &&
                 (in_stack_00000008 = FUN_06f4f63c(unaff_w19,plVar10,1), in_stack_00000008 != 0)) {
                return in_stack_00000008;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar1 != iVar12);
        }
      }
      return 0;
    }
  }
LAB_06f4fab4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390(uVar7);
}


