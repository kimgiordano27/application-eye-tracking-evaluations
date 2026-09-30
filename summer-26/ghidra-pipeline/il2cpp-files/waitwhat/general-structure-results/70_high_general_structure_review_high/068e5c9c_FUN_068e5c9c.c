/*
FUNCTION_NAME: FUN_068e5c9c
ENTRY_POINT: 068e5c9c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_3
*/


undefined8 FUN_068e5c9c(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_075592f9 & 1) == 0) {
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo);
    FUN_03188a78(RoomDetails_ToolsItem_<>c__DisplayClass20_0_TypeInfo);
    FUN_03188a78(PTR_DAT_071121a8);
    FUN_03188a78(Internal_Cryptography_OidLookup_<>c_TypeInfo);
    DAT_075592f9 = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_068e5da8:
    uVar3 = 0;
  }
  else {
    lVar4 = *param_1;
    bVar1 = *(byte *)(lVar4 + 0x130);
    bVar2 = *(byte *)(*(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo +
                     0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo)) {
        bVar2 = *(byte *)(*(long *)RoomDetails_ToolsItem_<>c__DisplayClass20_0_TypeInfo + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)RoomDetails_ToolsItem_<>c__DisplayClass20_0_TypeInfo)) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_071121a8 + 0x130);
          if ((bVar2 <= bVar1) &&
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_071121a8
             )) {
            uVar3 = FUN_06a61e40(param_1,0);
            return uVar3;
          }
          goto LAB_068e5da8;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


