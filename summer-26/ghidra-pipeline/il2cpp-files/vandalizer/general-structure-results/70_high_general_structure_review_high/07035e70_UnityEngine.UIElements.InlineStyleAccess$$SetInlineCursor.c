/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$SetInlineCursor
ENTRY_POINT: 07035e70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
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
  
  puVar21 = *(undefined8 **)(unaff_x26 + 0x580);
  lVar17 = *(long *)(param_1 + 0x10);
  puVar22 = *(undefined8 **)(unaff_x27 + 0x598);
  plVar15 = *(long **)(unaff_x19 + 0x6e8);
  puVar20 = *(undefined8 **)(unaff_x20 + 0x5a0);
  puVar16 = *(undefined8 **)(unaff_x23 + 0x5f0);
  puVar23 = *(undefined8 **)(unaff_x29 + 0x590);
  if (lVar17 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      param_2 = *(long *)Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo;
    }
    puVar4 = Unity_VisualScripting_FullSerializer_fsDataType_TypeInfo;
    uVar19 = **(undefined8 **)(param_2 + 0xb8);
    lVar17 = thunk_FUN_0322f148(*(undefined8 *)
                                 Unity_VisualScripting_FullSerializer_fsIEnumerableConverter_TypeInfo
                               );
    FUN_042cbcbc(lVar17,uVar19,
                 *(undefined8 *)
                  Unity_VisualScripting_FullSerializer_fsSerializationCallbackProcessor_TypeInfo,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar12 = lVar17;
    thunk_FUN_0329bf60(plVar12,lVar17);
    in_x9 = (undefined8 *)Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo;
    puVar20 = (undefined8 *)Unity_VisualScripting_FullSerializer_fsForwardConverter_TypeInfo;
    unaff_x22 = (undefined8 *)Unity_VisualScripting_FullSerializer_fsDirectConverter_TypeInfo;
    puVar16 = (undefined8 *)Unity_VisualScripting_FullSerializer_fsNullableConverter_TypeInfo;
    unaff_x25 = (undefined8 *)Unity_VisualScripting_FullSerializer_fsJsonParser_TypeInfo;
    unaff_x28 = (undefined8 *)Unity_VisualScripting_FullSerializer_fsDateConverter_TypeInfo;
    puVar23 = (undefined8 *)
              Unity_VisualScripting_FullSerializer_fsDuplicateVersionNameException_TypeInfo;
  }
  uVar19 = thunk_FUN_0322f148(*in_x9);
  FUN_04601478(uVar19,lVar17,0,10000,*unaff_x25);
  *(undefined8 *)(unaff_x21 + 0x50) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x50),uVar19);
  uVar19 = thunk_FUN_0322f148(*unaff_x22);
  FUN_05466330(uVar19,*unaff_x28);
  *(undefined8 *)(unaff_x21 + 0x58) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x58),uVar19);
  uVar19 = thunk_FUN_0322f148(*puVar23);
  FUN_0546648c(uVar19,*puVar21);
  *(undefined8 *)(unaff_x21 + 0x60) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x60),uVar19);
  uVar19 = thunk_FUN_0322f148(*puVar20);
  FUN_05812e88(uVar19,*puVar22);
  *(undefined8 *)(unaff_x21 + 0x68) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x68),uVar19);
  uVar19 = thunk_FUN_0322f148(*puVar16);
  FUN_0702de94();
  *(undefined8 *)(unaff_x21 + 0x70) = uVar19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0x70),uVar19);
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a59af2 == '\0') {
    FUN_031f20f4(OisoiXR_TypeInfo);
    DAT_07a59af2 = '\x01';
  }
  puVar3 = Unity_VisualScripting_FullSerializer_fsPrimitiveConverter_TypeInfo;
  puVar4 = Unity_VisualScripting_FullSerializer_fsArrayConverter_TypeInfo;
  lVar17 = *plVar15;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar17 = *plVar15;
  }
  puVar8 = Unity_VisualScripting_FullSerializer_fsReflectedConverter_TypeInfo;
  puVar7 = Unity_VisualScripting_FullSerializer_fsMissingVersionConstructorException_TypeInfo;
  puVar6 = Unity_VisualScripting_FullSerializer_fsISerializationCallbacks_TypeInfo;
  puVar5 = Unity_VisualScripting_FullSerializer_fsGlobalConfig_TypeInfo;
  puVar2 = Photon_Pun_UtilityScripts_PlayerNumbering_TypeInfo;
  puVar1 = PTR_DAT_0759b6a8;
  *(undefined8 *)(unaff_x21 + 0xe8) = **(undefined8 **)(lVar17 + 0xb8);
  thunk_FUN_0329bf60((undefined8 *)(unaff_x21 + 0xe8));
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_070357fc();
  *(undefined8 *)(unaff_x21 + 0x128) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x128,uVar19);
  lVar17 = *(long *)puVar3;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar17 = *(long *)puVar3;
  }
  uVar18 = **(undefined8 **)(lVar17 + 0xb8);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
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
  *(long **)(unaff_x21 + 0x100) = in_stack_00000000;
  thunk_FUN_0329bf60(unaff_x21 + 0x100,in_stack_00000000);
  *(long *)(unaff_x21 + 0x108) = in_stack_00000018;
  thunk_FUN_0329bf60(unaff_x21 + 0x108,in_stack_00000018);
  *(undefined8 *)(unaff_x21 + 0x110) = in_stack_00000008;
  thunk_FUN_0329bf60(unaff_x21 + 0x110);
  *(undefined8 *)(unaff_x21 + 0x118) = in_stack_00000010;
  thunk_FUN_0329bf60(unaff_x21 + 0x118);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar8);
  FUN_07041838(uVar19,0);
  *(undefined8 *)(unaff_x21 + 0x120) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x120,uVar19);
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
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
  iVar10 = FUN_06dff028(0);
  puVar4 = System_Xml_Schema_XmlSchemaMaxInclusiveFacet_TypeInfo;
  if (in_stack_00000000 == (long *)0x0) goto LAB_07036498;
  iVar11 = (**(code **)(*in_stack_00000000 + 0x428))
                     (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x430));
  if (iVar11 == 0) {
    bVar9 = *(byte *)(*(long *)PTR_DAT_075d6d00 + 0x130);
    if ((*(byte *)(*in_stack_00000000 + 0x130) < bVar9) ||
       (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar9 * 8 + -8) !=
        *(long *)PTR_DAT_075d6d00)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(in_stack_00000000);
    }
    bVar9 = FUN_070fd6f8(in_stack_00000000,0);
    *(byte *)(unaff_x21 + 0x151) = bVar9 & 1;
    if (in_stack_00000018 == 0) goto LAB_07036498;
    *(byte *)(in_stack_00000018 + 0xc2) = bVar9 & 1;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if ((bVar9 & 1) != 0) {
      uVar19 = FUN_0704145c();
      goto LAB_07036374;
    }
    uVar19 = FUN_07041280(0);
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
    thunk_FUN_0329bf60();
    if (iVar10 == 1) {
      plVar15 = (long *)in_stack_00000000[0xf];
      if (plVar15 == (long *)0x0) goto LAB_07036498;
      lVar17 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_TypeInfo) {
            puVar20 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07036480;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar20 = (undefined8 *)
                FUN_0322c1e8(plVar15,*(long *)
                                      Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager_TypeInfo
                             ,0);
LAB_07036480:
      bVar9 = (*(code *)*puVar20)(plVar15,puVar20[1]);
      *(byte *)(unaff_x21 + 0x153) = bVar9 & 1;
    }
  }
  else {
    if (iVar10 == 1) {
      *(undefined1 *)(unaff_x21 + 0x153) = 1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar19 = FUN_070414b8(0);
LAB_07036374:
    *(undefined8 *)(unaff_x21 + 0x78) = uVar19;
    thunk_FUN_0329bf60();
  }
  puVar3 = System_Xml_Schema_XmlSchemaExternal_TypeInfo;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_07041514(0);
  if (*(char *)(unaff_x21 + 0x153) != '\0') {
    iVar10 = 0;
  }
  uVar19 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_07044d50(uVar19,iVar10,0);
  *(undefined8 *)(unaff_x21 + 0x148) = uVar19;
  thunk_FUN_0329bf60(unaff_x21 + 0x148,uVar19);
  lVar17 = in_stack_00000000[0x18];
  *(char *)(unaff_x21 + 0x152) = (char)lVar17;
  if (in_stack_00000018 != 0) {
    *(char *)(in_stack_00000018 + 0xc1) = (char)lVar17;
    return;
  }
LAB_07036498:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


