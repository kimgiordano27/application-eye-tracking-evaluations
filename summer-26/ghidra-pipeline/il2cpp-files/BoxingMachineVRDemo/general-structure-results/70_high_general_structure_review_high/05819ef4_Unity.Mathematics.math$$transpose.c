/*
FUNCTION_NAME: Unity.Mathematics.math$$transpose
ENTRY_POINT: 05819ef4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_8
*/


void Unity_Mathematics_math__transpose(undefined1 *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  uint uVar17;
  ulong uVar18;
  undefined8 *unaff_x22;
  long unaff_x24;
  uint uVar19;
  long unaff_x25;
  long unaff_x27;
  long unaff_x29;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000020;
  long in_stack_00000038;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_00000250;
  long in_stack_00000290;
  
  while( true ) {
    memcpy(param_1,&stack0x000000b8,0x58);
    lVar14 = *(long *)(unaff_x24 + 0x10);
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar14 == 0) break;
    uVar19 = *(uint *)(unaff_x24 + 0x18);
    if (uVar19 < *(uint *)(lVar14 + 0x18)) {
      pvVar1 = (void *)(lVar14 + (int)uVar19 * unaff_x29 + 0x20);
      *(uint *)(unaff_x24 + 0x18) = uVar19 + 1;
      memcpy(pvVar1,&stack0x00000390,0x58);
      thunk_FUN_02dd37b4(pvVar1,0);
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x000003e8,&stack0x00000390,0x58);
      FUN_03a28128(unaff_x24,&stack0x000003e8,uVar12);
    }
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 8;
    if (unaff_x20 == unaff_x21) {
LAB_05819fb0:
      do {
        puVar3 = System_Xml_XmlNodeReaderNavigator_TypeInfo;
        puVar2 = System_Xml_Serialization_XmlNodeEventArgs_TypeInfo;
        in_stack_00000010 = in_stack_00000010 + 1;
        if (in_stack_00000010 == in_stack_00000008) {
          if (unaff_x27 == 0) goto LAB_05819fcc;
          if (*(int *)(unaff_x27 + 0x18) < 1) goto LAB_0581a0e0;
          iVar4 = 0;
          goto LAB_05819ff4;
        }
        lVar14 = *(long *)(in_stack_00000020 + 8);
        if (lVar14 == 0) goto LAB_05819fcc;
        if (*(uint *)(lVar14 + 0x18) <= in_stack_00000010) goto LAB_0581a114;
        lVar14 = lVar14 + in_stack_00000010 * 0x20;
        uVar12 = *(undefined8 *)(lVar14 + 0x20);
        uVar7 = *(undefined8 *)(lVar14 + 0x28);
        lVar10 = *(long *)(lVar14 + 0x30);
        in_stack_00000048 = *(long *)(lVar14 + 0x38);
        uVar5 = FUN_04e8cf70(uVar12,0);
        if ((uVar5 & 1) != 0) {
          uVar12 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x000003e8);
          uVar7 = thunk_FUN_02dc61f4(System_Xml_XmlParserContext_TypeInfo);
          uVar12 = System_Char__System_IConvertible_ToSByte(uVar7,uVar12,0);
LAB_0581a158:
          thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
          uVar7 = thunk_FUN_02d9d534();
          FUN_05007004(uVar7,uVar12,0);
          uVar12 = thunk_FUN_02dc61f4(
                                     System_Runtime_Serialization_XmlObjectSerializerWriteContext_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar7,uVar12);
        }
        if (unaff_x27 == 0) goto LAB_05819fcc;
        if (0 < *(int *)(unaff_x27 + 0x18)) {
          uVar19 = 0;
          do {
            lVar14 = FUN_03aac1c4(unaff_x27,uVar19,
                                  *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
            if (lVar14 == 0) goto LAB_05819fcc;
            iVar4 = FUN_04e8aaa4(*(undefined8 *)(lVar14 + 0x10),uVar12,3,0);
            if (iVar4 == 0) {
              lVar14 = FUN_03aac1c4(unaff_x27,uVar19,
                                    *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
              if (lVar14 != 0) goto LAB_05819bf8;
              break;
            }
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < *(int *)(unaff_x27 + 0x18));
        }
        lVar14 = thunk_FUN_02d9d534(*(undefined8 *)System_Xml_Serialization_XmlAttributes_TypeInfo);
        FUN_05815ba0();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
        thunk_FUN_02dd37b4();
        uVar5 = FUN_04e8cf70(uVar7,0);
        uVar11 = 0;
        if ((uVar5 & 1) == 0) {
          uVar11 = uVar7;
        }
        *(undefined8 *)(lVar14 + 0x18) = uVar11;
        thunk_FUN_02dd37b4();
        uVar19 = *(uint *)(unaff_x27 + 0x18);
        lVar13 = *(long *)(unaff_x27 + 0x10);
        lVar15 = *(long *)System_Xml_XmlNamespaceManager_TypeInfo;
        *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05819fcc;
        if (uVar19 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(in_stack_00000050 + 0x18) = uVar19 + 1;
          plVar6 = (long *)(lVar13 + (long)(int)uVar19 * 8 + 0x20);
          *plVar6 = lVar14;
          thunk_FUN_02dd37b4(plVar6,lVar14);
        }
        else {
          FUN_03aac494(in_stack_00000050,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                    System_Runtime_Serialization_XmlObjectSerializerReadContext_TypeInfo
                                  );
        FUN_03aabc60(uVar7,*(undefined8 *)System_Xml_XmlNodeType_TypeInfo);
        if (in_stack_00000058 == 0) goto LAB_05819fcc;
        lVar14 = *(long *)(in_stack_00000058 + 0x10);
        lVar13 = *(long *)Newtonsoft_Json_Converters_XmlNodeConverter_TypeInfo;
        *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_05819fcc;
        uVar17 = *(uint *)(in_stack_00000058 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(in_stack_00000058 + 0x18) = uVar17 + 1;
          puVar8 = (undefined8 *)(lVar14 + (long)(int)uVar17 * 8 + 0x20);
          *puVar8 = uVar7;
          thunk_FUN_02dd37b4(puVar8,uVar7);
        }
        else {
          FUN_03aac494(in_stack_00000058,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                    System_Runtime_Serialization_XmlObjectSerializerContext_TypeInfo
                                  );
        FUN_03a277e0(uVar7,*(undefined8 *)Newtonsoft_Json_Converters_XmlNodeWrapper_TypeInfo);
        if (in_stack_00000038 == 0) goto LAB_05819fcc;
        lVar14 = *(long *)(in_stack_00000038 + 0x10);
        lVar13 = *(long *)System_Xml_XmlNode_TypeInfo;
        *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_05819fcc;
        uVar17 = *(uint *)(in_stack_00000038 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(in_stack_00000038 + 0x18) = uVar17 + 1;
          puVar8 = (undefined8 *)(lVar14 + (long)(int)uVar17 * 8 + 0x20);
          *puVar8 = uVar7;
          thunk_FUN_02dd37b4(puVar8,uVar7);
          unaff_x27 = in_stack_00000050;
        }
        else {
          FUN_03aac494(in_stack_00000038,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          unaff_x27 = in_stack_00000050;
        }
LAB_05819bf8:
        if (lVar10 != 0) {
          if (lVar10 == 0) goto LAB_05819fcc;
          uVar5 = *(ulong *)(lVar10 + 0x18);
          if (0 < (int)uVar5) {
            uVar18 = 0;
            do {
              if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0581a114;
              memmove(&stack0x00000250,(void *)(lVar10 + uVar18 * 0x48 + 0x20),0x48);
              uVar9 = FUN_04e8cf70(in_stack_00000250,0);
              if ((uVar9 & 1) != 0) {
                uVar7 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x000003e8
                                          );
                uVar11 = thunk_FUN_02dc61f4(
                                           System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TypeInfo
                                           );
                uVar12 = FUN_04e8e6a4(uVar11,uVar7,uVar12,0);
                goto LAB_0581a158;
              }
              lVar14 = FUN_0581d2c0(&stack0x00000250,0);
              if ((in_stack_00000058 == 0) ||
                 (lVar13 = FUN_03aac1c4(in_stack_00000058,uVar19,
                                        *(undefined8 *)
                                         System_Xml_Schema_XmlNumeric10Converter_TypeInfo),
                 lVar13 == 0)) goto LAB_05819fcc;
              lVar15 = *(long *)(lVar13 + 0x10);
              lVar16 = *(long *)System_Xml_XmlNodeChangedEventArgs_TypeInfo;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_05819fcc;
              uVar17 = *(uint *)(lVar13 + 0x18);
              if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar17 + 1;
                plVar6 = (long *)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
                *plVar6 = lVar14;
                thunk_FUN_02dd37b4(plVar6,lVar14);
              }
              else {
                FUN_03aac494(lVar13,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              if (in_stack_00000290 != 0) {
                if ((in_stack_00000038 == 0) ||
                   (lVar13 = FUN_03aac1c4(in_stack_00000038,uVar19,
                                          *(undefined8 *)
                                           System_Runtime_Serialization_XmlObjectSerializer_TypeInfo
                                         ), in_stack_00000290 == 0)) goto LAB_05819fcc;
                uVar9 = 0;
                while ((long)uVar9 < (long)(int)*(uint *)(in_stack_00000290 + 0x18)) {
                  if (*(uint *)(in_stack_00000290 + 0x18) <= uVar9) goto LAB_0581a114;
                  FUN_0581d05c(&stack0x000000b8,&stack0x00000210);
                  memcpy(&stack0x000001b0,&stack0x000000b8,0x58);
                  if (lVar14 == 0) goto LAB_05819fcc;
                  in_stack_000001e0 = *(undefined8 *)(lVar14 + 0x10);
                  thunk_FUN_02dd37b4();
                  memcpy(&stack0x00000060,&stack0x000001b0,0x58);
                  if (lVar13 == 0) goto LAB_05819fcc;
                  lVar16 = *unaff_x19;
                  memcpy(&stack0x00000390,&stack0x00000060,0x58);
                  lVar15 = *(long *)(lVar13 + 0x10);
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_05819fcc;
                  uVar17 = *(uint *)(lVar13 + 0x18);
                  if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                    pvVar1 = (void *)(lVar15 + (int)uVar17 * unaff_x29 + 0x20);
                    *(uint *)(lVar13 + 0x18) = uVar17 + 1;
                    memcpy(pvVar1,&stack0x00000390,0x58);
                    thunk_FUN_02dd37b4(pvVar1,0);
                  }
                  else {
                    uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
                    memcpy(&stack0x000003e8,&stack0x00000390,0x58);
                    FUN_03a28128(lVar13,&stack0x000003e8,uVar7);
                  }
                  uVar9 = uVar9 + 1;
                  if (in_stack_00000290 == 0) goto LAB_05819fcc;
                }
              }
              uVar18 = uVar18 + 1;
              unaff_x27 = in_stack_00000050;
            } while (uVar18 != (uVar5 & 0xffffffff));
          }
        }
        if (in_stack_00000048 == 0) {
          if (in_stack_00000038 == 0) goto LAB_05819fcc;
          FUN_03aac1c4(in_stack_00000038,uVar19,
                       *(undefined8 *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
          goto LAB_05819fb0;
        }
        if ((in_stack_00000048 == 0) || (in_stack_00000038 == 0)) goto LAB_05819fcc;
        uVar17 = *(uint *)(in_stack_00000048 + 0x18);
        unaff_x20 = (ulong)uVar17;
        unaff_x24 = FUN_03aac1c4(in_stack_00000038,uVar19,
                                 *(undefined8 *)
                                  System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
      } while ((int)uVar17 < 1);
      unaff_x21 = 0;
      unaff_x22 = (undefined8 *)(in_stack_00000048 + 0x20);
    }
    if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x21) {
LAB_0581a114:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    in_stack_00000198 = unaff_x22[5];
    in_stack_00000190 = unaff_x22[4];
    in_stack_000001a8 = unaff_x22[7];
    in_stack_000001a0 = unaff_x22[6];
    in_stack_00000178 = unaff_x22[1];
    in_stack_00000170 = *unaff_x22;
    in_stack_00000188 = unaff_x22[3];
    in_stack_00000180 = unaff_x22[2];
    FUN_0581d05c(&stack0x00000110,&stack0x00000170);
    memcpy(&stack0x000000b8,&stack0x00000110,0x58);
    if (unaff_x24 == 0) break;
    unaff_x25 = *unaff_x19;
    param_1 = &stack0x00000390;
  }
LAB_05819fcc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_05819ff4:
  lVar14 = FUN_03aac1c4(unaff_x27,iVar4,
                        *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
  if ((((in_stack_00000058 == 0) ||
       (lVar10 = FUN_03aac1c4(in_stack_00000058,iVar4,
                              *(undefined8 *)System_Xml_Schema_XmlNumeric10Converter_TypeInfo),
       lVar10 == 0)) ||
      (lVar10 = FUN_03aadf10(lVar10,*(undefined8 *)puVar2), in_stack_00000038 == 0)) ||
     ((lVar13 = FUN_03aac1c4(in_stack_00000038,iVar4,
                             *(undefined8 *)
                              System_Runtime_Serialization_XmlObjectSerializer_TypeInfo),
      lVar13 == 0 || (uVar12 = FUN_03a2a164(lVar13,*(undefined8 *)puVar3), lVar14 == 0))))
  goto LAB_05819fcc;
  *(long *)(lVar14 + 0x28) = lVar10;
  thunk_FUN_02dd37b4((long *)(lVar14 + 0x28),lVar10);
  *(undefined8 *)(lVar14 + 0x30) = uVar12;
  thunk_FUN_02dd37b4((undefined8 *)(lVar14 + 0x30),uVar12);
  if (lVar10 == 0) goto LAB_05819fcc;
  uVar19 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar19) {
    uVar17 = 0;
    do {
      if (uVar19 <= uVar17) goto LAB_0581a114;
      lVar13 = *(long *)(lVar10 + (long)(int)uVar17 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_05819fcc;
      plVar6 = (long *)(lVar13 + 200);
      *plVar6 = lVar14;
      thunk_FUN_02dd37b4(plVar6,lVar14);
      uVar19 = *(uint *)(lVar10 + 0x18);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)uVar19);
  }
  iVar4 = iVar4 + 1;
  if (*(int *)(unaff_x27 + 0x18) <= iVar4) {
LAB_0581a0e0:
    FUN_03aadf10(unaff_x27,*(undefined8 *)System_Xml_XmlNodeReader_TypeInfo);
    return;
  }
  goto LAB_05819ff4;
}


