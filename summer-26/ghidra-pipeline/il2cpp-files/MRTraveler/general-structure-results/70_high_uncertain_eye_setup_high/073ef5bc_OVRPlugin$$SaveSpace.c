/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 073ef5bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpace(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  long in_x10;
  ulong in_x11;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long *unaff_x23;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  while (*(undefined4 *)(in_x10 + 0x20) = param_4, !(bool)in_CY) {
    *(undefined4 *)(param_1 + in_x11 * 4 + 0x20) = param_3;
    if (in_x9 <= unaff_x22 + 2) break;
    unaff_w21 = unaff_w21 + 1;
    uVar1 = unaff_x22 + 3;
    *(undefined4 *)(param_1 + (unaff_x22 + 2) * 4 + 0x20) = param_2;
    if (unaff_w21 == 0x18) {
      return;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073ef580;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_073ef580:
    (*(code *)*puVar2)();
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
    if (in_x9 <= uVar1) break;
    in_x11 = unaff_x22 + 4;
    in_x10 = param_1 + uVar1 * 4;
    unaff_x22 = uVar1;
    param_2 = in_stack_00000008;
    param_3 = uStack0000000000000004;
    param_4 = uStack0000000000000000;
    in_CY = in_x9 <= in_x11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


