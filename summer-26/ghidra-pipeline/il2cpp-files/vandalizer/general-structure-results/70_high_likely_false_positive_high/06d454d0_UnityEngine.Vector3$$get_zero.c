/*
FUNCTION_NAME: UnityEngine.Vector3$$get_zero
ENTRY_POINT: 06d454d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Vector3__get_zero(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 *puVar7;
  long unaff_x23;
  undefined8 *puVar8;
  long unaff_x24;
  undefined8 *puVar9;
  long unaff_x25;
  long unaff_x26;
  undefined8 *puVar10;
  long unaff_x27;
  undefined8 *puVar11;
  long unaff_x28;
  undefined8 *puVar12;
  long unaff_x29;
  undefined8 *puVar13;
  
  puVar1 = PTR_DAT_07621d10;
  puVar9 = *(undefined8 **)(unaff_x24 + 0x968);
  puVar8 = *(undefined8 **)(unaff_x23 + 0xd18);
  puVar5 = *(undefined8 **)(unaff_x20 + 0x970);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x978);
  puVar13 = *(undefined8 **)(unaff_x29 + 0x980);
  puVar12 = *(undefined8 **)(unaff_x28 + 0x988);
  puVar11 = *(undefined8 **)(unaff_x27 + 0x990);
  puVar10 = *(undefined8 **)(unaff_x26 + 0x998);
  if ((*(byte *)(unaff_x25 + 0xe7d) & 1) == 0) {
    FUN_031f20f4(bool___TypeInfo);
    FUN_031f20f4(Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_Event___TypeInfo
                );
    FUN_031f20f4(UnityEngine_InputSystem_Controls_ButtonControl___TypeInfo);
    FUN_031f20f4(System_Linq_Expressions_Interpreter_ByRefUpdater___TypeInfo);
    FUN_031f20f4(byte___TypeInfo);
    FUN_031f20f4(
                UnityEngine_UIElements_UxmlObjectAttributeDescription<SortColumnDescriptions>_TypeInfo
                );
    FUN_031f20f4(System_Globalization_CalendarData___TypeInfo);
    FUN_031f20f4(System_Globalization_CalendarId___TypeInfo);
    FUN_031f20f4(UnityEngine_Camera___TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Crmf_CertReqMsg___TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateEntry___TypeInfo);
    FUN_031f20f4(PTR_DAT_07621d10);
    FUN_031f20f4(PTR_DAT_07621de8);
    FUN_031f20f4(PTR_DAT_07621d18);
    FUN_031f20f4(System_Collections_Generic_List<InstanceType>___TypeInfo);
    FUN_031f20f4(UnityEngine_TextCore_Text_TextProcessingStack<int>___TypeInfo);
    FUN_031f20f4(System_Runtime_Diagnostics_EventDescriptor___TypeInfo);
    FUN_031f20f4(System_Reflection_EventInfo___TypeInfo);
    FUN_031f20f4(System_Exception___TypeInfo);
    FUN_031f20f4(UnityEngine_ExecuteInEditMode___TypeInfo);
    FUN_031f20f4(System_Linq_Expressions_Expression___TypeInfo);
    FUN_031f20f4(sbyte_____TypeInfo);
    FUN_031f20f4(UnityEngine_Android_AndroidLocale___TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_StyleSheets_Syntax_Expression___TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Ess_EssCertID___TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo);
    FUN_031f20f4(System_Runtime_CompilerServices_Ephemeron___TypeInfo);
    FUN_031f20f4(System_ComponentModel_EventDescriptor___TypeInfo);
    FUN_031f20f4(System_Data_ExpressionNode___TypeInfo);
    FUN_031f20f4(System_Enum___TypeInfo);
    FUN_031f20f4(Oculus_Interaction_PoseDetection_FeatureStateDescription___TypeInfo);
    FUN_031f20f4(UnityEngine_InputSystem_XR_FeatureType___TypeInfo);
    FUN_031f20f4(System_Reflection_FieldInfo___TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Ess_EssCertIDv2___TypeInfo);
    FUN_031f20f4(Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo);
    FUN_031f20f4(System_Globalization_EraInfo___TypeInfo);
    FUN_031f20f4(System_Runtime_Serialization_FixupHolder___TypeInfo);
    FUN_031f20f4(UnityEngine_TextCore_Text_FontWeightPair___TypeInfo);
    FUN_031f20f4(Photon_Voice_FrameBuffer___TypeInfo);
    *(undefined1 *)(unaff_x25 + 0xe7d) = 1;
  }
  FUN_068c18ec(param_1,0);
  uVar4 = FUN_03e2fd9c(param_1,*puVar9,*puVar8);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1a8);
  uVar4 = FUN_03e2fd9c(param_1,*puVar5,*puVar8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1b0);
  uVar4 = FUN_03e2fd9c(param_1,*puVar7,*puVar8);
  *(undefined8 *)(param_1 + 0x1b8) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1b8);
  uVar4 = FUN_03e2fd9c(param_1,*puVar13,*puVar8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1c0);
  uVar4 = FUN_03e2fd9c(param_1,*puVar12,*puVar8);
  *(undefined8 *)(param_1 + 0x1c8) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1c8);
  uVar4 = FUN_03e2fd9c(param_1,*puVar11,*puVar8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1d0);
  uVar4 = FUN_03e2fd9c(param_1,*puVar10,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1d8);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)UnityEngine_TextCore_Text_FontWeightPair___TypeInfo,
                       *(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1e0) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1e0);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)UnityEngine_InputSystem_XR_FeatureType___TypeInfo,
                       *puVar8);
  *(undefined8 *)(param_1 + 0x1e8) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1e8);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo,
                       *puVar8);
  *(undefined8 *)(param_1 + 0x1f0) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1f0);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)System_Runtime_Serialization_FixupHolder___TypeInfo,
                       *(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x1f8) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x1f8);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)System_Reflection_FieldInfo___TypeInfo,*puVar8);
  *(undefined8 *)(param_1 + 0x200) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x200);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)
                                UnityEngine_UIElements_StyleSheets_Syntax_Expression___TypeInfo,
                       *puVar8);
  *(undefined8 *)(param_1 + 0x208) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x208);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)System_Data_ExpressionNode___TypeInfo,*puVar8);
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x210);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)
                                Oculus_Interaction_PoseDetection_FeatureStateDescription___TypeInfo,
                       *puVar8);
  *(undefined8 *)(param_1 + 0x218) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x218);
  uVar4 = FUN_03e2fd9c(param_1,*(undefined8 *)Photon_Voice_FrameBuffer___TypeInfo,
                       *(undefined8 *)PTR_DAT_07621de8);
  *(undefined8 *)(param_1 + 0x220) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x220);
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                              UnityEngine_TextCore_Text_TextProcessingStack<int>___TypeInfo);
  FUN_06d38d54();
  *(undefined8 *)(param_1 + 0x228) = uVar4;
  thunk_FUN_0329bf60(param_1 + 0x228,uVar4);
  lVar6 = *(long *)(param_1 + 0x228);
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)bool___TypeInfo);
  FUN_056fa11c(uVar4,param_1,*(undefined8 *)System_Exception___TypeInfo,0);
  puVar3 = System_Runtime_Diagnostics_EventDescriptor___TypeInfo;
  puVar2 = UnityEngine_InputSystem_Controls_ButtonControl___TypeInfo;
  puVar1 = UnityEngine_UIElements_UxmlObjectAttributeDescription<SortColumnDescriptions>_TypeInfo;
  if (lVar6 != 0) {
    FUN_04313708(lVar6,uVar4,*(undefined8 *)UnityEngine_Camera___TypeInfo);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_06d35698();
    *(undefined8 *)(param_1 + 0x230) = uVar4;
    thunk_FUN_0329bf60(param_1 + 0x230,uVar4);
    lVar6 = *(long *)(param_1 + 0x230);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
    FUN_056fa11c(uVar4,param_1,*(undefined8 *)puVar3,0);
    puVar3 = System_Reflection_EventInfo___TypeInfo;
    puVar2 = byte___TypeInfo;
    puVar1 = System_Collections_Generic_List<InstanceType>___TypeInfo;
    if (lVar6 != 0) {
      FUN_04313708(lVar6,uVar4,*(undefined8 *)System_Globalization_CalendarData___TypeInfo);
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
      FUN_06d37f80();
      *(undefined8 *)(param_1 + 0x238) = uVar4;
      thunk_FUN_0329bf60(param_1 + 0x238,uVar4);
      lVar6 = *(long *)(param_1 + 0x238);
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
      FUN_056fa11c(uVar4,param_1,*(undefined8 *)puVar3,0);
      puVar3 = UnityEngine_ExecuteInEditMode___TypeInfo;
      puVar2 = System_Linq_Expressions_Interpreter_ByRefUpdater___TypeInfo;
      puVar1 = sbyte_____TypeInfo;
      if (lVar6 != 0) {
        FUN_04313708(lVar6,uVar4,
                     *(undefined8 *)
                      Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Crmf_CertReqMsg___TypeInfo);
        uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
        FUN_06d39f88();
        *(undefined8 *)(param_1 + 0x240) = uVar4;
        thunk_FUN_0329bf60(param_1 + 0x240,uVar4);
        lVar6 = *(long *)(param_1 + 0x240);
        uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
        FUN_056fa11c(uVar4,param_1,*(undefined8 *)puVar3,0);
        puVar3 = System_Linq_Expressions_Expression___TypeInfo;
        puVar2 = Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_Event___TypeInfo
        ;
        puVar1 = UnityEngine_Android_AndroidLocale___TypeInfo;
        if (lVar6 != 0) {
          FUN_04313708(lVar6,uVar4,
                       *(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateEntry___TypeInfo);
          uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
          FUN_06d3b474();
          *(undefined8 *)(param_1 + 0x248) = uVar4;
          thunk_FUN_0329bf60(param_1 + 0x248,uVar4);
          lVar6 = *(long *)(param_1 + 0x248);
          uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
          FUN_056fa11c(uVar4,param_1,*(undefined8 *)puVar3,0);
          if (lVar6 != 0) {
            FUN_04313708(lVar6,uVar4,*(undefined8 *)System_Globalization_CalendarId___TypeInfo);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


