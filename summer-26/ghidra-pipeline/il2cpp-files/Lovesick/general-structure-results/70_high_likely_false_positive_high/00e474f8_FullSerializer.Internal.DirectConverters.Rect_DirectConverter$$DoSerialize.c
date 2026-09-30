/*
FUNCTION_NAME: FullSerializer.Internal.DirectConverters.Rect_DirectConverter$$DoSerialize
ENTRY_POINT: 00e474f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_6
*/


long FullSerializer_Internal_DirectConverters_Rect_DirectConverter__DoSerialize
               (long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar8;
  long unaff_x23;
  long unaff_x24;
  int iVar9;
  ulong unaff_x25;
  int iVar10;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  long in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  int iStack0000000000000028;
  int iStack000000000000002c;
  undefined2 uStack0000000000000030;
  int iStack0000000000000034;
  long in_stack_00000038;
  
  while( true ) {
    FUN_0132138c(param_1,param_2,param_3,param_4);
    FUN_00ac1918(unaff_x23,in_stack_00000038,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__);
    FUN_00ac1538(unaff_x26,unaff_x23,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
    FUN_00ac1728();
    param_2 = unaff_x25;
    do {
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                );
      if (lVar4 == 0) goto LAB_00e47e24;
      iStack000000000000002c = iStack000000000000002c + 2;
      FUN_01320e50(lVar4,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo)
      ;
                    /* try { // try from 00e4758c to 00f475bf has its CatchHandler @ 00e4758c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e4758c with catch @ 00e4758c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e47610 with catch @ 00e4758c
                        */
      FUN_00ac1158(lVar4,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
      FUN_00ac1348();
      if ((in_stack_00000018 & 0x100000000) == 0) {
        iStack0000000000000028 = 0;
      }
      else {
                    /* try { // try from 00e475c0 to 00f475db has its CatchHandler @ 00e47604 */
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)Newtonsoft_Json_JsonSerializer_TypeInfo);
        if (lVar4 == 0) goto LAB_00e47e24;
        FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_1433);
                    /* try { // try from 00e475e0 to 00f475e7 has its CatchHandler @ 00e47600 */
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
        if (lVar5 == 0) goto LAB_00e47e24;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e475e0 with catch @ 00e47600
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e475c0 with catch @ 00e47604
                        */
        FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_6905);
                    /* try { // try from 00e47608 to 00f4760f has its CatchHandler @ 00e47618 */
                    /* try { // try from 00e47610 to 00f4761b has its CatchHandler @ 00e4758c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e47608 with catch @ 00e47618
                        */
                    /* try { // try from 00e4761c to 00f47647 has its CatchHandler @ 00e4761c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e4761c with catch @ 00e4761c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e47708 with catch @ 00e4761c
                        */
        FUN_00ac1538(lVar4,lVar5,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
        FUN_00ac1728();
        iStack0000000000000028 = 0;
      }
      while( true ) {
        uVar1 = (int)param_2 + 1;
        param_2 = (ulong)uVar1;
        if (*(int *)(in_stack_00000020 + 0x10) <= (int)uVar1) {
          if ((in_stack_00000018 & 0x100000000) == 0) goto LAB_00e47bcc;
          if (*(int *)(unaff_x24 + 0x18) < 1) goto LAB_00e47b24;
          iVar8 = 0;
          goto LAB_00e479cc;
        }
        sVar3 = FUN_015fa29c(in_stack_00000020,param_2,0);
        if (sVar3 == 10) break;
                    /* try { // try from 00e47648 to 00f47657 has its CatchHandler @ 00e476fc */
        sVar3 = FUN_015fa29c(in_stack_00000020,param_2,0);
        if (sVar3 == 0x20) {
          FUN_0132138c();
                    /* try { // try from 00e47670 to 00f47677 has its CatchHandler @ 00e476f8 */
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          FUN_00ac1158(in_stack_00000038,*(undefined8 *)StringLiteral_3287,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
          if ((in_stack_00000018 & 0x100000000) != 0) {
            FUN_0132138c();
            lVar4 = in_stack_00000038;
                    /* try { // try from 00e476b8 to 00f476bf has its CatchHandler @ 00e476f4 */
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
            if (lVar5 == 0) goto LAB_00e47e24;
            FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_6905);
            if (*(long *)(in_stack_00000010 + 0x48) == 0) goto LAB_00e47e24;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e476b8 with catch @ 00e476f4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e47670 with catch @ 00e476f8
                        */
            FUN_0132138c(*(long *)(in_stack_00000010 + 0x48),param_2,&stack0x00000038,
                         *(undefined8 *)StringLiteral_4992);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e47648 with catch @ 00e476fc
                        */
                    /* try { // try from 00e47700 to 00f47707 has its CatchHandler @ 00e47710 */
                    /* try { // try from 00e47708 to 00f47713 has its CatchHandler @ 00e4761c */
            FUN_00ac1918(lVar5,in_stack_00000038,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                        );
            if (lVar4 == 0) goto LAB_00e47e24;
            FUN_00ac1538(lVar4,lVar5,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
          }
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          iStack0000000000000028 = iStack0000000000000028 + 2;
          FUN_00ac1158(in_stack_00000038,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
          if ((in_stack_00000018 & 0x100000000) != 0) {
            FUN_0132138c();
            lVar4 = in_stack_00000038;
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
            if ((lVar5 == 0) || (FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_6905), lVar4 == 0))
            goto LAB_00e47e24;
            FUN_00ac1538(lVar4,lVar5,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
          }
        }
        else {
          if (iStack000000000000002c < *(int *)(unaff_x21 + 0x18)) {
            FUN_0132138c();
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
            if (iStack0000000000000028 < *(int *)(in_stack_00000038 + 0x18)) {
              FUN_0132138c();
              lVar4 = in_stack_00000038;
              iStack0000000000000034 = iStack0000000000000028;
              if (in_stack_00000038 == 0) goto LAB_00e47e24;
              FUN_0132138c(in_stack_00000038,iStack0000000000000028,&stack0x00000038,*unaff_x20);
              lVar5 = in_stack_00000038;
              uStack0000000000000030 = FUN_015fa29c(in_stack_00000020,param_2,0);
              if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0)
                  == 0) {
                thunk_FUN_00d32864(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__)
                ;
              }
              uVar6 = FUN_01731954(0);
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x29);
              }
              uVar6 = FUN_016f8fb8(&stack0x00000030,uVar6,0);
              uVar6 = FUN_015f5b28(lVar5,uVar6,0);
              FUN_0132149c(lVar4,iStack0000000000000028,uVar6,*(undefined8 *)PTR_DAT_033edff0);
            }
          }
          if (((in_stack_00000018 & 0x100000000) != 0) &&
             (iStack000000000000002c < *(int *)(unaff_x24 + 0x18))) {
            FUN_0132138c();
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
            if (iStack0000000000000028 < *(int *)(in_stack_00000038 + 0x18)) {
              FUN_0132138c();
              if (in_stack_00000038 == 0) goto LAB_00e47e24;
              FUN_0132138c(in_stack_00000038,iStack0000000000000028,&stack0x00000038,*unaff_x27);
              lVar4 = in_stack_00000038;
              if ((*(long *)(in_stack_00000010 + 0x48) == 0) ||
                 (FUN_0132138c(*(long *)(in_stack_00000010 + 0x48),param_2,&stack0x00000038,
                               *(undefined8 *)StringLiteral_4992), lVar4 == 0)) goto LAB_00e47e24;
              FUN_00ac1918(lVar4,in_stack_00000038,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                          );
            }
          }
        }
      }
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                );
      if (lVar4 == 0) goto LAB_00e47e24;
      FUN_01320e50(lVar4,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo)
      ;
      FUN_00ac1158(lVar4,*(undefined8 *)PTR_DAT_033ead30,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
      FUN_00ac1348();
    } while ((in_stack_00000018 & 0x100000000) == 0);
    unaff_x26 = thunk_FUN_00d62348(*(undefined8 *)Newtonsoft_Json_JsonSerializer_TypeInfo);
    if (unaff_x26 == 0) break;
    FUN_01320e50(unaff_x26,*(undefined8 *)StringLiteral_1433);
    unaff_x23 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
    if (unaff_x23 == 0) break;
    FUN_01320e50(unaff_x23,*(undefined8 *)StringLiteral_6905);
    param_1 = *(long *)(in_stack_00000010 + 0x48);
    if (param_1 == 0) break;
    param_3 = &stack0x00000038;
    param_4 = *(undefined8 *)StringLiteral_4992;
    unaff_x25 = param_2;
  }
  goto LAB_00e47e24;
  while( true ) {
    FUN_01324d60(in_stack_00000038,
                 *(undefined8 *)System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo);
    FUN_0132138c();
    if (in_stack_00000038 == 0) goto LAB_00e47e24;
    iVar9 = 0;
    while (iVar9 < *(int *)(in_stack_00000038 + 0x18)) {
      FUN_0132138c();
      if (in_stack_00000038 == 0) goto LAB_00e47e24;
      iVar10 = 0;
      while( true ) {
        FUN_0132138c(in_stack_00000038,iVar9,&stack0x00000038,*unaff_x27);
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        if (*(int *)(in_stack_00000038 + 0x18) <= iVar10) break;
        FUN_0132138c();
        if ((in_stack_00000038 == 0) ||
           (FUN_0132138c(in_stack_00000038,iVar9,&stack0x00000038,*unaff_x27),
           in_stack_00000038 == 0)) goto LAB_00e47e24;
        FUN_0132138c(in_stack_00000038,iVar10,&stack0x00000038,*(undefined8 *)StringLiteral_4992);
        FUN_00ac1918();
        iVar10 = iVar10 + 1;
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
      }
      iVar9 = iVar9 + 1;
      FUN_0132138c();
      if (in_stack_00000038 == 0) goto LAB_00e47e24;
    }
    iVar8 = iVar8 + 1;
    if (*(int *)(unaff_x24 + 0x18) <= iVar8) break;
LAB_00e479cc:
    FUN_0132138c();
    if (in_stack_00000038 == 0) goto LAB_00e47e24;
  }
