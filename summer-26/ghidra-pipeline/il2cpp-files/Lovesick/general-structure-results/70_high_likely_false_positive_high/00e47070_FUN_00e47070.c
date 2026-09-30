/*
FUNCTION_NAME: FUN_00e47070
ENTRY_POINT: 00e47070
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


long FUN_00e47070(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 local_78;
  undefined2 local_70 [2];
  int local_6c;
  long local_68;
  
  puVar1 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
  ;
                    /* try { // try from 00e47080 to 00f47093 has its CatchHandler @ 00e47094 */
                    /* catch() { ... } // from try @ 00e47080 with catch @ 00e47094
                       try { // try from 00e47094 to 00f470cf has its CatchHandler @ 00e46e64 */
                    /* catch() { ... } // from try @ 00e46f44 with catch @ 00e47098 */
                    /* catch() { ... } // from try @ 00e46e98 with catch @ 00e4709c
                       catch() { ... } // from try @ 00e46fe8 with catch @ 00e4709c
                       catch() { ... } // from try @ 00e47018 with catch @ 00e4709c */
                    /* catch() { ... } // from try @ 00e46ec4 with catch @ 00e470a0 */
  if ((DAT_03774d5f & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_ReflectionMember>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
    thunk_FUN_00d48444(PTR_DAT_033ebdb8);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(StringLiteral_1115);
    thunk_FUN_00d48444(System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRInput_OVRControllerBase>_Add__);
    thunk_FUN_00d48444(StringLiteral_1433);
    thunk_FUN_00d48444(StringLiteral_2294);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6905);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                      );
    thunk_FUN_00d48444(StringLiteral_11416);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<fsVersionedType>_Add__);
    thunk_FUN_00d48444(StringLiteral_2419);
    thunk_FUN_00d48444(StringLiteral_10143);
    thunk_FUN_00d48444(Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    thunk_FUN_00d48444(Method_System_Net_Sockets_TcpClient_EndConnect__);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualData_TypeInfo);
                    /* catch() { ... } // from try @ 00e47200 with catch @ 00e471c0 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiParticleGroup>_Insert__);
    thunk_FUN_00d48444(StringLiteral_4992);
    thunk_FUN_00d48444(PTR_DAT_033edff0);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonSerializer_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
                      );
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Guid>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ead30);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f7228);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03774d5f = 1;
  }
  local_6c = 0;
  local_70[0] = 0;
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_List<Guid>__ctor__;
  if (lVar7 != 0) {
    FUN_01320e50(lVar7,*(undefined8 *)
                        Method_System_Collections_Generic_List<OVRInput_OVRControllerBase>_Add__);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__;
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_2294);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__;
      if (lVar9 != 0) {
        FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_6905);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
        puVar3 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
        puVar2 = Newtonsoft_Json_JsonSerializer_TypeInfo;
        puVar1 = PTR_DAT_033ebdb8;
        if (lVar10 != 0) {
          FUN_01320e50(lVar10,*(undefined8 *)
                               System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
          FUN_00ac1158(lVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
          FUN_00ac1348(lVar7,lVar10,*(undefined8 *)puVar1);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar10 != 0) {
            FUN_01320e50(lVar10,*(undefined8 *)StringLiteral_1433);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
            puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__;
            puVar1 = System_Collections_Generic_Dictionary<string,_ReflectionMember>_TypeInfo;
            if (lVar11 != 0) {
              FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_6905);
              FUN_00ac1538(lVar10,lVar11,*(undefined8 *)puVar2);
              FUN_00ac1728(lVar8,lVar10,*(undefined8 *)puVar1);
              puVar5 = Method_System_Net_Sockets_TcpClient_EndConnect__;
              puVar4 = Method_System_Collections_Generic_List<ObiParticleGroup>_Insert__;
              puVar3 = Newtonsoft_Json_JsonReader_State_TypeInfo;
              puVar2 = UnityEngine_UIElements_VisualData_TypeInfo;
              puVar1 = Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo;
              if (param_2 != 0) {
                if (0 < *(int *)(param_2 + 0x10)) {
                  iVar15 = 0;
                  local_78 = 0;
                  do {
                    sVar6 = FUN_015fa29c(param_2,iVar15,0);
                    if (sVar6 == 10) {
                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                                 );
                      if (lVar10 == 0) goto LAB_00e47e24;
                      FUN_01320e50(lVar10,*(undefined8 *)
                                           System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo
                                  );
                      FUN_00ac1158(lVar10,*(undefined8 *)PTR_DAT_033ead30,
                                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__
                                  );
                      FUN_00ac1348(lVar7,lVar10,*(undefined8 *)PTR_DAT_033ebdb8);
                      if ((param_3 & 1) != 0) {
                        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                     Newtonsoft_Json_JsonSerializer_TypeInfo);
                        if (lVar10 == 0) goto LAB_00e47e24;
                        FUN_01320e50(lVar10,*(undefined8 *)StringLiteral_1433);
                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__
                                                  );
                        if (lVar11 == 0) goto LAB_00e47e24;
                        FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_6905);
                        if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e47e24;
                        FUN_0132138c(*(long *)(param_1 + 0x48),iVar15,&local_68,
                                     *(undefined8 *)StringLiteral_4992);
                        FUN_00ac1918(lVar11,local_68,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                                    );
                        FUN_00ac1538(lVar10,lVar11,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
                        FUN_00ac1728(lVar8,lVar10,
                                     *(undefined8 *)
                                      System_Collections_Generic_Dictionary<string,_ReflectionMember>_TypeInfo
                                    );
                      }
                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                                 );
                      if (lVar10 == 0) goto LAB_00e47e24;
                      FUN_01320e50(lVar10,*(undefined8 *)
                                           System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo
                                  );
                      FUN_00ac1158(lVar10,*(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,
                                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__
                                  );
                      FUN_00ac1348(lVar7,lVar10,*(undefined8 *)PTR_DAT_033ebdb8);
                      if ((param_3 & 1) == 0) {
                        local_78 = (ulong)(local_78._4_4_ + 2U) << 0x20;
                      }
                      else {
                        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                     Newtonsoft_Json_JsonSerializer_TypeInfo);
                        if (lVar10 == 0) goto LAB_00e47e24;
                        FUN_01320e50(lVar10,*(undefined8 *)StringLiteral_1433);
                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__
                                                  );
                        if (lVar11 == 0) goto LAB_00e47e24;
                        FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_6905);
                        FUN_00ac1538(lVar10,lVar11,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
                        FUN_00ac1728(lVar8,lVar10,
                                     *(undefined8 *)
                                      System_Collections_Generic_Dictionary<string,_ReflectionMember>_TypeInfo
                                    );
                        local_78 = (ulong)(local_78._4_4_ + 2U) << 0x20;
                      }
                    }
                    else {
                      sVar6 = FUN_015fa29c(param_2,iVar15,0);
                      if (sVar6 == 0x20) {
                        FUN_0132138c(lVar7,local_78._4_4_,&local_68,*(undefined8 *)puVar4);
                        if (local_68 == 0) goto LAB_00e47e24;
                        FUN_00ac1158(local_68,*(undefined8 *)StringLiteral_3287,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
                        if ((param_3 & 1) != 0) {
                          FUN_0132138c(lVar8,local_78._4_4_,&local_68,*(undefined8 *)puVar2);
                          lVar10 = local_68;
                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__
                                                  );
                          if (lVar11 == 0) goto LAB_00e47e24;
                          FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_6905);
                          if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e47e24;
                          FUN_0132138c(*(long *)(param_1 + 0x48),iVar15,&local_68,
                                       *(undefined8 *)StringLiteral_4992);
                          FUN_00ac1918(lVar11,local_68,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                                      );
                          if (lVar10 == 0) goto LAB_00e47e24;
                          FUN_00ac1538(lVar10,lVar11,
                                       *(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
                        }
                        FUN_0132138c(lVar7,local_78._4_4_,&local_68,*(undefined8 *)puVar4);
                        if (local_68 == 0) goto LAB_00e47e24;
                        local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 2);
                        FUN_00ac1158(local_68,*(undefined8 *)
                                               TMPro_TMP_InputField_SubmitEvent_TypeInfo,
                                     *(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
                        if ((param_3 & 1) != 0) {
                          FUN_0132138c(lVar8,local_78._4_4_,&local_68,*(undefined8 *)puVar2);
                          lVar10 = local_68;
                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__
                                                  );
                          if ((lVar11 == 0) ||
                             (FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_6905), lVar10 == 0))
                          goto LAB_00e47e24;
                          FUN_00ac1538(lVar10,lVar11,
                                       *(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vcvts_f32_u32__);
                        }
                      }
                      else {
                        if (local_78._4_4_ < *(int *)(lVar7 + 0x18)) {
                          FUN_0132138c(lVar7,local_78._4_4_,&local_68,*(undefined8 *)puVar4);
                          if (local_68 == 0) goto LAB_00e47e24;
                          if ((int)local_78 < *(int *)(local_68 + 0x18)) {
                            FUN_0132138c(lVar7,local_78._4_4_,&local_68,*(undefined8 *)puVar4);
                            lVar10 = local_68;
                            local_6c = (int)local_78;
                            if (local_68 == 0) goto LAB_00e47e24;
                            FUN_0132138c(local_68,local_78 & 0xffffffff,&local_68,
                                         *(undefined8 *)puVar1);
                            lVar11 = local_68;
                            local_70[0] = FUN_015fa29c(param_2,iVar15,0);
                            if (*(int *)(*(long *)
                                          Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ +
                                        0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)
                                                  Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__
                                                );
                            }
                            uVar12 = FUN_01731954(0);
                            lVar14 = *(long *)puVar3;
                            if (*(int *)(lVar14 + 0xe0) == 0) {
                              thunk_FUN_00d32864(lVar14);
                            }
                            uVar12 = FUN_016f8fb8(local_70,uVar12,0);
                            uVar12 = FUN_015f5b28(lVar11,uVar12,0);
                            FUN_0132149c(lVar10,local_78 & 0xffffffff,uVar12,
                                         *(undefined8 *)PTR_DAT_033edff0);
                          }
                        }
                        if (((param_3 & 1) != 0) && (local_78._4_4_ < *(int *)(lVar8 + 0x18))) {
                          FUN_0132138c(lVar8,local_78._4_4_,&local_68,*(undefined8 *)puVar2);
                          if (local_68 == 0) goto LAB_00e47e24;
                          if ((int)local_78 < *(int *)(local_68 + 0x18)) {
                            FUN_0132138c(lVar8,local_78._4_4_,&local_68,*(undefined8 *)puVar2);
                            if (local_68 == 0) goto LAB_00e47e24;
                            FUN_0132138c(local_68,local_78 & 0xffffffff,&local_68,
                                         *(undefined8 *)puVar5);
                            lVar10 = local_68;
                            if ((*(long *)(param_1 + 0x48) == 0) ||
                               (FUN_0132138c(*(long *)(param_1 + 0x48),iVar15,&local_68,
                                             *(undefined8 *)StringLiteral_4992), lVar10 == 0))
                            goto LAB_00e47e24;
                            FUN_00ac1918(lVar10,local_68,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                                        );
                          }
                        }
                      }
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < *(int *)(param_2 + 0x10));
                }
                if ((param_3 & 1) != 0) {
                  if (0 < *(int *)(lVar8 + 0x18)) {
                    iVar15 = 0;
                    do {
                      FUN_0132138c(lVar8,iVar15,&local_68,*(undefined8 *)puVar2);
                      if (local_68 == 0) goto LAB_00e47e24;
                      FUN_01324d60(local_68,*(undefined8 *)
                                             System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo
                                  );
                      FUN_0132138c(lVar8,iVar15,&local_68,*(undefined8 *)puVar2);
                      if (local_68 == 0) goto LAB_00e47e24;
                      iVar16 = 0;
                      while (iVar16 < *(int *)(local_68 + 0x18)) {
                        FUN_0132138c(lVar8,iVar15,&local_68,*(undefined8 *)puVar2);
                        if (local_68 == 0) goto LAB_00e47e24;
                        iVar17 = 0;
                        while( true ) {
                          FUN_0132138c(local_68,iVar16,&local_68,*(undefined8 *)puVar5);
                          if (local_68 == 0) goto LAB_00e47e24;
                          if (*(int *)(local_68 + 0x18) <= iVar17) break;
                          FUN_0132138c(lVar8,iVar15,&local_68,*(undefined8 *)puVar2);
                          if ((local_68 == 0) ||
                             (FUN_0132138c(local_68,iVar16,&local_68,*(undefined8 *)puVar5),
                             local_68 == 0)) goto LAB_00e47e24;
                          FUN_0132138c(local_68,iVar17,&local_68,*(undefined8 *)StringLiteral_4992);
                          FUN_00ac1918(lVar9,local_68,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__
                                      );
                          iVar17 = iVar17 + 1;
                          FUN_0132138c(lVar8,iVar15,&local_68,*(undefined8 *)puVar2);
                          if (local_68 == 0) goto LAB_00e47e24;
                        }
                        iVar16 = iVar16 + 1;
                        FUN_0132138c(lVar8,iVar15,&local_68,*(undefined8 *)puVar2);
                        if (local_68 == 0) goto LAB_00e47e24;
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < *(int *)(lVar8 + 0x18));
                  }
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e47e24;
                  iVar15 = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
                  if (iVar15 == *(int *)(lVar9 + 0x18)) {
                    *(long *)(param_1 + 0x48) = lVar9;
                  }
                  else {
                    local_6c = iVar15;
                    uVar12 = FUN_0176eb1c(&local_6c,0);
                    local_6c = *(int *)(lVar9 + 0x18);
                    uVar13 = FUN_0176eb1c(&local_6c,0);
                    uVar12 = FUN_0160073c(*(undefined8 *)
                                           Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                                          ,uVar12,*(undefined8 *)PTR_DAT_033f7228,uVar13,0);
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)StringLiteral_302);
                    }
                    FUN_02660dac(uVar12,0);
                  }
                }
                puVar2 = StringLiteral_1115;
                lVar8 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
                if (0 < *(int *)(lVar7 + 0x18)) {
                  iVar15 = 0;
                  do {
                    FUN_0132138c(lVar7,iVar15,&local_68,*(undefined8 *)puVar4);
                    if (local_68 == 0) goto LAB_00e47e24;
                    FUN_01324d60(local_68,*(undefined8 *)puVar2);
                    FUN_0132138c(lVar7,iVar15,&local_68,*(undefined8 *)puVar4);
                    if (local_68 == 0) goto LAB_00e47e24;
                    iVar16 = 0;
                    while (iVar16 < *(int *)(local_68 + 0x18)) {
                      FUN_0132138c(lVar7,iVar15,&local_68,*(undefined8 *)puVar4);
                      if (local_68 == 0) goto LAB_00e47e24;
                      iVar17 = 0;
                      while( true ) {
                        FUN_0132138c(local_68,iVar16,&local_68,*(undefined8 *)puVar1);
                        if (local_68 == 0) goto LAB_00e47e24;
                        if (*(int *)(local_68 + 0x10) <= iVar17) break;
                        FUN_0132138c(lVar7,iVar15,&local_68,*(undefined8 *)puVar4);
                        if ((local_68 == 0) ||
                           (FUN_0132138c(local_68,iVar16,&local_68,*(undefined8 *)puVar1),
                           local_68 == 0)) goto LAB_00e47e24;
                        local_70[0] = FUN_015fa29c(local_68,iVar17,0);
                        lVar10 = *(long *)puVar3;
                        if (*(int *)(lVar10 + 0xe0) == 0) {
                          thunk_FUN_00d32864(lVar10);
                        }
                        uVar12 = FUN_016e8b00(local_70,0);
                        lVar8 = FUN_015f5b28(lVar8,uVar12,0);
                        iVar17 = iVar17 + 1;
                        FUN_0132138c(lVar7,iVar15,&local_68,*(undefined8 *)puVar4);
                        if (local_68 == 0) goto LAB_00e47e24;
                      }
                      iVar16 = iVar16 + 1;
                      FUN_0132138c(lVar7,iVar15,&local_68,*(undefined8 *)puVar4);
                      if (local_68 == 0) goto LAB_00e47e24;
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < *(int *)(lVar7 + 0x18));
                }
                if (lVar8 != 0) {
                  if (*(int *)(param_2 + 0x10) != *(int *)(lVar8 + 0x10)) {
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e47e24;
                    local_6c = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
                    uVar12 = FUN_0176eb1c(&local_6c,0);
                    local_6c = *(int *)(lVar9 + 0x18);
                    uVar13 = FUN_0176eb1c(&local_6c,0);
                    uVar12 = FUN_0160073c(*(undefined8 *)
                                           Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__
                                          ,uVar12,*(undefined8 *)PTR_DAT_033f7228,uVar13,0);
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)StringLiteral_302);
                    }
                    FUN_02660dac(uVar12,0);
                    lVar8 = param_2;
                  }
                  return lVar8;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00e47e24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


