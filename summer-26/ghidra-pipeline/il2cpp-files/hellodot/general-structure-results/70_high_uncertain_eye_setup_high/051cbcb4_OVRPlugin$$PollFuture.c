/*
FUNCTION_NAME: OVRPlugin$$PollFuture
ENTRY_POINT: 051cbcb4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollFuture
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ulong uVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  ulong in_x10;
  undefined4 unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  long *unaff_x25;
  undefined4 uVar6;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  while (!(bool)in_CY) {
    *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = param_7;
    if (in_x9 <= unaff_x24 + 2) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 2) * 4 + 0x20) = param_6;
    if (in_x9 <= unaff_x24 + 3) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 3) * 4 + 0x20) = param_5;
    if (in_x9 <= unaff_x24 + 4) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 4) * 4 + 0x20) = param_4;
    if (in_x9 <= unaff_x24 + 5) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 5) * 4 + 0x20) = param_3;
    if (in_x9 <= unaff_x24 + 6) break;
    unaff_w23 = unaff_w23 + 1;
    uVar1 = unaff_x24 + 7;
    *(undefined4 *)(param_1 + (unaff_x24 + 6) * 4 + 0x20) = param_2;
    if (unaff_w23 == 0x18) {
      *(undefined4 *)(unaff_x21 + 0x18) = unaff_x20[3];
      *(undefined4 *)(unaff_x21 + 0x1c) = unaff_x20[4];
      *(undefined4 *)(unaff_x21 + 0x20) = unaff_x20[5];
      *(undefined4 *)(unaff_x21 + 0x24) = unaff_x20[6];
      *(undefined4 *)(unaff_x21 + 0x28) = *unaff_x20;
      *(undefined4 *)(unaff_x21 + 0x2c) = unaff_x20[1];
      uVar6 = unaff_x20[2];
      *(undefined4 *)(unaff_x21 + 0x34) = unaff_w19;
      *(undefined4 *)(unaff_x21 + 0x30) = uVar6;
      return;
    }
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051cbc6c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051cbc6c:
    (*(code *)*puVar2)();
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
    if (in_x9 <= uVar1) break;
    in_x10 = unaff_x24 + 8;
    *(undefined4 *)(param_1 + uVar1 * 4 + 0x20) = uStack000000000000000c;
    unaff_x24 = uVar1;
    param_2 = uStack0000000000000008;
    param_3 = uStack0000000000000004;
    param_4 = uStack0000000000000000;
    param_5 = in_stack_00000018;
    param_6 = uStack0000000000000014;
    param_7 = uStack0000000000000010;
    in_CY = in_x9 <= in_x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


