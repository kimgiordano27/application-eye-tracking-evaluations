/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 03166be4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03166d9c) */

void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
code_r0x03166be4:
  puVar2 = (undefined8 *)(param_1 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(), (uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01dde7f8(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03166c60;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_03166c60:
    (*(code *)*puVar2)(&stack0x00000030);
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000088 = in_stack_00000058;
    in_stack_00000080 = in_stack_00000050;
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
      FUN_03165324();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      uVar5 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000030 = in_stack_00000060;
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000058 = in_stack_00000088;
    in_stack_00000050 = in_stack_00000080;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar3 = lVar3 + (long)(int)uVar5 * (long)unaff_w24;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000078;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000070;
    *(undefined8 *)(lVar3 + 0x48) = in_stack_00000088;
    *(undefined8 *)(lVar3 + 0x40) = in_stack_00000080;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000068;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000060;
    param_1 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          param_1 = param_1 + (long)*piVar6 * 0x10;
          goto code_r0x03166be4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03166d60;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_03166d60:
    (*(code *)*puVar2)();
  }
  return;
}


