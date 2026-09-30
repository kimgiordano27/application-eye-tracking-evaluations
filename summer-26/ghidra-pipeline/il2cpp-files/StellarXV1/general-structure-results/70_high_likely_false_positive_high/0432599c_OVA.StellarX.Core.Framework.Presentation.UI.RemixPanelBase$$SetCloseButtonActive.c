/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.UI.RemixPanelBase$$SetCloseButtonActive
ENTRY_POINT: 0432599c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04325c6c) */

undefined1  [16]
OVA_StellarX_Core_Framework_Presentation_UI_RemixPanelBase__SetCloseButtonActive
          (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000028;
  
  piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar9 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_043259d8;
    }
    in_x9 = in_x9 + -1;
    piVar9 = piVar9 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_043259d8:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0928fac8 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0928fac8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar4);
    }
  }
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04325a74;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_04325a74:
  plVar5 = (long *)(*(code *)*puVar3)();
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09290478 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09290478)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar5);
    }
  }
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04325b10;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_04325b10:
  plVar6 = (long *)(*(code *)*puVar3)();
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_092905b0 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092905b0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar6);
    }
  }
  lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09290598);
  FUN_076bca34(lVar7,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(long *)(lVar7 + 0x10) = (long)plVar5;
  thunk_FUN_040ec700((long *)(lVar7 + 0x10),plVar5);
  *(long *)(lVar7 + 0x18) = (long)plVar6;
  thunk_FUN_040ec700((long *)(lVar7 + 0x18),plVar6);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_068bb688(&stack0x00000008,plVar4,lVar7,*(undefined8 *)PTR_DAT_09291fe8);
  plVar4 = in_stack_00000028;
  auVar2._8_8_ = in_stack_00000010;
  auVar2._0_8_ = in_stack_00000008;
  if (in_stack_00000028 != (long *)0x0) {
    lVar7 = *in_stack_00000028;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04325c24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000028,*(long *)PTR_DAT_092860c0,0);
LAB_04325c24:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return auVar2;
}


