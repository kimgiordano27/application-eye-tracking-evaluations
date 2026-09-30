/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 0515f9e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *unaff_x19;
  long unaff_x21;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_0515fa24;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0515fa24:
  (*(code *)*puVar1)();
  if (unaff_x21 == 0) {
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae0();
}


