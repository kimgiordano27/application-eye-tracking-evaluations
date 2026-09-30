/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$EndInvoke
ENTRY_POINT: 05f35780
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__EndInvoke
               (uint param_1,undefined8 param_2,long param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  code *pcVar3;
  long *unaff_x22;
  
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03775678(lVar2);
    }
    lVar2 = thunk_FUN_037787d0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        FUN_03775678(lVar2);
      }
      lVar2 = thunk_FUN_037787d0();
      if (lVar2 != 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678(lVar2);
        }
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
          pvVar1 = (void *)thunk_FUN_03778a20();
          memcpy(&stack0x000000e0,pvVar1,0xdc);
          lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03775678(lVar2);
          }
          if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
            pvVar1 = (void *)thunk_FUN_03778a20();
            memcpy(&stack0x00000000,pvVar1,0xdc);
            pcVar3 = *(code **)(*unaff_x19 + 0x1b8);
            memcpy(&stack0x000002a0,&stack0x000000e0,0xdc);
            memcpy(&stack0x000001c0,&stack0x00000000,0xdc);
            param_1 = (*pcVar3)();
            goto LAB_05f358d0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
    }
    FUN_062638b4(2,0);
    param_1 = 0;
  }
LAB_05f358d0:
  return param_1 & 1;
}


