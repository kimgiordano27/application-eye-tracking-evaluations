/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$BeginInvoke
ENTRY_POINT: 05ac5cb4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__BeginInvoke
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x21;
  long unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x23 + 0x28);
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if (unaff_x21 != 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar3);
    }
    lVar3 = thunk_FUN_0367fd24();
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        FUN_0367c9fc(lVar3);
      }
      puVar2 = (undefined8 *)FUN_03642af0();
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48) + 0x28)) {
        puVar2 = (undefined8 *)*puVar2;
      }
      lVar3 = *param_1;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
      lVar3 = *(long *)(lVar3 + 0x1d0);
      (**(code **)(lVar3 + 0x10))
                (*(undefined8 *)(lVar3 + 8),lVar3,param_1,unaff_x29 + -0x18,unaff_x29 + -0xc);
      uVar1 = *(undefined4 *)(unaff_x29 + -0xc);
      goto LAB_05ac5d90;
    }
    FUN_05e390e4(2,0);
  }
  uVar1 = 0;
LAB_05ac5d90:
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


