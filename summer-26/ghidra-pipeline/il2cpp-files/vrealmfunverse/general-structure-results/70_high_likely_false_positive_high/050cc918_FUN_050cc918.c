/*
FUNCTION_NAME: FUN_050cc918
ENTRY_POINT: 050cc918
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_050cc918(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  puVar2 = PTR_DAT_06312520;
  if ((DAT_066cd805 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_BestHoverInteractorGroup_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_BestSelectInteractorGroup_TypeInfo);
    FUN_02b3c81c(Mono_Math_BigInteger_TypeInfo);
    FUN_02b3c81c(Mono_Math_BigInteger_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_0631c5b8);
    FUN_02b3c81c(System_Numerics_BigInteger_TypeInfo);
    FUN_02b3c81c(System_Numerics_BigIntegerCalculator_TypeInfo);
    FUN_02b3c81c(System_Data_Common_BigIntegerStorage_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_BillingPlan_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_BillingPlanList_TypeInfo);
    FUN_02b3c81c(System_Xml_BinHexDecoder_TypeInfo);
    FUN_02b3c81c(System_Text_BinHexEncoding_TypeInfo);
    FUN_02b3c81c(System_Xml_BinXmlDateTime_TypeInfo);
    FUN_02b3c81c(System_Xml_BinXmlSqlDecimal_TypeInfo);
    FUN_02b3c81c(System_Xml_BinXmlSqlMoney_TypeInfo);
    FUN_02b3c81c(System_Xml_BinXmlToken_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryArray_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryArrayTypeEnum_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryAssembly_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_TypeInfo);
    FUN_02b3c81c(System_Runtime_Versioning_BinaryCompatibility_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Converters_BinaryConverter_TypeInfo);
    FUN_02b3c81c(
                System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainAssembly_TypeInfo
                );
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainMap_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString_TypeInfo)
    ;
    FUN_02b3c81c(System_Linq_Expressions_BinaryExpression_TypeInfo);
    FUN_02b3c81c(System_Xml_Schema_BinaryFacetsChecker_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryMethodCall_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryMethodReturn_TypeInfo);
    FUN_02b3c81c(System_Data_BinaryNode_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryObject_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryObjectString_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMap_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped_TypeInfo);
    FUN_02b3c81c(System_IO_BinaryReader_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum_TypeInfo);
    FUN_02b3c81c(System_IO_BinaryWriter_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_BindingContext_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_BindingId_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06314d48);
    FUN_02b3c81c(System_Dynamic_BindingRestrictions_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_BindingResult_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_BindingUpdateStage_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_BindingUpdater_TypeInfo);
    FUN_02b3c81c(Unity_XR_CoreUtils_Bindings_BindingsGroup_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_BipedIKSolvers_TypeInfo);
    FUN_02b3c81c(RootMotion_BipedLimbOrientations_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06314d20);
    FUN_02b3c81c(RootMotion_BipedNaming_TypeInfo);
    FUN_02b3c81c(RootMotion_BipedReferences_TypeInfo);
    FUN_02b3c81c(System_Collections_BitArray_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BitArray128_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BitArray16_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BitArray256_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BitArray32_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BitArray64_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BitArray8_TypeInfo);
    FUN_02b3c81c(System_BitConverter_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06314d18);
    FUN_02b3c81c(PTR_DAT_06314dc0);
    FUN_02b3c81c(System_Collections_Generic_BitHelper_TypeInfo);
    FUN_02b3c81c(System_Xml_Schema_BitSet_TypeInfo);
    FUN_02b3c81c(System_Xml_BitStack_TypeInfo);
    FUN_02b3c81c(System_Collections_Specialized_BitVector32_TypeInfo);
    FUN_02b3c81c(System_Xml_Bits_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BlendState_TypeInfo);
    FUN_02b3c81c(UnityEngine_Timeline_BlendUtility_TypeInfo);
    DAT_066cd805 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_05c8c45c(uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_050ce57c;
    FUN_05f8fd2c(*(long *)(param_1 + 0x20),0,0);
  }
  puVar3 = UnityEngine_Rendering_BitArray32_TypeInfo;
  puVar5 = System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum_TypeInfo;
  puVar4 = Mono_Math_BigInteger_TypeInfo;
  puVar2 = Mono_Math_BigInteger_TypeInfo;
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631c5b8);
  FUN_04c14a48(uVar11,0x800,0);
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar11);
  lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_037a5cd0(lVar7,*(undefined8 *)puVar2);
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar8 = *(long *)puVar5;
  }
  puVar2 = Oculus_Interaction_BestHoverInteractorGroup_TypeInfo;
  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
  lVar13 = puVar10[1];
  uVar11 = *(undefined8 *)puVar3;
  if (lVar13 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar12 = *puVar10;
    lVar13 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo)
    ;
    FUN_050ce580(lVar13,uVar12,*(undefined8 *)System_Numerics_BigInteger_TypeInfo);
    plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar9 = lVar13;
    thunk_FUN_02bb0e9c(plVar9,lVar13);
  }
  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
  puVar4 = Oculus_Interaction_BestSelectInteractorGroup_TypeInfo;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar13 = *(long *)Oculus_Interaction_BestSelectInteractorGroup_TypeInfo;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar12;
        thunk_FUN_02bb0e9c(puVar10,uVar12);
      }
      else {
        FUN_037a6538(lVar7,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      puVar3 = System_Collections_Generic_BitHelper_TypeInfo;
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar8 = *(long *)puVar5;
      }
      puVar10 = *(undefined8 **)(lVar8 + 0xb8);
      uVar11 = *(undefined8 *)puVar3;
      lVar13 = puVar10[2];
      if (lVar13 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar12 = *puVar10;
        lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                     UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo);
        FUN_050ce580(lVar13,uVar12,
                     *(undefined8 *)
                      System_Runtime_Serialization_Formatters_Binary_BinaryArray_TypeInfo);
        plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
        *plVar9 = lVar13;
        thunk_FUN_02bb0e9c(plVar9,lVar13);
      }
      uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
      FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar13 = *(long *)puVar4;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *puVar10 = uVar12;
          thunk_FUN_02bb0e9c(puVar10,uVar12);
        }
        else {
          FUN_037a6538(lVar7,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        puVar3 = UnityEngine_Rendering_BitArray8_TypeInfo;
        lVar8 = *(long *)puVar5;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar8 = *(long *)puVar5;
        }
        puVar10 = *(undefined8 **)(lVar8 + 0xb8);
        uVar11 = *(undefined8 *)puVar3;
        lVar13 = puVar10[3];
        if (lVar13 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
          }
          uVar12 = *puVar10;
          lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                       UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo);
          FUN_050ce580(lVar13,uVar12,
                       *(undefined8 *)
                        System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_TypeInfo);
          plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
          *plVar9 = lVar13;
          thunk_FUN_02bb0e9c(plVar9,lVar13);
        }
        uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = uVar12;
            thunk_FUN_02bb0e9c(puVar10,uVar12);
          }
          else {
            FUN_037a6538(lVar7,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          puVar3 = UnityEngine_UIElements_BindingResult_TypeInfo;
          lVar8 = *(long *)puVar5;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar8 = *(long *)puVar5;
          }
          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
          uVar11 = *(undefined8 *)puVar3;
          lVar13 = puVar10[4];
          if (lVar13 == 0) {
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
            }
            uVar12 = *puVar10;
            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                         UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo);
            FUN_050ce580(lVar13,uVar12,
                         *(undefined8 *)
                          System_Runtime_Serialization_Formatters_Binary_BinaryMethodReturn_TypeInfo
                        );
            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
            *plVar9 = lVar13;
            thunk_FUN_02bb0e9c(plVar9,lVar13);
          }
          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = uVar12;
              thunk_FUN_02bb0e9c(puVar10,uVar12);
            }
            else {
              FUN_037a6538(lVar7,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            puVar3 = System_BitConverter_TypeInfo;
            lVar8 = *(long *)puVar5;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar8 = *(long *)puVar5;
            }
            puVar10 = *(undefined8 **)(lVar8 + 0xb8);
            uVar11 = *(undefined8 *)puVar3;
            lVar13 = puVar10[5];
            if (lVar13 == 0) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
              }
              uVar12 = *puVar10;
              lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                           UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo);
              FUN_050ce580(lVar13,uVar12,*(undefined8 *)System_Data_BinaryNode_TypeInfo);
              plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
              *plVar9 = lVar13;
              thunk_FUN_02bb0e9c(plVar9,lVar13);
            }
            uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar13 = *(long *)puVar4;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *puVar10 = uVar12;
                thunk_FUN_02bb0e9c(puVar10,uVar12);
              }
              else {
                FUN_037a6538(lVar7,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = System_Dynamic_BindingRestrictions_TypeInfo;
              lVar8 = *(long *)puVar5;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar8 = *(long *)puVar5;
              }
              puVar10 = *(undefined8 **)(lVar8 + 0xb8);
              uVar11 = *(undefined8 *)puVar3;
              lVar13 = puVar10[6];
              if (lVar13 == 0) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                }
                uVar12 = *puVar10;
                lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                             UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo);
                FUN_050ce580(lVar13,uVar12,
                             *(undefined8 *)
                              System_Runtime_Serialization_Formatters_Binary_BinaryObject_TypeInfo);
                plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
                *plVar9 = lVar13;
                thunk_FUN_02bb0e9c(plVar9,lVar13);
              }
              uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
              FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
              lVar8 = *(long *)(lVar7 + 0x10);
              lVar13 = *(long *)puVar4;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar10 = uVar12;
                  thunk_FUN_02bb0e9c(puVar10,uVar12);
                }
                else {
                  FUN_037a6538(lVar7,uVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                puVar3 = Unity_XR_CoreUtils_Bindings_BindingsGroup_TypeInfo;
                lVar8 = *(long *)puVar5;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar8 = *(long *)puVar5;
                }
                puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                uVar11 = *(undefined8 *)puVar3;
                lVar13 = puVar10[7];
                if (lVar13 == 0) {
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                  }
                  uVar12 = *puVar10;
                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                               UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo)
                  ;
                  FUN_050ce580(lVar13,uVar12,
                               *(undefined8 *)
                                System_Runtime_Serialization_Formatters_Binary_BinaryObjectString_TypeInfo
                              );
                  plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
                  *plVar9 = lVar13;
                  thunk_FUN_02bb0e9c(plVar9,lVar13);
                }
                uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                lVar8 = *(long *)(lVar7 + 0x10);
                lVar13 = *(long *)puVar4;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                    puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar10 = uVar12;
                    thunk_FUN_02bb0e9c(puVar10,uVar12);
                  }
                  else {
                    FUN_037a6538(lVar7,uVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  puVar3 = System_Xml_Bits_TypeInfo;
                  lVar8 = *(long *)puVar5;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar8 = *(long *)puVar5;
                  }
                  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                  uVar11 = *(undefined8 *)puVar3;
                  lVar13 = puVar10[8];
                  if (lVar13 == 0) {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                    }
                    uVar12 = *puVar10;
                    lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                 UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                               );
                    FUN_050ce580(lVar13,uVar12,
                                 *(undefined8 *)
                                  System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMap_TypeInfo
                                );
                    plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
                    *plVar9 = lVar13;
                    thunk_FUN_02bb0e9c(plVar9,lVar13);
                  }
                  uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                  FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                  lVar8 = *(long *)(lVar7 + 0x10);
                  lVar13 = *(long *)puVar4;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                      puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar10 = uVar12;
                      thunk_FUN_02bb0e9c(puVar10,uVar12);
                    }
                    else {
                      FUN_037a6538(lVar7,uVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar3 = UnityEngine_Rendering_BitArray256_TypeInfo;
                    lVar8 = *(long *)puVar5;
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar8 = *(long *)puVar5;
                    }
                    puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                    uVar11 = *(undefined8 *)puVar3;
                    lVar13 = puVar10[9];
                    if (lVar13 == 0) {
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                      }
                      uVar12 = *puVar10;
                      lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                      
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                 );
                      FUN_050ce580(lVar13,uVar12,
                                   *(undefined8 *)
                                    System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped_TypeInfo
                                  );
                      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
                      *plVar9 = lVar13;
                      thunk_FUN_02bb0e9c(plVar9,lVar13);
                    }
                    uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                    lVar8 = *(long *)(lVar7 + 0x10);
                    lVar13 = *(long *)puVar4;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar10 = uVar12;
                        thunk_FUN_02bb0e9c(puVar10,uVar12);
                      }
                      else {
                        FUN_037a6538(lVar7,uVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = UnityEngine_UIElements_BindingId_TypeInfo;
                      lVar8 = *(long *)puVar5;
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar8 = *(long *)puVar5;
                      }
                      puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                      uVar11 = *(undefined8 *)puVar3;
                      lVar13 = puVar10[10];
                      if (lVar13 == 0) {
                        if (*(int *)(lVar8 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                          puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                        }
                        uVar12 = *puVar10;
                        lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                          
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                        FUN_050ce580(lVar13,uVar12,*(undefined8 *)System_IO_BinaryReader_TypeInfo);
                        plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
                        *plVar9 = lVar13;
                        thunk_FUN_02bb0e9c(plVar9,lVar13);
                      }
                      uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                      FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                      lVar8 = *(long *)(lVar7 + 0x10);
                      lVar13 = *(long *)puVar4;
                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar7 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                          puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar10 = uVar12;
                          thunk_FUN_02bb0e9c(puVar10,uVar12);
                        }
                        else {
                          FUN_037a6538(lVar7,uVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        }
                        puVar3 = UnityEngine_UIElements_BindingUpdateStage_TypeInfo;
                        lVar8 = *(long *)puVar5;
                        if (*(int *)(lVar8 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                          lVar8 = *(long *)puVar5;
                        }
                        puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                        uVar11 = *(undefined8 *)puVar3;
                        lVar13 = puVar10[0xb];
                        if (lVar13 == 0) {
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                          }
                          uVar12 = *puVar10;
                          lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                          FUN_050ce580(lVar13,uVar12,
                                       *(undefined8 *)System_Numerics_BigIntegerCalculator_TypeInfo)
                          ;
                          plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
                          *plVar9 = lVar13;
                          thunk_FUN_02bb0e9c(plVar9,lVar13);
                        }
                        uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                        FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                        lVar8 = *(long *)(lVar7 + 0x10);
                        lVar13 = *(long *)puVar4;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                            puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar10 = uVar12;
                            thunk_FUN_02bb0e9c(puVar10,uVar12);
                          }
                          else {
                            FUN_037a6538(lVar7,uVar12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          puVar3 = UnityEngine_Timeline_BlendUtility_TypeInfo;
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0xc];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Data_Common_BigIntegerStorage_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x60);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = System_IO_BinaryWriter_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0xd];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)Oculus_Platform_Models_BillingPlan_TypeInfo)
                            ;
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x68);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = System_Xml_BitStack_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0xe];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          Oculus_Platform_Models_BillingPlanList_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x70);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = UnityEngine_Rendering_BlendState_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0xf];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)System_Xml_BinHexDecoder_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x78);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = RootMotion_BipedLimbOrientations_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x10];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)System_Text_BinHexEncoding_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x80);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = UnityEngine_Rendering_BitArray128_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x11];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)System_Xml_BinXmlDateTime_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = System_Collections_BitArray_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x12];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)System_Xml_BinXmlSqlDecimal_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x90);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = PTR_DAT_06314d18;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x13];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)System_Xml_BinXmlSqlMoney_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x98);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = PTR_DAT_06314d20;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x14];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)System_Xml_BinXmlToken_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa0);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = PTR_DAT_06314dc0;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x15];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Serialization_Formatters_Binary_BinaryArrayTypeEnum_TypeInfo
                                        );
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xa8);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = PTR_DAT_06314d48;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x16];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Serialization_Formatters_Binary_BinaryAssembly_TypeInfo
                                        );
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb0);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = UnityEngine_Rendering_BitArray16_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x17];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_TypeInfo
                                        );
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xb8);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = RootMotion_BipedReferences_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x18];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Versioning_BinaryCompatibility_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc0);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = UnityEngine_Rendering_BitArray64_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x19];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          Newtonsoft_Json_Converters_BinaryConverter_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 200);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = RootMotion_BipedNaming_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x1a];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainAssembly_TypeInfo
                                        );
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd0);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = RootMotion_FinalIK_BipedIKSolvers_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x1b];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainMap_TypeInfo
                                        );
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xd8);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = UnityEngine_UIElements_BindingUpdater_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x1c];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString_TypeInfo
                                        );
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe0);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = System_Collections_Specialized_BitVector32_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x1d];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Linq_Expressions_BinaryExpression_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xe8);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = System_Xml_Schema_BitSet_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x1e];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Xml_Schema_BinaryFacetsChecker_TypeInfo);
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf0);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          puVar3 = UnityEngine_UIElements_BindingContext_TypeInfo;
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          lVar8 = *(long *)puVar5;
                          if (*(int *)(lVar8 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                            lVar8 = *(long *)puVar5;
                          }
                          puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                          uVar11 = *(undefined8 *)puVar3;
                          lVar13 = puVar10[0x1f];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar8 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                            }
                            uVar12 = *puVar10;
                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_UIR_BestFitAllocator_TypeInfo
                                                  );
                            FUN_050ce580(lVar13,uVar12,
                                         *(undefined8 *)
                                          System_Runtime_Serialization_Formatters_Binary_BinaryMethodCall_TypeInfo
                                        );
                            plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xf8);
                            *plVar9 = lVar13;
                            thunk_FUN_02bb0e9c(plVar9,lVar13);
                          }
                          uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050ce61c(0x3f000000,uVar12,uVar11,lVar13);
                          FUN_0275a748(lVar7,uVar12,*(undefined8 *)puVar4);
                          *(long *)(param_1 + 0x28) = lVar7;
                          thunk_FUN_02bb0e9c((long *)(param_1 + 0x28),lVar7);
                          return;
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
LAB_050ce57c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


