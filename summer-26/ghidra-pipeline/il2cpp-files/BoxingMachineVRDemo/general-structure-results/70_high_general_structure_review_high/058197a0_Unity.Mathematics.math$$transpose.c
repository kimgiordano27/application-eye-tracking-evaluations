/*
FUNCTION_NAME: Unity.Mathematics.math$$transpose
ENTRY_POINT: 058197a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_12
*/


void Unity_Mathematics_math__transpose(long param_1,long param_2)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_x10;
  ulong unaff_x19;
  ulong uVar16;
  uint uVar17;
  ulong unaff_x22;
  ulong uVar18;
  ulong uVar19;
  uint unaff_w24;
  uint uVar20;
  long unaff_x25;
  long lVar21;
  undefined8 uVar22;
  long unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  long *in_stack_00000020;
  long in_stack_00000038;
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
  long in_stack_00000340;
  long in_stack_00000380;
  
code_r0x058197a0:
  *(int *)(param_2 + 0x18) = (int)in_x10 + 1;
                    /* try { // try from 058197ac to 059197bb has its CatchHandler @ 05819824 */
  plVar11 = (long *)(param_1 + in_x10 * 8 + 0x20);
  *plVar11 = unaff_x25;
  thunk_FUN_02dd37b4(plVar11,unaff_x25);
  do {
    if (in_stack_00000380 != 0) {
      if ((in_stack_00000038 == 0) ||
         (lVar5 = FUN_03aac1c4(in_stack_00000038,unaff_w24,
                               *(undefined8 *)
                                System_Runtime_Serialization_XmlObjectSerializer_TypeInfo),
         in_stack_00000380 == 0)) goto LAB_05819fcc;
      uVar16 = 0;
      while ((long)uVar16 < (long)(int)*(uint *)(in_stack_00000380 + 0x18)) {
        if (*(uint *)(in_stack_00000380 + 0x18) <= uVar16) goto LAB_0581a114;
        FUN_0581d05c(&stack0x000000b8,&stack0x00000300);
        memcpy(&stack0x000002a0,&stack0x000000b8,0x58);
        if (unaff_x25 == 0) goto LAB_05819fcc;
        thunk_FUN_02dd37b4();
        memcpy(&stack0x00000060,&stack0x000002a0,0x58);
        if (lVar5 == 0) goto LAB_05819fcc;
        lVar21 = *unaff_x29;
        memcpy(&stack0x00000390,&stack0x00000060,0x58);
        lVar12 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_05819fcc;
        uVar20 = *(uint *)(lVar5 + 0x18);
        if (uVar20 < *(uint *)(lVar12 + 0x18)) {
          pvVar1 = (void *)(lVar12 + (int)uVar20 * unaff_x28 + 0x20);
          *(uint *)(lVar5 + 0x18) = uVar20 + 1;
          memcpy(pvVar1,&stack0x00000390,0x58);
          thunk_FUN_02dd37b4(pvVar1,0);
        }
        else {
          uVar22 = *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70);
          memcpy(&stack0x000003e8,&stack0x00000390,0x58);
          FUN_03a28128(lVar5,&stack0x000003e8,uVar22);
        }
        uVar16 = uVar16 + 1;
        if (in_stack_00000380 == 0) goto LAB_05819fcc;
      }
    }
    puVar9 = System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo;
    unaff_x19 = unaff_x19 + 1;
    if (unaff_x19 == unaff_x22) {
      lVar5 = in_stack_00000020[1];
      if ((lVar5 == 0) || (uVar16 = *(ulong *)(lVar5 + 0x18), (int)uVar16 < 1)) goto LAB_05819fd0;
      uVar18 = 0;
      break;
    }
    lVar5 = *in_stack_00000020;
    if (lVar5 == 0) goto LAB_05819fcc;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x19) goto LAB_0581a114;
    memmove(&stack0x00000340,(void *)(lVar5 + unaff_x19 * 0x48 + 0x20),0x48);
    uVar16 = FUN_04e8cf70(in_stack_00000340,0);
    if ((uVar16 & 1) != 0) {
      uVar22 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x000003e8);
      puVar9 = System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_TypeInfo;
      goto LAB_0581a1e8;
    }
    if (in_stack_00000340 == 0) goto LAB_05819fcc;
    iVar3 = FUN_04e921f4(in_stack_00000340,0x2f,0);
    if (iVar3 == -1) {
      uVar22 = 0;
      lVar5 = in_stack_00000340;
    }
    else {
      uVar22 = System_Globalization_SortKey___ctor(in_stack_00000340,0,iVar3,0);
      lVar5 = FUN_04e9195c(in_stack_00000340,iVar3 + 1,0);
      uVar16 = FUN_04e8cf70(lVar5,0);
      if ((uVar16 & 1) != 0) {
        uVar22 = thunk_FUN_02dc61f4(System_Xml_XmlProcessingInstruction_TypeInfo);
        uVar10 = thunk_FUN_02dc61f4(System_Xml_XmlQualifiedName_TypeInfo);
        uVar22 = FUN_04e8db00(uVar22,in_stack_00000340,uVar10,0);
        goto LAB_0581a158;
      }
    }
    if (unaff_x27 == 0) goto LAB_05819fcc;
    if (0 < *(int *)(unaff_x27 + 0x18)) {
      unaff_w24 = 0;
      do {
        lVar12 = FUN_03aac1c4(unaff_x27,unaff_w24,
                              *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
        if (lVar12 == 0) goto LAB_05819fcc;
        iVar3 = FUN_04e8aaa4(*(undefined8 *)(lVar12 + 0x10),uVar22,3,0);
        if (iVar3 == 0) {
          lVar12 = FUN_03aac1c4(unaff_x27,unaff_w24,
                                *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
          if (lVar12 != 0) {
            unaff_x25 = FUN_0581d2c0(&stack0x00000340,lVar5);
            if (in_stack_00000058 == 0) goto LAB_05819fcc;
            goto LAB_05819758;
          }
          break;
        }
        unaff_w24 = unaff_w24 + 1;
      } while ((int)unaff_w24 < *(int *)(unaff_x27 + 0x18));
    }
    lVar12 = thunk_FUN_02d9d534(*(undefined8 *)System_Xml_Serialization_XmlAttributes_TypeInfo);
    FUN_05815ba0();
    *(undefined8 *)(lVar12 + 0x10) = uVar22;
    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x10),uVar22);
    unaff_w24 = *(uint *)(unaff_x27 + 0x18);
    lVar21 = *(long *)(unaff_x27 + 0x10);
    lVar13 = *(long *)System_Xml_XmlNamespaceManager_TypeInfo;
    *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
    if (lVar21 == 0) goto LAB_05819fcc;
    if (unaff_w24 < *(uint *)(lVar21 + 0x18)) {
      *(uint *)(in_stack_00000050 + 0x18) = unaff_w24 + 1;
      plVar11 = (long *)(lVar21 + (long)(int)unaff_w24 * 8 + 0x20);
      *plVar11 = lVar12;
      thunk_FUN_02dd37b4(plVar11,lVar12);
    }
    else {
      FUN_03aac494(in_stack_00000050,lVar12,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uVar22 = thunk_FUN_02d9d534(*(undefined8 *)
                                 System_Runtime_Serialization_XmlObjectSerializerReadContext_TypeInfo
                               );
    FUN_03aabc60(uVar22,*(undefined8 *)System_Xml_XmlNodeType_TypeInfo);
    if (in_stack_00000058 == 0) goto LAB_05819fcc;
    lVar12 = *(long *)(in_stack_00000058 + 0x10);
    lVar21 = *(long *)Newtonsoft_Json_Converters_XmlNodeConverter_TypeInfo;
    *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05819fcc;
    uVar20 = *(uint *)(in_stack_00000058 + 0x18);
    if (uVar20 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(in_stack_00000058 + 0x18) = uVar20 + 1;
      puVar4 = (undefined8 *)(lVar12 + (long)(int)uVar20 * 8 + 0x20);
      *puVar4 = uVar22;
      thunk_FUN_02dd37b4(puVar4,uVar22);
    }
    else {
      FUN_03aac494(in_stack_00000058,uVar22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
    }
    uVar22 = thunk_FUN_02d9d534(*(undefined8 *)
                                 System_Runtime_Serialization_XmlObjectSerializerContext_TypeInfo);
    FUN_03a277e0(uVar22,*(undefined8 *)Newtonsoft_Json_Converters_XmlNodeWrapper_TypeInfo);
    if (in_stack_00000038 == 0) goto LAB_05819fcc;
    lVar12 = *(long *)(in_stack_00000038 + 0x10);
    lVar21 = *(long *)System_Xml_XmlNode_TypeInfo;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05819fcc;
    uVar20 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar20 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar20 + 1;
      puVar4 = (undefined8 *)(lVar12 + (long)(int)uVar20 * 8 + 0x20);
      *puVar4 = uVar22;
      thunk_FUN_02dd37b4(puVar4,uVar22);
    }
    else {
      FUN_03aac494(in_stack_00000038,uVar22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x25 = FUN_0581d2c0(&stack0x00000340,lVar5);
    unaff_x27 = in_stack_00000050;
LAB_05819758:
    param_2 = FUN_03aac1c4(in_stack_00000058,unaff_w24,
                           *(undefined8 *)System_Xml_Schema_XmlNumeric10Converter_TypeInfo);
    if (param_2 == 0) goto LAB_05819fcc;
    param_1 = *(long *)(param_2 + 0x10);
    lVar5 = *(long *)System_Xml_XmlNodeChangedEventArgs_TypeInfo;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_05819fcc;
    in_x10 = (long)(int)*(uint *)(param_2 + 0x18);
    if (*(uint *)(param_2 + 0x18) < *(uint *)(param_1 + 0x18)) goto code_r0x058197a0;
    FUN_03aac494(param_2,unaff_x25,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                );
  } while( true );
LAB_0581997c:
  if (*(uint *)(lVar5 + 0x18) <= uVar18) {
LAB_0581a114:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  lVar5 = lVar5 + uVar18 * 0x20;
  uVar22 = *(undefined8 *)(lVar5 + 0x20);
  uVar10 = *(undefined8 *)(lVar5 + 0x28);
  lVar12 = *(long *)(lVar5 + 0x30);
  lVar5 = *(long *)(lVar5 + 0x38);
  uVar6 = FUN_04e8cf70(uVar22,0);
  if ((uVar6 & 1) != 0) {
    uVar22 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x000003e8);
    puVar9 = System_Xml_XmlParserContext_TypeInfo;
LAB_0581a1e8:
    uVar10 = thunk_FUN_02dc61f4(puVar9);
    uVar22 = System_Char__System_IConvertible_ToSByte(uVar10,uVar22,0);
LAB_0581a158:
    thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
    uVar10 = thunk_FUN_02d9d534();
    FUN_05007004(uVar10,uVar22,0);
    uVar22 = thunk_FUN_02dc61f4(
                               System_Runtime_Serialization_XmlObjectSerializerWriteContext_TypeInfo
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar10,uVar22);
  }
  if (unaff_x27 == 0) goto LAB_05819fcc;
  if (0 < *(int *)(unaff_x27 + 0x18)) {
    uVar20 = 0;
    do {
      lVar21 = FUN_03aac1c4(unaff_x27,uVar20,
                            *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
      if (lVar21 == 0) goto LAB_05819fcc;
      iVar3 = FUN_04e8aaa4(*(undefined8 *)(lVar21 + 0x10),uVar22,3,0);
      if (iVar3 == 0) {
        lVar21 = FUN_03aac1c4(unaff_x27,uVar20,
                              *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
        if (lVar21 != 0) goto LAB_05819bf8;
        break;
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < *(int *)(unaff_x27 + 0x18));
  }
  lVar21 = thunk_FUN_02d9d534(*(undefined8 *)System_Xml_Serialization_XmlAttributes_TypeInfo);
  FUN_05815ba0();
  *(undefined8 *)(lVar21 + 0x10) = uVar22;
  thunk_FUN_02dd37b4();
  uVar6 = FUN_04e8cf70(uVar10,0);
  uVar8 = 0;
  if ((uVar6 & 1) == 0) {
    uVar8 = uVar10;
  }
  *(undefined8 *)(lVar21 + 0x18) = uVar8;
  thunk_FUN_02dd37b4();
  uVar20 = *(uint *)(unaff_x27 + 0x18);
  lVar13 = *(long *)(unaff_x27 + 0x10);
  lVar14 = *(long *)System_Xml_XmlNamespaceManager_TypeInfo;
  *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
  if (lVar13 == 0) goto LAB_05819fcc;
  if (uVar20 < *(uint *)(lVar13 + 0x18)) {
    *(uint *)(in_stack_00000050 + 0x18) = uVar20 + 1;
    plVar11 = (long *)(lVar13 + (long)(int)uVar20 * 8 + 0x20);
    *plVar11 = lVar21;
    thunk_FUN_02dd37b4(plVar11,lVar21);
  }
  else {
    FUN_03aac494(in_stack_00000050,lVar21,
                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
  }
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                               System_Runtime_Serialization_XmlObjectSerializerReadContext_TypeInfo)
  ;
  FUN_03aabc60(uVar10,*(undefined8 *)System_Xml_XmlNodeType_TypeInfo);
  if (in_stack_00000058 == 0) goto LAB_05819fcc;
  lVar21 = *(long *)(in_stack_00000058 + 0x10);
  lVar13 = *(long *)Newtonsoft_Json_Converters_XmlNodeConverter_TypeInfo;
  *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
  if (lVar21 == 0) goto LAB_05819fcc;
  uVar17 = *(uint *)(in_stack_00000058 + 0x18);
  if (uVar17 < *(uint *)(lVar21 + 0x18)) {
    *(uint *)(in_stack_00000058 + 0x18) = uVar17 + 1;
    puVar4 = (undefined8 *)(lVar21 + (long)(int)uVar17 * 8 + 0x20);
    *puVar4 = uVar10;
    thunk_FUN_02dd37b4(puVar4,uVar10);
  }
  else {
    FUN_03aac494(in_stack_00000058,uVar10,
                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
  }
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                               System_Runtime_Serialization_XmlObjectSerializerContext_TypeInfo);
  FUN_03a277e0(uVar10,*(undefined8 *)Newtonsoft_Json_Converters_XmlNodeWrapper_TypeInfo);
  if (in_stack_00000038 == 0) goto LAB_05819fcc;
  lVar21 = *(long *)(in_stack_00000038 + 0x10);
  lVar13 = *(long *)System_Xml_XmlNode_TypeInfo;
  *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
  if (lVar21 == 0) goto LAB_05819fcc;
  uVar17 = *(uint *)(in_stack_00000038 + 0x18);
  if (uVar17 < *(uint *)(lVar21 + 0x18)) {
    *(uint *)(in_stack_00000038 + 0x18) = uVar17 + 1;
    puVar4 = (undefined8 *)(lVar21 + (long)(int)uVar17 * 8 + 0x20);
    *puVar4 = uVar10;
    thunk_FUN_02dd37b4(puVar4,uVar10);
    unaff_x27 = in_stack_00000050;
  }
  else {
    FUN_03aac494(in_stack_00000038,uVar10,
                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    unaff_x27 = in_stack_00000050;
  }
LAB_05819bf8:
  if (lVar12 != 0) {
    if (lVar12 == 0) goto LAB_05819fcc;
    uVar6 = *(ulong *)(lVar12 + 0x18);
    if (0 < (int)uVar6) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_0581a114;
        memmove(&stack0x00000250,(void *)(lVar12 + uVar19 * 0x48 + 0x20),0x48);
        uVar7 = FUN_04e8cf70(in_stack_00000250,0);
        if ((uVar7 & 1) != 0) {
          uVar10 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&stack0x000003e8);
          uVar8 = thunk_FUN_02dc61f4(
                                    System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TypeInfo
                                    );
          uVar22 = FUN_04e8e6a4(uVar8,uVar10,uVar22,0);
          goto LAB_0581a158;
        }
        lVar21 = FUN_0581d2c0(&stack0x00000250,0);
        if ((in_stack_00000058 == 0) ||
           (lVar13 = FUN_03aac1c4(in_stack_00000058,uVar20,
                                  *(undefined8 *)System_Xml_Schema_XmlNumeric10Converter_TypeInfo),
           lVar13 == 0)) goto LAB_05819fcc;
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar15 = *(long *)System_Xml_XmlNodeChangedEventArgs_TypeInfo;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_05819fcc;
        uVar17 = *(uint *)(lVar13 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar17 + 1;
          plVar11 = (long *)(lVar14 + (long)(int)uVar17 * 8 + 0x20);
          *plVar11 = lVar21;
          thunk_FUN_02dd37b4(plVar11,lVar21);
        }
        else {
          FUN_03aac494(lVar13,lVar21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000290 != 0) {
          if ((in_stack_00000038 == 0) ||
             (lVar13 = FUN_03aac1c4(in_stack_00000038,uVar20,
                                    *(undefined8 *)
                                     System_Runtime_Serialization_XmlObjectSerializer_TypeInfo),
             in_stack_00000290 == 0)) goto LAB_05819fcc;
          uVar7 = 0;
          while ((long)uVar7 < (long)(int)*(uint *)(in_stack_00000290 + 0x18)) {
            if (*(uint *)(in_stack_00000290 + 0x18) <= uVar7) goto LAB_0581a114;
            FUN_0581d05c(&stack0x000000b8,&stack0x00000210);
            memcpy(&stack0x000001b0,&stack0x000000b8,0x58);
            if (lVar21 == 0) goto LAB_05819fcc;
            in_stack_000001e0 = *(undefined8 *)(lVar21 + 0x10);
            thunk_FUN_02dd37b4(&stack0x000001e0);
            memcpy(&stack0x00000060,&stack0x000001b0,0x58);
            if (lVar13 == 0) goto LAB_05819fcc;
            lVar15 = *(long *)puVar9;
            memcpy(&stack0x00000390,&stack0x00000060,0x58);
            lVar14 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_05819fcc;
            uVar17 = *(uint *)(lVar13 + 0x18);
            if (uVar17 < *(uint *)(lVar14 + 0x18)) {
              pvVar1 = (void *)(lVar14 + (long)(int)uVar17 * 0x58 + 0x20);
              *(uint *)(lVar13 + 0x18) = uVar17 + 1;
              memcpy(pvVar1,&stack0x00000390,0x58);
              thunk_FUN_02dd37b4(pvVar1,0);
            }
            else {
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x000003e8,&stack0x00000390,0x58);
              FUN_03a28128(lVar13,&stack0x000003e8,uVar10);
            }
            uVar7 = uVar7 + 1;
            if (in_stack_00000290 == 0) goto LAB_05819fcc;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x27 = in_stack_00000050;
      } while (uVar19 != (uVar6 & 0xffffffff));
    }
  }
  if (lVar5 == 0) {
    if (in_stack_00000038 == 0) goto LAB_05819fcc;
    FUN_03aac1c4(in_stack_00000038,uVar20,
                 *(undefined8 *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
  }
  else {
    if ((lVar5 == 0) || (in_stack_00000038 == 0)) goto LAB_05819fcc;
    uVar17 = *(uint *)(lVar5 + 0x18);
    lVar12 = FUN_03aac1c4(in_stack_00000038,uVar20,
                          *(undefined8 *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    if (0 < (int)uVar17) {
      uVar6 = 0;
      puVar4 = (undefined8 *)(lVar5 + 0x20);
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_0581a114;
        in_stack_00000198 = puVar4[5];
        in_stack_00000190 = puVar4[4];
        in_stack_000001a8 = puVar4[7];
        in_stack_000001a0 = puVar4[6];
        in_stack_00000178 = puVar4[1];
        in_stack_00000170 = *puVar4;
        in_stack_00000188 = puVar4[3];
        in_stack_00000180 = puVar4[2];
        FUN_0581d05c(&stack0x00000110,&stack0x00000170);
        memcpy(&stack0x000000b8,&stack0x00000110,0x58);
        if (lVar12 == 0) goto LAB_05819fcc;
        lVar13 = *(long *)puVar9;
        memcpy(&stack0x00000390,&stack0x000000b8,0x58);
        lVar21 = *(long *)(lVar12 + 0x10);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_05819fcc;
        uVar20 = *(uint *)(lVar12 + 0x18);
        if (uVar20 < *(uint *)(lVar21 + 0x18)) {
          pvVar1 = (void *)(lVar21 + (long)(int)uVar20 * 0x58 + 0x20);
          *(uint *)(lVar12 + 0x18) = uVar20 + 1;
          memcpy(pvVar1,&stack0x00000390,0x58);
          thunk_FUN_02dd37b4(pvVar1,0);
        }
        else {
          uVar22 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
          memcpy(&stack0x000003e8,&stack0x00000390,0x58);
          FUN_03a28128(lVar12,&stack0x000003e8,uVar22);
        }
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 8;
      } while (uVar17 != uVar6);
    }
  }
  uVar18 = uVar18 + 1;
  if (uVar18 == (uVar16 & 0xffffffff)) goto LAB_05819fd0;
  lVar5 = in_stack_00000020[1];
  if (lVar5 == 0) goto LAB_05819fcc;
  goto LAB_0581997c;
LAB_05819fd0:
  puVar2 = System_Xml_XmlNodeReaderNavigator_TypeInfo;
  puVar9 = System_Xml_Serialization_XmlNodeEventArgs_TypeInfo;
  if (unaff_x27 != 0) {
    if (0 < *(int *)(unaff_x27 + 0x18)) {
      iVar3 = 0;
      do {
        lVar5 = FUN_03aac1c4(unaff_x27,iVar3,
                             *(undefined8 *)System_Xml_Schema_XmlNumeric2Converter_TypeInfo);
        if ((((in_stack_00000058 == 0) ||
             (lVar12 = FUN_03aac1c4(in_stack_00000058,iVar3,
                                    *(undefined8 *)System_Xml_Schema_XmlNumeric10Converter_TypeInfo)
             , lVar12 == 0)) ||
            (lVar12 = FUN_03aadf10(lVar12,*(undefined8 *)puVar9), in_stack_00000038 == 0)) ||
           ((lVar21 = FUN_03aac1c4(in_stack_00000038,iVar3,
                                   *(undefined8 *)
                                    System_Runtime_Serialization_XmlObjectSerializer_TypeInfo),
            lVar21 == 0 || (uVar22 = FUN_03a2a164(lVar21,*(undefined8 *)puVar2), lVar5 == 0))))
        goto LAB_05819fcc;
        *(long *)(lVar5 + 0x28) = lVar12;
        thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar12);
        *(undefined8 *)(lVar5 + 0x30) = uVar22;
        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x30),uVar22);
        if (lVar12 == 0) goto LAB_05819fcc;
        uVar20 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar20) {
          uVar17 = 0;
          do {
            if (uVar20 <= uVar17) goto LAB_0581a114;
            lVar21 = *(long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
            if (lVar21 == 0) goto LAB_05819fcc;
            plVar11 = (long *)(lVar21 + 200);
            *plVar11 = lVar5;
            thunk_FUN_02dd37b4(plVar11,lVar5);
            uVar20 = *(uint *)(lVar12 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_x27 + 0x18));
    }
    FUN_03aadf10(unaff_x27,*(undefined8 *)System_Xml_XmlNodeReader_TypeInfo);
    return;
  }
LAB_05819fcc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


