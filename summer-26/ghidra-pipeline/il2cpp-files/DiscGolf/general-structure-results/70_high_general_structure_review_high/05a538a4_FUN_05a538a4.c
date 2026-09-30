/*
FUNCTION_NAME: FUN_05a538a4
ENTRY_POINT: 05a538a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;telemetry_or_network_hits_13
*/


void FUN_05a538a4(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_06dc1a66 & 1) == 0) {
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlAtomicTextNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlAttributeNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlCDataNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlClosedNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlDeclarationNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlElementNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlEndOfFileNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlInitialNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseReader_XmlWhitespaceTextNode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseWriter_Element_TypeInfo);
    FUN_02d965b8(System_Xml_XmlBaseWriter_NamespaceManager_TypeInfo);
    FUN_02d965b8(System_Xml_XmlCanonicalWriter_AttributeSorter_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_XmlDataContract_XmlDataContractCriticalHelper_TypeInfo
                );
    FUN_02d965b8(System_Xml_XmlDictionaryReader_XmlWrappedReader_TypeInfo);
    FUN_02d965b8(System_Xml_XmlDictionaryString_EmptyStringDictionary_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ApiResponse<Player>>_SetResult__
                );
    FUN_02d965b8(System_Xml_XmlDictionaryWriter_XmlWrappedWriter_TypeInfo);
    FUN_02d965b8(System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_TypeInfo);
    FUN_02d965b8(Method_System_Xml_ArrayHelper<XmlDictionaryString,_int>__ctor__);
    FUN_02d965b8(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                );
    FUN_02d965b8(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a11590);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_0000119A_PostfixBurstDelegate_TypeInfo
                );
    DAT_06dc1a66 = 1;
  }
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_0000119A_PostfixBurstDelegate_TypeInfo
  ;
  if (param_2 == (long *)0x0) {
LAB_05a54384:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_0000119A_PostfixBurstDelegate_TypeInfo
         ) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05a53b20;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02dd004c(param_2,*(long *)
                                 UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_0000119A_PostfixBurstDelegate_TypeInfo
                        ,0);
LAB_05a53b20:
  uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
  puVar2 = PTR_DAT_069fb9c0;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar5 = FUN_05502f90(uVar7,0);
  puVar3 = PTR_DAT_06a11590;
  switch(uVar5) {
  case 3:
    bVar1 = *(byte *)(*(long *)
                       System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo)) {
      uVar9 = (uint)*(byte *)(param_2 + 3);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x188);
      uVar7 = *(undefined8 *)(*param_1 + 400);
