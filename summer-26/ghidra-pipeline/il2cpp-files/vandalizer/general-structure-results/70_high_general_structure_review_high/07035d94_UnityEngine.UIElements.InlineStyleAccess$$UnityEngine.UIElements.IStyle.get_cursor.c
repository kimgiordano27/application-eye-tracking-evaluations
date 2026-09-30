/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$UnityEngine.UIElements.IStyle.get_cursor
ENTRY_POINT: 07035d94
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
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
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  uVar20 = **(undefined8 **)(*unaff_x28 + 0xb8);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_fsGuidConverter_TypeInfo);
  FUN_042cbcbc(uVar13,uVar20,*(undefined8 *)Unity_VisualScripting_FullSerializer_fsResult_TypeInfo,0
              );
  puVar14 = (undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8);
  *puVar14 = uVar13;
  thunk_FUN_0329bf60(puVar14,uVar13);
  uVar20 = thunk_FUN_0322f148(*unaff_x22);
  FUN_04601478(uVar20,uVar13,0,10000,*unaff_x19);
  if (unaff_x21 == 0) goto LAB_07036498;
  *(undefined8 *)(unaff_x21 + 0x48) = uVar20;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x48),uVar20);
  lVar15 = *unaff_x28;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar15 = *unaff_x28;
  }
  puVar6 = Unity_VisualScripting_FullSerializer_fsEnumConverter_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsDictionaryConverter_TypeInfo;
  puVar1 = OisoiXR_TypeInfo;
  lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar19 == 0) {
    if (*(int *)(lVar15 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar15 = *(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo;
    }
    puVar2 = Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo;
    uVar13 = **(undefined8 **)(lVar15 + 0xb8);
    lVar19 = thunk_FUN_0322f148(*(undefined8 *)
                                 Unity_VisualScripting_FullSerializer_fsIEnumerableConverter_TypeInfo
                               );
    FUN_042cbcbc(lVar19,uVar13,
                 *(undefined8 *)
                  Unity_VisualScripting_FullSerializer_fsSerializationCallbackProcessor_TypeInfo,0);
    plVar16 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar16 = lVar19;
    thunk_FUN_0329bf60(plVar16,lVar19);
  }
  puVar9 = Unity_VisualScripting_FullSerializer_fsNullableConverter_TypeInfo;
  puVar8 = Unity_VisualScripting_FullSerializer_fsJsonParser_TypeInfo;
  puVar7 = Unity_VisualScripting_FullSerializer_fsForwardConverter_TypeInfo;
  puVar5 = Unity_VisualScripting_FullSerializer_fsDuplicateVersionNameException_TypeInfo;
  puVar4 = Unity_VisualScripting_FullSerializer_fsDirectConverter_TypeInfo;
  puVar2 = Unity_VisualScripting_FullSerializer_fsDateConverter_TypeInfo;
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo);
  FUN_04601478(uVar13,lVar19,0,10000,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x21 + 0x50) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x50),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_05466330(uVar13,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x21 + 0x58) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x58),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_0546648c(uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x21 + 0x60) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x60),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar7);
  FUN_05812e88(uVar13,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x21 + 0x68) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x68),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar9);
  FUN_0702de94();
  *(undefined8 *)(unaff_x21 + 0x70) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x70),uVar13);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a59af2 == '\0') {
    FUN_031f20f4(OisoiXR_TypeInfo);
    DAT_07a59af2 = '\x01';
  }
  puVar6 = Unity_VisualScripting_FullSerializer_fsPrimitiveConverter_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsArrayConverter_TypeInfo;
  lVar15 = *(long *)puVar1;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar15 = *(long *)puVar1;
  }
  puVar8 = Unity_VisualScripting_FullSerializer_fsReflectedConverter_TypeInfo;
  puVar7 = Unity_VisualScripting_FullSerializer_fsMissingVersionConstructorException_TypeInfo;
  puVar5 = Unity_VisualScripting_FullSerializer_fsISerializationCallbacks_TypeInfo;
  puVar4 = Unity_VisualScripting_FullSerializer_fsGlobalConfig_TypeInfo;
  puVar2 = Photon_Pun_UtilityScripts_PlayerNumbering_TypeInfo;
  puVar1 = PTR_DAT_0759b6a8;
  *(undefined8 *)(unaff_x21 + 0xe8) = **(undefined8 **)(lVar15 + 0xb8);
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0xe8));
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_070357fc();
  *(undefined8 *)(unaff_x21 + 0x128) = uVar13;
  thunk_FUN_0329bf60(unaff_x21 + 0x128,uVar13);
  lVar15 = *(long *)puVar6;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar15 = *(long *)puVar6;
  }
  uVar20 = **(undefined8 **)(lVar15 + 0xb8);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_0702b5d0(uVar13,uVar20,0);
  *(undefined8 *)(unaff_x21 + 0x130) = uVar13;
  thunk_FUN_0329bf60(unaff_x21 + 0x130,uVar13);
  FUN_05e44034();
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_047aec7c(uVar13,8,*(undefined8 *)puVar7);
  puVar14 = (undefined8 *)(unaff_x21 + 0x18);
  *puVar14 = uVar13;
  thunk_FUN_0329bf60(puVar14,uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_047aec7c(uVar13,8,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x21 + 0x20) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x20),uVar13);
  uVar13 = FUN_031f21dc(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar13;
  thunk_FUN_0329bf60();
  uVar13 = FUN_031f21dc(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x30) = uVar13;
  thunk_FUN_0329bf60();
  FUN_070364a4(puVar14);
  *(long **)(unaff_x21 + 0x100) = unaff_x20;
  thunk_FUN_0329bf60(unaff_x21 + 0x100,unaff_x20);
  *(long *)(unaff_x21 + 0x108) = unaff_x23;
  thunk_FUN_0329bf60(unaff_x21 + 0x108,unaff_x23);
  *(undefined8 *)(unaff_x21 + 0x110) = unaff_x27;
  thunk_FUN_0329bf60(unaff_x21 + 0x110);
  *(undefined8 *)(unaff_x21 + 0x118) = unaff_x26;
  thunk_FUN_0329bf60(unaff_x21 + 0x118);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar8);
  FUN_07041838(uVar13,0);
  *(undefined8 *)(unaff_x21 + 0x120) = uVar13;
  thunk_FUN_0329bf60(unaff_x21 + 0x120,uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_0702d214(uVar13,0);
  *(undefined8 *)(unaff_x21 + 0x140) = uVar13;
  thunk_FUN_0329bf60(unaff_x21 + 0x140,uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                             );
  FUN_0703563c();
  *(undefined8 *)(unaff_x21 + 0xf0) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0xf0),uVar13);
  uVar20 = *(undefined8 *)(unaff_x21 + 0x130);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_fsObjectProcessor_TypeInfo);
  FUN_07128480(uVar13,uVar20,0);
  *(undefined8 *)(unaff_x21 + 0x138) = uVar13;
  thunk_FUN_0329bf60(unaff_x21 + 0x138,uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                             );
  FUN_0703651c();
  *(undefined8 *)(unaff_x21 + 0x40) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x40),uVar13);
  iVar11 = FUN_06dff028(0);
  puVar1 = System_Xml_Schema_XmlSchemaMaxInclusiveFacet_TypeInfo;
  if (unaff_x20 == (long *)0x0) goto LAB_07036498;
  iVar12 = (**(code **)(*unaff_x20 + 0x428))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x430));
  if (iVar12 == 0) {
    bVar10 = *(byte *)(*(long *)PTR_DAT_075d6d00 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar10) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar10 * 8 + -8) != *(long *)PTR_DAT_075d6d00
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(unaff_x20);
    }
    bVar10 = FUN_070fd6f8(unaff_x20,0);
    *(byte *)(unaff_x21 + 0x151) = bVar10 & 1;
    if (unaff_x23 == 0) goto LAB_07036498;
    *(byte *)(unaff_x23 + 0xc2) = bVar10 & 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if ((bVar10 & 1) != 0) {
      uVar13 = FUN_0704145c();
      goto LAB_07036374;
    }
    uVar13 = FUN_07041280(0);
    *(undefined8 *)(unaff_x21 + 0x78) = uVar13;
    thunk_FUN_0329bf60();
    if (iVar11 == 1) {
      plVar16 = (long *)unaff_x20[0xf];
      if (plVar16 == (long *)0x0) goto LAB_07036498;
      lVar15 = *plVar16;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)
               Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_TypeInfo) {
            puVar14 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_07036480;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_0322c1e8(plVar16,*(long *)
                                      Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_TypeInfo
                             ,0);
LAB_07036480:
      bVar10 = (*(code *)*puVar14)(plVar16,puVar14[1]);
      *(byte *)(unaff_x21 + 0x153) = bVar10 & 1;
    }
  }
  else {
    if (iVar11 == 1) {
      *(undefined1 *)(unaff_x21 + 0x153) = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar13 = FUN_070414b8(0);
LAB_07036374:
    *(undefined8 *)(unaff_x21 + 0x78) = uVar13;
    thunk_FUN_0329bf60();
  }
  puVar3 = System_Xml_Schema_XmlSchemaExternal_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_07041514(0);
  if (*(char *)(unaff_x21 + 0x153) != '\0') {
    iVar11 = 0;
  }
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_07044d50(uVar13,iVar11,0);
  *(undefined8 *)(unaff_x21 + 0x148) = uVar13;
  thunk_FUN_0329bf60(unaff_x21 + 0x148,uVar13);
  lVar15 = unaff_x20[0x18];
  *(char *)(unaff_x21 + 0x152) = (char)lVar15;
  if (unaff_x23 != 0) {
    *(char *)(unaff_x23 + 0xc1) = (char)lVar15;
    return;
  }
LAB_07036498:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


