/*
FUNCTION_NAME: UnityEngine.CubemapArray$$ApplyImpl
ENTRY_POINT: 068b79f0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_CubemapArray__ApplyImpl(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x21;
  
  FUN_03188a78(PTR_DAT_070c2418);
  FUN_03188a78(PTR_DAT_07115e00);
  FUN_03188a78(UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo);
  FUN_03188a78(PTR_DAT_070c22b0);
  FUN_03188a78(PTR_DAT_070c1b68);
  FUN_03188a78(Internal_Cryptography_OidLookup_<>c_TypeInfo);
  FUN_03188a78(UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo);
  FUN_03188a78(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x180) = 1;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x4c8);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_069d8404(uVar7,0,0);
  puVar2 = UnityEngine_XR_OpenXR_Features_OpenXRFeature_NativeEvent_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x4c8) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x4c8) + 0x30);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_069d69b8(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x4c8) != 0) {
        plVar6 = *(long **)(*(long *)(unaff_x19 + 0x4c8) + 0x30);
        if (plVar6 == (long *)0x0) {
LAB_068b7b8c:
          if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_0698f53c(*(undefined8 *)UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_Usages_TypeInfo
                      );
          return;
        }
        lVar4 = *plVar6;
        bVar1 = *(byte *)(*(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo)) {
          bVar1 = *(byte *)(*(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo
                           + 0x130);
          if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo))
          goto LAB_068b7b8c;
        }
        return;
      }
    }
  }
  else {
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c22b0);
    FUN_069d76f4(lVar4,*(undefined8 *)puVar2,0);
    if ((lVar4 != 0) && (lVar5 = FUN_03ac2e98(lVar4,*(undefined8 *)PTR_DAT_07115e00), lVar5 != 0)) {
      FUN_06a58cb4(lVar5,1,0);
      uVar7 = FUN_03ac2e98(lVar4,*(undefined8 *)
                                  UnityEngine_XR_OpenXR_Features_OpenXRFeature_LoaderEvent_TypeInfo)
      ;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


