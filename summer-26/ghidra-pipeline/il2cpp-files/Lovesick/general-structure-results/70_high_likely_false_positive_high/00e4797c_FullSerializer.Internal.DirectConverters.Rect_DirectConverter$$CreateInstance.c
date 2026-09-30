/*
FUNCTION_NAME: FullSerializer.Internal.DirectConverters.Rect_DirectConverter$$CreateInstance
ENTRY_POINT: 00e4797c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4
*/


long FullSerializer_Internal_DirectConverters_Rect_DirectConverter__CreateInstance
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar6;
  long unaff_x23;
  long lVar7;
  long unaff_x24;
  int unaff_w25;
  int iVar8;
  uint unaff_w26;
  int iVar9;
  undefined8 *unaff_x27;
  long *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  int iStack0000000000000028;
  int iStack000000000000002c;
  undefined2 uStack0000000000000030;
  int iStack0000000000000034;
  long in_stack_00000038;
  
  while (FUN_0132138c(param_2,unaff_w25,param_4,*param_1), unaff_x23 != 0) {
    FUN_00ac1918(unaff_x23,in_stack_00000038,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__);
    do {
      do {
        while( true ) {
          while( true ) {
            unaff_w25 = unaff_w25 + 1;
            if (*(int *)(in_stack_00000020 + 0x10) <= unaff_w25) {
              if ((unaff_w26 & 1) == 0) goto LAB_00e47bcc;
              if (*(int *)(unaff_x24 + 0x18) < 1) goto LAB_00e47b24;
              iVar6 = 0;
              goto LAB_00e479cc;
            }
            sVar2 = FUN_015fa29c(in_stack_00000020,unaff_w25,0);
            if (sVar2 != 10) break;
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                      );
            if (lVar7 == 0) goto LAB_00e47e24;
            FUN_01320e50(lVar7,*(undefined8 *)
                                System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
            FUN_00ac1158(lVar7,*(undefined8 *)PTR_DAT_033ead30,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
            FUN_00ac1348();
            if ((unaff_w26 & 1) != 0) {
              lVar7 = thunk_FUN_00d62348(*(undefined8 *)Newtonsoft_Json_JsonSerializer_TypeInfo);
              if (lVar7 == 0) goto LAB_00e47e24;
              FUN_01320e50(lVar7,*(undefined8 *)StringLiteral_1433);
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
              if (lVar3 == 0) goto LAB_00e47e24;
              FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_6905);
              if (*(long *)(in_stack_00000010 + 0x48) == 0) goto LAB_00e47e24;
              FUN_0132138c(*(long *)(in_stack_00000010 + 0x48),unaff_w25,&stack0x00000038,
                           *(undefined8 *)StringLiteral_4992);
              FUN_00ac1918(lVar3,in_stack_00000038,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                          );
              FUN_00ac1538(lVar7,lVar3,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
              FUN_00ac1728();
              unaff_w26 = in_stack_00000018._4_4_;
            }
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                      );
            if (lVar7 == 0) goto LAB_00e47e24;
            iStack000000000000002c = iStack000000000000002c + 2;
            FUN_01320e50(lVar7,*(undefined8 *)
                                System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
            FUN_00ac1158(lVar7,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
            FUN_00ac1348();
            if ((unaff_w26 & 1) == 0) {
              iStack0000000000000028 = 0;
            }
            else {
              lVar7 = thunk_FUN_00d62348(*(undefined8 *)Newtonsoft_Json_JsonSerializer_TypeInfo);
              if (lVar7 == 0) goto LAB_00e47e24;
              FUN_01320e50(lVar7,*(undefined8 *)StringLiteral_1433);
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
              if (lVar3 == 0) goto LAB_00e47e24;
              FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_6905);
              FUN_00ac1538(lVar7,lVar3,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
              FUN_00ac1728();
              iStack0000000000000028 = 0;
              unaff_w26 = in_stack_00000018._4_4_;
            }
          }
          sVar2 = FUN_015fa29c(in_stack_00000020,unaff_w25,0);
          if (sVar2 != 0x20) break;
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          FUN_00ac1158(in_stack_00000038,*(undefined8 *)StringLiteral_3287,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
          if ((unaff_w26 & 1) != 0) {
            FUN_0132138c();
            lVar7 = in_stack_00000038;
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
            if (lVar3 == 0) goto LAB_00e47e24;
            FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_6905);
            if (*(long *)(in_stack_00000010 + 0x48) == 0) goto LAB_00e47e24;
            FUN_0132138c(*(long *)(in_stack_00000010 + 0x48),unaff_w25,&stack0x00000038,
                         *(undefined8 *)StringLiteral_4992);
            FUN_00ac1918(lVar3,in_stack_00000038,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                        );
            if (lVar7 == 0) goto LAB_00e47e24;
            FUN_00ac1538(lVar7,lVar3,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
            unaff_w26 = in_stack_00000018._4_4_;
          }
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          iStack0000000000000028 = iStack0000000000000028 + 2;
          FUN_00ac1158(in_stack_00000038,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
          if ((unaff_w26 & 1) != 0) {
            FUN_0132138c();
            lVar7 = in_stack_00000038;
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
            if ((lVar3 == 0) || (FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_6905), lVar7 == 0))
            goto LAB_00e47e24;
            FUN_00ac1538(lVar7,lVar3,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
            unaff_w26 = in_stack_00000018._4_4_;
          }
        }
        if (iStack000000000000002c < *(int *)(unaff_x21 + 0x18)) {
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          if (iStack0000000000000028 < *(int *)(in_stack_00000038 + 0x18)) {
            FUN_0132138c();
            lVar7 = in_stack_00000038;
            iStack0000000000000034 = iStack0000000000000028;
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
            FUN_0132138c(in_stack_00000038,iStack0000000000000028,&stack0x00000038,*unaff_x20);
            lVar3 = in_stack_00000038;
            uStack0000000000000030 = FUN_015fa29c(in_stack_00000020,unaff_w25,0);
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            }
            uVar4 = FUN_01731954(0);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x29);
            }
            uVar4 = FUN_016f8fb8(&stack0x00000030,uVar4,0);
            uVar4 = FUN_015f5b28(lVar3,uVar4,0);
            FUN_0132149c(lVar7,iStack0000000000000028,uVar4,*(undefined8 *)PTR_DAT_033edff0);
            unaff_w26 = in_stack_00000018._4_4_;
          }
        }
      } while (((unaff_w26 & 1) == 0) || (*(int *)(unaff_x24 + 0x18) <= iStack000000000000002c));
      FUN_0132138c();
      if (in_stack_00000038 == 0) goto LAB_00e47e24;
    } while (*(int *)(in_stack_00000038 + 0x18) <= iStack0000000000000028);
    FUN_0132138c();
    if (in_stack_00000038 == 0) break;
    FUN_0132138c(in_stack_00000038,iStack0000000000000028,&stack0x00000038,*unaff_x27);
    param_2 = *(long *)(in_stack_00000010 + 0x48);
    if (param_2 == 0) break;
    param_4 = &stack0x00000038;
    param_1 = (undefined8 *)StringLiteral_4992;
    unaff_x23 = in_stack_00000038;
  }
  goto LAB_00e47e24;
  while( true ) {
    FUN_01324d60(in_stack_00000038,
                 *(undefined8 *)System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo);
    FUN_0132138c();
    if (in_stack_00000038 == 0) goto LAB_00e47e24;
    iVar8 = 0;
    while (iVar8 < *(int *)(in_stack_00000038 + 0x18)) {
      FUN_0132138c();
      if (in_stack_00000038 == 0) goto LAB_00e47e24;
      iVar9 = 0;
      while( true ) {
        FUN_0132138c(in_stack_00000038,iVar8,&stack0x00000038,*unaff_x27);
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        if (*(int *)(in_stack_00000038 + 0x18) <= iVar9) break;
        FUN_0132138c();
        if ((in_stack_00000038 == 0) ||
           (FUN_0132138c(in_stack_00000038,iVar8,&stack0x00000038,*unaff_x27),
           in_stack_00000038 == 0)) goto LAB_00e47e24;
        FUN_0132138c(in_stack_00000038,iVar9,&stack0x00000038,*(undefined8 *)StringLiteral_4992);
        FUN_00ac1918();
        iVar9 = iVar9 + 1;
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
      }
      iVar8 = iVar8 + 1;
      FUN_0132138c();
      if (in_stack_00000038 == 0) goto LAB_00e47e24;
    }
    iVar6 = iVar6 + 1;
    if (*(int *)(unaff_x24 + 0x18) <= iVar6) break;
LAB_00e479cc:
    FUN_0132138c();
    if (in_stack_00000038 == 0) goto LAB_00e47e24;
  }
LAB_00e47b24:
  if (*(long *)(in_stack_00000010 + 0x48) != 0) {
    iVar6 = *(int *)(*(long *)(in_stack_00000010 + 0x48) + 0x18);
    if (iVar6 == *(int *)(unaff_x22 + 0x18)) {
      *(long *)(in_stack_00000010 + 0x48) = unaff_x22;
    }
    else {
      iStack0000000000000034 = iVar6;
      uVar4 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
      iStack0000000000000034 = *(int *)(unaff_x22 + 0x18);
      uVar5 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
      uVar4 = FUN_0160073c(*(undefined8 *)
                            Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                           ,uVar4,*(undefined8 *)PTR_DAT_033f7228,uVar5,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar4,0);
    }
LAB_00e47bcc:
    puVar1 = StringLiteral_1115;
    lVar7 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      iVar6 = 0;
      do {
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        FUN_01324d60(in_stack_00000038,*(undefined8 *)puVar1);
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        iVar8 = 0;
        while (iVar8 < *(int *)(in_stack_00000038 + 0x18)) {
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          iVar9 = 0;
          while( true ) {
            FUN_0132138c(in_stack_00000038,iVar8,&stack0x00000038,*unaff_x20);
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
            if (*(int *)(in_stack_00000038 + 0x10) <= iVar9) break;
            FUN_0132138c();
            if ((in_stack_00000038 == 0) ||
               (FUN_0132138c(in_stack_00000038,iVar8,&stack0x00000038,*unaff_x20),
               in_stack_00000038 == 0)) goto LAB_00e47e24;
            uStack0000000000000030 = FUN_015fa29c(in_stack_00000038,iVar9,0);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x29);
            }
            uVar4 = FUN_016e8b00(&stack0x00000030,0);
            lVar7 = FUN_015f5b28(lVar7,uVar4,0);
            iVar9 = iVar9 + 1;
            FUN_0132138c();
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
          }
          iVar8 = iVar8 + 1;
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_x21 + 0x18));
    }
    if (lVar7 != 0) {
      if (*(int *)(in_stack_00000020 + 0x10) != *(int *)(lVar7 + 0x10)) {
        if (*(long *)(in_stack_00000010 + 0x48) == 0) goto LAB_00e47e24;
        iStack0000000000000034 = *(undefined4 *)(*(long *)(in_stack_00000010 + 0x48) + 0x18);
        uVar4 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
        iStack0000000000000034 = *(undefined4 *)(unaff_x22 + 0x18);
        uVar5 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
        uVar4 = FUN_0160073c(*(undefined8 *)
                              Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                             ,uVar4,*(undefined8 *)PTR_DAT_033f7228,uVar5,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar4,0);
        lVar7 = in_stack_00000020;
      }
      return lVar7;
    }
  }
LAB_00e47e24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


