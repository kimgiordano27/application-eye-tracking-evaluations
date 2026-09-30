/*
FUNCTION_NAME: FUN_05e4aae8
ENTRY_POINT: 05e4aae8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05e4b164) */
/* WARNING: Removing unreachable block (ram,0x05e4b2d8) */
/* WARNING: Removing unreachable block (ram,0x05e4b3c4) */
/* WARNING: Removing unreachable block (ram,0x05e4b3b4) */
/* WARNING: Removing unreachable block (ram,0x05e4b2b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05e4aae8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_06a58d82 & 1) == 0) {
    FUN_02d4dc40(Method_System_Xml_XmlResolver_ResolveUri__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__);
    FUN_02d4dc40(Method_System_Xml_XmlResolver_SupportsType__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlSchema_Read__);
    FUN_02d4dc40(Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__);
    FUN_02d4dc40(Method_System_Xml_XmlEntity_CloneNode__);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_AddAttrXmlName__);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_CheckName__);
    FUN_02d4dc40(Method_System_Xml_XmlEntityReference__ctor__);
    FUN_02d4dc40(Method_System_Xml_XmlEntityReference_set_Value__);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_set_InnerText__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlNumeric2Converter_ToString__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<byte>__);
    FUN_02d4dc40(Method_System_Xml_XmlParserContext__ctor__);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(Method_System_Xml_XmlQualifiedName_GetHashCodeOfString__);
    FUN_02d4dc40(Method_System_Xml_XmlQualifiedName_Parse__);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(Method_System_Xml_XmlNode_RemoveChild__);
    FUN_02d4dc40(Method_System_Xml_XmlDocument_set_XmlResolver__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlSchemaCollection__ctor__);
    FUN_02d4dc40(
                Method_System_Xml_Schema_XmlSchemaCollection_System_Collections_ICollection_CopyTo__
                );
    FUN_02d4dc40(Method_System_Xml_Schema_XmlSchemaInference_AddAttribute__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlSchemaInference_AddElement__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlSchemaInference_CheckSimpleContentExtension__);
    FUN_02d4dc40(Method_System_Xml_Schema_XmlSchemaInference_FindMatchingElement__);
    DAT_06a58d82 = 1;
  }
  puVar7 = Method_System_Xml_Schema_XmlSchemaInference_FindMatchingElement__;
  puVar6 = Method_System_Xml_Schema_XmlSchemaInference_AddElement__;
  puVar5 = Method_System_Xml_XmlResolver_ResolveUri__;
  puVar4 = Method_System_Xml_XmlEntityReference__ctor__;
  puVar3 = Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  FUN_036a68ac(&local_b8,param_2,*(undefined8 *)Method_System_Xml_XmlDocument_set_XmlResolver__);
  local_70 = local_a8;
  puStack_78 = puStack_b0;
  local_80 = local_b8;
  do {
    do {
      do {
        uVar8 = FUN_049c6928(&local_80,*(undefined8 *)Method_System_Xml_XmlDocument_CheckName__);
        lVar13 = local_70;
        if ((uVar8 & 1) == 0) {
          FUN_049c6924(&local_80,*(undefined8 *)Method_System_Xml_XmlDocument_AddAttrXmlName__);
          return;
        }
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar9 = *(long *)puVar7;
        uVar15 = *(undefined8 *)(local_70 + 0x20);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar9 = *(long *)puVar7;
        }
        puVar11 = *(undefined8 **)(lVar9 + 0xb8);
        lVar16 = puVar11[1];
        if (lVar16 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar11 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
          }
          uVar17 = *puVar11;
          lVar16 = thunk_FUN_02d8a638(*(undefined8 *)
                                       Method_System_Xml_Schema_XmlNumeric2Converter_ToString__);
          FUN_04c523a8(lVar16,uVar17,
                       *(undefined8 *)Method_System_Xml_Schema_XmlSchemaCollection__ctor__,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
          *plVar10 = lVar16;
          thunk_FUN_02dc1ef0(plVar10,lVar16);
        }
        uVar15 = FUN_03206fdc(uVar15,lVar16,
                              *(undefined8 *)
                               Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__);
        uVar8 = FUN_031ccb84(uVar15,*(undefined8 *)
                                     Method_System_Xml_Schema_XmlNumeric2Converter_ToDouble__);
      } while ((uVar8 & 1) == 0);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar9 = *(long *)puVar7;
      uVar15 = *(undefined8 *)(param_3 + 0x28);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar9 = *(long *)puVar7;
      }
      puVar11 = *(undefined8 **)(lVar9 + 0xb8);
      lVar16 = puVar11[2];
      if (lVar16 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar11 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar17 = *puVar11;
        lVar16 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlParserContext__ctor__);
        FUN_04c523a8(lVar16,uVar17,
                     *(undefined8 *)
                      Method_System_Xml_Schema_XmlSchemaCollection_System_Collections_ICollection_CopyTo__
                     ,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
        *plVar10 = lVar16;
        thunk_FUN_02dc1ef0(plVar10,lVar16);
      }
      plVar10 = (long *)FUN_03206fdc(uVar15,lVar16,
                                     *(undefined8 *)
                                      Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar9 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_System_Xml_XmlQualifiedName_GetHashCodeOfString__) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05e4aeb0;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_02d87540(plVar10,*(long *)
                                      Method_System_Xml_XmlQualifiedName_GetHashCodeOfString__,0);
LAB_05e4aeb0:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
joined_r0x05e4aecc:
      local_88 = plVar10;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar9 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_066479b0) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05e4af24;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d87540(plVar10,*(long *)PTR_DAT_066479b0,0);
LAB_05e4af24:
      uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      plVar10 = local_88;
      if ((uVar8 & 1) != 0) {
        lVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                    Method_System_Xml_Schema_XmlSchemaInference_CheckSimpleContentExtension__
                                  );
        FUN_05044d4c(lVar9,0);
        plVar10 = local_88;
        if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar16 = *local_88;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)Method_System_Xml_XmlQualifiedName_Parse__) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05e4afac;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_02d87540(local_88,*(long *)Method_System_Xml_XmlQualifiedName_Parse__,0);
LAB_05e4afac:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        puVar11 = (undefined8 *)(lVar9 + 0x10);
        *puVar11 = uVar15;
        thunk_FUN_02dc1ef0(puVar11);
        lVar16 = *(long *)puVar7;
        uVar15 = *(undefined8 *)(lVar13 + 0x28);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar16 = *(long *)puVar7;
        }
        puVar12 = *(undefined8 **)(lVar16 + 0xb8);
        lVar18 = puVar12[3];
        if (lVar18 == 0) {
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
          }
          uVar17 = *puVar12;
          lVar18 = thunk_FUN_02d8a638(*(undefined8 *)Method_System_Xml_XmlParserContext__ctor__);
          FUN_04c523a8(lVar18,uVar17,
                       *(undefined8 *)Method_System_Xml_Schema_XmlSchemaInference_AddAttribute__,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
          *plVar10 = lVar18;
          thunk_FUN_02dc1ef0(plVar10,lVar18);
        }
        uVar15 = FUN_03206fdc(uVar15,lVar18,
                              *(undefined8 *)
                               Method_System_Xml_Schema_XmlNumeric2Converter_ToSingle__);
        uVar15 = FUN_031d5ec0(uVar15,*(undefined8 *)Method_System_Xml_XmlResolver_SupportsType__);
        lVar16 = FUN_0320624c(uVar15,*(undefined8 *)Method_System_Xml_Schema_XmlSchema_Read__);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_036a68ac(&local_b8,lVar16,
                     *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__);
        bVar2 = false;
        local_90 = local_a8;
        puStack_98 = puStack_b0;
        local_a0 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_a0;
        while (uVar8 = FUN_049c6928(&local_a0,*(undefined8 *)puVar4), lVar16 = local_90,
              (uVar8 & 1) != 0) {
          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar18 = *(long *)(lVar9 + 0x18);
          uVar15 = *(undefined8 *)(local_90 + 0x28);
          if (lVar18 == 0) {
            lVar18 = thunk_FUN_02d8a638(*(undefined8 *)
                                         Method_System_Xml_Schema_XmlListConverter_ToArray<byte>__);
            FUN_04c523a8(lVar18,lVar9,*(undefined8 *)puVar6,0);
            *(long *)(lVar9 + 0x18) = lVar18;
            thunk_FUN_02dc1ef0(lVar9 + 0x18,lVar18);
          }
          uVar15 = FUN_03206fdc(uVar15,lVar18,*(undefined8 *)puVar3);
          uVar8 = FUN_031ccb84(uVar15,*(undefined8 *)puVar5);
          if ((uVar8 & 1) != 0) {
            bVar2 = true;
            *(undefined1 *)(lVar16 + 0x38) = 1;
          }
        }
        FUN_049c6924(&local_a0,*(undefined8 *)Method_System_Xml_XmlEntity_CloneNode__);
        plVar10 = local_88;
        if (!bVar2) {
          lVar9 = *(long *)(lVar13 + 0x28);
          if (lVar9 != 0) {
            lVar16 = *(long *)(lVar9 + 0x10);
            uVar15 = *puVar11;
            lVar18 = *(long *)Method_System_Xml_XmlNode_RemoveChild__;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar16 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar11 = (undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                *puVar11 = uVar15;
                thunk_FUN_02dc1ef0(puVar11);
                plVar10 = local_88;
              }
              else {
                FUN_036a5e08(lVar9,uVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                plVar10 = local_88;
              }
              goto joined_r0x05e4aecc;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto joined_r0x05e4aecc;
      }
    } while (local_88 == (long *)0x0);
    lVar13 = *local_88;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05e4b294;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d87540(local_88,*(long *)PTR_DAT_066479a8,0);
LAB_05e4b294:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  } while( true );
}