LAB_05a53fdc:
                    /* WARNING: Could not recover jumptable at 0x05a53ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar9,uVar7);
      return;
    }
    break;
  case 4:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
       )) {
      uVar9 = (uint)*(ushort *)(param_2 + 3);
      uVar7 = *(undefined8 *)(*param_1 + 0x270);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x268);
      goto LAB_05a53fdc;
    }
    break;
  case 5:
    bVar1 = *(byte *)(*(long *)
                       System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo)) {
      uVar9 = (uint)*(byte *)(param_2 + 3);
      uVar7 = *(undefined8 *)(*param_1 + 0x230);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x228);
      goto LAB_05a53fdc;
    }
    break;
  case 6:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo)) {
      uVar9 = (uint)*(byte *)(param_2 + 3);
      uVar7 = *(undefined8 *)(*param_1 + 0x220);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x218);
      goto LAB_05a53fdc;
    }
    break;
  case 7:
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo)) {
      uVar9 = (uint)*(ushort *)(param_2 + 3);
      uVar7 = *(undefined8 *)(*param_1 + 0x210);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x208);
      goto LAB_05a53fdc;
    }
    break;
  case 8:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass24_0_TypeInfo)) {
      uVar9 = (uint)*(ushort *)(param_2 + 3);
      uVar7 = *(undefined8 *)(*param_1 + 0x260);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
      goto LAB_05a53fdc;
    }
    break;
  case 9:
    bVar1 = *(byte *)(*(long *)System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo)) {
      uVar9 = *(uint *)(param_2 + 3);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x1c8);
      uVar7 = *(undefined8 *)(*param_1 + 0x1d0);
      goto LAB_05a53fdc;
    }
    break;
  case 10:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
       )) {
      uVar9 = *(uint *)(param_2 + 3);
      uVar7 = *(undefined8 *)(*param_1 + 0x240);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x238);
      goto LAB_05a53fdc;
    }
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)System_Xml_XmlDictionaryWriter_XmlWrappedWriter_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_XmlDictionaryWriter_XmlWrappedWriter_TypeInfo)) {
      lVar10 = param_2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x1d8);
      uVar7 = *(undefined8 *)(*param_1 + 0x1e0);
LAB_05a54080:
                    /* WARNING: Could not recover jumptable at 0x05a54090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1,lVar10,uVar7);
      return;
    }
    break;
  case 0xc:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo)) {
      lVar10 = param_2[3];
      uVar7 = *(undefined8 *)(*param_1 + 0x250);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x248);
      goto LAB_05a54080;
    }
    break;
  case 0xd:
    bVar1 = *(byte *)(*(long *)System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_XmlDownloadManager_<>c__DisplayClass4_0_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x05a53c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e8))((int)param_2[3],param_1,*(undefined8 *)(*param_1 + 0x1f0));
      return;
    }
    break;
  case 0xe:
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo + 0x130
                     );
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x05a53d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))(param_2[3],param_1,*(undefined8 *)(*param_1 + 0x1c0));
      return;
    }
    break;
  case 0xf:
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x05a53cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))
                (param_1,param_2[3],param_2[4],*(undefined8 *)(*param_1 + 0x1b0));
      return;
    }
    break;
  case 0x10:
    bVar1 = *(byte *)(*(long *)System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo + 0x130
                     );
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo)) {
      lVar10 = param_2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x198);
      uVar7 = *(undefined8 *)(*param_1 + 0x1a0);
      goto LAB_05a54080;
    }
    break;
  default:
    if (*(int *)(*(long *)PTR_DAT_06a11590 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar8 = FUN_05a2e0b8(0);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(puVar2 + 0xe0));
    }
    uVar11 = FUN_055006dc(uVar7,uVar8,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar8 = FUN_05a213d4(0);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar2 + 0xe0));
      }
      uVar11 = FUN_055006dc(uVar7,uVar8,0);
      if ((uVar11 & 1) != 0) {
        lVar10 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05a54238;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar4,1);
LAB_05a54238:
        lVar10 = (*(code *)*puVar6)(param_2,puVar6[1]);
        if (lVar10 != 0) {
          FUN_05a52fe0(param_1,lVar10);
          return;
        }
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar8 = FUN_05a2e1bc(0);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar2 + 0xe0));
      }
      uVar11 = FUN_055006dc(uVar7,uVar8,0);
      puVar4 = System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_TypeInfo;
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar8 = FUN_05a2e2c0(0);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar2 + 0xe0));
        }
        uVar11 = FUN_055006dc(uVar7,uVar8,0);
        puVar4 = 
        System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
        ;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar8 = FUN_05a2e3c4(0);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar2 + 0xe0));
          }
          uVar11 = FUN_055006dc(uVar7,uVar8,0);
          puVar4 = System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo;
          if ((uVar11 & 1) == 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar8 = FUN_05a2f514(0);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(puVar2 + 0xe0));
            }
            uVar11 = FUN_055006dc(uVar7,uVar8,0);
            puVar4 = Method_System_Xml_ArrayHelper<XmlDictionaryString,_int>__ctor__;
            if ((uVar11 & 1) == 0) {
              uVar7 = FUN_05a52ed8(uVar11,uVar7);
              uVar8 = thunk_FUN_02dfd288(
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ApiResponse<Player>>_SetStateMachine__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar7,uVar8);
            }
            lVar10 = FUN_02979eb8(param_2,*(undefined8 *)
                                           Method_System_Xml_ArrayHelper<XmlDictionaryString,_int>__ctor__
                                 );
            if (lVar10 != 0) {
              lVar10 = FUN_02979eb8(param_2,*(undefined8 *)puVar4);
              lVar10 = *(long *)(lVar10 + 0x18);
              uVar7 = *(undefined8 *)(*param_1 + 0x280);
              UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x278);
              goto LAB_05a54080;
            }
          }
          else {
            lVar10 = FUN_02979eb8(param_2,*(undefined8 *)
                                           System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo
                                 );
            if (lVar10 != 0) {
              lVar10 = FUN_02979eb8(param_2,*(undefined8 *)puVar4);
              FUN_05a53860(param_1,*(undefined8 *)(lVar10 + 0x18));
              return;
            }
          }
        }
        else {
          lVar10 = FUN_02979eb8(param_2,*(undefined8 *)
                                         System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                               );
          if (lVar10 != 0) {
            lVar10 = FUN_02979eb8(param_2,*(undefined8 *)puVar4);
            FUN_05a53818(param_1,*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x20));
            return;
          }
        }
      }
      else {
        lVar10 = FUN_02979eb8(param_2,*(undefined8 *)
                                       System_Runtime_Serialization_XmlFormatWriterGenerator_CriticalHelper_TypeInfo
                             );
        if (lVar10 != 0) {
          lVar10 = FUN_02979eb8(param_2,*(undefined8 *)puVar4);
          FUN_05a53790(param_1,*(undefined8 *)(lVar10 + 0x18));
          return;
        }
      }
      goto LAB_05a54384;
    }
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo)) {
      lVar10 = param_2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x1f8);
      uVar7 = *(undefined8 *)(*param_1 + 0x200);
      goto LAB_05a54080;
    }
    break;
  case 0x12:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo)) {
      param_1 = (long *)param_1[2];
      if (param_1 == (long *)0x0) goto LAB_05a54384;
      lVar10 = param_2[3];
      uVar7 = *(undefined8 *)(*param_1 + 0x360);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x358);
      goto LAB_05a54080;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96be0(param_2);
}


