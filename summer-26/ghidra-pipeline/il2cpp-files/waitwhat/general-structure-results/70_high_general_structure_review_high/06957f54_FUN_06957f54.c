/*
FUNCTION_NAME: FUN_06957f54
ENTRY_POINT: 06957f54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0695841c) */

void FUN_06957f54(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long local_a0;
  long *plStack_98;
  long local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_07559bf1 & 1) == 0) {
    FUN_03188a78(System_Xml_XmlSqlBinaryReader_NamespaceDecl_TypeInfo);
    FUN_03188a78(System_Xml_XmlSqlBinaryReader_QName_TypeInfo);
    FUN_03188a78(System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_ComputeNewRenderPoints_00000D20_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000D21_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo);
    FUN_03188a78(System_Xml_XmlTextReaderImpl_DtdParserProxy_TypeInfo);
    FUN_03188a78(System_Xml_XmlTextReaderImpl_LaterInitParam_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(System_Xml_XmlTextReaderImpl_NoNamespaceManager_TypeInfo);
    FUN_03188a78(System_Xml_XmlTextReaderImpl_NodeData_TypeInfo);
    FUN_03188a78(PTR_DAT_070c7c80);
    FUN_03188a78(System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo);
    FUN_03188a78(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeInfo
                );
    FUN_03188a78(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeInfo
                );
    FUN_03188a78(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_TypeInfo
                );
    DAT_07559bf1 = 1;
  }
  puVar7 = 
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_TypeInfo;
  puVar6 = System_Xml_XmlTextReaderImpl_NodeData_TypeInfo;
  puVar5 = System_Xml_XmlSqlBinaryReader_NamespaceDecl_TypeInfo;
  puVar4 = System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000D21_PostfixBurstDelegate_TypeInfo
  ;
  puVar2 = PTR_DAT_070c7c80;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = (long *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_042e54fc(&local_a0,param_2,
               *(undefined8 *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo)
  ;
  local_70 = local_90;
  uStack_78 = plStack_98;
  local_80 = local_a0;
  local_a0 = 0;
  plStack_98 = &local_80;
  do {
    do {
      do {
        uVar9 = FUN_054518b4(&local_80,*(undefined8 *)puVar3);
        lVar8 = local_70;
        lVar10 = local_a0;
        if ((uVar9 & 1) == 0) {
          FUN_054518b0(plStack_98,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_ComputeNewRenderPoints_00000D20_PostfixBurstDelegate_TypeInfo
                      );
          if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd0(lVar10);
          }
          return;
        }
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar10 = *(long *)puVar7;
        uVar15 = *(undefined8 *)(local_70 + 0x20);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar10 = *(long *)puVar7;
        }
        puVar12 = *(undefined8 **)(lVar10 + 0xb8);
        lVar16 = puVar12[1];
        if (lVar16 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
          }
          uVar17 = *puVar12;
          lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)System_Xml_XmlTextReaderImpl_DtdParserProxy_TypeInfo);
          FUN_03dfd060(lVar16,uVar17,
                       *(undefined8 *)
                        Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeInfo
                       ,0);
          *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = lVar16;
        }
        uVar15 = FUN_03a93870(uVar15,lVar16,
                              *(undefined8 *)
                               System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeInfo
                             );
        uVar9 = FUN_03a69f28(uVar15,*(undefined8 *)puVar5);
      } while ((uVar9 & 1) == 0);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar10 = *(long *)puVar7;
      uVar15 = *(undefined8 *)(param_3 + 0x28);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar10 = *(long *)puVar7;
      }
      puVar12 = *(undefined8 **)(lVar10 + 0xb8);
      lVar16 = puVar12[2];
      if (lVar16 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar17 = *puVar12;
        lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)System_Xml_XmlTextReaderImpl_LaterInitParam_TypeInfo);
        FUN_03dfd060(lVar16,uVar17,
                     *(undefined8 *)
                      Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeInfo
                     ,0);
        *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10) = lVar16;
      }
      plVar11 = (long *)FUN_03a93870(uVar15,lVar16,
                                     *(undefined8 *)System_Xml_XmlSqlBinaryReader_QName_TypeInfo);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar10 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Xml_XmlTextReaderImpl_NoNamespaceManager_TypeInfo) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06958264;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_031c0d08(plVar11,*(long *)
                                      System_Xml_XmlTextReaderImpl_NoNamespaceManager_TypeInfo,0);
LAB_06958264:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
joined_r0x06958280:
      local_88 = plVar11;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar10 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_069582d0;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*(long *)puVar2,0);
LAB_069582d0:
      uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      plVar11 = local_88;
      if ((uVar9 & 1) != 0) {
        if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar10 = *local_88;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06958334;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_031c0d08(local_88,*(long *)puVar6,0);
LAB_06958334:
        uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        lVar10 = *(long *)(lVar8 + 0x28);
        if (lVar10 == 0) {
LAB_06958420:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar16 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_06958420;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          plVar11 = local_88;
        }
        else {
          FUN_042e4a64(lVar10,uVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          plVar11 = local_88;
        }
        goto joined_r0x06958280;
      }
    } while (local_88 == (long *)0x0);
    lVar10 = *local_88;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_070c2e88) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0695840c;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_031c0d08(local_88,*(long *)PTR_DAT_070c2e88,0);
LAB_0695840c:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  } while( true );
}


