/*
FUNCTION_NAME: FUN_068b2680
ENTRY_POINT: 068b2680
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068b2680(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  if ((DAT_07559162 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_84_0_TypeInfo);
    auVar6 = FUN_03188a78(
                         Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo
                         );
    DAT_07559162 = 1;
  }
  if (param_2 != 0) {
    lVar5 = *(long *)(param_1 + 0xa0);
    auVar6 = FUN_068515f0(param_2,0);
    puVar2 = 
    Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo;
    if (lVar5 != 0) {
      Unity_Properties_IndexedCollectionPropertyBagEnumerator<Vector2Int>__MoveNext
                (lVar5,auVar6._0_8_,*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      uVar3 = FUN_068515f0(param_2,0);
      uVar4 = thunk_FUN_031c3cac(uVar3,*(undefined8 *)puVar2);
      if (uVar4 == 0) {
        return;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      auVar6 = auVar1 << 0x40;
      if (*(long *)(param_1 + 0x108) != 0) {
        Unity_Properties_IndexedCollectionPropertyBagEnumerator<Vector2Int>__MoveNext
                  (*(long *)(param_1 + 0x108),uVar4,*(undefined8 *)OVRPlugin_OVRP_1_75_0_TypeInfo);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8(auVar6._0_8_,auVar6._8_8_);
}


