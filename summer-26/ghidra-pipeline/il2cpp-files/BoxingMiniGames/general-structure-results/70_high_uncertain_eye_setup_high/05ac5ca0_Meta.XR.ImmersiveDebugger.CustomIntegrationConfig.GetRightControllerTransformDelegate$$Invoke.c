/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$Invoke
ENTRY_POINT: 05ac5ca0
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


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__Invoke
               (long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_20 [8];
  undefined8 *puStack_18;
  undefined4 uStack_c;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  uVar1 = *(uint *)(lVar3 + 0xfc);
  if (param_2 != 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar3 = thunk_FUN_0367fd24(param_2,lVar3);
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
      }
      puStack_18 = (undefined8 *)
                   FUN_03642af0(param_2,lVar3,auStack_20 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48) + 0x28)) {
        puStack_18 = (undefined8 *)*puStack_18;
      }
      lVar3 = *(long *)(*param_1 + 0x1d0);
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,param_1,&puStack_18,&uStack_c);
      goto LAB_05ac5d90;
    }
    FUN_05e390e4(2,0);
  }
  uStack_c = 0;
LAB_05ac5d90:
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_c);
}


