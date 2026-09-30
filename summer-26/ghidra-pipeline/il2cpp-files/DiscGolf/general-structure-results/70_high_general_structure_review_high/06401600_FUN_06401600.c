/*
FUNCTION_NAME: FUN_06401600
ENTRY_POINT: 06401600
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0640252c) */
/* WARNING: Removing unreachable block (ram,0x06402624) */

uint FUN_06401600(long param_1,long param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  long local_70;
  long local_68;
  
  puVar5 = Method_System_Xml_Schema_XmlUntypedConverter_ChangeListType__;
                    /* try { // try from 0640160c to 0650162b has its CatchHandler @ 064016e0 */
  if ((DAT_06dcc976 & 1) == 0) {
                    /* try { // try from 06401640 to 0650164b has its CatchHandler @ 064016dc */
    FUN_02d965b8(Method_System_Xml_XmlWriter_WriteQualifiedName__);
                    /* try { // try from 06401650 to 0650165b has its CatchHandler @ 064016d8 */
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Runtime_Serialization_XmlWriterDelegator_WriteAnyType__);
                    /* try { // try from 06401668 to 06501693 has its CatchHandler @ 064016e4 */
    FUN_02d965b8(Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__59_0__);
    FUN_02d965b8(Method_System_Runtime_Serialization_XmlWriterDelegator_WriteExtensionData__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextAnchor>__);
    FUN_02d965b8(Method_System_Xml_Schema_XmlUntypedConverter_ToString__);
    FUN_02d965b8(Method_System_Xml_XmlUrlResolver_GetEntity__);
                    /* try { // try from 064016a8 to 065016c7 has its CatchHandler @ 064016e8 */
    FUN_02d965b8(Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildAttribute_Type__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildAttribute_Use__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildComplexContentExtension_Base__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildComplexContentRestriction_Base__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildComplexContent_Mixed__);
    FUN_02d965b8(Method_System_Xml_Schema_XmlUntypedConverter_ChangeListType__);
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__);
    FUN_02d965b8(System_Collections_Generic_List<ModifierSpec>_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Align>__);
    FUN_02d965b8(PTR_DAT_06a0d6d8);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Abstract__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroup_Name__);
    FUN_02d965b8(Method_System_Collections_Generic_List<CAPI_ovrAvatar2JointType>_Add__);
    FUN_02d965b8(Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Block__);
    FUN_02d965b8(Method_System_Collections_Generic_List<BitmapAllocator32_Page>_set_Item__);
    FUN_02d965b8(Method_System_Net_HttpWebRequest_EndGetResponse__);
    FUN_02d965b8(Method_System_Xml_XmlWriterSettings_set_NamespaceHandling__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildAppinfo_Source__);
    FUN_02d965b8(PTR_DAT_06a146e0);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TimeValue>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Visibility>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<WhiteSpace>__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Final__);
    DAT_06dcc976 = 1;
  }
  lVar15 = *(long *)puVar5;
  local_70 = 0;
  local_68 = 0;
  local_74 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar15 = *(long *)puVar5;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x30);
  if (lVar15 != 0) {
    FUN_062feb1c(lVar15,0);
  }
  local_a8 = &local_68;
  local_b0 = 0;
  local_68 = lVar15;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0xa8) == 0)) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      uVar25 = thunk_FUN_06354368(param_1,0);
      uVar25 = FUN_0536d554(*(undefined8 *)
                             Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<WhiteSpace>__
                            ,uVar25,*(undefined8 *)
                                     Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Visibility>__
                            ,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630c038(uVar25,param_1,0);
    }
    else {
      uVar25 = thunk_FUN_06354368(param_1,0);
      uVar25 = FUN_0536d554(*(undefined8 *)
                             Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<WhiteSpace>__
                            ,uVar25,*(undefined8 *)
                                     Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TimeValue>__
                            ,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630c038(uVar25,param_1,0);
    }
    *param_3 = 0;
    LeanTween__value(param_3,0);
  }
  else {
    iVar10 = FUN_063fe034(param_1);
    if (iVar10 == 0) {
      lVar15 = *(long *)(param_1 + 0x130);
      if ((lVar15 == 0) || (lVar24 = *(long *)(param_1 + 0x120), lVar24 == 0)) {
        FUN_063fa404(param_1);
        lVar15 = *(long *)(param_1 + 0x130);
        lVar24 = *(long *)(param_1 + 0x120);
      }
      lVar18 = *(long *)(param_1 + 0x1d0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      puVar5 = 
      Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
      ;
      if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_03c2dafc(*(long *)(param_1 + 0x1d8),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
                  );
      lVar18 = *(long *)(param_1 + 0x1e0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar10 = *(int *)(lVar18 + 0x18);
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      if (0 < iVar10) {
        FUN_0550afb4(*(undefined8 *)(lVar18 + 0x10),0,iVar10,0);
      }
      if (*(long *)(param_1 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_03c2dafc(*(long *)(param_1 + 0x1e8),*(undefined8 *)puVar5);
      lVar18 = *(long *)(param_1 + 0x1f0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar23 = 0;
      local_74 = 0;
      *(undefined4 *)(lVar18 + 0x18) = 0;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      puVar6 = Method_System_Runtime_Serialization_XmlWriterDelegator_WriteExtensionData__;
      puVar5 = Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__;
      iVar10 = *(int *)(param_2 + 0x18);
      if (0 < iVar10) {
        do {
          iVar11 = FUN_06402888(param_2,&local_74);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar22 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                             (lVar15,iVar11,*(undefined8 *)puVar6);
          if ((uVar22 & 1) == 0) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            iVar12 = FUN_063ee2a0(iVar11,0);
            if (iVar12 == 0) {
              if (iVar11 == 0xa0) {
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                iVar12 = FUN_063ee2a0(0x20,0);
LAB_06401b40:
                if (iVar12 != 0) goto LAB_06401b48;
              }
              else if ((iVar11 == 0xad) || (iVar11 == 0x2011)) {
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                iVar12 = FUN_063ee2a0(0x2d,0);
                goto LAB_06401b40;
              }
              lVar18 = *(long *)(param_1 + 0x1f0);
              if (lVar18 == 0) {
LAB_064025e4:
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar16 = *(long *)(lVar18 + 0x10);
              lVar19 = *(long *)PTR_DAT_06a0d6d8;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_064025e4;
              uVar23 = *(uint *)(lVar18 + 0x18);
              if (uVar23 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar23 + 1;
                *(int *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) = iVar11;
              }
              else {
                FUN_04088dc8(lVar18,iVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              uVar23 = 1;
            }
            else {
LAB_06401b48:
              lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_System_Xml_XmlWriter_WriteQualifiedName__);
              FUN_063f79c8(lVar18,iVar11,iVar12);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar22 = FUN_04f96670(lVar24,iVar12,&local_80,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextAnchor>__
                                   );
              if ((uVar22 & 1) == 0) {
                if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar22 = FUN_03c2e698(*(long *)(param_1 + 0x1d8),iVar12,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<ModifierSpec>_TypeInfo);
                if ((uVar22 & 1) != 0) {
                  lVar16 = *(long *)(param_1 + 0x1d0);
                  if (lVar16 == 0) {
LAB_064025d8:
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar21 = *(long *)PTR_DAT_06a0d6d8;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_064025d8;
                  uVar13 = *(uint *)(lVar16 + 0x18);
                  if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                    *(int *)(lVar19 + (long)(int)uVar13 * 4 + 0x20) = iVar12;
                  }
                  else {
                    FUN_04088dc8(lVar16,iVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                if (*(long *)(param_1 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar22 = FUN_03c2e698(*(long *)(param_1 + 0x1e8),iVar11,
                                      *(undefined8 *)
                                       System_Collections_Generic_List<ModifierSpec>_TypeInfo);
                if ((uVar22 & 1) != 0) {
                  lVar16 = *(long *)(param_1 + 0x1e0);
                  if (lVar16 == 0) {
LAB_064025d0:
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar21 = *(long *)Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Abstract__;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_064025d0;
                  uVar13 = *(uint *)(lVar16 + 0x18);
                  if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                    plVar20 = (long *)(lVar19 + (long)(int)uVar13 * 8 + 0x20);
                    *plVar20 = lVar18;
                    LeanTween__value(plVar20,lVar18);
                  }
                  else {
                    FUN_040101ec(lVar16,lVar18,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_0641ecfc(lVar18,local_80,0);
                FUN_0641ed04(lVar18,param_1,0);
                lVar16 = *(long *)(param_1 + 0x128);
                if (lVar16 == 0) {
LAB_064025cc:
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar19 = *(long *)(lVar16 + 0x10);
                lVar21 = *(long *)Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Abstract__;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_064025cc;
                uVar13 = *(uint *)(lVar16 + 0x18);
                if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                  plVar20 = (long *)(lVar19 + (long)(int)uVar13 * 8 + 0x20);
                  *plVar20 = lVar18;
                  LeanTween__value(plVar20,lVar18);
                }
                else {
                  FUN_040101ec(lVar16,lVar18,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                FUN_04f94b94(lVar15,iVar11,lVar18,
                             *(undefined8 *)
                              Method_System_Runtime_Serialization_XmlWriterDelegator_WriteAnyType__)
                ;
              }
            }
          }
          local_74 = local_74 + 1;
        } while (local_74 < iVar10);
      }
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(*(long *)(param_1 + 0x1d0) + 0x18) == 0) {
        *param_3 = param_2;
        LeanTween__value(param_3,param_2);
        uVar13 = uVar23 ^ 1;
        goto LAB_06401994;
      }
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar20 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar10 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
      if (1 < iVar10) {
        lVar18 = *(long *)(param_1 + 0x140);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar20 = *(long **)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar10 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
        if (1 < iVar10) goto LAB_06401ed0;
      }
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0632f188(lVar18,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),0);
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar25 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)
                    Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_063f1194(uVar25,0);
LAB_06401ed0:
      lVar18 = *(long *)(param_1 + 0x140);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar25 = *(undefined8 *)(param_1 + 0x160);
      uVar2 = *(undefined8 *)(param_1 + 0x168);
      uVar26 = *(undefined8 *)(param_1 + 0x1d0);
      uVar14 = *(undefined4 *)(param_1 + 0x158);
      uVar3 = *(undefined4 *)(param_1 + 0x15c);
      uVar28 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)
                    Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar13 = UnityEngine_UIElements_UIR_Utility__SetPropertyBlock
                         (uVar26,uVar14,0,uVar2,uVar25,uVar3,uVar28,&local_70,0);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar14 = *(undefined4 *)(local_70 + 0x18);
      uVar25 = *(undefined8 *)(param_1 + 0x118);
      if (*(int *)(*(long *)Method_System_Xml_Schema_XmlUntypedConverter_ChangeListType__ + 0xe4) ==
          0) {
        thunk_FUN_02df485c();
      }
      FUN_0364aff8(uVar25,uVar14,
                   *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildAttribute_Use__);
      FUN_0364b1c4(lVar24,uVar14,
                   *(undefined8 *)
                    Method_System_Xml_Schema_XsdBuilder_BuildComplexContentRestriction_Base__);
      puVar8 = Method_System_Xml_Schema_XsdBuilder_BuildComplexContent_Mixed__;
      FUN_0364b06c(*(undefined8 *)(param_1 + 0x1c8),uVar14,
                   *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildComplexContent_Mixed__);
      FUN_0364b06c(*(undefined8 *)(param_1 + 0x1c0),uVar14,*(undefined8 *)puVar8);
      puVar7 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Align>__;
      puVar6 = Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__59_0__;
      puVar5 = PTR_DAT_06a0d6d8;
      if (local_70 != 0) {
        uVar27 = 0;
        do {
          if ((int)*(uint *)(local_70 + 0x18) <= (int)uVar27) {
LAB_06402164:
            lVar18 = *(long *)(param_1 + 0x1d0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(undefined4 *)(lVar18 + 0x18) = 0;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x1e0) + 0x18);
            if (*(int *)(*(long *)Method_System_Xml_Schema_XmlUntypedConverter_ChangeListType__ +
                        0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0364b06c(lVar18,uVar14,*(undefined8 *)puVar8);
            FUN_0364aff8(*(undefined8 *)(param_1 + 0x128),uVar14,
                         *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildAttribute_Type__);
            FUN_0364b1c4(lVar15,uVar14,
                         *(undefined8 *)
                          Method_System_Xml_Schema_XsdBuilder_BuildComplexContentExtension_Base__);
            puVar9 = Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Block__;
            puVar8 = Method_System_Xml_Schema_XsdBuilder_BuildAppinfo_Source__;
            puVar7 = Method_System_Runtime_Serialization_XmlWriterDelegator_WriteAnyType__;
            puVar6 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextAnchor>__;
            lVar18 = *(long *)(param_1 + 0x1e0);
            if (lVar18 == 0) goto LAB_06402394;
            iVar10 = 0;
            goto LAB_0640220c;
          }
          if (*(uint *)(local_70 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar18 = *(long *)(local_70 + (long)(int)uVar27 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_06402164;
          uVar14 = FUN_063ed08c(lVar18,0);
          FUN_063ed0f0(lVar18,*(undefined4 *)(param_1 + 0x148),0);
          lVar16 = *(long *)(param_1 + 0x118);
          if (lVar16 == 0) {
LAB_064025a8:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar19 = *(long *)(lVar16 + 0x10);
          lVar21 = *(long *)puVar7;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_064025a8;
          uVar4 = *(uint *)(lVar16 + 0x18);
          if (uVar4 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar4 + 1;
            plVar20 = (long *)(lVar19 + (long)(int)uVar4 * 8 + 0x20);
            *plVar20 = lVar18;
            LeanTween__value(plVar20,lVar18);
          }
          else {
            FUN_040101ec(lVar16,lVar18,
                         *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04f94b94(lVar24,uVar14,lVar18,*(undefined8 *)puVar6);
          lVar18 = *(long *)(param_1 + 0x1c8);
          if (lVar18 == 0) {
LAB_064025ac:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar16 = *(long *)(lVar18 + 0x10);
          lVar19 = *(long *)puVar5;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_064025ac;
          uVar4 = *(uint *)(lVar18 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar4 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = uVar14;
          }
          else {
            FUN_04088dc8(lVar18,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          lVar18 = *(long *)(param_1 + 0x1c0);
          if (lVar18 == 0) {
LAB_064025b0:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar16 = *(long *)(lVar18 + 0x10);
          lVar19 = *(long *)puVar5;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_064025b0;
          uVar4 = *(uint *)(lVar18 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar4 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = uVar14;
          }
          else {
            FUN_04088dc8(lVar18,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          uVar27 = uVar27 + 1;
        } while (local_70 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = FUN_02d966a4(*(undefined8 *)PTR_DAT_06a146e0,*(undefined4 *)(param_2 + 0x18));
    *param_3 = lVar15;
    LeanTween__value(param_3);
    uVar22 = *(ulong *)(param_2 + 0x18);
    if (0 < (int)uVar22) {
      lVar15 = *param_3;
      uVar17 = 0;
      do {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar1 = uVar17 + 1;
        *(undefined4 *)(lVar15 + 0x20 + uVar17 * 4) = *(undefined4 *)(param_2 + 0x20 + uVar17 * 4);
        uVar17 = uVar1;
      } while ((uVar22 & 0xffffffff) != uVar1);
    }
  }
  uVar13 = 0;
  goto LAB_06401994;
LAB_0640220c:
  if (*(int *)(lVar18 + 0x18) <= iVar10) {
    if (*(char *)(param_1 + 0x14c) != '\0' && (uVar13 & 1) == 0) goto LAB_06402428;
    if ((uVar13 & 1) != 0) goto LAB_06402434;
    uVar25 = thunk_FUN_06354368(param_1,0);
    uVar25 = FUN_05362cb4(*(undefined8 *)
                           Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Final__,uVar25,0);
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0630b598(uVar25,0);
    uVar13 = 0;
    goto LAB_06402438;
  }
  lVar18 = FUN_0400ff1c(lVar18,iVar10,*(undefined8 *)puVar8);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar22 = FUN_0641ecf4(lVar18,0);
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(uVar22,uVar22 & 0xffffffff);
  }
  uVar22 = FUN_04f96670(lVar24,uVar22 & 0xffffffff,&local_88,*(undefined8 *)puVar6);
  if ((uVar22 & 1) == 0) {
    lVar16 = *(long *)(param_1 + 0x1d0);
    uVar14 = FUN_0641ecf4(lVar18,0);
    if (lVar16 == 0) {
LAB_064025a0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar18 = *(long *)(lVar16 + 0x10);
    lVar19 = *(long *)puVar5;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_064025a0;
    uVar27 = *(uint *)(lVar16 + 0x18);
    if (uVar27 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar27 + 1;
      *(undefined4 *)(lVar18 + (long)(int)uVar27 * 4 + 0x20) = uVar14;
    }
    else {
      FUN_04088dc8(lVar16,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  else {
    FUN_0641ecfc(lVar18,local_88,0);
    FUN_0641ed04(lVar18,param_1,0);
    lVar16 = *(long *)(param_1 + 0x128);
    if (lVar16 == 0) {
LAB_06402598:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar19 = *(long *)(lVar16 + 0x10);
    lVar21 = *(long *)Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Abstract__;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_06402598;
    uVar27 = *(uint *)(lVar16 + 0x18);
    if (uVar27 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar27 + 1;
      plVar20 = (long *)(lVar19 + (long)(int)uVar27 * 8 + 0x20);
      *plVar20 = lVar18;
      LeanTween__value(plVar20,lVar18);
    }
    else {
      FUN_040101ec(lVar16,lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar22 = FUN_0641ed14(lVar18,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar22,uVar22 & 0xffffffff);
    }
    FUN_04f94b94(lVar15,uVar22 & 0xffffffff,lVar18,*(undefined8 *)puVar7);
    if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0401187c(*(long *)(param_1 + 0x1e0),iVar10,*(undefined8 *)puVar9);
    iVar10 = iVar10 + -1;
  }
  lVar18 = *(long *)(param_1 + 0x1e0);
  iVar10 = iVar10 + 1;
  if (lVar18 == 0) {
LAB_06402394:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_0640220c;
LAB_06402428:
  do {
    uVar22 = FUN_06402988(param_1);
  } while ((uVar22 & 1) == 0);
LAB_06402434:
  uVar13 = 1;
LAB_06402438:
  if ((param_4 & 1) != 0) {
    FUN_06402e58(param_1);
  }
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&local_c8,*(long *)(param_1 + 0x1e0),
               *(undefined8 *)Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__);
  puVar6 = Method_System_Xml_XmlUrlResolver_GetEntity__;
  puStack_98 = puStack_c0;
  local_a0 = local_c8;
  local_90 = local_b8;
  local_c8 = 0;
  puStack_c0 = &local_a0;
  while (uVar22 = FUN_05156804(&local_a0,*(undefined8 *)puVar6), (uVar22 & 1) != 0) {
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = *(long *)(param_1 + 0x1f0);
    uVar14 = FUN_0641ed14(local_90,0);
    if (lVar15 == 0) {
LAB_06402584:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar24 = *(long *)(lVar15 + 0x10);
    lVar18 = *(long *)puVar5;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar24 == 0) goto LAB_06402584;
    uVar27 = *(uint *)(lVar15 + 0x18);
    if (uVar27 < *(uint *)(lVar24 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar27 + 1;
      *(undefined4 *)(lVar24 + (long)(int)uVar27 * 4 + 0x20) = uVar14;
    }
    else {
      FUN_04088dc8(lVar15,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_05156800(&local_a0,*(undefined8 *)Method_System_Xml_Schema_XmlUntypedConverter_ToString__);
  *param_3 = 0;
  LeanTween__value(param_3,0);
  lVar15 = *(long *)(param_1 + 0x1f0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < *(int *)(lVar15 + 0x18)) {
    lVar15 = FUN_0408a740(lVar15,*(undefined8 *)
                                  Method_System_Collections_Generic_List<BitmapAllocator32_Page>_set_Item__
                         );
    *param_3 = lVar15;
    LeanTween__value(param_3);
  }
  uVar13 = uVar13 & (uVar23 ^ 1);
LAB_06401994:
  if (*local_a8 != 0) {
    FUN_062feba4(*local_a8,0);
  }
  if (local_b0 == 0) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


