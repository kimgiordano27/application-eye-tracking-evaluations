/*
FUNCTION_NAME: Unity.AppUI.UI.TouchSliderInt.UxmlSerializedData$$Deserialize
ENTRY_POINT: 06900a70
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06900ca4) */

long * Unity_AppUI_UI_TouchSliderInt_UxmlSerializedData__Deserialize(code *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong unaff_x21;
  int iVar11;
  
  plVar5 = (long *)(*param_1)();
  puVar4 = PTR_DAT_07a50918;
  puVar3 = PTR_DAT_07a50428;
  puVar2 = PTR_DAT_079f49a8;
  do {
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06900af0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar2,0);
LAB_06900af0:
      uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        plVar7 = (long *)0x0;
        iVar11 = 5;
        goto LAB_06900bc0;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06900b54;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar4,0);
LAB_06900b54:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    } while (plVar7 == (long *)0x0);
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
  } while (((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) ||
          (uVar9 = thunk_FUN_05c963c0(plVar7[5]), (uVar9 & 1) == 0));
  iVar11 = 4;
LAB_06900bc0:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06900c20;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_079f4598,0);
LAB_06900c20:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if ((iVar11 == 5) || (iVar11 == 0)) {
    if ((unaff_x21 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a50428);
      FUN_069007c0();
      FUN_068f6a88();
    }
  }
  return plVar7;
}


