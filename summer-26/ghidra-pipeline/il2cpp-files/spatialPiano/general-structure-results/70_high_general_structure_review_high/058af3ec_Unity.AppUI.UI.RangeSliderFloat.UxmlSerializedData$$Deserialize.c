/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderFloat.UxmlSerializedData$$Deserialize
ENTRY_POINT: 058af3ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData__Deserialize(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int unaff_w20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
  while( true ) {
    FUN_058af028();
    unaff_w20 = unaff_w20 + -1;
    if (unaff_w20 == 0) break;
    unaff_x23 = FUN_058981f0(unaff_x23,0);
    if (unaff_x23 == 0) goto LAB_058af558;
    uVar4 = FUN_05896cd0(unaff_x23,0);
    if ((uVar4 & 1) == 0) break;
    bVar2 = unaff_w25 != *(int *)(unaff_x23 + 0x14) + *(int *)(unaff_x23 + 0x10);
    unaff_w25 = *(int *)(unaff_x23 + 0x10);
    if (bVar2) {
      uVar3 = FUN_04f71378();
      if (unaff_x24 == 0) goto LAB_058af558;
      lVar5 = *(long *)(unaff_x24 + 0x10);
      *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_058af558;
      uVar1 = *(uint *)(unaff_x24 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      }
      else {
        FUN_03abf904();
      }
      unaff_w25 = *(int *)(unaff_x23 + 0x10);
    }
  }
  if (0 < unaff_w25) {
    if (unaff_x22 == 0) goto LAB_058af558;
    FUN_04f7986c();
  }
  if (unaff_x24 != 0) {
    iVar6 = *(int *)(unaff_x24 + 0x18);
    if (-1 < iVar6 + -1) {
      do {
        iVar6 = iVar6 + -1;
        FUN_03abf644();
        if (unaff_x22 == 0) goto LAB_058af558;
        FUN_04f79730();
      } while (0 < iVar6);
    }
    FUN_04f7bf2c();
    return;
  }
LAB_058af558:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


