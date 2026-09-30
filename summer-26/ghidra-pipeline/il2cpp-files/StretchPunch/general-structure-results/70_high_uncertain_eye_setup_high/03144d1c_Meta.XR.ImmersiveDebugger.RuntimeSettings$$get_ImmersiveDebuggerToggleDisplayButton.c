/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerToggleDisplayButton
ENTRY_POINT: 03144d1c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03144e68) */

void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerToggleDisplayButton
               (long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
LAB_03144d20:
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_1) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_RotateOverride;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01dde8fc();
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_RotateOverride:
  uVar1 = (*(code *)*puVar2)();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar4 = *(uint *)(unaff_x21 + 0x18);
  if (uVar4 == *(uint *)(lVar3 + 0x18)) {
    FUN_031436fc();
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  else {
    *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  *(undefined4 *)(lVar3 + (long)(int)uVar4 * 4 + 0x20) = uVar1;
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03144cf0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_03144cf0:
  uVar5 = (*(code *)*puVar2)();
  if ((uVar5 & 1) != 0) {
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_01dde7f8(param_1);
    }
    goto LAB_03144d20;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03144e30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_03144e30:
    (*(code *)*puVar2)();
  }
  return;
}


