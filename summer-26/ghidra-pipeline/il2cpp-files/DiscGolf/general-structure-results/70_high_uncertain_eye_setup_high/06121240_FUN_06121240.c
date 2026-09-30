/*
FUNCTION_NAME: FUN_06121240
ENTRY_POINT: 06121240
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_06121240(long param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_06dc6687 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a1c2d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<Toggle>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<TreeCopy>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<UIDisc>__);
    DAT_06dc6687 = 1;
  }
  puVar1 = (undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo;
  if ((((*(long *)(param_1 + 0x18) == 0) &&
       (puVar1 = (undefined8 *)Method_UnityEngine_GameObject_GetComponent<TreeCopy>__,
       *(long *)(param_1 + 0x20) == 0)) &&
      (puVar1 = (undefined8 *)Method_UnityEngine_GameObject_GetComponent<Toggle>__,
      *(long *)(param_1 + 0x28) == 0)) &&
     (puVar1 = (undefined8 *)PTR_DAT_06a1c2d8, *(long *)(param_1 + 0x30) != 0)) {
    puVar1 = (undefined8 *)Method_UnityEngine_GameObject_GetComponent<UIDisc>__;
  }
  return *puVar1;
}


