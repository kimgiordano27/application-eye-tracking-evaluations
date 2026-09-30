/*
FUNCTION_NAME: FUN_05e41a38
ENTRY_POINT: 05e41a38
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;strong_file_logging_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x05e422f8) */
/* WARNING: Removing unreachable block (ram,0x05e422fc) */
/* WARNING: Removing unreachable block (ram,0x05e4227c) */
/* WARNING: Removing unreachable block (ram,0x05e423dc) */
/* WARNING: Removing unreachable block (ram,0x05e424e8) */
/* WARNING: Removing unreachable block (ram,0x05e424e0) */

bool FUN_05e41a38(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_06a58be7 & 1) == 0) {
    FUN_02d4dc40(Method_System_Xml_XmlElement__ctor__);
    FUN_02d4dc40(Method_System_Xml_XmlElement_SetAttributeNode__);
    FUN_02d4dc40(PTR_DAT_0665eb70);
    FUN_02d4dc40(Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__);
    FUN_02d4dc40(Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__);
    FUN_02d4dc40(UnityEngine_TextGenerationSettings_var);
    FUN_02d4dc40(PTR_DAT_0664a1a0);
    FUN_02d4dc40(Method_System_Xml_XmlEncodedRawTextWriter_ValidateContentChars__);
    FUN_02d4dc40(Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
    FUN_02d4dc40(Method_System_Xml_XmlEntity_CloneNode__);
    FUN_02d4dc40(Method_System_Xml_XmlEntity_set_InnerText__);
    FUN_02d4dc40(PTR_DAT_06648bf0);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_AddAttrXmlName__);
    FUN_02d4dc40(Method_System_Xml_XmlEntity_set_InnerXml__);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_CheckName__);
    FUN_02d4dc40(Method_System_Xml_XmlEntityReference__ctor__);
    FUN_02d4dc40(PTR_DAT_06648bf8);
    FUN_02d4dc40(PTR_DAT_06648c00);
    FUN_02d4dc40(Method_System_Xml_XmlEntityReference_set_Value__);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_set_InnerText__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<byte[]>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<bool>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<byte>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<DateTime>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<DateTimeOffset>__);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_set_XmlResolver__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__);
    FUN_02d4dc40(PTR_DAT_06648c10);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<double>__);
    FUN_02d4dc40(PTR_DAT_06646c20);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<short>__);
    FUN_02d4dc40(PTR_DAT_06648990);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<int>__);
    FUN_02d4dc40(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_set_enableInteractions__
                );
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<long>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<object>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<sbyte>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__);
    DAT_06a58be7 = 1;
  }
  puVar4 = Method_System_Xml_Schema_XmlListConverter_ToArray<DateTimeOffset>__;
  puVar3 = PTR_DAT_06648bf8;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  FUN_036a68ac(&local_110,param_1,*(undefined8 *)Method_System_Xml_XmlDocument_set_XmlResolver__);
  local_70 = local_100;
  uStack_78 = uStack_108;
  local_80 = local_110;
  do {
    uVar7 = FUN_049c6928(&local_80,*(undefined8 *)Method_System_Xml_XmlDocument_CheckName__);
    lVar5 = local_70;
    if ((uVar7 & 1) == 0) {
      uVar17 = 0x18;
      break;
    }
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar18 = *(undefined8 *)(local_70 + 0x18);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_set_enableInteractions__
                + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar18 = FUN_05e42b64(uVar18);
    uVar8 = FUN_05e42b64(*(undefined8 *)(lVar5 + 0x10));
    lVar9 = FUN_05e42d30(uVar8,uVar18,0,0);
    if (lVar9 == 0) {
      FUN_05e40abc();
      bVar6 = false;
      goto LAB_05e42498;
    }
    uVar18 = *(undefined8 *)(lVar5 + 0x20);
    lVar10 = *(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar10 = *(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__;
    }
    puVar15 = *(undefined8 **)(lVar10 + 0xb8);
    lVar19 = puVar15[3];
    if (lVar19 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar15 = *(undefined8 **)
                   (*(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__ + 0xb8);
      }
      uVar8 = *puVar15;
      lVar19 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_System_Xml_Schema_XmlListConverter_ToArray<DateTime>__);
      FUN_04c52da4(lVar19,uVar8,
                   *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<long>__,0);
      plVar11 = (long *)(*(long *)(*(long *)
                                    Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__ + 0xb8
                                  ) + 0x18);
      *plVar11 = lVar19;
      thunk_FUN_02dc1ef0(plVar11,lVar19);
    }
    uVar18 = FUN_031fcf8c(uVar18,lVar19,
                          *(undefined8 *)Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__)
    ;
    lVar10 = FUN_0320624c(uVar18,*(undefined8 *)PTR_DAT_0664a1a0);
    if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_036a68ac(&local_110,*(long *)(lVar5 + 0x28),
                 *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__);
    local_90 = local_100;
    uStack_98 = uStack_108;
    local_a0 = local_110;
    while (uVar7 = FUN_049c6928(&local_a0,
                                *(undefined8 *)Method_System_Xml_XmlEntityReference__ctor__),
          lVar19 = local_90, (uVar7 & 1) != 0) {
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar18 = *(undefined8 *)(local_90 + 0x28);
      lVar12 = *(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar12 = *(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__;
      }
      puVar15 = *(undefined8 **)(lVar12 + 0xb8);
      lVar21 = puVar15[4];
      if (lVar21 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar15 = *(undefined8 **)
                     (*(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__ + 0xb8);
        }
        uVar8 = *puVar15;
        lVar21 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Xml_Schema_XmlListConverter_ToArray<byte>__);
        FUN_04c523a8(lVar21,uVar8,
                     *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<object>__,0);
        plVar11 = (long *)(*(long *)(*(long *)
                                      Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__ +
                                    0xb8) + 0x20);
        *plVar11 = lVar21;
        thunk_FUN_02dc1ef0(plVar11,lVar21);
      }
      uVar18 = FUN_03206fdc(uVar18,lVar21,
                            *(undefined8 *)
                             Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
      lVar12 = *(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar12 = *(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__;
      }
      puVar15 = *(undefined8 **)(lVar12 + 0xb8);
      lVar21 = puVar15[5];
      if (lVar21 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar15 = *(undefined8 **)
                     (*(long *)Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__ + 0xb8);
        }
        uVar8 = *puVar15;
        lVar21 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_System_Xml_Schema_XmlListConverter_ToArray<bool>__);
        FUN_04c52da4(lVar21,uVar8,
                     *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<sbyte>__,0);
        plVar11 = (long *)(*(long *)(*(long *)
                                      Method_System_Xml_Schema_XmlBaseConverter_Int32ToUInt16__ +
                                    0xb8) + 0x28);
        *plVar11 = lVar21;
        thunk_FUN_02dc1ef0(plVar11,lVar21);
      }
      uVar18 = FUN_031fe110(uVar18,lVar21,
                            *(undefined8 *)
                             Method_System_Xml_XmlEncodedRawTextWriter_EncodeSurrogate__);
      uVar18 = FUN_031d5ec0(uVar18,*(undefined8 *)PTR_DAT_0665eb70);
      uVar18 = FUN_0320624c(uVar18,*(undefined8 *)PTR_DAT_0664a1a0);
      uVar18 = FUN_032063c4(uVar18,lVar10,
                            *(undefined8 *)
                             Method_System_Xml_XmlEncodedRawTextWriter_ValidateContentChars__);
      lVar12 = FUN_032045bc(uVar18,*(undefined8 *)UnityEngine_TextGenerationSettings_var);
      uVar18 = *(undefined8 *)(lVar19 + 0x10);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_set_enableInteractions__
                  + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar18 = FUN_05e42b64(uVar18);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar23 = *(undefined8 *)(lVar19 + 0x20);
      uVar1 = *(undefined4 *)(lVar19 + 0x18);
      cVar2 = *(char *)(lVar19 + 0x38);
      uVar8 = *(undefined8 *)(lVar12 + 0x18);
      if (*(long *)(lVar19 + 0x30) == 0) {
        uVar13 = 0;
LAB_05e42054:
        uVar22 = 0;
      }
      else {
        uVar13 = FUN_036a7820(*(long *)(lVar19 + 0x30),*(undefined8 *)PTR_DAT_06646c20);
        if (*(long *)(lVar19 + 0x30) == 0) goto LAB_05e42054;
        uVar22 = *(undefined4 *)(*(long *)(lVar19 + 0x30) + 0x18);
      }
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_set_enableInteractions__
                  + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar12 = FUN_05e42df4(lVar9,uVar18,uVar23,uVar1,0,0,lVar12,uVar8,cVar2 != '\0',uVar13,uVar22);
      if (lVar12 == 0) {
        FUN_05e40abc();
        uVar17 = 5;
        goto LAB_05e42398;
      }
      if (*(long *)(lVar19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_036a68ac(&local_110,*(long *)(lVar19 + 0x28),
                   *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<double>__);
      local_b0 = local_100;
      uStack_b8 = uStack_108;
      local_c0 = local_110;
      while (uVar7 = FUN_049c6928(&local_c0,
                                  *(undefined8 *)Method_System_Xml_XmlEntity_set_InnerXml__),
            lVar21 = local_b0, (uVar7 & 1) != 0) {
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar16 = lVar10;
        if (*(long *)(local_b0 + 0x20) != 0) {
          lVar16 = *(long *)(local_b0 + 0x20);
        }
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_036a68ac(&local_110,lVar16,*(undefined8 *)PTR_DAT_06648c10);
        uStack_d8 = uStack_108;
        local_e0 = local_110;
        local_d0 = local_100;
        while (uVar7 = FUN_049c6928(&local_e0,*(undefined8 *)puVar3), lVar16 = local_d0,
              (uVar7 & 1) != 0) {
          if ((*(char *)(lVar19 + 0x38) != '\0') || (lVar20 = *(long *)(lVar21 + 0x10), lVar20 == 0)
             ) {
            lVar20 = *(long *)(lVar5 + 0x30);
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar7 = FUN_0483dd8c(param_2,lVar20,&local_e8,
                               *(undefined8 *)Method_System_Xml_XmlElement__ctor__);
          if ((uVar7 & 1) == 0) {
            lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                         Method_System_Xml_Schema_XmlListConverter_ToArray<int>__);
            FUN_03765794(lVar14,*(undefined8 *)
                                 Method_System_Xml_Schema_XmlListConverter_ToArray<short>__);
            local_e8 = lVar14;
            FUN_0483c210(param_2,lVar20,lVar14,
                         *(undefined8 *)Method_System_Xml_XmlElement_SetAttributeNode__);
          }
          lVar20 = local_e8;
          local_f0 = 0;
          local_f8 = lVar12;
          local_f0 = FUN_04e723e0(lVar16,*(undefined8 *)(lVar21 + 0x18),0);
          thunk_FUN_02dc1ef0(&local_f0);
          if (lVar20 == 0) {
LAB_05e42280:
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar16 = *(long *)(lVar20 + 0x10);
          lVar14 = *(long *)puVar4;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05e42280;
          uVar17 = *(uint *)(lVar20 + 0x18);
          if (uVar17 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar17 * 0x10;
            *(uint *)(lVar20 + 0x18) = uVar17 + 1;
            puVar15 = (undefined8 *)(lVar16 + 0x28);
            *puVar15 = local_f0;
            *(long *)(lVar16 + 0x20) = local_f8;
            thunk_FUN_02dc1ef0(puVar15,0);
          }
          else {
            FUN_0376604c(lVar20,local_f8,local_f0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_049c6924(&local_e0,*(undefined8 *)PTR_DAT_06648bf0);
      }
      FUN_049c6924(&local_c0,*(undefined8 *)Method_System_Xml_XmlEntity_set_InnerText__);
    }
    uVar17 = 2;
LAB_05e42398:
    FUN_049c6924(&local_a0,*(undefined8 *)Method_System_Xml_XmlEntity_CloneNode__);
  } while ((uVar17 | 2) == 2);
  bVar6 = uVar17 != 5;
LAB_05e42498:
  FUN_049c6924(&local_80,*(undefined8 *)Method_System_Xml_XmlDocument_AddAttrXmlName__);
  return bVar6;
}


