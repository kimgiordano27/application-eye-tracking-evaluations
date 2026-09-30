/*
FUNCTION_NAME: UnityEngine.Texture$$GetDataHeight_Injected
ENTRY_POINT: 068b0b30
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_7;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Texture__GetDataHeight_Injected(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x21;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = FUN_06852668(param_1,0);
  if (unaff_x21 != 0) {
    auVar5 = FUN_03e3a124();
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0xb0) + 0x20) == 0) {
        *(undefined1 *)(unaff_x19 + 0xc0) = 0;
      }
      FUN_06852668();
      auVar6 = FUN_068b4588();
      if ((auVar6._0_8_ & 1) != 0) {
        return;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar6._8_8_;
      auVar5 = auVar5 << 0x40;
      if (*(long *)(unaff_x19 + 0x110) != 0) {
        iVar1 = FUN_0525b47c(*(long *)(unaff_x19 + 0x110),
                             *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo);
        if (0 < iVar1) {
          lVar4 = *(long *)(unaff_x19 + 0x110);
          auVar5 = FUN_06852668();
          if (lVar4 == 0) goto LAB_068b0c20;
          FUN_0525cbc8(lVar4,auVar5._0_8_,*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo);
        }
        uVar2 = FUN_06852668();
        uVar3 = thunk_FUN_031c3cac(uVar2,*(undefined8 *)
                                          Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo
                                  );
        if (uVar3 == 0) {
          return;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar3;
        auVar5 = auVar6 << 0x40;
        if (*(long *)(unaff_x19 + 0x108) != 0) {
          FUN_03e3a124(*(long *)(unaff_x19 + 0x108),uVar3,
                       *(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo);
          return;
        }
      }
    }
  }
LAB_068b0c20:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8(auVar5._0_8_,auVar5._8_8_);
}


