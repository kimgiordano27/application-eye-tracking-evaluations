/*
FUNCTION_NAME: FUN_05edd604
ENTRY_POINT: 05edd604
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_4
*/


void FUN_05edd604(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_38;
  
                    /* catch() { ... } // from try @ 05edd5e0 with catch @ 05edd604 */
                    /* try { // try from 05edd608 to 05fdd60f has its CatchHandler @ 05edd618 */
                    /* try { // try from 05edd610 to 05fdd61b has its CatchHandler @ 05edd448 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05edd608 with catch @ 05edd618
                        */
  if ((DAT_06bc465b & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc488);
    FUN_02f08768(Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
    FUN_02f08768(Method_System_Xml_XmlExceptionHelper_ThrowXmlException__);
    FUN_02f08768(Method_System_Xml_XmlDocument_ImportNodeInternal__);
    FUN_02f08768(Method_System_Xml_XmlDocument_set_InnerText__);
    FUN_02f08768(Method_System_Xml_XmlEntity_set_InnerXml__);
    FUN_02f08768(PTR_DAT_067cc9f8);
    FUN_02f08768(Method_System_Xml_XmlEntityReference__ctor__);
    FUN_02f08768(Method_System_Xml_XmlEntityReference_set_Value__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__);
    DAT_06bc465b = 1;
  }
  local_38 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05edd9ac;
  uVar4 = FUN_0494ce14(*(long *)(param_1 + 0x10),param_2,
                       *(undefined8 *)Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
  if ((uVar4 & 1) == 0) {
    if (param_2 == 0) goto LAB_05edd9ac;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05edd9ac;
    auVar11 = FUN_0494cb8c(*(long *)(param_1 + 0x10),param_2,
                           *(undefined8 *)Method_System_Xml_XmlEntity_set_InnerXml__);
    uVar7 = auVar11._8_8_;
    uVar4 = auVar11._0_8_;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05edd9ac;
    FUN_0494e04c(*(long *)(param_1 + 0x10),param_2,
                 *(undefined8 *)Method_System_Xml_XmlExceptionHelper_ThrowXmlException__);
    puVar2 = Method_System_Xml_XmlEntityReference__ctor__;
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_05edd9ac;
    uVar5 = FUN_03b9c810(*(long *)(param_1 + 0x18),uVar4,uVar7,
                         *(undefined8 *)Method_System_Xml_XmlEntityReference__ctor__);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_05edd9ac;
      FUN_03b9d870(*(long *)(param_1 + 0x18),uVar4,uVar7,
                   *(undefined8 *)Method_System_Xml_XmlEntityReference_set_Value__);
    }
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05edd9ac;
    uVar5 = FUN_03b9c810(*(long *)(param_1 + 0x30),uVar4,uVar7,*(undefined8 *)puVar2);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_05edd9ac;
      FUN_03b9d870(*(long *)(param_1 + 0x30),uVar4,uVar7,
                   *(undefined8 *)Method_System_Xml_XmlEntityReference_set_Value__);
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_05edd9ac;
    uVar5 = FUN_03b9c810(*(long *)(param_1 + 0x28),uVar4,uVar7,*(undefined8 *)puVar2);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_05edd9ac;
      FUN_03b9d870(*(long *)(param_1 + 0x28),uVar4,uVar7,
                   *(undefined8 *)Method_System_Xml_XmlEntityReference_set_Value__);
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) goto LAB_05edd9ac;
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)PTR_DAT_067cc9f8;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_05edd9ac;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = auVar11._0_4_;
    }
    else {
      FUN_03a6c18c(lVar6,uVar4 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if (param_2 == 0) goto LAB_05edd9ac;
    if (*(long *)(param_2 + 0x40) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = thunk_FUN_02f1863c(*(long *)(param_2 + 0x40),0);
    }
    uVar10 = *(undefined8 *)Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050e4454(uVar10,0);
    uVar4 = FUN_050ed374(uVar7,uVar10,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x50);
      uVar3 = FUN_060f5e80(param_2,0);
      if (lVar6 == 0) goto LAB_05edd9ac;
      FUN_05ee4e60(lVar6,uVar3);
    }
  }
  if (*(long *)(param_1 + 0x40) == 0) {
LAB_05edd9ac:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = FUN_04856d44(*(long *)(param_1 + 0x40),*(undefined4 *)(param_2 + 0x38),&local_38,
                       *(undefined8 *)Method_System_Xml_XmlDocument_set_InnerText__);
  uVar7 = local_38;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_060f245c(uVar7,param_2,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_05edd9ac;
      FUN_04856718(*(long *)(param_1 + 0x40),*(undefined4 *)(param_2 + 0x38),
                   *(undefined8 *)Method_System_Xml_XmlDocument_ImportNodeInternal__);
      puVar2 = PTR_DAT_067cc488;
      lVar6 = *(long *)PTR_DAT_067cc488;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xa8);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
    }
  }
  uVar4 = FUN_05ee4eb8(param_1);
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_05ee4fa8(), (uVar4 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_067cc488 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05ee3d40();
  }
  return;
}


