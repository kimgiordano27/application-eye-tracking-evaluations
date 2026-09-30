/*
FUNCTION_NAME: FUN_068b08b4
ENTRY_POINT: 068b08b4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_068b08b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_07559166 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_76_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo
                );
    DAT_07559166 = 1;
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0xb0);
    uVar2 = FUN_06852520(param_2,0);
    puVar1 = 
    Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo;
    if (lVar3 != 0) {
      Unity_Properties_IndexedCollectionPropertyBagEnumerator<Vector2Int>__MoveNext
                (lVar3,uVar2,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      uVar2 = FUN_06852520(param_2,0);
      lVar3 = thunk_FUN_031c3cac(uVar2,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        if (*(long *)(param_1 + 0x108) == 0) goto LAB_068b09c8;
        Unity_Properties_IndexedCollectionPropertyBagEnumerator<Vector2Int>__MoveNext
                  (*(long *)(param_1 + 0x108),lVar3,*(undefined8 *)OVRPlugin_OVRP_1_75_0_TypeInfo);
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        if (*(int *)(*(long *)(param_1 + 0xb0) + 0x20) == 1) {
          uVar2 = FUN_06852520(param_2,0);
          *(undefined8 *)(param_1 + 0xb8) = uVar2;
        }
        uVar2 = FUN_06852520(param_2,0);
        FUN_068b4604(param_1,uVar2);
        return;
      }
    }
  }
LAB_068b09c8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


