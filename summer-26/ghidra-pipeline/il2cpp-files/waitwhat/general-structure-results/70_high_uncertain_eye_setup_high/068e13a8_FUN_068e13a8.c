/*
FUNCTION_NAME: FUN_068e13a8
ENTRY_POINT: 068e13a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_068e13a8(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)
           UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ScaleProperty_TypeInfo;
  plVar2 = (long *)OVRPlugin_LayerLayout_TypeInfo;
  plVar3 = (long *)PTR_DAT_070c1b68;
  if ((DAT_075592d4 & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ScaleProperty_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    DAT_075592d4 = 1;
    puVar1 = (undefined8 *)
             UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ScaleProperty_TypeInfo;
    plVar2 = (long *)OVRPlugin_LayerLayout_TypeInfo;
    plVar3 = (long *)PTR_DAT_070c1b68;
  }
  do {
    lVar4 = *plVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *plVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_068e1494;
    lVar4 = FUN_0414d290(lVar4,*puVar1);
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338(*plVar3);
    }
    uVar5 = FUN_069d8404(lVar4,0,0);
  } while ((uVar5 & 1) != 0);
  uVar6 = FUN_069d3a80(param_1,0);
  if (lVar4 != 0) {
    FUN_069e7a48(lVar4,uVar6,0,0);
    return lVar4;
  }
LAB_068e1494:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


