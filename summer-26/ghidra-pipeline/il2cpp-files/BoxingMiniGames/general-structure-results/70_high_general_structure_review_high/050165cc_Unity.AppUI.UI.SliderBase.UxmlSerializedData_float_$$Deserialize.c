/*
FUNCTION_NAME: Unity.AppUI.UI.SliderBase.UxmlSerializedData<float>$$Deserialize
ENTRY_POINT: 050165cc
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


void Unity_AppUI_UI_SliderBase_UxmlSerializedData<float>__Deserialize(void)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x21;
  long lVar8;
  
  uVar2 = (*in_x9)();
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    FUN_0367c9fc(lVar8);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar8 = thunk_FUN_0367fd24();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03643084();
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar3 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar8);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    uVar1 = *(ushort *)(lVar8 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0367c9fc(lVar8);
  }
  plVar4 = (long *)thunk_FUN_0367fd24();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03643084();
  }
  lVar8 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_050166c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_0367cd30(plVar4,lVar3,2);
LAB_050166c8:
  (*(code *)*puVar5)(plVar4,uVar2,puVar5[1]);
  return;
}


