/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 07482ee8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *piVar4;
  undefined4 unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  long *unaff_x25;
  undefined4 uVar5;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  do {
    *(undefined4 *)(param_1 + unaff_x24 * 4 + 0x20) = uStack000000000000000c;
    if (in_x9 <= unaff_x24 + 1) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 1) * 4 + 0x20) = uStack0000000000000010;
    if (in_x9 <= unaff_x24 + 2) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 2) * 4 + 0x20) = uStack0000000000000014;
    if (in_x9 <= unaff_x24 + 3) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 3) * 4 + 0x20) = in_stack_00000018;
    if (in_x9 <= unaff_x24 + 4) break;
    *(undefined4 *)(param_1 + (unaff_x24 + 4) * 4 + 0x20) = uStack0000000000000000;
    if (in_x9 <= unaff_x24 + 5) break;
    uVar3 = unaff_x24 + 6;
    *(undefined4 *)(param_1 + (unaff_x24 + 5) * 4 + 0x20) = uStack0000000000000004;
    if (in_x9 <= uVar3) break;
    unaff_w23 = unaff_w23 + 1;
    unaff_x24 = unaff_x24 + 7;
    *(undefined4 *)(param_1 + uVar3 * 4 + 0x20) = uStack0000000000000008;
    if (unaff_w23 == 0x18) {
      *(undefined4 *)(unaff_x21 + 0x18) = unaff_x20[3];
      *(undefined4 *)(unaff_x21 + 0x1c) = unaff_x20[4];
      *(undefined4 *)(unaff_x21 + 0x20) = unaff_x20[5];
      *(undefined4 *)(unaff_x21 + 0x24) = unaff_x20[6];
      *(undefined4 *)(unaff_x21 + 0x28) = *unaff_x20;
      *(undefined4 *)(unaff_x21 + 0x2c) = unaff_x20[1];
      uVar5 = unaff_x20[2];
      *(undefined4 *)(unaff_x21 + 0x34) = unaff_w19;
      *(undefined4 *)(unaff_x21 + 0x30) = uVar5;
      return;
    }
    lVar2 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_07482ec0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_07482ec0:
    (*(code *)*puVar1)();
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while (unaff_x24 < in_x9);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