LAB_00e47b24:
  if (*(long *)(in_stack_00000010 + 0x48) != 0) {
    iVar8 = *(int *)(*(long *)(in_stack_00000010 + 0x48) + 0x18);
    if (iVar8 == *(int *)(unaff_x22 + 0x18)) {
      *(long *)(in_stack_00000010 + 0x48) = unaff_x22;
    }
    else {
      iStack0000000000000034 = iVar8;
      uVar6 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
      iStack0000000000000034 = *(int *)(unaff_x22 + 0x18);
      uVar7 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
      uVar6 = FUN_0160073c(*(undefined8 *)
                            Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                           ,uVar6,*(undefined8 *)PTR_DAT_033f7228,uVar7,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar6,0);
    }
LAB_00e47bcc:
    puVar2 = StringLiteral_1115;
    lVar4 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      iVar8 = 0;
      do {
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        FUN_01324d60(in_stack_00000038,*(undefined8 *)puVar2);
        FUN_0132138c();
        if (in_stack_00000038 == 0) goto LAB_00e47e24;
        iVar9 = 0;
        while (iVar9 < *(int *)(in_stack_00000038 + 0x18)) {
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
          iVar10 = 0;
          while( true ) {
            FUN_0132138c(in_stack_00000038,iVar9,&stack0x00000038,*unaff_x20);
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
            if (*(int *)(in_stack_00000038 + 0x10) <= iVar10) break;
            FUN_0132138c();
            if ((in_stack_00000038 == 0) ||
               (FUN_0132138c(in_stack_00000038,iVar9,&stack0x00000038,*unaff_x20),
               in_stack_00000038 == 0)) goto LAB_00e47e24;
            uStack0000000000000030 = FUN_015fa29c(in_stack_00000038,iVar10,0);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x29);
            }
            uVar6 = FUN_016e8b00(&stack0x00000030,0);
            lVar4 = FUN_015f5b28(lVar4,uVar6,0);
            iVar10 = iVar10 + 1;
            FUN_0132138c();
            if (in_stack_00000038 == 0) goto LAB_00e47e24;
          }
          iVar9 = iVar9 + 1;
          FUN_0132138c();
          if (in_stack_00000038 == 0) goto LAB_00e47e24;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_x21 + 0x18));
    }
    if (lVar4 != 0) {
      if (*(int *)(in_stack_00000020 + 0x10) != *(int *)(lVar4 + 0x10)) {
        if (*(long *)(in_stack_00000010 + 0x48) == 0) goto LAB_00e47e24;
        iStack0000000000000034 = *(undefined4 *)(*(long *)(in_stack_00000010 + 0x48) + 0x18);
        uVar6 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
        iStack0000000000000034 = *(undefined4 *)(unaff_x22 + 0x18);
        uVar7 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
        uVar6 = FUN_0160073c(*(undefined8 *)
                              Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                             ,uVar6,*(undefined8 *)PTR_DAT_033f7228,uVar7,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar6,0);
        lVar4 = in_stack_00000020;
      }
      return lVar4;
    }
  }
LAB_00e47e24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


