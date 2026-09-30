/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$UnityEngine.UIElements.IStyle.get_cursor
ENTRY_POINT: 0970289c
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


void UnityEngine_UIElements_InlineStyleAccess__UnityEngine_UIElements_IStyle_get_cursor(void)

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
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long lVar19;
  undefined8 uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  
  thunk_FUN_044a54b4();
  uVar20 = **(undefined8 **)(*unaff_x28 + 0xb8);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XmlSchemaComplexType_var);
  FUN_0554a0ac(uVar13,uVar20,*(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberList_var,0);
  puVar14 = (undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8);
  *puVar14 = uVar13;
  thunk_FUN_044bb4b4(puVar14,uVar13);
  uVar20 = thunk_FUN_0448520c(*unaff_x22);
  FUN_0594c4ec(uVar20,uVar13,0,10000,*unaff_x19);
  if (unaff_x21 == 0) goto LAB_09702fa0;
  *(undefined8 *)(unaff_x21 + 0x48) = uVar20;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x48),uVar20);
  lVar15 = *unaff_x28;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar15 = *unaff_x28;
  }
  puVar6 = System_Xml_Serialization_XmlRootAttribute_var;
  puVar3 = System_Xml_XmlQualifiedName_var;
  puVar1 = PTR_DAT_09fdb1e8;
  lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar19 == 0) {
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar15 = *(long *)System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
    }
    puVar2 = System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
    uVar13 = **(undefined8 **)(lVar15 + 0xb8);
    lVar19 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XmlSchemaElement_var);
    FUN_0554a0ac(lVar19,uVar13,*(undefined8 *)System_Runtime_Serialization_XmlWriterDelegator_var,0)
    ;
    plVar16 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar16 = lVar19;
    thunk_FUN_044bb4b4(plVar16,lVar19);
  }
  puVar9 = System_Xml_XmlTextReader_var;
  puVar8 = System_Xml_Schema_XmlSchemaSequence_var;
  puVar7 = System_Xml_Schema_XmlSchema_var;
  puVar5 = System_Runtime_Serialization_XmlReaderDelegator_var;
  puVar4 = System_Xml_XmlReader_var;
  puVar2 = System_Runtime_Serialization_XmlObjectSerializerWriteContext_var;
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XmlSchemaType_var);
  FUN_0594c4ec(uVar13,lVar19,0,10000,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x21 + 0x50) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x50),uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_06f975d8(uVar13,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x21 + 0x58) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x58),uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
  FUN_06f97734(uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x21 + 0x60) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x60),uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar7);
  FUN_07441bc0(uVar13,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x21 + 0x68) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x68),uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar9);
  FUN_096fa99c();
  *(undefined8 *)(unaff_x21 + 0x70) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x70),uVar13);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a546ad2 == '\0') {
    FUN_04447ba8(PTR_DAT_09fdb1e8);
    DAT_0a546ad2 = '\x01';
  }
  puVar6 = System_Xml_Serialization_XmlTypeMapMemberElement_var;
  puVar3 = System_Xml_XmlDictionaryString_var;
  lVar15 = *(long *)puVar1;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar15 = *(long *)puVar1;
  }
  puVar8 = System_Xml_Serialization_XmlTypeMapMemberFlatList_var;
  puVar7 = System_Xml_XmlText_var;
  puVar5 = System_Xml_Serialization_XmlSchemaProviderAttribute_var;
  puVar4 = System_Xml_Schema_XmlSchemaChoice_var;
  puVar2 = PTR_DAT_09fdbbc8;
  puVar1 = PTR_DAT_09f1e6a8;
  *(undefined8 *)(unaff_x21 + 0xe8) = **(undefined8 **)(lVar15 + 0xb8);
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0xe8));
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_09702304();
  *(undefined8 *)(unaff_x21 + 0x128) = uVar13;
  thunk_FUN_044bb4b4(unaff_x21 + 0x128,uVar13);
  lVar15 = *(long *)puVar6;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar15 = *(long *)puVar6;
  }
  uVar20 = **(undefined8 **)(lVar15 + 0xb8);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_096f80d8(uVar13,uVar20,0);
  *(undefined8 *)(unaff_x21 + 0x130) = uVar13;
  thunk_FUN_044bb4b4(unaff_x21 + 0x130,uVar13);
  FUN_07a80df4();
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad680(uVar13,8,*(undefined8 *)puVar7);
  puVar14 = (undefined8 *)(unaff_x21 + 0x18);
  *puVar14 = uVar13;
  thunk_FUN_044bb4b4(puVar14,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad680(uVar13,8,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x21 + 0x20) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x20),uVar13);
  uVar13 = FUN_04447c90(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar13;
  thunk_FUN_044bb4b4();
  uVar13 = FUN_04447c90(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x30) = uVar13;
  thunk_FUN_044bb4b4();
  FUN_09702fac(puVar14);
  *(long **)(unaff_x21 + 0x100) = unaff_x20;
  thunk_FUN_044bb4b4(unaff_x21 + 0x100,unaff_x20);
  *(long *)(unaff_x21 + 0x108) = unaff_x23;
  thunk_FUN_044bb4b4(unaff_x21 + 0x108,unaff_x23);
  *(undefined8 *)(unaff_x21 + 0x110) = unaff_x27;
  thunk_FUN_044bb4b4(unaff_x21 + 0x110);
  *(undefined8 *)(unaff_x21 + 0x118) = unaff_x26;
  thunk_FUN_044bb4b4(unaff_x21 + 0x118);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar8);
  FUN_0970e340(uVar13,0);
  *(undefined8 *)(unaff_x21 + 0x120) = uVar13;
  thunk_FUN_044bb4b4(unaff_x21 + 0x120,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
  FUN_096f9d1c(uVar13,0);
  *(undefined8 *)(unaff_x21 + 0x140) = uVar13;
  thunk_FUN_044bb4b4(unaff_x21 + 0x140,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberAnyElement_var
                             );
  FUN_09702144();
  *(undefined8 *)(unaff_x21 + 0xf0) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0xf0),uVar13);
  uVar20 = *(undefined8 *)(unaff_x21 + 0x130);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                               System_Xml_Serialization_XmlTypeMapMemberAnyAttribute_var);
  FUN_097f4f88(uVar13,uVar20,0);
  *(undefined8 *)(unaff_x21 + 0x138) = uVar13;
  thunk_FUN_044bb4b4(unaff_x21 + 0x138,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XsdDateTime_var);
  FUN_09703024();
  *(undefined8 *)(unaff_x21 + 0x40) = uVar13;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x40),uVar13);
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
      uVar13 = FUN_0970df64();
      goto LAB_09702e7c;
    }
    uVar13 = FUN_0970dd88(0);
    *(undefined8 *)(unaff_x21 + 0x78) = uVar13;
    thunk_FUN_044bb4b4();
    if (iVar11 == 1) {
      plVar16 = (long *)unaff_x20[0xf];
      if (plVar16 == (long *)0x0) goto LAB_09702fa0;
      lVar15 = *plVar16;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)System_Xml_XmlNode_var) {
            puVar14 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_09702f88;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar14 = (undefined8 *)FUN_044822ac(plVar16,*(long *)System_Xml_XmlNode_var,0);
LAB_09702f88:
      bVar10 = (*(code *)*puVar14)(plVar16,puVar14[1]);
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
    uVar13 = FUN_0970dfc0(0);
LAB_09702e7c:
    *(undefined8 *)(unaff_x21 + 0x78) = uVar13;
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
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_09711858(uVar13,iVar11,0);
  *(undefined8 *)(unaff_x21 + 0x148) = uVar13;
  thunk_FUN_044bb4b4(unaff_x21 + 0x148,uVar13);
  lVar15 = unaff_x20[0x18];
  *(char *)(unaff_x21 + 0x152) = (char)lVar15;
  if (unaff_x23 != 0) {
    *(char *)(unaff_x23 + 0xc1) = (char)lVar15;
    return;
  }
LAB_09702fa0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


