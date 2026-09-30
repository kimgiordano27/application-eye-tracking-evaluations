/*
FUNCTION_NAME: OVRPlugin$$IsPassthroughShape
ENTRY_POINT: 051b0154
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsPassthroughShape(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto FUN_051b01a0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
FUN_051b01a0:
  auVar5 = (*(code *)*puVar1)();
  uVar2 = auVar5._8_8_;
  if (unaff_x22 != 0) {
    uVar2 = *unaff_x20;
    *(undefined8 *)(unaff_x22 + 0x10) = param_2;
    *(int *)(unaff_x22 + 0x20) = auVar5._0_4_;
    *(undefined4 *)(unaff_x22 + 0x24) = in_stack_00000008._4_4_;
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      FUN_051b2518(*(long *)(unaff_x22 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c(auVar5._0_8_,uVar2);
}


