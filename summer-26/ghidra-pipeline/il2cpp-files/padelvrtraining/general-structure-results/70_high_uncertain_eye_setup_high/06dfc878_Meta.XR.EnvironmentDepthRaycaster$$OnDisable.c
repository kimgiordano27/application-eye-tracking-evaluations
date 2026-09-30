/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDisable
ENTRY_POINT: 06dfc878
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_EnvironmentDepthRaycaster__OnDisable(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int in_w10;
  undefined8 uVar3;
  
  if (in_w10 == -2) {
    in_w10 = *(int *)(param_1 + 0x18);
    uVar1 = in_w10 - 1;
    *(uint *)(param_2 + 0xc) = uVar1;
    if (-1 < (int)uVar1) {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {
LAB_06dfc92c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
LAB_06dfc970:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar2 = lVar2 + (ulong)uVar1 * 0x10;
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      thunk_FUN_03d1023c(param_2 + 0x18,0);
    }
  }
  else {
    uVar1 = in_w10 - 1;
    *(uint *)(param_2 + 0xc) = uVar1;
    if ((int)uVar1 < 0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) goto LAB_06dfc92c;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_06dfc970;
      lVar2 = lVar2 + (ulong)uVar1 * 0x10;
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      thunk_FUN_03d1023c(param_2 + 0x18,0);
    }
  }
  return (uint)-in_w10 >> 0x1f;
}


