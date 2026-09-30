/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureWidth
ENTRY_POINT: 033e9a24
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureWidth(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0xb60));
  *(undefined1 *)(unaff_x21 + 0xb03) = 1;
  puVar3 = StringLiteral_9112;
  puVar2 = StringLiteral_9105;
  puVar1 = StringLiteral_9103;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_0319996c(&stack0x00000008,*(long *)(unaff_x20 + 0x30),*(undefined8 *)StringLiteral_9109);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_02c52b88(&stack0x00000020,*(undefined8 *)puVar2), plVar4 = in_stack_00000030,
          (uVar5 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar7 = *in_stack_00000030;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_033e9ae8;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01dde8fc(in_stack_00000030,*(long *)puVar3,1);
LAB_033e9ae8:
      (*(code *)*puVar6)(plVar4);
    }
    FUN_02c52b84(&stack0x00000020,*(undefined8 *)puVar1);
  }
  if (*(char *)(unaff_x20 + 0x38) != '\0') {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_03419818();
  }
  return;
}


