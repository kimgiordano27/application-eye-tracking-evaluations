/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$Invoke
ENTRY_POINT: 07c9ee6c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__Invoke(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  float fVar5;
  
  lVar2 = *param_1;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0x938)) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_07c9eec8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac(param_1,**(long **)(in_x10 + 0x938),0);
LAB_07c9eec8:
  lVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
  if (lVar2 != 0) {
    fVar5 = (float)FUN_0953db60(lVar2,0);
    lVar2 = FUN_071b94f8();
    if (lVar2 != 0) {
      return fVar5 * *(float *)(lVar2 + 0x70);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


