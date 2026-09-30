/*
FUNCTION_NAME: FUN_068acedc
ENTRY_POINT: 068acedc
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


undefined4 FUN_068acedc(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_07559106 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_11_0_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                );
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo)
    ;
    DAT_07559106 = 1;
  }
  plVar1 = (long *)FUN_068a9d4c(param_1);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto UnityEngine_Mesh__RecalculateNormalsImpl;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar1,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,5);
UnityEngine_Mesh__RecalculateNormalsImpl:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)(param_1 + 0xc0);
      if ((cVar3 != '\0') && ((param_3 & 1) != 0)) {
        plVar1 = *(long **)(param_1 + 0xb8);
        if (plVar1 != (long *)0x0) {
          lVar4 = *plVar1;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                 ) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_068ad070;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_031c0d08(plVar1,*(long *)
                                        Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                                ,7);
LAB_068ad070:
          lVar4 = (*(code *)*puVar2)(plVar1,param_1,puVar2[1]);
          if (lVar4 != 0) {
            uVar10 = *(undefined4 *)(param_1 + 0x358);
            uVar9 = *(undefined4 *)(param_1 + 0x354);
            uVar8 = FUN_069e80b8(*(undefined4 *)(param_1 + 0x350),lVar4,0);
            *(undefined4 *)param_2 = uVar8;
            *(undefined4 *)((long)param_2 + 4) = uVar9;
            *(undefined4 *)(param_2 + 1) = uVar10;
            return 3;
          }
        }
        goto LAB_068ad0b4;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x344);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x34c);
    *param_2 = uVar6;
    if (*(char *)(param_1 + 0x330) == '\0') {
      uVar8 = 0;
    }
    else if (*(char *)(param_1 + 0x340) == '\0') {
      if (*(long *)(param_1 + 0x2f8) == 0) goto LAB_068ad0b4;
      uVar8 = 1;
      if (cVar3 != '\0' || 0 < *(int *)(*(long *)(param_1 + 0x2f8) + 0x18)) {
        uVar8 = 2;
      }
    }
    else {
      uVar8 = 4;
    }
    return uVar8;
  }
LAB_068ad0b4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


