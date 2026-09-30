/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$EndInvoke
ENTRY_POINT: 076e82b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__EndInvoke
               (undefined8 param_1,int param_2)

{
  int iVar1;
  int in_w9;
  int in_w10;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w22;
  int iVar2;
  
  if (in_w9 <= in_w10) {
    in_w10 = in_w9;
  }
  if (param_2 == -1) {
    *(int *)(unaff_x19 + 0xb4) = unaff_w22;
    *(int *)(unaff_x19 + 0xb8) = in_w10;
    for (; unaff_w22 <= in_w10; unaff_w22 = unaff_w22 + 1) {
      FUN_076ed498();
    }
    goto LAB_076e83f4;
  }
  iVar2 = *(int *)(unaff_x19 + 0xb8);
  if ((in_w10 < param_2) || (iVar2 < unaff_w22)) {
    FUN_076ed1f0();
    for (iVar2 = unaff_w22; iVar2 <= in_w10; iVar2 = iVar2 + 1) {
      FUN_076ed498();
    }
  }
  else {
    if (param_2 < unaff_w22) {
      FUN_076ed1f0();
      iVar2 = *(int *)(unaff_x19 + 0xb8);
    }
    if (in_w10 < iVar2) {
      FUN_076ed1f0();
    }
    iVar1 = *(int *)(unaff_x19 + 0xb4);
    iVar2 = unaff_w22;
    if (unaff_w22 < iVar1) {
      do {
        FUN_076ed498();
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
      if ((unaff_x20 & 1) == 0) {
        FUN_076ed2c0();
        iVar2 = *(int *)(unaff_x19 + 0xb8);
        if (in_w10 <= iVar2) goto LAB_076e8428;
      }
      else {
        iVar2 = *(int *)(unaff_x19 + 0xb8);
        if (in_w10 <= iVar2) goto LAB_076e83f0;
      }
    }
    else {
      iVar2 = *(int *)(unaff_x19 + 0xb8);
      if (in_w10 <= iVar2) {
        *(int *)(unaff_x19 + 0xb4) = unaff_w22;
        *(int *)(unaff_x19 + 0xb8) = in_w10;
        if ((unaff_x20 & 1) == 0) {
          return;
        }
        goto LAB_076e83f4;
      }
    }
    iVar2 = iVar2 + 1;
    do {
      FUN_076ed498();
      iVar2 = iVar2 + 1;
    } while (iVar2 <= in_w10);
    if ((unaff_x20 & 1) == 0) {
      FUN_076ed2c0();
LAB_076e8428:
      *(int *)(unaff_x19 + 0xb4) = unaff_w22;
      *(int *)(unaff_x19 + 0xb8) = in_w10;
      return;
    }
  }
LAB_076e83f0:
  *(int *)(unaff_x19 + 0xb4) = unaff_w22;
  *(int *)(unaff_x19 + 0xb8) = in_w10;
LAB_076e83f4:
  FUN_076ed2c0();
  return;
}


