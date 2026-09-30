/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$BeginInvoke
ENTRY_POINT: 06dec290
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate__BeginInvoke
               (long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  
code_r0x06dec290:
  puVar2 = (undefined8 *)(param_1 + 0x138);
  do {
    uStack00000000000000a8 = in_stack_00000028;
    uStack00000000000000a0 = in_stack_00000020;
    uStack00000000000000b0 = in_stack_00000030;
    uStack0000000000000088 = in_stack_00000008;
    uStack0000000000000080 = in_stack_00000000;
    uStack0000000000000090 = in_stack_00000010;
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w25 = unaff_w24 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar3 = unaff_x23 + (long)(int)unaff_w24 * (long)unaff_w26;
    in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
    in_stack_00000028 = *(undefined8 *)(lVar3 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar3 + 0x20);
    in_stack_00000010 = unaff_x22[2];
    in_stack_00000008 = unaff_x22[1];
    in_stack_00000000 = *unaff_x22;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c(lVar3);
    }
    param_1 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          param_1 = param_1 + (long)*piVar5 * 0x10;
          goto code_r0x06dec290;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
  } while( true );
}


