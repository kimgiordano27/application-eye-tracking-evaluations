/*
FUNCTION_NAME: FUN_059f32e0
ENTRY_POINT: 059f32e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


long FUN_059f32e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long *plVar24;
  undefined4 local_64;
  
  puVar4 = 
  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
  ;
  puVar1 = 
  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
  ;
  if ((DAT_06b80fea & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06764ff8);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRCpuImage_Format_TypeInfo);
    FUN_02d6084c(PTR_DAT_0676bd88);
    FUN_02d6084c(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo);
    FUN_02d6084c(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                );
    FUN_02d6084c(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                );
    FUN_02d6084c(System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo);
    FUN_02d6084c(System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo);
    FUN_02d6084c(System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo);
    FUN_02d6084c(System_Xml_Serialization_XmlSerializationReader_Fixup_TypeInfo);
    FUN_02d6084c(System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo);
    FUN_02d6084c(
                System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeInfo
                );
    FUN_02d6084c(
                System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0676bdb0);
    DAT_06b80fea = 1;
  }
  local_64 = 0;
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_059f9ef4(lVar5,0);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar4;
  }
  puVar1 = System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_TypeInfo;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x28) = **(undefined8 **)(lVar6 + 0xb8);
    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28));
    *(undefined1 *)(lVar5 + 0x50) = 1;
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_059f9f48(lVar6,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x28));
      *(undefined1 *)(lVar6 + 0x50) = 1;
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_059f9f48(lVar7,0);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x28));
        *(undefined1 *)(lVar7 + 0x50) = 1;
        lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
        FUN_059f9f48(lVar8,0);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
          thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x28));
          *(undefined1 *)(lVar8 + 0x50) = 0;
          lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
          FUN_059f9f48(lVar9,0);
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x28) =
                 *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
            thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x28));
            *(undefined1 *)(lVar9 + 0x50) = 0;
            lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
            FUN_059f9f48(lVar10,0);
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x28) =
                   *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
              thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x28));
              *(undefined1 *)(lVar10 + 0x50) = 0;
              lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_059f9f48(lVar11,0);
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x28) =
                     *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x28));
                *(undefined1 *)(lVar11 + 0x50) = 0;
                lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                FUN_059f9f48(lVar12,0);
                if (lVar12 != 0) {
                  *(undefined8 *)(lVar12 + 0x28) =
                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x28));
                  *(undefined1 *)(lVar12 + 0x50) = 0;
                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                  FUN_059f9f48(lVar13,0);
                  if (lVar13 != 0) {
                    *(undefined8 *)(lVar13 + 0x28) =
                         *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                    thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28));
                    *(undefined1 *)(lVar13 + 0x50) = 0;
                    lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                    FUN_059f9f48(lVar14,0);
                    if (lVar14 != 0) {
                      *(undefined8 *)(lVar14 + 0x28) =
                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
                      thunk_FUN_02dd37b4((undefined8 *)(lVar14 + 0x28));
                      *(undefined1 *)(lVar14 + 0x50) = 0;
                      lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                      FUN_059f9f48(lVar15,0);
                      plVar24 = (long *)UnityEngine_XR_ARSubsystems_XRCpuImage_Format_TypeInfo;
                      if (lVar15 != 0) {
                        *(undefined8 *)(lVar15 + 0x28) =
                             *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
                        thunk_FUN_02dd37b4((undefined8 *)(lVar15 + 0x28));
                        *(undefined1 *)(lVar15 + 0x50) = 0;
                        lVar16 = *plVar24;
                        if (*(int *)(lVar16 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar16 = *plVar24;
                        }
                        puVar3 = PTR_DAT_0676bdb0;
                        puVar2 = PTR_DAT_0676bd88;
                        puVar1 = PTR_DAT_06764ff8;
                        lVar16 = **(long **)(lVar16 + 0xb8);
                        if (lVar16 != 0) {
                          if (0 < *(int *)(lVar16 + 0x18)) {
                            uVar23 = 0;
                            do {
                              lVar17 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                      
                                                  System_Xml_Serialization_XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeInfo
                                                  );
                              FUN_059f4b3c(lVar17,0);
                              if (*(uint *)(lVar16 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d60af0();
                              }
                              if (lVar17 == 0) goto LAB_059f3d88;
                              plVar20 = (long *)(lVar17 + 0x10);
                              *plVar20 = *(long *)(lVar16 + 0x20 + uVar23 * 8);
                              thunk_FUN_02dd37b4(plVar20);
                              lVar18 = *(long *)puVar4;
                              uVar23 = uVar23 + 1;
                              local_64 = (undefined4)uVar23;
                              if (*(int *)(lVar18 + 0xe4) == 0) {
                                thunk_FUN_02dbd7b4();
                                lVar18 = *(long *)puVar4;
                              }
                              uVar22 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8);
                              uVar19 = FUN_050048bc(&local_64,0);
                              uVar19 = FUN_04e83184(uVar22,uVar19,0);
                              if (*(int *)(*plVar24 + 0xe4) == 0) {
                                thunk_FUN_02dbd7b4(*plVar24);
                              }
                              lVar18 = FUN_0602ed08(0);
                              if (lVar18 == *plVar20) {
                                lVar18 = *(long *)puVar4;
                                if (*(int *)(lVar18 + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                  lVar18 = *(long *)puVar4;
                                }
                                uVar19 = FUN_04e83184(uVar19,*(undefined8 *)
                                                              (*(long *)(lVar18 + 0xb8) + 0x10),0);
                              }
                              lVar21 = *(long *)(lVar6 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Serialization_XmlReflectionImporter_<>c_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar7 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Schema_XmlSchemaObjectTable_ValuesCollection_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar8 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Schema_XmlSchemaObjectTable_XSODictionaryEnumerator_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar9 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar10 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Schema_XmlSchemaParticle_EmptyParticle_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar11 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Serialization_XmlSerializationReader_CollectionFixup_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar12 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Serialization_XmlSerializationReader_CollectionItemFixup_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar13 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Serialization_XmlSerializationReader_Fixup_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar14 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar22 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar22,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Serialization_XmlSerializationReader_WriteCallbackInfo_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar22;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar22);
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar15 + 0x48);
                              lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              FUN_059f80a0(lVar18,0);
                              if (lVar18 == 0) goto LAB_059f3d88;
                              *(undefined8 *)(lVar18 + 0x28) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x28),uVar19);
                              uVar19 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                              FUN_04d566c0(uVar19,lVar17,
                                           *(undefined8 *)
                                            System_Xml_Serialization_XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeInfo
                                           ,0);
                              *(undefined8 *)(lVar18 + 0x48) = uVar19;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar18 + 0x48),uVar19);
                              plVar24 = (long *)
                                        UnityEngine_XR_ARSubsystems_XRCpuImage_Format_TypeInfo;
                              if (lVar21 == 0) goto LAB_059f3d88;
                              FUN_03ec3234(lVar21,lVar18,*(undefined8 *)puVar2);
                            } while ((long)uVar23 < (long)*(int *)(lVar16 + 0x18));
                          }
                          if (*(long *)(lVar5 + 0x48) != 0) {
                            FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar6,*(undefined8 *)puVar2);
                            if (*(long *)(lVar5 + 0x48) != 0) {
                              FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar7,*(undefined8 *)puVar2);
                              if (*(long *)(lVar5 + 0x48) != 0) {
                                FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar8,*(undefined8 *)puVar2);
                                if (*(long *)(lVar5 + 0x48) != 0) {
                                  FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar9,*(undefined8 *)puVar2);
                                  if (*(long *)(lVar5 + 0x48) != 0) {
                                    FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar10,
                                                 *(undefined8 *)puVar2);
                                    if (*(long *)(lVar5 + 0x48) != 0) {
                                      FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar11,
                                                   *(undefined8 *)puVar2);
                                      if (*(long *)(lVar5 + 0x48) != 0) {
                                        FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar12,
                                                     *(undefined8 *)puVar2);
                                        if (*(long *)(lVar5 + 0x48) != 0) {
                                          FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar13,
                                                       *(undefined8 *)puVar2);
                                          if (*(long *)(lVar5 + 0x48) != 0) {
                                            FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar14,
                                                         *(undefined8 *)puVar2);
                                            if (*(long *)(lVar5 + 0x48) != 0) {
                                              FUN_03ec3234(*(long *)(lVar5 + 0x48),lVar15,
                                                           *(undefined8 *)puVar2);
                                              return lVar5;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_059f3d88:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


