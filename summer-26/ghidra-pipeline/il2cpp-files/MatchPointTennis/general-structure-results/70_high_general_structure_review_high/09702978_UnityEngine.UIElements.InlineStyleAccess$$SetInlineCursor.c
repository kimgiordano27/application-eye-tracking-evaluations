/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$SetInlineCursor
ENTRY_POINT: 09702978
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEngine_UIElements_InlineStyleAccess__SetInlineCursor(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 *in_x9;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *unaff_x25;
  undefined8 uVar19;
  undefined8 *puVar20;
  long unaff_x26;
  undefined8 *puVar21;
  long unaff_x27;
  undefined8 *puVar22;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 *puVar23;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar21 = *(undefined8 **)(unaff_x26 + 0xf70);
  lVar17 = *(long *)(param_1 + 0x10);
  puVar22 = *(undefined8 **)(unaff_x27 + 0xf88);
  plVar15 = *(long **)(unaff_x19 + 0x1e8);
  puVar20 = *(undefined8 **)(unaff_x20 + 0xf90);
  puVar16 = *(undefined8 **)(unaff_x23 + 0xfe0);
  puVar23 = *(undefined8 **)(unaff_x29 + 0xf80);
  if (lVar17 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_2 = *(long *)System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
    }
    puVar4 = System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
    uVar19 = **(undefined8 **)(param_2 + 0xb8);
    lVar17 = thunk_FUN_0448520c(*(undefined8 *)System_Xml_Schema_XmlSchemaElement_var);
    FUN_0554a0ac(lVar17,uVar19,*(undefined8 *)System_Runtime_Serialization_XmlWriterDelegator_var,0)
    ;
    plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar12 = lVar17;
    thunk_FUN_044bb4b4(plVar12,lVar17);
    in_x9 = (undefined8 *)System_Xml_Schema_XmlSchemaType_var;
    puVar20 = (undefined8 *)System_Xml_Schema_XmlSchema_var;
    unaff_x22 = (undefined8 *)System_Xml_XmlReader_var;
    puVar16 = (undefined8 *)System_Xml_XmlTextReader_var;
    unaff_x25 = (undefined8 *)System_Xml_Schema_XmlSchemaSequence_var;
    unaff_x28 = (undefined8 *)System_Runtime_Serialization_XmlObjectSerializerWriteContext_var;
    puVar23 = (undefined8 *)System_Runtime_Serialization_XmlReaderDelegator_var;
  }
  uVar19 = thunk_FUN_0448520c(*in_x9);
  FUN_0594c4ec(uVar19,lVar17,0,10000,*unaff_x25);
  *(undefined8 *)(unaff_x21 + 0x50) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x50),uVar19);
  uVar19 = thunk_FUN_0448520c(*unaff_x22);
  FUN_06f975d8(uVar19,*unaff_x28);
  *(undefined8 *)(unaff_x21 + 0x58) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x58),uVar19);
  uVar19 = thunk_FUN_0448520c(*puVar23);
  FUN_06f97734(uVar19,*puVar21);
  *(undefined8 *)(unaff_x21 + 0x60) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x60),uVar19);
  uVar19 = thunk_FUN_0448520c(*puVar20);
  FUN_07441bc0(uVar19,*puVar22);
  *(undefined8 *)(unaff_x21 + 0x68) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x68),uVar19);
  uVar19 = thunk_FUN_0448520c(*puVar16);
  FUN_096fa99c();
  *(undefined8 *)(unaff_x21 + 0x70) = uVar19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x70),uVar19);
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a546ad2 == '\0') {
    FUN_04447ba8(PTR_DAT_09fdb1e8);
    DAT_0a546ad2 = '\x01';
  }
  puVar3 = System_Xml_Serialization_XmlTypeMapMemberElement_var;
  puVar4 = System_Xml_XmlDictionaryString_var;
  lVar17 = *plVar15;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar17 = *plVar15;
  }
  puVar8 = System_Xml_Serialization_XmlTypeMapMemberFlatList_var;
  puVar7 = System_Xml_XmlText_var;
  puVar6 = System_Xml_Serialization_XmlSchemaProviderAttribute_var;
  puVar5 = System_Xml_Schema_XmlSchemaChoice_var;
  puVar2 = PTR_DAT_09fdbbc8;
  puVar1 = PTR_DAT_09f1e6a8;
  *(undefined8 *)(unaff_x21 + 0xe8) = **(undefined8 **)(lVar17 + 0xb8);
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0xe8));
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_09702304();
  *(undefined8 *)(unaff_x21 + 0x128) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x128,uVar19);
  lVar17 = *(long *)puVar3;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar17 = *(long *)puVar3;
  }
  uVar18 = **(undefined8 **)(lVar17 + 0xb8);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
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
  *(long **)(unaff_x21 + 0x100) = in_stack_00000000;
  thunk_FUN_044bb4b4(unaff_x21 + 0x100,in_stack_00000000);
  *(long *)(unaff_x21 + 0x108) = in_stack_00000018;
  thunk_FUN_044bb4b4(unaff_x21 + 0x108,in_stack_00000018);
  *(undefined8 *)(unaff_x21 + 0x110) = in_stack_00000008;
  thunk_FUN_044bb4b4(unaff_x21 + 0x110);
  *(undefined8 *)(unaff_x21 + 0x118) = in_stack_00000010;
  thunk_FUN_044bb4b4(unaff_x21 + 0x118);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar8);
  FUN_0970e340(uVar19,0);
  *(undefined8 *)(unaff_x21 + 0x120) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x120,uVar19);
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar6);
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
  iVar10 = FUN_094d65a8(0);
  puVar4 = UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var;
  if (in_stack_00000000 == (long *)0x0) goto LAB_09702fa0;
  iVar11 = (**(code **)(*in_stack_00000000 + 0x428))
                     (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x430));
  if (iVar11 == 0) {
    bVar9 = *(byte *)(*(long *)PTR_DAT_09f25a38 + 0x130);
    if ((*(byte *)(*in_stack_00000000 + 0x130) < bVar9) ||
       (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar9 * 8 + -8) !=
        *(long *)PTR_DAT_09f25a38)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(in_stack_00000000);
    }
    bVar9 = FUN_097ca200(in_stack_00000000,0);
    *(byte *)(unaff_x21 + 0x151) = bVar9 & 1;
    if (in_stack_00000018 == 0) goto LAB_09702fa0;
    *(byte *)(in_stack_00000018 + 0xc2) = bVar9 & 1;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((bVar9 & 1) != 0) {
      uVar19 = FUN_0970df64();
      goto LAB_09702e7c;
    }
    uVar19 = FUN_0970dd88(0);
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
    thunk_FUN_044bb4b4();
    if (iVar10 == 1) {
      plVar15 = (long *)in_stack_00000000[0xf];
      if (plVar15 == (long *)0x0) goto LAB_09702fa0;
      lVar17 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)System_Xml_XmlNode_var) {
            puVar20 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_09702f88;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar20 = (undefined8 *)FUN_044822ac(plVar15,*(long *)System_Xml_XmlNode_var,0);
LAB_09702f88:
      bVar9 = (*(code *)*puVar20)(plVar15,puVar20[1]);
      *(byte *)(unaff_x21 + 0x153) = bVar9 & 1;
    }
  }
  else {
    if (iVar10 == 1) {
      *(undefined1 *)(unaff_x21 + 0x153) = 1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar19 = FUN_0970dfc0(0);
LAB_09702e7c:
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
    thunk_FUN_044bb4b4();
  }
  puVar3 = UnityEngine_PlayerLoop_TimeUpdate_var;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0970e01c(0);
  if (*(char *)(unaff_x21 + 0x153) != '\0') {
    iVar10 = 0;
  }
  uVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_09711858(uVar19,iVar10,0);
  *(undefined8 *)(unaff_x21 + 0x148) = uVar19;
  thunk_FUN_044bb4b4(unaff_x21 + 0x148,uVar19);
  lVar17 = in_stack_00000000[0x18];
  *(char *)(unaff_x21 + 0x152) = (char)lVar17;
  if (in_stack_00000018 != 0) {
    *(char *)(in_stack_00000018 + 0xc1) = (char)lVar17;
    return;
  }
LAB_09702fa0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


