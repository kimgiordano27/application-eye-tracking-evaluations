/*
FUNCTION_NAME: Unity.Services.Analytics.AdImpressionEvent$$set_AdTimeCloseButtonShownMs
ENTRY_POINT: 08de9bf0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x08de9ea8) */

void Unity_Services_Analytics_AdImpressionEvent__set_AdTimeCloseButtonShownMs(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x27;
  undefined1 auVar6 [12];
  long in_stack_00000008;
  long in_stack_00000168;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* catch() { ... } // from try @ 08de9a70 with catch @ 08de9bf8
                       catch() { ... } // from try @ 08de9aa0 with catch @ 08de9bf8
                       catch() { ... } // from try @ 08de9b30 with catch @ 08de9bf8
                       catch() { ... } // from try @ 08de9b64 with catch @ 08de9bf8
                       catch() { ... } // from try @ 08de9be4 with catch @ 08de9bf8 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_08de9c3c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_08de9c3c:
  (*(code *)*puVar1)();
  auVar6 = FUN_08d89720();
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  *(undefined1 (*) [12])(in_stack_00000008 + 0x10) = auVar6;
  lVar2 = *unaff_x23;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09faf2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_08de9cc4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_08de9cc4:
  (*(code *)*puVar1)();
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar2 = *unaff_x23;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_08de9d38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_08de9d38:
  (*(code *)*puVar1)();
  thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fb22f8);
  FUN_06ee7438();
  lVar2 = *unaff_x23;
  lVar5 = *(long *)PTR_DAT_09fb2308;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_08de9dd4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar2 = FUN_044822ac();
LAB_08de9dd4:
  lVar2 = thunk_FUN_044674a8(*(undefined8 *)(lVar2 + 8),lVar5);
  (**(code **)(lVar2 + 8))();
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_08de9e50;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac();
LAB_08de9e50:
    (*(code *)*puVar1)();
  }
  if (*(long *)(unaff_x27 + 0x28) != in_stack_00000168) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


