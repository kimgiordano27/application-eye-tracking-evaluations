/*
FUNCTION_NAME: FUN_068b0ab8
ENTRY_POINT: 068b0ab8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_068b0ab8(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  if ((DAT_07559168 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_81_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_78_0_TypeInfo);
    auVar7 = FUN_03188a78(
                         Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo
                         );
    DAT_07559168 = 1;
  }
  if (param_2 != 0) {
    lVar6 = *(long *)(param_1 + 0xb0);
    auVar7 = FUN_06852668(param_2,0);
    if (lVar6 != 0) {
      auVar7 = FUN_03e3a124(lVar6,auVar7._0_8_,*(undefined8 *)OVRPlugin_OVRP_1_81_0_TypeInfo);
      if (*(long *)(param_1 + 0xb0) != 0) {
        if (*(int *)(*(long *)(param_1 + 0xb0) + 0x20) == 0) {
          *(undefined1 *)(param_1 + 0xc0) = 0;
        }
        uVar4 = FUN_06852668(param_2,0);
        auVar7 = FUN_068b4588(param_1,uVar4);
        if ((auVar7._0_8_ & 1) != 0) {
          return;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar7._8_8_;
        auVar7 = auVar1 << 0x40;
        if (*(long *)(param_1 + 0x110) != 0) {
          iVar3 = FUN_0525b47c(*(long *)(param_1 + 0x110),
                               *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo);
          if (0 < iVar3) {
            lVar6 = *(long *)(param_1 + 0x110);
            auVar7 = FUN_06852668(param_2,0);
            if (lVar6 == 0) goto LAB_068b0c20;
            FUN_0525cbc8(lVar6,auVar7._0_8_,*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo);
          }
          uVar4 = FUN_06852668(param_2,0);
          uVar5 = thunk_FUN_031c3cac(uVar4,*(undefined8 *)
                                            Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo
                                    );
          if (uVar5 == 0) {
            return;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar5;
          auVar7 = auVar2 << 0x40;
          if (*(long *)(param_1 + 0x108) != 0) {
            FUN_03e3a124(*(long *)(param_1 + 0x108),uVar5,
                         *(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo);
            return;
          }
        }
      }
    }
  }
LAB_068b0c20:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8(auVar7._0_8_,auVar7._8_8_);
}


