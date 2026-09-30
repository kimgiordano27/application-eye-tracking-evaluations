/*
FUNCTION_NAME: Unity.AppUI.UI.SliderBase.UxmlSerializedData<int>$$Deserialize
ENTRY_POINT: 043e5b90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


ulong Unity_AppUI_UI_SliderBase_UxmlSerializedData<int>__Deserialize
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar5 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02f421d0();
      goto LAB_043e5bb8;
    }
    plVar6 = (long *)(in_x10 + 2);
    in_x10 = piVar5;
  } while (*plVar6 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
LAB_043e5bb8:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 == 2) {
    uVar3 = 0;
  }
  else {
    plVar6 = *(long **)(unaff_x19 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_043e5c28;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x21,0);
LAB_043e5c28:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((int)uVar3 != 1) {
      uVar3 = (ulong)(*(long *)(unaff_x19 + 0x18) != 0);
    }
  }
  return uVar3;
}


