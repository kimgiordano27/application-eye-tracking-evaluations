/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$TryGetInlineCursor
ENTRY_POINT: 09702904
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEngine_UIElements_InlineStyleAccess__TryGetInlineCursor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  
  FUN_0594c4ec();
  if (unaff_x21 == 0) goto LAB_09702fa0;
  *(undefined8 *)(unaff_x21 + 0x48) = param_1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x48),param_1);
  lVar13 = *unaff_x28;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar13 = *unaff_x28;
  }
  puVar6 = System_Xml_Serialization_XmlRootAttribute_var;
  puVar3 = System_Xml_XmlQualifiedName_var;
  puVar1 = PTR_DAT_09fdb1e8;
  lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar13 = *(long *)System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
    }
    puVar2 = System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
    uVar19 = **(undefined8 **)(lVar13 + 0xb8);
    lVar17 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XmlSchemaElement_var);
    FUN_0554a0ac(lVar17,uVar19,*(undefined8 *)System_Runtime_Serialization_XmlWriterDelegator_var,0)
    ;
    plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar14 = lVar17;
    thunk_FUN_044bb4b4(plVar14,lVar17);
  }
  puVar9 = System_Xml_XmlTextReader_var;
  puVar8 = System_Xml_Schema_XmlSchemaSequence_var;
  puVar7 = System_Xml_Schema_XmlSchema_var;
  puVar5 = System_Runtime_Serialization_XmlReaderDelegator_var;
  puVar4 = System_Xml_XmlReader_var;
  puVar2 = System_Runtime_Serialization_XmlObjectSerializerWriteContext_var;
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XmlSchemaType_var);
  FUN_0594c4ec(uVar19,lVar17,0,10000,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x21 + 0x50) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x50),uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_06f975d8(uVar19,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x21 + 0x58) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x58),uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
  FUN_06f97734(uVar19,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x21 + 0x60) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x60),uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar7);
  FUN_07441bc0(uVar19,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x21 + 0x68) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x68),uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar9);
  FUN_096fa99c();
  *(undefined8 *)(unaff_x21 + 0x70) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x70),uVar19);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a546ad2 == '\0') {
    FUN_04447ba8(PTR_DAT_09fdb1e8);
    DAT_0a546ad2 = '\x01';
  }
  puVar6 = System_Xml_Serialization_XmlTypeMapMemberElement_var;
  puVar3 = System_Xml_XmlDictionaryString_var;
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar13 = *(long *)puVar1;
  }
  puVar8 = System_Xml_Serialization_XmlTypeMapMemberFlatList_var;
  puVar7 = System_Xml_XmlText_var;
  puVar5 = System_Xml_Serialization_XmlSchemaProviderAttribute_var;
  puVar4 = System_Xml_Schema_XmlSchemaChoice_var;
  puVar2 = PTR_DAT_09fdbbc8;
  puVar1 = PTR_DAT_09f1e6a8;
  *(undefined8 *)(unaff_x21 + 0xe8) = **(undefined8 **)(lVar13 + 0xb8);
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0xe8));
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_09702304();
  *(undefined8 *)(unaff_x21 + 0x128) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x128,uVar19);
  lVar13 = *(long *)puVar6;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar13 = *(long *)puVar6;
  }
  uVar18 = **(undefined8 **)(lVar13 + 0xb8);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_096f80d8(uVar19,uVar18,0);
  *(undefined8 *)(unaff_x21 + 0x130) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x130,uVar19);
  FUN_07a80df4();
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad680(uVar19,8,*(undefined8 *)puVar7);
  puVar20 = (undefined8 *)(unaff_x21 + 0x18);
  *puVar20 = uVar19;
  thunk_FUN_044bb4b4(puVar20,uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad680(uVar19,8,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x21 + 0x20) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x20),uVar19);
  uVar19 = FUN_04447c90(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar19;
  thunk_FUN_044bb4b4();
  uVar19 = FUN_04447c90(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x30) = uVar19;
  thunk_FUN_044bb4b4();
  FUN_09702fac(puVar20);
  *(long **)(unaff_x21 + 0x100) = unaff_x20;
  thunk_FUN_044bb4b4(unaff_x21 + 0x100,unaff_x20);
  *(long *)(unaff_x21 + 0x108) = unaff_x23;
  thunk_FUN_044bb4b4(unaff_x21 + 0x108,unaff_x23);
  *(undefined8 *)(unaff_x21 + 0x110) = unaff_x27;
  thunk_FUN_044bb4b4(unaff_x21 + 0x110);
  *(undefined8 *)(unaff_x21 + 0x118) = unaff_x26;
  thunk_FUN_044bb4b4(unaff_x21 + 0x118);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar8);
  FUN_0970e340(uVar19,0);
  *(undefined8 *)(unaff_x21 + 0x120) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x120,uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
  FUN_096f9d1c(uVar19,0);
  *(undefined8 *)(unaff_x21 + 0x140) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x140,uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberAnyElement_var
                             );
  FUN_09702144();
  *(undefined8 *)(unaff_x21 + 0xf0) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0xf0),uVar19);
  uVar18 = *(undefined8 *)(unaff_x21 + 0x130);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)
                               System_Xml_Serialization_XmlTypeMapMemberAnyAttribute_var);
  FUN_097f4f88(uVar19,uVar18,0);
  *(undefined8 *)(unaff_x21 + 0x138) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x138,uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XsdDateTime_var);
  FUN_09703024();
  *(undefined8 *)(unaff_x21 + 0x40) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x40),uVar19);
  iVar11 = FUN_094d65a8(0);
  puVar1 = UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var;
  if (unaff_x20 == (long *)0x0) goto LAB_09702fa0;
  iVar12 = (**(code **)(*unaff_x20 + 0x428))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x430));
  if (iVar12 == 0) {
    bVar10 = *(byte *)(*(long *)PTR_DAT_09f25a38 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar10) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar10 * 8 + -8) != *(long *)PTR_DAT_09f25a38
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(unaff_x20);
    }
    bVar10 = FUN_097ca200(unaff_x20,0);
    *(byte *)(unaff_x21 + 0x151) = bVar10 & 1;
    if (unaff_x23 == 0) goto LAB_09702fa0;
    *(byte *)(unaff_x23 + 0xc2) = bVar10 & 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((bVar10 & 1) != 0) {
      uVar19 = FUN_0970df64();
      goto LAB_09702e7c;
    }
    uVar19 = FUN_0970dd88(0);
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
    thunk_FUN_044bb4b4();
    if (iVar11 == 1) {
      plVar14 = (long *)unaff_x20[0xf];
      if (plVar14 == (long *)0x0) goto LAB_09702fa0;
      lVar13 = *plVar14;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)System_Xml_XmlNode_var) {
            puVar20 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_09702f88;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar20 = (undefined8 *)FUN_044822ac(plVar14,*(long *)System_Xml_XmlNode_var,0);
LAB_09702f88:
      bVar10 = (*(code *)*puVar20)(plVar14,puVar20[1]);
      *(byte *)(unaff_x21 + 0x153) = bVar10 & 1;
    }
  }
  else {
    if (iVar11 == 1) {
      *(undefined1 *)(unaff_x21 + 0x153) = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar19 = FUN_0970dfc0(0);
LAB_09702e7c:
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
    thunk_FUN_044bb4b4();
  }
  puVar3 = UnityEngine_PlayerLoop_TimeUpdate_var;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0970e01c(0);
  if (*(char *)(unaff_x21 + 0x153) != '\0') {
    iVar11 = 0;
  }
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_09711858(uVar19,iVar11,0);
  *(undefined8 *)(unaff_x21 + 0x148) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x148,uVar19);
  lVar13 = unaff_x20[0x18];
  *(char *)(unaff_x21 + 0x152) = (char)lVar13;
  if (unaff_x23 != 0) {
    *(char *)(unaff_x23 + 0xc1) = (char)lVar13;
    return;
  }
LAB_09702fa0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


