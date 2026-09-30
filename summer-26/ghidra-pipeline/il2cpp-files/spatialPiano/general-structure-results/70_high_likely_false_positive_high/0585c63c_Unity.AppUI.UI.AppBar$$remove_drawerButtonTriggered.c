/*
FUNCTION_NAME: Unity.AppUI.UI.AppBar$$remove_drawerButtonTriggered
ENTRY_POINT: 0585c63c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0585c944) */
/* WARNING: Removing unreachable block (ram,0x0585c9a8) */

void Unity_AppUI_UI_AppBar__remove_drawerButtonTriggered(ulong param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_ComputeNewRenderPoints_00000DB8_PostfixBurstDelegate>_get_Value__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067cb558);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_PostfixBurstDelegate>_get_Value__
                );
    *(undefined1 *)(unaff_x23 + 0x4f) = 1;
  }
  plVar7 = (long *)(**(code **)(*param_2 + 0x1b8))(param_2);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0585c6fc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067cb558,0);
LAB_0585c6fc:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar5 = 
    Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_PostfixBurstDelegate>_get_Value__
    ;
    puVar4 = 
    Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_ComputeNewRenderPoints_00000DB8_PostfixBurstDelegate>_get_Value__
    ;
    puVar3 = PTR_DAT_067c9338;
    puVar2 = PTR_DAT_067c91b8;
    if (plVar7 != (long *)0x0) {
      lVar11 = 0;
      do {
        lVar12 = *plVar7;
        lVar10 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0585c794;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(plVar7,lVar10,0);
LAB_0585c794:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        puVar1 = PTR_DAT_067c91b0;
        if ((uVar13 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_02f45174(plVar7,*(undefined8 *)PTR_DAT_067c91b0);
          if (plVar7 == (long *)0x0) goto LAB_0585c938;
          lVar10 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 == 0) goto LAB_0585c910;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0585c8f8;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *plVar7;
        lVar10 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0585c7fc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(plVar7,lVar10,1);
LAB_0585c7fc:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        thunk_FUN_02f453b8();
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar10 = FUN_0585bd14();
        if (lVar10 != param_2[3]) {
          *(undefined1 *)(unaff_x22 + 0x38) = 0;
        }
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = FUN_0585c390();
        lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
        FUN_05116b38(lVar10,0);
        *(undefined4 *)(lVar10 + 0x10) = uVar6;
        if (lVar11 != 0) {
          lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
          FUN_05116b38(lVar12,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          *(long *)(lVar12 + 0x10) = lVar11;
          *(long *)(lVar12 + 0x18) = lVar10;
          lVar10 = lVar12;
        }
        lVar11 = lVar10;
      } while (plVar7 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_0585c99c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0585c8f8:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0585c92c;
    }
  }
LAB_0585c910:
  puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,0);
LAB_0585c92c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0585c938:
  if (unaff_x19 != 0) {
    lVar10 = 0x10;
    if (*(long **)(unaff_x19 + 0x10) != param_2) {
      lVar10 = 0x18;
    }
    *(long *)(unaff_x19 + lVar10) = lVar11;
    return;
  }
LAB_0585c99c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


