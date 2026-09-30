/*
FUNCTION_NAME: OVRPlugin.Media$$Shutdown
ENTRY_POINT: 07a5d5a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Shutdown(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == **(long **)(in_x10 + 0x808)) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07a5d5f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07a5d5f0:
  iVar3 = (*(code *)*puVar4)();
  puVar2 = PTR_DAT_092f07f8;
  puVar1 = PTR_DAT_092ecf08;
  if (iVar3 == 0x18) {
    iVar3 = 0;
    do {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07a5d668;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07a5d668:
      (*(code *)*puVar4)(&stack0x00000080);
      if ((unaff_x19 & 1) != 0) {
        uStack0000000000000068 = uStack0000000000000088;
        in_stack_00000060 = in_stack_00000080;
        uStack0000000000000074 = uStack0000000000000094;
        uStack000000000000006c = uStack000000000000008c;
        uStack0000000000000070 = uStack0000000000000090;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uStack0000000000000028 = uStack0000000000000068;
        in_stack_00000020 = in_stack_00000060;
        uStack0000000000000034 = uStack0000000000000074;
        uStack000000000000002c = uStack000000000000006c;
        uStack0000000000000030 = uStack0000000000000070;
        FUN_07a56f20(&stack0x00000040 + 4,&stack0x00000020);
        uStack0000000000000088 = in_stack_00000040._12_4_;
        in_stack_00000080 = in_stack_00000040._4_8_;
        uStack0000000000000094 = in_stack_00000058;
        uStack000000000000008c = uStack0000000000000050;
        uStack0000000000000090 = uStack0000000000000054;
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07a5ceac();
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x18);
  }
  return;
}


