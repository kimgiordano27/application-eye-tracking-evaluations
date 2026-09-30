/*
FUNCTION_NAME: FUN_068e1a08
ENTRY_POINT: 068e1a08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068e1a08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_28;
  
  if ((DAT_075592d6 & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexBasisProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ColorProperty_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_DisplayProperty_TypeInfo);
    FUN_03188a78(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    DAT_075592d6 = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x338) != 0) {
    iVar3 = FUN_0524af7c(*(long *)(param_1 + 0x338),
                         *(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_DisplayProperty_TypeInfo
                        );
    if (0 < iVar3) {
      if (*(long *)(param_1 + 0x338) == 0) goto UnityEngine_SystemInfo__SupportsVibration;
      uVar4 = FUN_0524cd20(*(long *)(param_1 + 0x338),param_2,&local_28,
                           *(undefined8 *)
                            UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ColorProperty_TypeInfo
                          );
      uVar2 = local_28;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar4 = FUN_069d69b8(uVar2,0,0);
        puVar1 = OVRPlugin_LayerLayout_TypeInfo;
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)OVRPlugin_LayerLayout_TypeInfo;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar5 = *(long *)puVar1;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 == 0) goto UnityEngine_SystemInfo__SupportsVibration;
          FUN_0414d36c(lVar5,local_28,
                       *(undefined8 *)
                        UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty_TypeInfo
                      );
        }
        if (*(long *)(param_1 + 0x338) == 0) goto UnityEngine_SystemInfo__SupportsVibration;
        FUN_0524c6e0(*(long *)(param_1 + 0x338),param_2,
                     *(undefined8 *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexBasisProperty_TypeInfo
                    );
      }
    }
    return;
  }
UnityEngine_SystemInfo__SupportsVibration:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


