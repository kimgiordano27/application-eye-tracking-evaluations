/*
FUNCTION_NAME: FUN_06f4f63c
ENTRY_POINT: 06f4f63c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


long FUN_06f4f63c(undefined4 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long local_58;
  
  if ((DAT_07a596c5 & 1) == 0) {
    FUN_031f20f4(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo);
    FUN_031f20f4(PTR_DAT_075b7458);
    FUN_031f20f4(Unity_MemoryProfiler_MetadataInjector_TypeInfo);
    FUN_031f20f4(UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
                    /* try { // try from 06f4f6b4 to 0704f6d3 has its CatchHandler @ 06f4f7c0 */
    DAT_07a596c5 = 1;
  }
  local_58 = 0;
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0xc0);
    if (lVar7 == 0) {
      FUN_06f4fbd0(param_2);
      lVar7 = *(long *)(param_2 + 0xc0);
    }
    if (lVar7 != 0) {
                    /* try { // try from 06f4f6e8 to 0704f6f3 has its CatchHandler @ 06f4f7bc */
      uVar8 = FUN_058ccd6c(lVar7,param_1,&local_58,
                           *(undefined8 *)Meta_XR_MetaXRFoveationFeature_TypeInfo);
      puVar5 = UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo;
      puVar4 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo;
      puVar3 = PTR_DAT_075b7458;
      puVar2 = PTR_DAT_0759b2a8;
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 06f4f704 to 0704f747 has its CatchHandler @ 06f4f634 */
        if ((((param_3 & 1) != 0) && (lVar7 = *(long *)(param_2 + 0xd8), lVar7 != 0)) &&
           (iVar1 = *(int *)(lVar7 + 0x18), 0 < iVar1)) {
          iVar10 = 0;
          do {
            plVar9 = (long *)FUN_047af170(lVar7,iVar10,*(undefined8 *)puVar5);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
            }
            uVar8 = FUN_06e5ba28(plVar9,0,0);
            if ((uVar8 & 1) == 0) {
              if (plVar9 == (long *)0x0) goto LAB_06f4f7f4;
              uVar6 = (**(code **)(*plVar9 + 0x158))(plVar9,*(undefined8 *)(*plVar9 + 0x160));
              if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_06f4f7f4;
              uVar8 = FUN_0439d228(**(long **)(*(long *)puVar4 + 0xb8),uVar6,*(undefined8 *)puVar3);
              if (((uVar8 & 1) != 0) && (local_58 = FUN_06f4f63c(param_1,plVar9,1), local_58 != 0))
              {
                return local_58;
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar1 != iVar10);
        }
        local_58 = 0;
      }
      return local_58;
    }
  }
LAB_06f4f7f4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


