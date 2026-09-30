/*
FUNCTION_NAME: UnityEngine.SkinnedMeshRenderer$$set_bones_Injected
ENTRY_POINT: 068aa240
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
UnityEngine_SkinnedMeshRenderer__set_bones_Injected
          (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *in_x10;
  int *piVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar9;
  ulong unaff_x22;
  undefined4 uVar10;
  
  uVar3 = (**(code **)(param_1 + (long)(*in_x10 + 5) * 0x10 + 0x138))();
  puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
LAB_068aa2bc:
    if ((unaff_x21 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + 0x300);
      if (lVar5 == 0) goto LAB_068aa3fc;
      if (0 < *(int *)(lVar5 + 0x18)) {
        lVar5 = FUN_042e47a4(lVar5,0,*(undefined8 *)OVRPlugin_OVRP_1_121_0_TypeInfo);
        if (lVar5 == 0) goto LAB_068aa3fc;
        if (*(long *)(lVar5 + 0x48) != 0) {
          if (((*(long *)(unaff_x20 + 0x300) == 0) ||
              (lVar5 = FUN_042e47a4(*(long *)(unaff_x20 + 0x300),0,*(undefined8 *)puVar1),
              lVar5 == 0)) || (plVar9 = *(long **)(lVar5 + 0x48), plVar9 == (long *)0x0))
          goto LAB_068aa3fc;
          lVar6 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          lVar5 = *(long *)
                   Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
          ;
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) goto LAB_068aa3b4;
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          goto LAB_068aa34c;
        }
      }
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x334);
    *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 0x33c);
    *unaff_x19 = uVar7;
    if (*(char *)(unaff_x20 + 0x330) == '\0') {
      return 0;
    }
    if (*(char *)(unaff_x20 + 0x340) != '\0') {
      return 4;
    }
    if (*(long *)(unaff_x20 + 0x2f8) != 0) {
      if (0 < *(int *)(*(long *)(unaff_x20 + 0x2f8) + 0x18)) {
        bVar2 = true;
      }
      if (!bVar2) {
        return 1;
      }
      return 2;
    }
    goto LAB_068aa3fc;
  }
  bVar2 = *(char *)(unaff_x20 + 0xc0) != '\0';
  if ((*(char *)(unaff_x20 + 0xc0) == '\0') || ((unaff_x22 & 1) == 0)) goto LAB_068aa2bc;
  plVar9 = *(long **)(unaff_x20 + 0xb8);
  if (plVar9 == (long *)0x0) goto LAB_068aa3fc;
  lVar6 = *plVar9;
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  lVar5 = *(long *)
           Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
  ;
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) goto LAB_068aa3b4;
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
LAB_068aa34c:
  puVar4 = (undefined8 *)FUN_031c0d08(plVar9,lVar5,7);
  goto LAB_068aa3c4;
LAB_068aa3b4:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
LAB_068aa3c4:
  lVar5 = (*(code *)*puVar4)(plVar9);
  if (lVar5 != 0) {
    uVar10 = FUN_069e6fbc(lVar5,0);
    *(undefined4 *)unaff_x19 = uVar10;
    *(undefined4 *)((long)unaff_x19 + 4) = param_3;
    *(undefined4 *)(unaff_x19 + 1) = param_4;
    return 3;
  }
LAB_068aa3fc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


