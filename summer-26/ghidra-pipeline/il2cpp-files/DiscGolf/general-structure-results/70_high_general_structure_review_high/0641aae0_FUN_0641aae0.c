/*
FUNCTION_NAME: FUN_0641aae0
ENTRY_POINT: 0641aae0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


undefined4 FUN_0641aae0(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  int iVar10;
  int iVar15;
  undefined4 uVar16;
  char cVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  uint uVar31;
  uint uVar32;
  long *plVar33;
  uint *puVar34;
  undefined8 uVar35;
  long *plVar36;
  long lVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  ulong in_stack_fffffffffffffe50;
  int local_174;
  undefined4 local_144;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_dc [4];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  uint local_bc;
  long local_b8;
  undefined1 local_ac [4];
  uint local_a8;
  undefined1 local_a4 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_06dcc9f4 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                );
    FUN_02d965b8(Method_System_Xml_XmlValidatingReaderImpl__ctor__);
    FUN_02d965b8(Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<ContentRangeHeaderValue>__);
    FUN_02d965b8(Method_System_Xml_Schema_XmlUntypedConverter_ChangeListType__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_InitField__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_InitAll__);
    FUN_02d965b8(Method_System_IO_Compression_ZipArchive_ReadEndOfCentralDirectory__);
    FUN_02d965b8(Method_System_IO_Compression_ZipArchive_ThrowIfDisposed__);
    FUN_02d965b8(Method_System_IO_Compression_ZipArchive_set_EntryNameEncoding__);
    FUN_02d965b8(Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__);
    FUN_02d965b8(PTR_DAT_069fc410);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_InitAny__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_InitIdentityConstraint__);
    FUN_02d965b8(Method_System_Net_Configuration_WebRequestModulesSection__ctor__);
    FUN_02d965b8(Method_System_IO_Compression_ZipArchiveEntry__ctor__);
    FUN_02d965b8(Method_System_IO_Compression_ZipArchiveEntry_Delete__);
    FUN_02d965b8(Method_System_Xml_XsdCachingReader_GetAttribute__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_InitSimpleContentRestriction__);
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_InitSimpleTypeList__);
    FUN_02d965b8(
                Method_System_IO_Compression_ZipArchiveEntry_LoadLocalHeaderExtraFieldAndCompressedBytesIfNeeded__
                );
    FUN_02d965b8(Method_System_Globalization_HijriCalendar_ToFourDigitYear__);
    FUN_02d965b8(Method_System_IO_Compression_ZipArchiveEntry_OpenInUpdateMode__);
    FUN_02d965b8(Method_System_Globalization_HijriCalendar_set_TwoDigitYearMax__);
    DAT_06dcc9f4 = 1;
  }
  local_a4[0] = 0;
  local_a8 = 0;
  local_ac[0] = 0;
  local_b8 = 0;
  local_bc = 0;
  local_d8._8_8_ = 0;
  local_c8 = 0;
  local_d8._0_8_ = 0;
  local_dc[0] = 0;
  local_e8 = 0;
  auVar39 = ZEXT816(0);
  if (param_3 == 0) goto LAB_0641c460;
  plVar26 = *(long **)(param_3 + 0x58);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x1589) = 0;
  *(undefined1 *)(param_1 + 0x330) = 0;
  puVar6 = Method_System_Xml_Schema_XsdBuilder_InitSimpleTypeList__;
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_3 + 0x50);
  FUN_064302ac(param_1 + 0x130,0);
  if ((*(byte *)(param_1 + 300) & 1) == 0) {
    uVar16 = *(undefined4 *)(param_3 + 0x9c);
  }
  else {
    uVar16 = 700;
  }
  uVar25 = *(undefined8 *)puVar6;
  *(undefined4 *)(param_1 + 0x13c) = uVar16;
  FUN_04878c64(param_1 + 0x140,uVar16,uVar25);
  plVar36 = (long *)(param_1 + 0x68);
  *plVar36 = *(long *)(param_3 + 0x48);
  LeanTween__value(plVar36);
  puVar6 = Method_System_Xml_Schema_XsdBuilder_InitSimpleContentRestriction__;
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_0641c460;
  plVar33 = (long *)(param_1 + 0x70);
  *plVar33 = *(long *)(*(long *)(param_3 + 0x48) + 0x28);
  LeanTween__value(plVar33);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  FUN_063f945c(*(undefined4 *)(param_1 + 0xd8),&local_120,0,*(undefined8 *)(param_1 + 0x68),0,
               *(undefined8 *)(param_1 + 0x70),0);
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_88 = uStack_108;
  uStack_90 = local_110;
  uStack_78 = uStack_f8;
  local_80 = local_100;
  local_70 = local_f0;
  FUN_04879254(param_1 + 0x80,&local_a0,*(undefined8 *)puVar6);
  puVar6 = Method_System_Xml_XsdCachingReader_GetAttribute__;
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  if (*(long *)(param_1 + 0x19e8) == 0) goto LAB_0641c460;
  FUN_04d8c5c4(*(long *)(param_1 + 0x19e8),
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__)
  ;
  FUN_063f94d4(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),param_1 + 0x15c0,
               *(undefined8 *)(param_1 + 0x19e8),0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  LeanTween__value((undefined8 *)(param_1 + 0xe0),0);
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  if (param_4 == 0) {
    param_4 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_0642ed8c(param_4,0);
  }
  else {
    lVar27 = *(long *)(param_4 + 0x30);
    if (lVar27 == 0) goto LAB_0641c460;
    iVar10 = *(int *)(param_1 + 0x28);
    if (*(int *)(lVar27 + 0x18) < iVar10) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03844ff8((long *)(param_4 + 0x30),iVar10,0,
                   *(undefined8 *)Method_System_IO_Compression_ZipArchiveEntry_Delete__);
    }
  }
  *(undefined1 *)(param_1 + 0x1588) = 1;
  if (*(int *)(param_3 + 100) == 1) {
    FUN_0641d76c(param_1,param_3);
    auVar5._8_8_ = local_d8._8_8_;
    auVar5._0_8_ = local_d8._0_8_;
    auVar39._8_8_ = local_d8._8_8_;
    auVar39._0_8_ = local_d8._0_8_;
    auVar2._8_8_ = local_d8._8_8_;
    auVar2._0_8_ = local_d8._0_8_;
    if (*(long *)(param_1 + 0x19f8) == 0) {
      *(undefined4 *)(param_3 + 100) = 3;
      if (plVar26 == (long *)0x0) goto LAB_0641c460;
      if ((char)plVar26[0x12] != '\0') {
        auVar39 = auVar5;
        if (*plVar36 == 0) goto LAB_0641c460;
        uVar25 = thunk_FUN_06354368(*plVar36,0);
        uVar25 = FUN_0536d554(*(undefined8 *)
                               Method_System_Globalization_HijriCalendar_ToFourDigitYear__,uVar25,
                              *(undefined8 *)
                               Method_System_Globalization_HijriCalendar_set_TwoDigitYearMax__,0);
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
        }
        FUN_06309d28(uVar25,0);
      }
    }
    else {
      plVar17 = *(long **)(param_1 + 0x1a00);
      auVar39 = auVar2;
      if (plVar17 == (long *)0x0) goto LAB_0641c460;
      iVar10 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      auVar39._8_8_ = local_d8._8_8_;
      auVar39._0_8_ = local_d8._0_8_;
      plVar17 = (long *)*plVar36;
      if (plVar17 == (long *)0x0) goto LAB_0641c460;
      iVar11 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
      auVar3._8_8_ = local_d8._8_8_;
      auVar3._0_8_ = local_d8._0_8_;
      auVar39._8_8_ = local_d8._8_8_;
      auVar39._0_8_ = local_d8._0_8_;
      if (iVar10 != iVar11) {
        if (plVar26 == (long *)0x0) goto LAB_0641c460;
        if ((char)plVar26[7] == '\0') {
LAB_0641aec4:
          auVar39._8_8_ = local_d8._8_8_;
          auVar39._0_8_ = local_d8._0_8_;
          if (*(long *)(param_1 + 0x1a00) == 0) goto LAB_0641c460;
          *(undefined8 *)(param_1 + 0x1a08) = *(undefined8 *)(*(long *)(param_1 + 0x1a00) + 0x28);
          LeanTween__value(param_1 + 0x1a08);
        }
        else {
          plVar17 = (long *)*plVar33;
          auVar39 = auVar3;
          if (plVar17 == (long *)0x0) goto LAB_0641c460;
          iVar10 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
          auVar4._8_8_ = local_d8._8_8_;
          auVar4._0_8_ = local_d8._0_8_;
          auVar39._8_8_ = local_d8._8_8_;
          auVar39._0_8_ = local_d8._0_8_;
          if ((*(long *)(param_1 + 0x1a00) == 0) ||
             (plVar17 = *(long **)(*(long *)(param_1 + 0x1a00) + 0x28), auVar39 = auVar4,
             plVar17 == (long *)0x0)) goto LAB_0641c460;
          iVar11 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
          auVar39._8_8_ = local_d8._8_8_;
          auVar39._0_8_ = local_d8._0_8_;
          if (iVar10 == iVar11) goto LAB_0641aec4;
          if (*(long *)(param_1 + 0x1a00) == 0) goto LAB_0641c460;
          uVar25 = *(undefined8 *)(param_1 + 0x70);
          uVar35 = *(undefined8 *)(*(long *)(param_1 + 0x1a00) + 0x28);
          if (*(int *)(*(long *)Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar25 = FUN_063f8ad4(uVar25,uVar35,0);
          *(undefined8 *)(param_1 + 0x1a08) = uVar25;
          LeanTween__value(param_1 + 0x1a08,uVar25);
        }
        uVar12 = FUN_063f94d4(*(undefined8 *)(param_1 + 0x1a08),*(undefined8 *)(param_1 + 0x1a00),
                              param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
        lVar27 = *(long *)(param_1 + 0x15c0);
        *(uint *)(param_1 + 0x1a10) = uVar12;
        auVar39 = local_d8;
        if (lVar27 == 0) goto LAB_0641c460;
        if (*(uint *)(lVar27 + 0x18) <= uVar12) {
LAB_0641c464:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        *(undefined4 *)(lVar27 + (long)(int)uVar12 * 0x38 + 0x54) = 0;
      }
    }
  }
  puVar6 = Method_System_Xml_Schema_XsdBuilder_InitIdentityConstraint__;
  lVar27 = *(long *)Method_System_Xml_Schema_XsdBuilder_InitIdentityConstraint__;
  if (*(int *)(lVar27 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar27 = *(long *)puVar6;
  }
  auVar39._8_8_ = local_d8._8_8_;
  auVar39._0_8_ = local_d8._0_8_;
  lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x10);
  if (lVar27 == 0) {
LAB_0641c460:
    local_d8 = auVar39;
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  bVar8 = FUN_0408b858(lVar27,0x6c696761,
                       *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_InitField__);
  auVar39 = local_d8;
  if (param_2 == 0) goto LAB_0641c460;
  uVar12 = *(uint *)(param_2 + 0x18);
  if ((int)uVar12 < 1) {
    local_174 = 0;
LAB_0641c158:
    if (*(char *)(param_1 + 0x19f0) != '\0') {
LAB_0641c164:
      *(undefined1 *)(param_1 + 0x19f0) = 0;
LAB_0641c428:
      return *(undefined4 *)(param_1 + 0xe8);
    }
    auVar39 = local_d8;
    if (param_4 != 0) {
LAB_0641c174:
      *(int *)(param_4 + 0x14) = local_174;
      auVar39 = local_d8;
      if (*(long *)(param_1 + 0x19e8) != 0) {
        uVar12 = FUN_04d8c0e0(*(long *)(param_1 + 0x19e8),
                              *(undefined8 *)
                               Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<ContentRangeHeaderValue>__
                             );
        plVar26 = (long *)(param_4 + 0x50);
        *(uint *)(param_4 + 0x28) = uVar12;
        puVar6 = Method_System_Xml_XsdCachingReader_GetAttribute__;
        auVar39 = local_d8;
        if (*plVar26 != 0) {
          if (*(int *)(*plVar26 + 0x18) < (int)uVar12) {
            if (*(int *)(*(long *)Method_System_Xml_XsdCachingReader_GetAttribute__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_03844f4c(plVar26,uVar12,0,
                         *(undefined8 *)Method_System_IO_Compression_ZipArchiveEntry__ctor__);
          }
          if (*(char *)(param_1 + 0x2c) != '\0') {
            auVar39 = local_d8;
            if (*(long *)(param_4 + 0x30) == 0) goto LAB_0641c460;
            iVar10 = *(int *)(param_1 + 0xe8);
            if (0x100 < *(int *)(*(long *)(param_4 + 0x30) + 0x18) - iVar10) {
              iVar11 = 0x100;
              if (0x100 < iVar10 + 1) {
                iVar11 = iVar10 + 1;
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_03844ff8(param_4 + 0x30,iVar11,1,
                           *(undefined8 *)Method_System_IO_Compression_ZipArchiveEntry_Delete__);
            }
          }
          if (0 < (int)uVar12) {
            lVar28 = 0;
            uVar31 = 0;
            lVar27 = 0x20;
            do {
              lVar19 = *(long *)(param_1 + 0x15c0);
              auVar39 = local_d8;
              if (lVar19 == 0) goto LAB_0641c460;
              if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0641c464;
              lVar37 = *plVar26;
              if (lVar37 == 0) goto LAB_0641c460;
              if (*(uint *)(lVar37 + 0x18) <= uVar31) goto LAB_0641c464;
              lVar29 = lVar37 + lVar27;
              iVar10 = *(int *)(lVar19 + lVar28 + 0x54);
              if (*(long *)(lVar29 + 8) == 0) {
                local_80 = 0;
                uStack_98 = 0;
                local_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                FUN_063fa10c(&local_a0,iVar10 + 1,*(undefined1 *)(param_3 + 0xa0),0);
                if (*(uint *)(lVar37 + 0x18) <= uVar31) goto LAB_0641c464;
                puVar22 = (undefined8 *)(lVar37 + lVar27);
                puVar22[4] = local_80;
                puVar22[1] = uStack_98;
                *puVar22 = local_a0;
                puVar22[3] = uStack_88;
                puVar22[2] = uStack_90;
                LeanTween__value((long *)(lVar29 + 8),0);
              }
              else {
                if (*(int *)(lVar29 + 0x18) < iVar10 * 4) {
                  if (iVar10 < 0x401) {
                    uVar32 = iVar10 - 1U | (int)(iVar10 - 1U) >> 0x10;
                    uVar32 = uVar32 | (int)uVar32 >> 8;
                    uVar32 = uVar32 | (int)uVar32 >> 4;
                    uVar32 = uVar32 | (int)uVar32 >> 2;
                    iVar10 = (uVar32 | (int)uVar32 >> 1) + 1;
                  }
                  else {
LAB_0641c354:
                    iVar10 = iVar10 + 0x100;
                  }
                }
                else {
                  if (*(int *)(lVar29 + 0x18) + iVar10 * -4 < 0x401) goto LAB_0641c38c;
                  if (0x400 < iVar10) goto LAB_0641c354;
                  uVar32 = iVar10 - 1U | (int)(iVar10 - 1U) >> 0x10;
                  uVar32 = uVar32 | (int)uVar32 >> 8;
                  uVar32 = uVar32 | (int)uVar32 >> 4;
                  uVar32 = uVar32 | (int)uVar32 >> 2;
                  uVar32 = uVar32 | (int)uVar32 >> 1;
                  iVar10 = 0x100;
                  if (0x100 < (int)(uVar32 + 1)) {
                    iVar10 = uVar32 + 1;
                  }
                }
                FUN_063fa1d4(lVar29,iVar10,*(undefined1 *)(param_3 + 0xa0),0);
              }
LAB_0641c38c:
              lVar19 = *plVar26;
              auVar39 = local_d8;
              if ((lVar19 == 0) || (lVar37 = *(long *)(param_1 + 0x15c0), lVar37 == 0))
              goto LAB_0641c460;
              if ((*(uint *)(lVar37 + 0x18) <= uVar31) || (*(uint *)(lVar19 + 0x18) <= uVar31))
              goto LAB_0641c464;
              *(undefined8 *)(lVar19 + lVar27 + 0x10) = *(undefined8 *)(lVar37 + lVar28 + 0x38);
              LeanTween__value();
              lVar19 = *plVar26;
              auVar39 = local_d8;
              if ((lVar19 == 0) || (lVar37 = *(long *)(param_1 + 0x15c0), lVar37 == 0))
              goto LAB_0641c460;
              if (*(uint *)(lVar37 + 0x18) <= uVar31) goto LAB_0641c464;
              lVar37 = *(long *)(lVar37 + lVar28 + 0x28);
              if (lVar37 == 0) goto LAB_0641c460;
              uVar16 = FUN_063fac30(lVar37,0);
              if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_0641c464;
              uVar31 = uVar31 + 1;
              lVar19 = lVar19 + lVar27;
              lVar27 = lVar27 + 0x28;
              lVar28 = lVar28 + 0x38;
              *(undefined4 *)(lVar19 + 0x20) = uVar16;
            } while (uVar12 != uVar31);
          }
          goto LAB_0641c428;
        }
      }
    }
    goto LAB_0641c460;
  }
  uVar31 = 0;
  lVar27 = param_2 + 0x20;
  local_174 = 0;
LAB_0641b06c:
  if (uVar12 <= uVar31) goto LAB_0641c464;
  puVar34 = (uint *)(lVar27 + (long)(int)uVar31 * 0x10 + 4);
  if (*puVar34 == 0) goto LAB_0641c158;
  auVar39 = local_d8;
  if (param_4 == 0) goto LAB_0641c460;
  iVar10 = *(int *)(param_1 + 0xe8);
  if ((*(long *)(param_4 + 0x30) == 0) || (*(int *)(*(long *)(param_4 + 0x30) + 0x18) <= iVar10)) {
    if (*(int *)(*(long *)Method_System_Xml_XsdCachingReader_GetAttribute__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_03844ff8(param_4 + 0x30,iVar10 + 1,1,
                 *(undefined8 *)Method_System_IO_Compression_ZipArchiveEntry_Delete__);
    uVar12 = *(uint *)(param_2 + 0x18);
  }
  if (uVar12 <= uVar31) goto LAB_0641c464;
  uVar12 = *puVar34;
  local_144 = *(undefined4 *)(param_1 + 0x78);
  if ((*(char *)(param_3 + 0x81) != '\0') && (uVar12 == 0x3c)) {
    uVar18 = FUN_0640f45c(param_1,param_2,uVar31 + 1,&local_a8,param_3,param_4,local_ac);
    uVar32 = local_a8;
    if ((uVar18 & 1) == 0) {
      local_144 = *(undefined4 *)(param_1 + 0x78);
      goto LAB_0641b2e0;
    }
    if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_0641c464;
    if (*(char *)(param_1 + 0x1588) != '\x02') goto LAB_0641c09c;
    lVar28 = *(long *)(param_1 + 0x15c0);
    auVar39 = local_d8;
    if (lVar28 != 0) {
      if (*(uint *)(param_1 + 0x78) < *(uint *)(lVar28 + 0x18)) {
        lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38;
        iVar10 = *(int *)(lVar27 + (long)(int)uVar31 * 0x10 + 8);
        *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
        lVar28 = *(long *)(param_4 + 0x30);
        if (lVar28 != 0) {
          if (*(uint *)(param_1 + 0xe8) < *(uint *)(lVar28 + 0x18)) {
            iVar11 = *(int *)(param_1 + 0x158c);
            lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178;
            *(undefined8 *)(lVar28 + 0x40) = *(undefined8 *)(param_1 + 0x68);
            *(uint *)(lVar28 + 0x20) = iVar11 + 0xe000U & 0xffff;
            LeanTween__value();
            lVar28 = *(long *)(param_4 + 0x30);
            auVar39 = local_d8;
            if (lVar28 != 0) {
              uVar12 = *(uint *)(param_1 + 0xe8);
              if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                *(undefined4 *)(lVar28 + 0x20 + (long)(int)uVar12 * 0x178 + 0x38) =
                     *(undefined4 *)(param_1 + 0x78);
                if (*(long *)(param_1 + 0xe0) != 0) {
                  lVar19 = FUN_0641e740(*(long *)(param_1 + 0xe0),0);
                  auVar39 = local_d8;
                  if (lVar19 != 0) {
                    uVar25 = FUN_0400ff1c(lVar19,*(undefined4 *)(param_1 + 0x158c),
                                          *(undefined8 *)
                                           Method_System_IO_Compression_ZipArchive_ThrowIfDisposed__
                                         );
                    if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                      *(undefined8 *)(lVar28 + 0x20 + (long)(int)uVar12 * 0x178 + 0x10) = uVar25;
                      LeanTween__value();
                      lVar28 = *(long *)(param_4 + 0x30);
                      auVar39 = local_d8;
                      if (lVar28 != 0) {
                        uVar12 = *(uint *)(param_1 + 0xe8);
                        if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                          lVar19 = lVar28 + 0x20 + (long)(int)uVar12 * 0x178;
                          *(undefined1 *)(lVar19 + 8) = *(undefined1 *)(param_1 + 0x1588);
                          *(int *)(lVar19 + 4) = iVar10;
                          if (uVar32 < *(uint *)(param_2 + 0x18)) {
                            *(int *)(lVar28 + 0x20 + (long)(int)uVar12 * 0x178 + 0xc) =
                                 (*(int *)(lVar27 + (long)(int)uVar32 * 0x10 + 8) - iVar10) + 1;
                            *(undefined1 *)(param_1 + 0x1588) = 1;
                            uVar31 = uVar32;
                            goto LAB_0641bc44;
                          }
                        }
                        goto LAB_0641c464;
                      }
                      goto LAB_0641c460;
                    }
                    goto LAB_0641c464;
                  }
                }
                goto LAB_0641c460;
              }
              goto LAB_0641c464;
            }
            goto LAB_0641c460;
          }
          goto LAB_0641c464;
        }
        goto LAB_0641c460;
      }
      goto LAB_0641c464;
    }
    goto LAB_0641c460;
  }
LAB_0641b2e0:
  lVar19 = *plVar36;
  local_a4[0] = 0;
  lVar28 = *plVar33;
  if (*(char *)(param_1 + 0x1588) != '\x01') goto LAB_0641b3bc;
  uVar32 = *(uint *)(param_1 + 300);
  if ((uVar32 >> 4 & 1) == 0) {
    if ((uVar32 >> 3 & 1) == 0) {
      if ((uVar32 >> 5 & 1) != 0) goto LAB_0641b314;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar18 = FUN_0545850c(uVar12,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar12 = FUN_054589ac(uVar12,0);
        goto LAB_0641b3b8;
      }
    }
  }
  else {
LAB_0641b314:
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar18 = FUN_054585ac(uVar12,0);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar12 = FUN_05458834(uVar12,0);
LAB_0641b3b8:
      uVar12 = uVar12 & 0xffff;
    }
  }
LAB_0641b3bc:
  uVar32 = uVar31 + 1;
  if ((int)uVar32 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0641c464;
    iVar10 = *(int *)(lVar27 + (long)(int)uVar32 * 0x10 + 4);
  }
  else {
    iVar10 = 0;
  }
  uVar38 = uVar12;
  if (*(char *)(param_3 + 0x80) == '\0') {
LAB_0641b49c:
    lVar37 = FUN_0641da34(param_1,param_3,uVar12,*(undefined8 *)(param_1 + 0x68),
                          *(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x13c),local_a4,
                          bVar8 & 1);
    if (lVar37 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_0641c464;
      FUN_0641de4c(0,uVar12,*(undefined4 *)(lVar27 + (long)(int)uVar31 * 0x10 + 8),*plVar36,param_4)
      ;
      auVar39 = local_d8;
      if (plVar26 == (long *)0x0) goto LAB_0641c460;
      uVar38 = *(uint *)((long)plVar26 + 0x3c);
      bVar7 = *(uint *)(param_2 + 0x18) <= uVar31;
      if (uVar38 == 0) {
        if (bVar7) goto LAB_0641c464;
        uVar38 = 0x25a1;
      }
      else if (bVar7) goto LAB_0641c464;
      *puVar34 = uVar38;
      lVar37 = FUN_06407108(uVar38,*(undefined8 *)(param_1 + 0x68),1,*(undefined4 *)(param_1 + 300),
                            *(undefined4 *)(param_1 + 0x13c),local_a4,bVar8 & 1,0);
      if (lVar37 == 0) {
        lVar37 = *plVar36;
        auVar39 = local_d8;
        if (lVar37 == 0) goto LAB_0641c460;
        uVar13 = FUN_063fac58(lVar37,0);
        if (*(char *)(param_1 + 0xf4) == '\0') {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(undefined4 *)(param_3 + 0x7c);
        }
        uVar25 = (**(code **)(*plVar26 + 0x198))
                           (plVar26,uVar13 & 1,uVar16,*(undefined8 *)(*plVar26 + 0x1a0));
        uVar35 = FUN_0641ff4c(plVar26,0);
        in_stack_fffffffffffffe50 =
             CONCAT71((int7)(in_stack_fffffffffffffe50 >> 8),bVar8) & 0xffffffffffffff01;
        lVar37 = FUN_06407708(uVar38,lVar37,uVar25,uVar35,1,*(undefined4 *)(param_1 + 300),
                              *(undefined4 *)(param_1 + 0x13c),local_a4,in_stack_fffffffffffffe50,0)
        ;
        if (lVar37 == 0) {
          lVar37 = plVar26[4];
          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar18 = FUN_0634eb94(lVar37,0,0);
          if ((uVar18 & 1) != 0) {
            lVar37 = FUN_06407108(uVar38,plVar26[4],1,*(undefined4 *)(param_1 + 300),
                                  *(undefined4 *)(param_1 + 0x13c),local_a4,bVar8 & 1,0);
            if (lVar37 != 0) goto LAB_0641b608;
          }
          if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_0641c464;
          uVar38 = 0x20;
          *puVar34 = 0x20;
          lVar37 = FUN_06407108(0x20,*(undefined8 *)(param_1 + 0x68),1,
                                *(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x13c),
                                local_a4,bVar8 & 1,0);
          if (lVar37 == 0) {
            if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_0641c464;
            uVar38 = 3;
            *puVar34 = 3;
            lVar37 = FUN_06407108(3,*(undefined8 *)(param_1 + 0x68),1,*(undefined4 *)(param_1 + 300)
                                  ,*(undefined4 *)(param_1 + 0x13c),local_a4,bVar8 & 1,0);
          }
        }
      }
LAB_0641b608:
      if ((char)plVar26[0x12] != '\0') {
        uVar18 = FUN_062fd6c0(0);
        if (uVar12 >> 0x10 == 0) {
          local_a0 = CONCAT44(local_a0._4_4_,uVar12);
          uVar25 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&local_a0);
          puVar22 = (undefined8 *)Method_System_IO_Compression_ZipArchiveEntry_OpenInUpdateMode__;
        }
        else {
          local_a0 = CONCAT44(local_a0._4_4_,uVar12);
          uVar25 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&local_a0);
          puVar22 = (undefined8 *)
                    Method_System_IO_Compression_ZipArchiveEntry_LoadLocalHeaderExtraFieldAndCompressedBytesIfNeeded__
          ;
        }
        uVar35 = *puVar22;
        plVar17 = *(long **)(param_3 + 0x48);
        auVar39 = local_d8;
        if ((uVar18 & 1) == 0) {
          if (plVar17 == (long *)0x0) goto LAB_0641c460;
          uVar20 = thunk_FUN_06354368(plVar17,0);
        }
        else {
          if (plVar17 == (long *)0x0) goto LAB_0641c460;
          uVar16 = (**(code **)(*plVar17 + 0x158))(plVar17,*(undefined8 *)(*plVar17 + 0x160));
          local_a0 = CONCAT44(local_a0._4_4_,uVar16);
          uVar20 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_a0);
        }
        auVar39 = local_d8;
        if (lVar37 == 0) goto LAB_0641c460;
        uVar16 = FUN_0641ed14(lVar37,0);
        local_a0 = CONCAT44(local_a0._4_4_,uVar16);
        uVar21 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&local_a0);
        uVar25 = FUN_0536e120(uVar35,uVar25,uVar20,uVar21,0);
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_06309d28(uVar25,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Net_Configuration_WebRequestModulesSection__ctor__ + 0xe4)
        == 0) {
      thunk_FUN_02df485c();
    }
    uVar18 = FUN_06429434(uVar12,0);
    if (((uVar18 & 1) == 0) || (iVar10 == 0xfe0e)) {
      if (*(int *)(*(long *)Method_System_Net_Configuration_WebRequestModulesSection__ctor__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      uVar18 = FUN_064293b4(uVar12,0);
      if (((uVar18 & 1) == 0) || (iVar10 != 0xfe0f)) goto LAB_0641b49c;
    }
    auVar39 = local_d8;
    if (plVar26 == (long *)0x0) goto LAB_0641c460;
    lVar37 = plVar26[9];
    if ((lVar37 == 0) || (*(int *)(lVar37 + 0x18) < 1)) goto LAB_0641b49c;
    in_stack_fffffffffffffe50 = 0;
    lVar37 = FUN_06407a44(uVar12,*(undefined8 *)(param_1 + 0x68),lVar37,1,
                          *(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x13c),local_a4,
                          bVar8 & 1,0);
    if (lVar37 == 0) goto LAB_0641b49c;
  }
  lVar29 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_0641c460;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0641c464;
  puVar22 = (undefined8 *)(lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x38);
  *puVar22 = 0;
  LeanTween__value(puVar22,0);
  auVar39 = local_d8;
  if (lVar37 == 0) goto LAB_0641c460;
  cVar9 = FUN_06421cfc(lVar37,0);
  if (cVar9 == '\x01') {
    lVar29 = FUN_06421d0c(lVar37,0);
    auVar39 = local_d8;
    if (lVar29 == 0) goto LAB_0641c460;
    iVar11 = FUN_0641fbe8(lVar29,0);
    auVar39 = local_d8;
    if (*plVar36 == 0) goto LAB_0641c460;
    iVar14 = FUN_0641fbe8(*plVar36,0);
    bVar7 = iVar11 != iVar14;
    if (bVar7) {
      plVar17 = (long *)FUN_06421d0c(lVar37,0);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
        *plVar36 = 0;
      }
      else {
        lVar29 = *(long *)Method_System_Xml_Schema_XmlUntypedConverter_ChangeListType__;
        bVar1 = *(byte *)(lVar29 + 0x130);
        if (*(byte *)(*plVar17 + 0x130) < bVar1) {
          plVar30 = (long *)0x0;
        }
        else {
          plVar30 = plVar17;
          if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar29) {
            plVar30 = (long *)0x0;
          }
        }
        *plVar36 = (long)plVar30;
        if (*(byte *)(*plVar17 + 0x130) < bVar1) {
          plVar17 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar29) {
          plVar17 = (long *)0x0;
        }
      }
      LeanTween__value(plVar36,plVar17);
    }
    if ((0xffffffef < iVar10 - 0xfe10U) || (0xffffff0f < iVar10 - 0xe01f0U)) {
      auVar39 = local_d8;
      if (*plVar36 == 0) goto LAB_0641c460;
      uVar18 = FUN_06403128(*plVar36,uVar38,iVar10,&local_bc,0);
      if ((uVar18 & 1) == 0) {
        auVar39 = local_d8;
        if (*plVar36 == 0) goto LAB_0641c460;
        local_bc = FUN_06400468(*plVar36,uVar38,iVar10,0);
        auVar39 = local_d8;
        if (*plVar36 == 0) goto LAB_0641c460;
        FUN_0640307c(*plVar36,uVar38,iVar10,local_bc,0);
      }
      if (local_bc != 0) {
        auVar39 = local_d8;
        if (*plVar36 == 0) goto LAB_0641c460;
        uVar18 = FUN_064031d4(*plVar36,local_bc,&local_c8,0);
        if ((uVar18 & 1) != 0) {
          lVar29 = *(long *)(param_4 + 0x30);
          auVar39 = local_d8;
          if (lVar29 == 0) goto LAB_0641c460;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0641c464;
          *(undefined8 *)(lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x38) = local_c8;
          LeanTween__value();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0641c464;
      *(undefined4 *)(lVar27 + (long)(int)uVar32 * 0x10 + 4) = 0x1a;
      uVar31 = uVar32;
    }
    if ((bVar8 & 1) != 0) {
      auVar39 = local_d8;
      if (*plVar36 == 0) goto LAB_0641c460;
      lVar29 = FUN_063fac9c(*plVar36,0);
      auVar39 = local_d8;
      if (lVar29 == 0) goto LAB_0641c460;
      lVar29 = *(long *)(lVar29 + 0x38);
      uVar16 = FUN_0641ecf4(lVar37,0);
      auVar39 = local_d8;
      if (lVar29 == 0) goto LAB_0641c460;
      uVar18 = FUN_04f96670(lVar29,uVar16,&local_b8,
                            *(undefined8 *)Method_System_Xml_XmlValidatingReaderImpl__ctor__);
      if ((uVar18 & 1) != 0) {
        if (local_b8 != 0) {
          iVar10 = 0;
          auVar39 = local_d8;
          while (local_d8 = auVar39, iVar10 < *(int *)(local_b8 + 0x18)) {
            auVar39 = FUN_03fcca20(local_b8,iVar10,
                                   *(undefined8 *)
                                    Method_System_IO_Compression_ZipArchive_set_EntryNameEncoding__)
            ;
            local_d8 = auVar39;
            lVar29 = FUN_063f1a44(local_d8,0);
            auVar39 = local_d8;
            if (lVar29 == 0) goto LAB_0641c460;
            uVar18 = *(ulong *)(lVar29 + 0x18);
            iVar11 = FUN_063f1a54(local_d8,0);
            iVar14 = (int)uVar18;
            if (1 < iVar14) {
              lVar29 = 0;
              do {
                uVar12 = uVar31 + 1 + (int)lVar29;
                if (*(uint *)(param_2 + 0x18) <= uVar12) goto LAB_0641c464;
                auVar39 = local_d8;
                if (*plVar36 == 0) goto LAB_0641c460;
                iVar15 = FUN_06400340(*plVar36,*(undefined4 *)
                                                (lVar27 + (long)(int)uVar12 * 0x10 + 4),local_dc,0);
                lVar23 = FUN_063f1a44(local_d8,0);
                auVar39 = local_d8;
                if (lVar23 == 0) goto LAB_0641c460;
                if (*(uint *)(lVar23 + 0x18) <= (int)lVar29 + 1U) goto LAB_0641c464;
                if (iVar15 != *(int *)(lVar23 + lVar29 * 4 + 0x24)) goto LAB_0641bab0;
                lVar29 = lVar29 + 1;
              } while (iVar14 + -1 != (int)lVar29);
            }
            auVar39 = local_d8;
            if (iVar11 != 0) {
              if (*plVar36 == 0) goto LAB_0641c460;
              uVar24 = FUN_064031d4(*plVar36,iVar11,&local_e8,0);
              auVar39 = local_d8;
              if ((uVar24 & 1) != 0) {
                lVar29 = *(long *)(param_4 + 0x30);
                if (lVar29 == 0) goto LAB_0641c460;
                if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0641c464;
                *(undefined8 *)(lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x38) =
                     local_e8;
                LeanTween__value();
                if (iVar14 < 1) goto LAB_0641c140;
                uVar24 = 0;
                goto LAB_0641c100;
              }
            }
LAB_0641bab0:
            iVar10 = iVar10 + 1;
            if (local_b8 == 0) goto LAB_0641c460;
          }
          goto LAB_0641bacc;
        }
        if (*(char *)(param_1 + 0x19f0) == '\0') goto LAB_0641c174;
        goto LAB_0641c164;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto LAB_0641bacc;
LAB_0641c100:
  do {
    if (uVar24 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_0641c464;
      *(int *)(lVar27 + (long)(int)uVar31 * 0x10 + 0xc) = iVar14;
    }
    else {
      uVar12 = uVar31 + (int)uVar24;
      if (*(uint *)(param_2 + 0x18) <= uVar12) goto LAB_0641c464;
      *(undefined4 *)(lVar27 + (long)(int)uVar12 * 0x10 + 4) = 0x1a;
    }
    uVar24 = uVar24 + 1;
  } while ((uVar18 & 0xffffffff) != uVar24);
LAB_0641c140:
  uVar31 = (uVar31 + iVar14) - 1;
LAB_0641bacc:
  lVar29 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_0641c460;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0641c464;
  lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178;
  *(long *)(lVar29 + 0x30) = lVar37;
  *(undefined1 *)(lVar29 + 0x28) = 1;
  LeanTween__value();
  lVar29 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_0641c460;
  uVar12 = *(uint *)(param_1 + 0xe8);
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_0641c464;
  puVar34 = (uint *)(lVar29 + 0x20 + (long)(int)uVar12 * 0x178);
  *(undefined1 *)(puVar34 + 0xf) = local_a4[0];
  *puVar34 = uVar38 & 0xffff;
  if (*(uint *)(param_2 + 0x18) <= uVar31) goto LAB_0641c464;
  lVar23 = lVar27 + (long)(int)uVar31 * 0x10;
  lVar29 = lVar29 + 0x20 + (long)(int)uVar12 * 0x178;
  uVar16 = *(undefined4 *)(lVar23 + 8);
  *(long *)(lVar29 + 0x20) = *plVar36;
  *(undefined4 *)(lVar29 + 4) = uVar16;
  *(undefined4 *)(lVar29 + 0xc) = *(undefined4 *)(lVar23 + 0xc);
  LeanTween__value();
  cVar9 = FUN_06421cfc(lVar37,0);
  if (cVar9 == '\x02') {
    plVar17 = (long *)FUN_06421d0c(lVar37,0);
    auVar39 = local_d8;
    if (plVar17 == (long *)0x0) goto LAB_0641c460;
    bVar1 = *(byte *)(*(long *)Method_System_Xml_Schema_XsdBuilder_InitAny__ + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Xml_Schema_XsdBuilder_InitAny__)) goto LAB_0641c460;
    uVar12 = FUN_063f96d4(plVar17[5],plVar17,param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
    lVar28 = *(long *)(param_1 + 0x15c0);
    *(uint *)(param_1 + 0x78) = uVar12;
    auVar39 = local_d8;
    if (lVar28 == 0) goto LAB_0641c460;
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_0641c464;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x38;
    *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
    lVar28 = *(long *)(param_4 + 0x30);
    if (lVar28 == 0) goto LAB_0641c460;
    uVar12 = *(uint *)(param_1 + 0xe8);
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_0641c464;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x178;
    *(undefined1 *)(lVar28 + 0x28) = 2;
    *(undefined4 *)(lVar28 + 0x58) = *(undefined4 *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x1588) = 1;
LAB_0641bc44:
    *(undefined4 *)(param_1 + 0x78) = local_144;
    local_174 = local_174 + 1;
    goto LAB_0641c094;
  }
  if (bVar7) {
    auVar39 = local_d8;
    if (*plVar36 == 0) goto LAB_0641c460;
    iVar10 = FUN_0641fbe8(*plVar36,0);
    auVar39 = local_d8;
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_0641c460;
    iVar11 = FUN_0641fbe8(*(long *)(param_3 + 0x48),0);
    if (iVar10 != iVar11) {
      auVar39 = local_d8;
      if (plVar26 == (long *)0x0) goto LAB_0641c460;
      if ((char)plVar26[7] == '\0') {
        if (*plVar36 == 0) goto LAB_0641c460;
        uVar25 = *(undefined8 *)(*plVar36 + 0x28);
      }
      else {
        if (*plVar36 == 0) goto LAB_0641c460;
        uVar25 = *(undefined8 *)(*plVar36 + 0x28);
        lVar29 = *plVar33;
        if (*(int *)(*(long *)Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar25 = FUN_063f8ad4(lVar29,uVar25,0);
      }
      *(undefined8 *)(param_1 + 0x70) = uVar25;
      LeanTween__value(plVar33);
      uVar16 = FUN_063f94d4(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                            param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
      *(undefined4 *)(param_1 + 0x78) = uVar16;
    }
  }
  lVar29 = FUN_06421d14(lVar37,0);
  auVar39 = local_d8;
  if (lVar29 == 0) goto LAB_0641c460;
  iVar10 = FUN_063ed0e8(lVar29,0);
  if (0 < iVar10) {
    lVar29 = *plVar36;
    lVar23 = *plVar33;
    lVar37 = FUN_06421d14(lVar37,0);
    auVar39 = local_d8;
    if (lVar37 == 0) goto LAB_0641c460;
    uVar16 = FUN_063ed0e8(lVar37,0);
    if (*(int *)(*(long *)Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__ + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Method_System_Xml_XmlTextReaderImpl_ReadValueChunk__);
    }
    uVar25 = FUN_063f918c(lVar29,lVar23,uVar16,0);
    *(undefined8 *)(param_1 + 0x70) = uVar25;
    LeanTween__value(plVar33,uVar25);
    uVar16 = FUN_063f94d4(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                          param_1 + 0x15c0,*(undefined8 *)(param_1 + 0x19e8),0);
    *(undefined4 *)(param_1 + 0x78) = uVar16;
    bVar7 = true;
  }
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar18 = FUN_05455f40(uVar38,0);
  if (((uVar18 & 1) == 0) && (uVar38 != 0x200b)) {
    lVar37 = *(long *)(param_1 + 0x15c0);
    if (*(char *)(param_3 + 0xa0) == '\0') {
LAB_0641bfa0:
      auVar39 = local_d8;
      if (lVar37 == 0) goto LAB_0641c460;
    }
    else {
      auVar39 = local_d8;
      if (lVar37 == 0) goto LAB_0641c460;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(param_1 + 0x78)) goto LAB_0641c464;
      if (0x3ffe < *(int *)(lVar37 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38 + 0x54)) {
        uVar35 = *(undefined8 *)(param_1 + 0x70);
        uVar25 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc410);
        FUN_0631f050(uVar25,uVar35,0);
        uVar16 = FUN_063f94d4(uVar25,*(undefined8 *)(param_1 + 0x68),param_1 + 0x15c0,
                              *(undefined8 *)(param_1 + 0x19e8),0);
        lVar37 = *(long *)(param_1 + 0x15c0);
        *(undefined4 *)(param_1 + 0x78) = uVar16;
        goto LAB_0641bfa0;
      }
    }
    if (*(uint *)(lVar37 + 0x18) <= *(uint *)(param_1 + 0x78)) goto LAB_0641c464;
    lVar37 = lVar37 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38;
    *(int *)(lVar37 + 0x54) = *(int *)(lVar37 + 0x54) + 1;
  }
  lVar37 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar37 == 0) goto LAB_0641c460;
  if (*(uint *)(lVar37 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0641c464;
  *(long *)(lVar37 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x178 + 0x50) = *plVar33;
  LeanTween__value();
  lVar37 = *(long *)(param_4 + 0x30);
  auVar39 = local_d8;
  if (lVar37 == 0) goto LAB_0641c460;
  uVar12 = *(uint *)(param_1 + 0xe8);
  if (*(uint *)(lVar37 + 0x18) <= uVar12) goto LAB_0641c464;
  uVar32 = *(uint *)(param_1 + 0x78);
  *(uint *)(lVar37 + (long)(int)uVar12 * 0x178 + 0x58) = uVar32;
  lVar37 = *(long *)(param_1 + 0x15c0);
  if (lVar37 == 0) goto LAB_0641c460;
  if (*(uint *)(lVar37 + 0x18) <= uVar32) goto LAB_0641c464;
  *(bool *)(lVar37 + 0x20 + (long)(int)uVar32 * 0x38 + 0x20) = bVar7;
  if (bVar7) {
    plVar17 = (long *)(lVar37 + 0x20 + (long)(int)uVar32 * 0x38 + 0x28);
    *plVar17 = lVar28;
    LeanTween__value(plVar17,lVar28);
    *(long *)(param_1 + 0x68) = lVar19;
    LeanTween__value(plVar36);
    *(long *)(param_1 + 0x70) = lVar28;
    LeanTween__value(plVar33,lVar28);
    uVar12 = *(uint *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x78) = local_144;
  }
LAB_0641c094:
  *(uint *)(param_1 + 0xe8) = uVar12 + 1;
  uVar32 = uVar31;
LAB_0641c09c:
  uVar12 = *(uint *)(param_2 + 0x18);
  uVar31 = uVar32 + 1;
  if ((int)uVar12 <= (int)uVar31) goto LAB_0641c158;
  goto LAB_0641b06c;
}


