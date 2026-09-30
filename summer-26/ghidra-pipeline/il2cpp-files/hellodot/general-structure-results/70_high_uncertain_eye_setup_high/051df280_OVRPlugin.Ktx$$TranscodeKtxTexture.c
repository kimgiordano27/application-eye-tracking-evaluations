/*
FUNCTION_NAME: OVRPlugin.Ktx$$TranscodeKtxTexture
ENTRY_POINT: 051df280
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


void OVRPlugin_Ktx__TranscodeKtxTexture(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar5;
  undefined4 uVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  plVar5 = *(long **)(unaff_x21 + 0x5c0);
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *plVar5) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
        goto LAB_051df2d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051df2d0:
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(unaff_x19 + 0x34) = uStack0000000000000034;
  *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000020;
  FUN_051dee14();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *plVar5) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_051df360;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051df360:
  uVar6 = (*(code *)*puVar1)();
  *(undefined4 *)(unaff_x19 + 0x3c) = uVar6;
  FUN_051dee14();
  return;
}


