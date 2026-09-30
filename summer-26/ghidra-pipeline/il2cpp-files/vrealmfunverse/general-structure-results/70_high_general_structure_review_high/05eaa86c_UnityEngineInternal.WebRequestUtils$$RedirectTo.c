/*
FUNCTION_NAME: UnityEngineInternal.WebRequestUtils$$RedirectTo
ENTRY_POINT: 05eaa86c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void UnityEngineInternal_WebRequestUtils__RedirectTo(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x3e0));
  FUN_02b3c81c(PTR_DAT_06322ac8);
  FUN_02b3c81c(PTR_DAT_063213e8);
  FUN_02b3c81c(PTR_DAT_06321268);
  FUN_02b3c81c(PTR_DAT_06321270);
  FUN_02b3c81c(Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_set_enabled__);
  FUN_02b3c81c(PTR_DAT_06321280);
  FUN_02b3c81c(
              Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
              );
  *(undefined1 *)(unaff_x21 + 0x8ee) = 1;
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x68) == 0) {
      return;
    }
    plVar2 = *(long **)(unaff_x19 + 0x348);
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x988))(plVar2,*(undefined8 *)(*plVar2 + 0x990));
      FUN_05e48b78(uVar3,*(undefined8 *)(unaff_x19 + 0x360),0);
      puVar1 = PTR_DAT_06321268;
      plVar2 = *(long **)(unaff_x19 + 0x348);
      if (plVar2 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar2 + 0x988))(plVar2,*(undefined8 *)(*plVar2 + 0x990));
        uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
        FUN_04981ae4();
        if (lVar4 != 0) {
          FUN_0316db04(lVar4,uVar3,0,*(undefined8 *)PTR_DAT_06322ac8);
          puVar1 = PTR_DAT_06321270;
          plVar2 = *(long **)(unaff_x19 + 0x348);
          if (plVar2 != (long *)0x0) {
            lVar4 = (**(code **)(*plVar2 + 0x988))(plVar2,*(undefined8 *)(*plVar2 + 0x990));
            uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
            FUN_04981ae4();
            if (lVar4 != 0) {
              FUN_0316db04(lVar4,uVar3,0,*(undefined8 *)PTR_DAT_063213e0);
              puVar1 = 
              Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_set_enabled__;
              plVar2 = *(long **)(unaff_x19 + 0x348);
              if (plVar2 != (long *)0x0) {
                lVar4 = (**(code **)(*plVar2 + 0x988))(plVar2,*(undefined8 *)(*plVar2 + 0x990));
                uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                FUN_04981ae4();
                if (lVar4 != 0) {
                  FUN_0316db04(lVar4,uVar3,0,
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_AddEvaluator<XRDistanceEvaluator>__
                              );
                  puVar1 = PTR_DAT_06321280;
                  plVar2 = *(long **)(unaff_x19 + 0x348);
                  if (plVar2 != (long *)0x0) {
                    lVar4 = (**(code **)(*plVar2 + 0x988))(plVar2,*(undefined8 *)(*plVar2 + 0x990));
                    uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                    FUN_04981ae4();
                    if (lVar4 != 0) {
                      FUN_0316db04(lVar4,uVar3,0,*(undefined8 *)PTR_DAT_063213e8);
                      return;
                    }
                  }
                }
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


