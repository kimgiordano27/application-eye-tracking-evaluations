/*
FUNCTION_NAME: UnityEngine.SkinnedMeshRenderer$$set_rootBone_Injected
ENTRY_POINT: 068aa17c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined4
UnityEngine_SkinnedMeshRenderer__set_rootBone_Injected
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 *param_5,ulong param_6,uint param_7)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  
  if ((DAT_07559105 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_11_0_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                );
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo)
    ;
    FUN_03188a78(OVRPlugin_OVRP_1_120_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_121_0_TypeInfo);
    DAT_07559105 = 1;
  }
  plVar3 = (long *)FUN_068a9d4c(param_4);
  if (plVar3 == (long *)0x0) goto LAB_068aa3fc;
  lVar5 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_068aa250;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,5);
LAB_068aa250:
  uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  if ((uVar8 & 1) == 0) {
    bVar2 = false;
LAB_068aa2bc:
    if ((param_7 & 1) != 0) {
      lVar5 = *(long *)(param_4 + 0x300);
      if (lVar5 == 0) goto LAB_068aa3fc;
      if (0 < *(int *)(lVar5 + 0x18)) {
        lVar5 = FUN_042e47a4(lVar5,0,*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo);
        if (lVar5 == 0) goto LAB_068aa3fc;
        if (*(long *)(lVar5 + 0x48) != 0) {
          if (((*(long *)(param_4 + 0x300) == 0) ||
              (lVar5 = FUN_042e47a4(*(long *)(param_4 + 0x300),0,*(undefined8 *)puVar1), lVar5 == 0)
              ) || (plVar3 = *(long **)(lVar5 + 0x48), plVar3 == (long *)0x0)) goto LAB_068aa3fc;
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          lVar5 = *(long *)
                   Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
          ;
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) goto LAB_068aa3b4;
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          goto LAB_068aa34c;
        }
      }
    }
    uVar7 = *(undefined8 *)(param_4 + 0x334);
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(param_4 + 0x33c);
    *param_5 = uVar7;
    if (*(char *)(param_4 + 0x330) == '\0') {
      return 0;
    }
    if (*(char *)(param_4 + 0x340) != '\0') {
      return 4;
    }
    if (*(long *)(param_4 + 0x2f8) != 0) {
      if (0 < *(int *)(*(long *)(param_4 + 0x2f8) + 0x18)) {
        bVar2 = true;
      }
      if (!bVar2) {
        return 1;
      }
      return 2;
    }
    goto LAB_068aa3fc;
  }
  bVar2 = *(char *)(param_4 + 0xc0) != '\0';
  if ((*(char *)(param_4 + 0xc0) == '\0') || ((param_6 & 1) == 0)) goto LAB_068aa2bc;
  plVar3 = *(long **)(param_4 + 0xb8);
  if (plVar3 == (long *)0x0) goto LAB_068aa3fc;
  lVar6 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  lVar5 = *(long *)
           Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
  ;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) goto LAB_068aa3b4;
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
LAB_068aa34c:
  puVar4 = (undefined8 *)FUN_031c0d08(plVar3,lVar5,7);
LAB_068aa3c4:
  lVar5 = (*(code *)*puVar4)(plVar3,param_4,puVar4[1]);
  if (lVar5 != 0) {
    uVar10 = FUN_069e6fbc(lVar5,0);
    *(undefined4 *)param_5 = uVar10;
    *(undefined4 *)((long)param_5 + 4) = param_2;
    *(undefined4 *)(param_5 + 1) = param_3;
    return 3;
  }
LAB_068aa3fc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
LAB_068aa3b4:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
  goto LAB_068aa3c4;
}


