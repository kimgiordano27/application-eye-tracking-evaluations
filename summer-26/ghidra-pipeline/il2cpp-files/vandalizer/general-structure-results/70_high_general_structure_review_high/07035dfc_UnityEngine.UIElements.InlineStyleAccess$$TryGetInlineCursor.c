/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$TryGetInlineCursor
ENTRY_POINT: 07035dfc
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
  
  FUN_04601478();
  if (unaff_x21 == 0) goto LAB_07036498;
  *(undefined8 *)(unaff_x21 + 0x48) = param_1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x48),param_1);
  lVar13 = *unaff_x28;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar13 = *unaff_x28;
  }
  puVar6 = Unity_VisualScripting_FullSerializer_fsEnumConverter_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsDictionaryConverter_TypeInfo;
  puVar1 = OisoiXR_TypeInfo;
  lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar13 = *(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo;
    }
    puVar2 = Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo;
    uVar19 = **(undefined8 **)(lVar13 + 0xb8);
    lVar17 = thunk_FUN_0322f148(*(undefined8 *)
                                 Unity_VisualScripting_FullSerializer_fsIEnumerableConverter_TypeInfo
                               );
    FUN_042cbcbc(lVar17,uVar19,
                 *(undefined8 *)
                  Unity_VisualScripting_FullSerializer_fsSerializationCallbackProcessor_TypeInfo,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar14 = lVar17;
    thunk_FUN_0329bf60(plVar14,lVar17);
  }
  puVar9 = Unity_VisualScripting_FullSerializer_fsNullableConverter_TypeInfo;
  puVar8 = Unity_VisualScripting_FullSerializer_fsJsonParser_TypeInfo;
  puVar7 = Unity_VisualScripting_FullSerializer_fsForwardConverter_TypeInfo;
  puVar5 = Unity_VisualScripting_FullSerializer_fsDuplicateVersionNameException_TypeInfo;
  puVar4 = Unity_VisualScripting_FullSerializer_fsDirectConverter_TypeInfo;
  puVar2 = Unity_VisualScripting_FullSerializer_fsDateConverter_TypeInfo;
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo);
  FUN_04601478(uVar19,lVar17,0,10000,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x21 + 0x50) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x50),uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_05466330(uVar19,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x21 + 0x58) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x58),uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_0546648c(uVar19,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x21 + 0x60) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x60),uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar7);
  FUN_05812e88(uVar19,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x21 + 0x68) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x68),uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar9);
  FUN_0702de94();
  *(undefined8 *)(unaff_x21 + 0x70) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x70),uVar19);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a59af2 == '\0') {
    FUN_031f20f4(OisoiXR_TypeInfo);
    DAT_07a59af2 = '\x01';
  }
  puVar6 = Unity_VisualScripting_FullSerializer_fsPrimitiveConverter_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsArrayConverter_TypeInfo;
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar13 = *(long *)puVar1;
  }
  puVar8 = Unity_VisualScripting_FullSerializer_fsReflectedConverter_TypeInfo;
  puVar7 = Unity_VisualScripting_FullSerializer_fsMissingVersionConstructorException_TypeInfo;
  puVar5 = Unity_VisualScripting_FullSerializer_fsISerializationCallbacks_TypeInfo;
  puVar4 = Unity_VisualScripting_FullSerializer_fsGlobalConfig_TypeInfo;
  puVar2 = Photon_Pun_UtilityScripts_PlayerNumbering_TypeInfo;
  puVar1 = PTR_DAT_0759b6a8;
  *(undefined8 *)(unaff_x21 + 0xe8) = **(undefined8 **)(lVar13 + 0xb8);
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0xe8));
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_070357fc();
  *(undefined8 *)(unaff_x21 + 0x128) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x128,uVar19);
  lVar13 = *(long *)puVar6;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar13 = *(long *)puVar6;
  }
  uVar18 = **(undefined8 **)(lVar13 + 0xb8);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_0702b5d0(uVar19,uVar18,0);
  *(undefined8 *)(unaff_x21 + 0x130) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x130,uVar19);
  FUN_05e44034();
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_047aec7c(uVar19,8,*(undefined8 *)puVar7);
  puVar20 = (undefined8 *)(unaff_x21 + 0x18);
  *puVar20 = uVar19;
  thunk_FUN_0329bf60(puVar20,uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_047aec7c(uVar19,8,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x21 + 0x20) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x20),uVar19);
  uVar19 = FUN_031f21dc(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar19;
  thunk_FUN_0329bf60();
  uVar19 = FUN_031f21dc(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x21 + 0x30) = uVar19;
  thunk_FUN_0329bf60();
  FUN_070364a4(puVar20);
  *(long **)(unaff_x21 + 0x100) = unaff_x20;
  thunk_FUN_0329bf60(unaff_x21 + 0x100,unaff_x20);
  *(long *)(unaff_x21 + 0x108) = unaff_x23;
  thunk_FUN_0329bf60(unaff_x21 + 0x108,unaff_x23);
  *(undefined8 *)(unaff_x21 + 0x110) = unaff_x27;
  thunk_FUN_0329bf60(unaff_x21 + 0x110);
  *(undefined8 *)(unaff_x21 + 0x118) = unaff_x26;
  thunk_FUN_0329bf60(unaff_x21 + 0x118);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar8);
  FUN_07041838(uVar19,0);
  *(undefined8 *)(unaff_x21 + 0x120) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x120,uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_0702d214(uVar19,0);
  *(undefined8 *)(unaff_x21 + 0x140) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x140,uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                             );
  FUN_0703563c();
  *(undefined8 *)(unaff_x21 + 0xf0) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0xf0),uVar19);
  uVar18 = *(undefined8 *)(unaff_x21 + 0x130);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_fsObjectProcessor_TypeInfo);
  FUN_07128480(uVar19,uVar18,0);
  *(undefined8 *)(unaff_x21 + 0x138) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x138,uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)
                               Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                             );
  FUN_0703651c();
  *(undefined8 *)(unaff_x21 + 0x40) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x40),uVar19);
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
      uVar19 = FUN_0704145c();
      goto LAB_07036374;
    }
    uVar19 = FUN_07041280(0);
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
    thunk_FUN_0329bf60();
    if (iVar11 == 1) {
      plVar14 = (long *)unaff_x20[0xf];
      if (plVar14 == (long *)0x0) goto LAB_07036498;
      lVar13 = *plVar14;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_TypeInfo) {
            puVar20 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_07036480;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar20 = (undefined8 *)
                FUN_0322c1e8(plVar14,*(long *)
                                      Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_TypeInfo
                             ,0);
LAB_07036480:
      bVar10 = (*(code *)*puVar20)(plVar14,puVar20[1]);
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
    uVar19 = FUN_070414b8(0);
LAB_07036374:
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
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
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_07044d50(uVar19,iVar11,0);
  *(undefined8 *)(unaff_x21 + 0x148) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x148,uVar19);
  lVar13 = unaff_x20[0x18];
  *(char *)(unaff_x21 + 0x152) = (char)lVar13;
  if (unaff_x23 != 0) {
    *(char *)(unaff_x23 + 0xc1) = (char)lVar13;
    return;
  }
LAB_07036498:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


