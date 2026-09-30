/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor$$get_hapticHoverEnterDuration
ENTRY_POINT: 05a0ddc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor__get_hapticHoverEnterDuration
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined1 in_w8;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  undefined4 uVar13;
  
  *(undefined1 *)(unaff_x20 + 0xcec) = in_w8;
  puVar7 = Method_UnityEngine_Component_GetComponent<OVRGrabbable>__;
  puVar6 = Method_UnityEngine_Component_GetComponent<OVREyeGaze>__;
  puVar5 = Method_UnityEngine_Component_GetComponent<NavMeshAgent>__;
  lVar12 = *(long *)(unaff_x19 + 0x10);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) == 0) {
      lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_UnityEngine_Component_GetComponent<NavMeshAgent>__);
      FUN_04dbdb8c(lVar8,0);
      iVar3 = *(int *)(lVar12 + 0x1c);
      lVar10 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)puVar7;
      *(undefined4 *)(lVar8 + 0x10) = 0;
      *(undefined4 *)(lVar8 + 0x24) = 0;
      *(undefined4 *)(lVar8 + 0x38) = 0;
      *(int *)(lVar12 + 0x1c) = iVar3 + 1;
      if (lVar10 != 0) {
        uVar4 = *(uint *)(lVar12 + 0x18);
        if (*(uint *)(lVar10 + 0x18) <= uVar4) {
          lVar10 = *(long *)(lVar11 + 0x20);
LAB_05a0df28:
          FUN_037a6538(lVar12,lVar8,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
          return;
        }
        *(uint *)(lVar12 + 0x18) = uVar4 + 1;
        plVar9 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
        *plVar9 = lVar8;
LAB_05a0def4:
        thunk_FUN_02bb0e9c(plVar9,lVar8);
        return;
      }
    }
    else {
      lVar12 = FUN_031b9370(lVar12,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<OVREyeGaze>__);
      if (lVar12 != 0) {
        uVar1 = *(undefined4 *)(lVar12 + 0x10);
        lVar12 = FUN_031b9370(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)puVar6);
        if (lVar12 != 0) {
          uVar2 = *(undefined4 *)(lVar12 + 0x24);
          lVar12 = FUN_031b9370(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)puVar6);
          if (lVar12 != 0) {
            uVar13 = *(undefined4 *)(lVar12 + 0x38);
            lVar12 = *(long *)(unaff_x19 + 0x10);
            lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
            FUN_04dbdb8c(lVar8,0);
            *(undefined4 *)(lVar8 + 0x10) = uVar1;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(undefined4 *)(lVar8 + 0x38) = uVar13;
            if (lVar12 != 0) {
              lVar10 = *(long *)(lVar12 + 0x10);
              lVar11 = *(long *)puVar7;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar4 = *(uint *)(lVar12 + 0x18);
                if (*(uint *)(lVar10 + 0x18) <= uVar4) {
                  lVar10 = *(long *)(lVar11 + 0x20);
                  goto LAB_05a0df28;
                }
                *(uint *)(lVar12 + 0x18) = uVar4 + 1;
                plVar9 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
                *plVar9 = lVar8;
                goto LAB_05a0def4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


