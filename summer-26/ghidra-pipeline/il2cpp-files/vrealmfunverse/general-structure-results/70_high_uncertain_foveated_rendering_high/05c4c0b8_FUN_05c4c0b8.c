/*
FUNCTION_NAME: FUN_05c4c0b8
ENTRY_POINT: 05c4c0b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_5;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


undefined4 FUN_05c4c0b8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_066d7120 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__)
    ;
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__);
    DAT_066d7120 = 1;
  }
  puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__;
  if (param_1 != 0) {
    plVar3 = (long *)FUN_04dc4190(param_1,0);
    uVar5 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar5 = FUN_04d8a7b0(uVar5,0);
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x218))(plVar3,uVar5,1,*(undefined8 *)(*plVar3 + 0x220));
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
        if ((int)*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar3 = *(long **)(lVar4 + 0x20);
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__)) {
            return (int)plVar3[2];
          }
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


