/*
FUNCTION_NAME: FUN_06f4f7f8
ENTRY_POINT: 06f4f7f8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 105
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_4;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


long FUN_06f4f7f8(undefined4 param_1,long *param_2,ulong param_3)

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
  int iVar12;
  ulong local_58;
  
                    /* try { // try from 06f4f7f8 to 0704f7ff has its CatchHandler @ 06f4f800 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06f4f7f8 with catch @ 06f4f800
                        */
  if ((DAT_07a596c4 & 1) == 0) {
    FUN_031f20f4(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo);
    FUN_031f20f4(PTR_DAT_075b7458);
    FUN_031f20f4(PTR_DAT_075b7460);
    FUN_031f20f4(PTR_DAT_075b74a8);
    FUN_031f20f4(PTR_DAT_075b74a0);
    FUN_031f20f4(Unity_MemoryProfiler_MetadataInjector_TypeInfo);
    FUN_031f20f4(UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    DAT_07a596c4 = 1;
  }
  puVar2 = PTR_DAT_0759b2a8;
  local_58 = 0;
  if (DAT_07a596a0 == '\0') {
    FUN_031f20f4(Meta_XR_MRUtilityKit_MRUKNativeFuncs_TypeInfo);
    DAT_07a596a0 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar6 = FUN_06e5ba28(param_2,0,0);
  uVar7 = 0;
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
    lVar8 = param_2[0x18];
    if (lVar8 == 0) {
      FUN_06f4fbd0(param_2);
      lVar8 = param_2[0x18];
    }
    uVar7 = 0;
    if (lVar8 != 0) {
      uVar7 = FUN_058ccd6c(lVar8,param_1,&local_58,
                           *(undefined8 *)Meta_XR_MetaXRFoveationFeature_TypeInfo);
      puVar4 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo;
      if ((uVar7 & 1) != 0) {
        return local_58;
      }
      if ((param_3 & 1) != 0) {
        if (**(long **)(*(long *)
                         UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo +
                       0xb8) == 0) {
          uVar9 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075b74a0);
          FUN_0439c03c(uVar9,*(undefined8 *)PTR_DAT_075b74a8);
          **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
          thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar9);
        }
        else {
          FUN_0439c6d0(**(long **)(*(long *)
                                    UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXROcclusionSubsystem_TypeInfo
                                  + 0xb8),*(undefined8 *)PTR_DAT_075b7460);
        }
        lVar8 = **(long **)(*(long *)puVar4 + 0xb8);
        uVar7 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
        puVar3 = PTR_DAT_075b7458;
        if (lVar8 == 0) goto LAB_06f4fab4;
        FUN_0439d228(lVar8,uVar7 & 0xffffffff,*(undefined8 *)PTR_DAT_075b7458);
        puVar5 = UnityEditor_Analytics_MetalPatchShaderComputeBufferAnalytic_TypeInfo;
        lVar8 = param_2[0x1b];
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
              if (((uVar7 & 1) != 0) && (local_58 = FUN_06f4f63c(param_1,plVar10,1), local_58 != 0))
              {
                return local_58;
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


