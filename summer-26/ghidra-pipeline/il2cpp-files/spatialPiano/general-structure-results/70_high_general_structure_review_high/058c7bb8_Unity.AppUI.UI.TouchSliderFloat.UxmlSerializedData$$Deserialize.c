/*
FUNCTION_NAME: Unity.AppUI.UI.TouchSliderFloat.UxmlSerializedData$$Deserialize
ENTRY_POINT: 058c7bb8
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


void Unity_AppUI_UI_TouchSliderFloat_UxmlSerializedData__Deserialize(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  
  plVar5 = (long *)FUN_058ca3dc();
  if ((plVar5 == (long *)0x0) ||
     (*plVar5 != *(long *)Method_System_Collections_Generic_List<List<Image>>__ctor__)) {
    iVar2 = FUN_058c04b8();
    plVar5 = (long *)0x0;
    bVar1 = true;
    if (iVar2 < 3) goto LAB_058c7c00;
  }
  else {
    uVar6 = FUN_058bf2bc(plVar5);
    bVar1 = false;
    if ((uVar6 & 1) != 0) goto LAB_058c7c00;
  }
  *(uint *)(unaff_x19 + 0x28) = *(uint *)(unaff_x19 + 0x28) | 0x400;
LAB_058c7c00:
  uVar6 = FUN_058c780c();
  if ((uVar6 & 1) == 0) {
    if (*(int *)(unaff_x20 + 0x30) < 1) {
      lVar7 = *(long *)(unaff_x20 + 0x48);
      if (lVar7 != 0) {
        *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) | 0x400;
      }
    }
    else {
      *(int *)(unaff_x20 + 0x30) = *(int *)(unaff_x20 + 0x30) + -1;
    }
  }
  if (((!bVar1) && (uVar6 = FUN_058bf320(plVar5), (uVar6 & 1) != 0)) &&
     (iVar2 = FUN_058bf384(plVar5), iVar2 < *(int *)(unaff_x20 + 0x30))) {
    uVar3 = FUN_058bf384(plVar5);
    *(long *)(unaff_x20 + 0x48) = unaff_x19;
    *(undefined4 *)(unaff_x20 + 0x30) = uVar3;
  }
  lVar7 = FUN_058bfa3c();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar5 = (long *)FUN_058ca3dc(lVar7,*(undefined8 *)PTR_DAT_067d7350,0);
  if (((plVar5 != (long *)0x0) &&
      (*plVar5 == *(long *)Method_System_Collections_Generic_List<List<Image>>_get_Item__)) &&
     (uVar4 = FUN_058cb44c(plVar5,0), (uVar4 >> 2 & 1) == 0)) {
    *(uint *)(unaff_x19 + 0x28) = *(uint *)(unaff_x19 + 0x28) | 0x10;
  }
  FUN_058c7fa4();
  return;
}


