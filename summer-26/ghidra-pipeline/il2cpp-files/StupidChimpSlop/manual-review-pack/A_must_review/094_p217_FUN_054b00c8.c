/*
FUNCTION_NAME: FUN_054b00c8
ENTRY_POINT: 054b00c8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_054b00c8(long param_1,long param_2,long *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  uint uVar28;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  
  if ((DAT_06a53ace & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06649f98);
    FUN_02d4dc40(System_Xml_XmlLoader_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_VectorImageManager_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_TimerState_TypeInfo);
    FUN_02d4dc40(System_Net_ResponseStream_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066492c0);
    FUN_02d4dc40(PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo);
    FUN_02d4dc40(System_Security_SecurityDocument_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                );
    FUN_02d4dc40(System_Xml_Serialization_XmlMembersMapping_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0665b5f8);
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_SubInstruction_TypeInfo);
    FUN_02d4dc40(System_Net_WebException_TypeInfo);
    FUN_02d4dc40(Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo);
    FUN_02d4dc40(UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo);
    FUN_02d4dc40(System_Xml_Schema_XmlMiscConverter_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRMovableBody_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_Scroller_TypeInfo);
    FUN_02d4dc40(UnityEngine_Experimental_Rendering_XROcclusionMesh_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_StyleVariableResolver_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664aa98);
    FUN_02d4dc40(System_Xml_XmlName_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06653048);
    FUN_02d4dc40(System_Net_WebUtility_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlNameEx_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlNamedNodeMap_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo);
    FUN_02d4dc40(Photon_Realtime_IConnectionCallbacks_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_XROrigin_TypeInfo);
    FUN_02d4dc40(System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06649350);
    FUN_02d4dc40(System_Xml_XmlNamespaceManager_TypeInfo);
    FUN_02d4dc40(System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlEventCache_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginMovement_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f700);
    FUN_02d4dc40(System_Xml_Linq_XDocument_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_TypeInfo);
    FUN_02d4dc40(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlNode_TypeInfo);
    FUN_02d4dc40(System_Net_WebPermission_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647d30);
    FUN_02d4dc40(System_Xml_Schema_XmlListConverter_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664d150);
    FUN_02d4dc40(System_Xml_XmlNodeChangedEventArgs_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06646708);
    FUN_02d4dc40(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_T15>_var
                );
    FUN_02d4dc40(PTR_DAT_0664d098);
    FUN_02d4dc40(System_Xml_Linq_XDocumentType_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664bf98);
    FUN_02d4dc40(System_Xml_XmlEncodedRawTextWriter_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b148);
    FUN_02d4dc40(System_Runtime_Remoting_Messaging_ServerContextTerminatorSink_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647c80);
    DAT_06a53ace = 1;
  }
  local_64[0] = 0;
  local_68 = 0;
  if ((param_3 == (long *)0x0) ||
     (plVar9 = (long *)(**(code **)(*param_3 + 0x5a8))
                                 (param_3,*(undefined8 *)System_Net_WebPermission_TypeInfo,
                                  *(undefined8 *)PTR_DAT_0665b5f8,*(undefined8 *)PTR_DAT_0664d098,
                                  *(undefined8 *)(*param_3 + 0x5b0)),
     puVar26 = (undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo, param_2 == 0))
  goto LAB_054b29e0;
  if (*(long *)(param_2 + 0x20) == 0) {
LAB_054b044c:
    if (*(int *)(param_1 + 0x5c) != 2) goto LAB_054b04a0;
    uVar10 = FUN_05418ef4(param_2,0);
    if (plVar9 == (long *)0x0) goto LAB_054b29e0;
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)System_Net_WebException_TypeInfo,*puVar26,uVar10,
               *(undefined8 *)(*plVar9 + 0x520));
    uVar10 = FUN_05420c80(param_2,0);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar10 = FUN_05418ef4(param_2,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_054b29e0;
      uVar11 = FUN_04e7eb78(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),0);
      if ((uVar11 & 1) != 0) goto LAB_054b044c;
    }
LAB_054b04a0:
    uVar10 = FUN_05420c80(param_2,0);
    if (plVar9 == (long *)0x0) goto LAB_054b29e0;
  }
  (**(code **)(*plVar9 + 0x4d8))
            (plVar9,*(undefined8 *)PTR_DAT_0664d150,uVar10,*(undefined8 *)(*plVar9 + 0x4e0));
  lVar12 = FUN_05418ef4(param_2,0);
  if (lVar12 == 0) goto LAB_054b29e0;
  if (*(int *)(lVar12 + 0x10) == 0) {
    uVar10 = FUN_05418ef4(param_2,0);
    uVar11 = FUN_04e7faf0(uVar10,0);
    lVar12 = param_2;
    while ((uVar11 & 1) != 0) {
      lVar25 = *(long *)(lVar12 + 0x188);
      if (lVar25 == 0) goto LAB_054b29e0;
      uVar11 = *(ulong *)(lVar25 + 0x18);
      puVar26 = (undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
      if (uVar11 == 0) {
        puVar24 = (undefined8 *)PTR_DAT_06646708;
        if (*(long *)(param_1 + 0x30) != 0) {
          puVar24 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
        }
        uVar10 = *puVar24;
        break;
      }
      if ((int)uVar11 < 1) break;
      lVar27 = 0;
      while( true ) {
        if ((uint)uVar11 <= (uint)lVar27) goto LAB_054b29e4;
        plVar13 = *(long **)(lVar25 + 0x20 + lVar27 * 8);
        if (plVar13 == (long *)0x0) goto LAB_054b29e0;
        lVar14 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
        if (lVar14 != lVar12) break;
        uVar11 = (ulong)*(uint *)(lVar25 + 0x18);
        lVar27 = lVar27 + 1;
        puVar26 = (undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
        if ((int)*(uint *)(lVar25 + 0x18) <= (int)lVar27) goto LAB_054b05dc;
      }
      if (*(uint *)(lVar25 + 0x18) <= (uint)lVar27) {
LAB_054b29e4:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      plVar13 = *(long **)(lVar25 + 0x20 + lVar27 * 8);
      if ((plVar13 == (long *)0x0) ||
         (lVar12 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0)),
         puVar26 = (undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo, lVar12 == 0))
      goto LAB_054b29e0;
      uVar10 = FUN_05418ef4(lVar12,0);
      uVar11 = FUN_04e7faf0(uVar10,0);
    }
LAB_054b05dc:
    uVar15 = FUN_05418ef4(param_2,0);
    uVar11 = FUN_04e7eb78(uVar15,uVar10,0);
    if ((uVar11 & 1) == 0) goto LAB_054b0634;
    (**(code **)(*plVar9 + 0x4d8))
              (plVar9,*(undefined8 *)System_Xml_XmlNamespaceManager_TypeInfo,
               *(undefined8 *)System_Xml_XmlNode_TypeInfo,*(undefined8 *)(*plVar9 + 0x4e0));
    bVar2 = true;
  }
  else {
LAB_054b0634:
    bVar2 = false;
  }
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo;
  if (*(char *)(param_2 + 0xe9) != '\0') {
    local_64[0] = *(undefined1 *)(param_2 + 0xe8);
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar10 = FUN_04f71bb0(local_64,0);
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)puVar3,*puVar26,uVar10,*(undefined8 *)(*plVar9 + 0x520));
  }
  puVar3 = System_Xml_Linq_XDocumentType_TypeInfo;
  if (*(char *)(param_2 + 0xc0) != '\0') {
    plVar13 = *(long **)(param_2 + 0xb8);
    if (plVar13 == (long *)0x0) goto LAB_054b29e0;
    uVar10 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)puVar3,*puVar26,uVar10,*(undefined8 *)(*plVar9 + 0x520));
  }
  FUN_054a8400(param_1,param_2,plVar9,param_3);
  plVar13 = *(long **)(param_2 + 0x40);
  if (plVar13 == (long *)0x0) goto LAB_054b29e0;
  iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
  if (iVar4 - 1U < 2) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      plVar16 = (long *)FUN_05453a84(plVar13,iVar8,0);
      if (plVar16 == (long *)0x0) goto LAB_054b29e0;
      iVar5 = (**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
      if (iVar5 == 4) {
        plVar17 = (long *)FUN_0541ebf0(param_2,0);
        if (plVar17 == (long *)0x0) goto LAB_054b29e0;
        iVar5 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            plVar18 = (long *)(**(code **)(*plVar17 + 0x208))
                                        (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
            if (plVar18 == (long *)0x0) goto LAB_054b29e0;
            uVar11 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
            if ((uVar11 & 1) != 0) {
              lVar12 = (**(code **)(*plVar17 + 0x208))
                                 (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
              if ((lVar12 == 0) || (lVar12 = FUN_05455740(lVar12,0), lVar12 == 0))
              goto LAB_054b29e0;
              if (*(int *)(lVar12 + 0x18) == 1) {
                lVar12 = (**(code **)(*plVar17 + 0x208))
                                   (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
                if ((lVar12 == 0) || (lVar12 = FUN_05455740(lVar12,0), lVar12 == 0))
                goto LAB_054b29e0;
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_054b29e4;
                if (*(long **)(lVar12 + 0x20) == plVar16) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
          } while (iVar5 < iVar6);
        }
      }
      iVar5 = (**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
      iVar8 = iVar8 + 1;
      if (iVar5 == 1) {
        iVar7 = iVar7 + 1;
      }
    } while (iVar8 != iVar4);
    if ((*(char *)(param_2 + 0x128) != '\0') && (iVar7 == 1)) {
      if ((*(long *)(param_2 + 0x40) != 0) &&
         (lVar12 = FUN_05453a84(*(long *)(param_2 + 0x40),0,0), lVar12 != 0)) {
        lVar12 = FUN_054a8e44(*(undefined8 *)(lVar12 + 0x38));
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) == 0)) {
          lVar12 = *(long *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
        }
        if (*(int *)(*(long *)System_Security_SecurityDocument_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar10 = FUN_05490e54(lVar12,0);
        (**(code **)(*plVar9 + 0x4d8))
                  (plVar9,*(undefined8 *)PTR_DAT_0664b148,uVar10,*(undefined8 *)(*plVar9 + 0x4e0));
        return plVar9;
      }
      goto LAB_054b29e0;
    }
  }
  puVar26 = (undefined8 *)PTR_DAT_0664d098;
  plVar16 = (long *)(**(code **)(*param_3 + 0x5a8))
                              (param_3,*(undefined8 *)System_Net_WebPermission_TypeInfo,
                               *(undefined8 *)System_Xml_Schema_XmlListConverter_TypeInfo,
                               *(undefined8 *)PTR_DAT_0664d098,*(undefined8 *)(*param_3 + 0x5b0));
  lVar12 = FUN_0541b6d0(param_2,0);
  if (lVar12 == 0) goto LAB_054b29e0;
  uVar11 = FUN_05666158(lVar12,0);
  if (((uVar11 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    lVar12 = FUN_0541b6d0(param_2,0);
    if (lVar12 == 0) goto LAB_054b29e0;
    plVar17 = (long *)FUN_054b3004(param_1,*(undefined8 *)(lVar12 + 0x18));
    lVar12 = FUN_0541b6d0(param_2,0);
    if (lVar12 == 0) goto LAB_054b29e0;
    uVar11 = FUN_04e7faf0(*(undefined8 *)(lVar12 + 0x18),0);
    if ((uVar11 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) || (!bVar2)) {
        uVar10 = FUN_05418ef4(param_2,0);
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
      }
      plVar17 = (long *)FUN_054b3004(param_1,uVar10);
    }
    lVar12 = FUN_0541b6d0(param_2,0);
    if (lVar12 == 0) goto LAB_054b29e0;
    lVar12 = FUN_054b48a4(lVar12,plVar17,*(undefined8 *)(lVar12 + 0x10));
    if (lVar12 == 0) {
      if (plVar17 == (long *)0x0) goto LAB_054b29e0;
      (**(code **)(*plVar17 + 0x2c8))(plVar17,plVar16,*(undefined8 *)(*plVar17 + 0x2d0));
    }
    lVar12 = FUN_0541b6d0(param_2,0);
    if ((lVar12 == 0) || (plVar16 == (long *)0x0)) goto LAB_054b29e0;
    (**(code **)(*plVar16 + 0x4d8))
              (plVar16,*(undefined8 *)PTR_DAT_0664d150,*(undefined8 *)(lVar12 + 0x10),
               *(undefined8 *)(*plVar16 + 0x4e0));
  }
  else {
    (**(code **)(*plVar9 + 0x2c8))(plVar9,plVar16,*(undefined8 *)(*plVar9 + 0x2d0));
  }
  lVar12 = FUN_0541b6d0(param_2,0);
  if (lVar12 == 0) goto LAB_054b29e0;
  uVar11 = FUN_05666158(lVar12,0);
  if (((uVar11 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    plVar17 = *(long **)(param_1 + 0x28);
    lVar12 = FUN_0541b6d0(param_2,0);
    if ((lVar12 == 0) || (plVar17 == (long *)0x0)) goto LAB_054b29e0;
    plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                (plVar17,*(undefined8 *)(lVar12 + 0x18),
                                 *(undefined8 *)(*plVar17 + 0x310));
    lVar12 = FUN_0541b6d0(param_2,0);
    if (lVar12 == 0) goto LAB_054b29e0;
    if ((plVar17 != (long *)0x0) && (*plVar17 != *(long *)(PTR_DAT_066462a0 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268(plVar17,*(long *)(PTR_DAT_066462a0 + 0x90));
    }
    uVar10 = FUN_054b5174(plVar17,*(undefined8 *)(lVar12 + 0x10));
    (**(code **)(*plVar9 + 0x4d8))
              (plVar9,*(undefined8 *)PTR_DAT_0664b148,uVar10,*(undefined8 *)(*plVar9 + 0x4e0));
  }
  lVar12 = *(long *)(param_2 + 0xf8);
  puVar24 = (undefined8 *)System_Net_WebPermission_TypeInfo;
  if (lVar12 != 0) {
    plVar17 = (long *)(**(code **)(*param_3 + 0x5a8))
                                (param_3,*(undefined8 *)System_Net_WebPermission_TypeInfo,
                                 *(undefined8 *)System_Xml_Schema_XmlMiscConverter_TypeInfo,*puVar26
                                 ,*(undefined8 *)(*param_3 + 0x5b0));
    uVar10 = thunk_FUN_02d5dae8(lVar12,0);
    uVar15 = *(undefined8 *)System_Xml_XmlLoader_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)(PTR_DAT_066462a0 + 0xe0));
    }
    uVar15 = FUN_050121a8(uVar15,0);
    uVar11 = FUN_0501bc88(uVar10,uVar15,0);
    puVar3 = UnityEngine_UIElements_Scroller_TypeInfo;
    if ((uVar11 & 1) == 0) {
      FUN_054b36f0(param_1,lVar12,plVar17);
    }
    else {
      FUN_054a8400(param_1,lVar12,plVar17,param_3);
    }
    FUN_054a7d28(*(undefined8 *)(lVar12 + 0xa0),plVar17,0);
    if (*(char *)(lVar12 + 0x20) != '\0') {
      (**(code **)(*plVar9 + 0x518))
                (plVar9,*(undefined8 *)System_Xml_XmlNameEx_TypeInfo,
                 **(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8),
                 *(undefined8 *)PTR_DAT_06647d30,*(undefined8 *)(*plVar9 + 0x520));
    }
    if (*(char *)(lVar12 + 0x95) == '\0') {
      FUN_054aa87c(*(undefined8 *)(lVar12 + 0x38));
      uVar10 = FUN_05432820(lVar12,0);
      uVar10 = FUN_054325b4(lVar12,uVar10,0);
      if (plVar17 == (long *)0x0) goto LAB_054b29e0;
      (**(code **)(*plVar17 + 0x518))
                (plVar17,*(undefined8 *)UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo,
                 *(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar17 + 0x520));
    }
    else if (plVar17 == (long *)0x0) goto LAB_054b29e0;
    (**(code **)(*plVar17 + 0x518))
              (plVar17,*(undefined8 *)
                        System_Runtime_Remoting_Messaging_ServerContextTerminatorSink_TypeInfo,
               *(undefined8 *)puVar3,*(undefined8 *)(lVar12 + 0x30),
               *(undefined8 *)(*plVar17 + 0x520));
    local_68 = *(undefined4 *)(lVar12 + 100);
    if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar10 = FUN_04f9d780(0);
    uVar10 = FUN_05000798(&local_68,uVar10,0);
    (**(code **)(*plVar17 + 0x518))
              (plVar17,*(undefined8 *)System_Xml_Linq_XDocument_TypeInfo,*(undefined8 *)puVar3,
               uVar10,*(undefined8 *)(*plVar17 + 0x520));
    if (plVar16 == (long *)0x0) goto LAB_054b29e0;
    (**(code **)(*plVar16 + 0x2c8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2d0));
    puVar24 = (undefined8 *)System_Net_WebPermission_TypeInfo;
    puVar26 = (undefined8 *)PTR_DAT_0664d098;
    plVar16 = (long *)(**(code **)(*param_3 + 0x5a8))
                                (param_3,*(undefined8 *)System_Net_WebPermission_TypeInfo,
                                 *(undefined8 *)PTR_DAT_0664f700,*(undefined8 *)PTR_DAT_0664d098,
                                 *(undefined8 *)(*param_3 + 0x5b0));
    (**(code **)(*plVar17 + 0x2c8))(plVar17,plVar16,*(undefined8 *)(*plVar17 + 0x2d0));
    FUN_054b3298(param_1,lVar12,param_3,plVar16);
  }
  plVar17 = (long *)(**(code **)(*param_3 + 0x5a8))
                              (param_3,*puVar24,*(undefined8 *)System_Xml_XmlName_TypeInfo,*puVar26,
                               *(undefined8 *)(*param_3 + 0x5b0));
  if (plVar16 == (long *)0x0) goto LAB_054b29e0;
  uVar10 = (**(code **)(*plVar16 + 0x2c8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2d0));
  FUN_054b4b90(uVar10,param_2);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      plVar18 = (long *)FUN_05453a84(plVar13,iVar8,0);
      if (plVar18 == (long *)0x0) goto LAB_054b29e0;
      iVar7 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
      if ((iVar7 != 3) &&
         ((((iVar7 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240)),
            iVar7 == 2 ||
            (iVar7 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240)),
            iVar7 == 1)) ||
           (iVar7 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240)),
           iVar7 == 4)) && (uVar11 = FUN_054b5130(param_1,plVar18), (uVar11 & 1) == 0)))) {
        iVar7 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240));
        uVar10 = FUN_054b3dec(param_1,plVar18,param_3);
        plVar18 = plVar17;
        if (iVar7 != 1) {
          plVar18 = plVar16;
        }
        if (plVar18 == (long *)0x0) goto LAB_054b29e0;
        (**(code **)(*plVar18 + 0x2c8))(plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x2d0));
      }
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  puVar26 = (undefined8 *)System_Net_WebPermission_TypeInfo;
  if ((*(long *)(param_2 + 0xf8) == 0) && ((param_5 & 1) != 0)) {
    plVar13 = (long *)FUN_0541ebf0(param_2,0);
    if (plVar13 == (long *)0x0) goto LAB_054b29e0;
    iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        plVar18 = (long *)(**(code **)(*plVar13 + 0x208))
                                    (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
        if (plVar18 == (long *)0x0) goto LAB_054b29e0;
        uVar11 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
        if ((uVar11 & 1) != 0) {
          plVar18 = (long *)(**(code **)(*plVar13 + 0x208))
                                      (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
          if (plVar18 == (long *)0x0) goto LAB_054b29e0;
          lVar12 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
          if (lVar12 == param_2) {
            plVar18 = (long *)(**(code **)(*param_3 + 0x5a8))
                                        (param_3,*puVar26,*(undefined8 *)PTR_DAT_0665b5f8,
                                         *(undefined8 *)PTR_DAT_0664d098,
                                         *(undefined8 *)(*param_3 + 0x5b0));
            lVar25 = param_2;
LAB_054b1054:
            uVar10 = FUN_05420c80(lVar25,0);
            if (plVar18 == (long *)0x0) goto LAB_054b29e0;
            (**(code **)(*plVar18 + 0x4d8))
                      (plVar18,*(undefined8 *)PTR_DAT_06653048,uVar10,
                       *(undefined8 *)(*plVar18 + 0x4e0));
          }
          else {
            if (lVar12 == 0) goto LAB_054b29e0;
            iVar8 = FUN_0541fef8(lVar12,0);
            if (1 < iVar8) {
              plVar18 = (long *)(**(code **)(*param_3 + 0x5a8))
                                          (param_3,*puVar26,*(undefined8 *)PTR_DAT_0665b5f8,
                                           *(undefined8 *)PTR_DAT_0664d098,
                                           *(undefined8 *)(*param_3 + 0x5b0));
              lVar25 = lVar12;
              goto LAB_054b1054;
            }
            plVar18 = (long *)FUN_054b00c8(param_1,lVar12,param_3,param_4,1);
          }
          uVar10 = FUN_05418ef4(lVar12,0);
          uVar15 = FUN_05418ef4(param_2,0);
          uVar11 = thunk_FUN_04e7e884(uVar10,uVar15,0);
          if ((uVar11 & 1) != 0) {
            if (plVar18 == (long *)0x0) goto LAB_054b29e0;
            (**(code **)(*plVar18 + 0x4d8))
                      (plVar18,*(undefined8 *)Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo,
                       *(undefined8 *)PTR_DAT_06647c80,*(undefined8 *)(*plVar18 + 0x4e0));
            (**(code **)(*plVar18 + 0x4d8))
                      (plVar18,*(undefined8 *)System_Net_WebUtility_TypeInfo,
                       *(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_TypeInfo,
                       *(undefined8 *)(*plVar18 + 0x4e0));
          }
          uVar10 = FUN_05418ef4(lVar12,0);
          uVar15 = FUN_05418ef4(param_2,0);
          uVar11 = thunk_FUN_04e7e884(uVar10,uVar15,0);
          if ((uVar11 & 1) == 0) {
            lVar25 = FUN_05418ef4(lVar12,0);
            if (lVar25 == 0) goto LAB_054b29e0;
            if ((*(int *)(lVar25 + 0x10) != 0) && (*(int *)(param_1 + 0x5c) != 2)) {
              iVar8 = FUN_0541fef8(lVar12,0);
              puVar3 = PTR_DAT_0664d098;
              if (iVar8 < 2) {
                uVar10 = FUN_05418ef4(lVar12,0);
                plVar19 = (long *)FUN_054b3004(param_1,uVar10);
                if (plVar19 == (long *)0x0) goto LAB_054b29e0;
                (**(code **)(*plVar19 + 0x2c8))(plVar19,plVar18,*(undefined8 *)(*plVar19 + 0x2d0));
              }
              plVar18 = (long *)(**(code **)(*param_3 + 0x5a8))
                                          (param_3,*puVar26,*(undefined8 *)PTR_DAT_0665b5f8,
                                           *(undefined8 *)puVar3,*(undefined8 *)(*param_3 + 0x5b0));
              plVar19 = *(long **)(param_1 + 0x28);
              uVar10 = FUN_05418ef4(lVar12,0);
              if (plVar19 == (long *)0x0) goto LAB_054b29e0;
              plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                          (plVar19,uVar10,*(undefined8 *)(*plVar19 + 0x310));
              uVar10 = FUN_05420c80(lVar12,0);
              if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_066462a0 + 0x90)))
              goto LAB_054b29fc;
              uVar10 = FUN_04e80678(plVar19,*(undefined8 *)PTR_DAT_06649350,uVar10,0);
              if (plVar18 == (long *)0x0) goto LAB_054b29e0;
              (**(code **)(*plVar18 + 0x4d8))
                        (plVar18,*(undefined8 *)PTR_DAT_06653048,uVar10,
                         *(undefined8 *)(*plVar18 + 0x4e0));
              puVar26 = (undefined8 *)System_Net_WebPermission_TypeInfo;
            }
          }
          if (plVar17 == (long *)0x0) goto LAB_054b29e0;
          (**(code **)(*plVar17 + 0x2c8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2d0));
          plVar19 = (long *)(**(code **)(*plVar13 + 0x208))
                                      (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
          if (plVar19 == (long *)0x0) goto LAB_054b29e0;
          lVar12 = (**(code **)(*plVar19 + 0x208))(plVar19,*(undefined8 *)(*plVar19 + 0x210));
          if (lVar12 == 0) {
            plVar19 = *(long **)(param_1 + 0x48);
            if ((plVar19 == (long *)0x0) ||
               (plVar19 = (long *)(**(code **)(*plVar19 + 0x5a8))
                                            (plVar19,*puVar26,
                                             *(undefined8 *)
                                              System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_T15>_var
                                             ,*(undefined8 *)PTR_DAT_0664d098,
                                             *(undefined8 *)(*plVar19 + 0x5b0)),
               plVar18 == (long *)0x0)) goto LAB_054b29e0;
            (**(code **)(*plVar18 + 0x2b8))(plVar18,plVar19,*(undefined8 *)(*plVar18 + 0x2c0));
            plVar18 = *(long **)(param_1 + 0x48);
            if ((plVar18 == (long *)0x0) ||
               (plVar18 = (long *)(**(code **)(*plVar18 + 0x5a8))
                                            (plVar18,*puVar26,
                                             *(undefined8 *)System_Xml_XmlEventCache_TypeInfo,
                                             *(undefined8 *)PTR_DAT_0664d098,
                                             *(undefined8 *)(*plVar18 + 0x5b0)),
               plVar19 == (long *)0x0)) goto LAB_054b29e0;
            (**(code **)(*plVar19 + 0x2c8))(plVar19,plVar18,*(undefined8 *)(*plVar19 + 0x2d0));
            uVar10 = (**(code **)(*plVar13 + 0x208))
                               (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
            uVar10 = FUN_054af638(param_1,uVar10,param_3);
            if (plVar18 == (long *)0x0) goto LAB_054b29e0;
            (**(code **)(*plVar18 + 0x2c8))(plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x2d0));
          }
        }
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      } while (iVar4 < iVar8);
    }
  }
  if ((plVar17 != (long *)0x0) &&
     (uVar11 = (**(code **)(*plVar17 + 0x318))(plVar17,*(undefined8 *)(*plVar17 + 800)),
     (uVar11 & 1) == 0)) {
    (**(code **)(*plVar16 + 0x2a8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2b0));
  }
  plVar13 = *(long **)(param_2 + 0x48);
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_054b1434:
    puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
    if (lVar12 == 0) goto LAB_054b29e0;
    puVar24 = (undefined8 *)System_Xml_XmlNodeChangedEventArgs_TypeInfo;
    if (*(int *)(lVar12 + 0x10) == 0) goto LAB_054b1434;
  }
  if (*(int *)(param_1 + 0x5c) == 2) {
LAB_054b14f4:
    local_70 = *puVar24;
  }
  else {
    uVar10 = FUN_05418ef4(param_2,0);
    FUN_054b3004(param_1,uVar10);
    lVar12 = FUN_05418ef4(param_2,0);
    if (lVar12 == 0) goto LAB_054b29e0;
    if (*(int *)(lVar12 + 0x10) == 0) {
      puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
      goto LAB_054b14f4;
    }
    plVar16 = *(long **)(param_1 + 0x28);
    uVar10 = FUN_05418ef4(param_2,0);
    if (plVar16 == (long *)0x0) goto LAB_054b29e0;
    plVar19 = (long *)(**(code **)(*plVar16 + 0x308))
                                (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x310));
    if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_066462a0 + 0x90))) {
LAB_054b29fc:
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268(plVar19);
    }
    local_70 = FUN_04e723e0(plVar19,*(undefined8 *)PTR_DAT_06649350,0);
  }
  if (plVar13 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      plVar16 = (long *)System_Net_ResponseStream_TypeInfo;
      plVar17 = (long *)PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo;
      do {
        plVar18 = (long *)FUN_054500a4(plVar13,iVar4,0);
        if (plVar18 == (long *)0x0) {
LAB_054b156c:
          plVar18 = (long *)FUN_054500a4(plVar13,iVar4,0);
          if (plVar18 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar16 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar18 + 0x130)) &&
                (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) == *plVar16)) &&
               ((param_5 & 1) != 0)) {
              plVar18 = (long *)FUN_054500a4(plVar13,iVar4,0);
              if (plVar18 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar16 + 0x130);
                if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *plVar16)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4e268(plVar18);
                }
              }
              plVar19 = *(long **)(param_1 + 0x38);
              if (plVar19 == (long *)0x0) goto LAB_054b29e0;
              iVar8 = (**(code **)(*plVar19 + 0x298))(plVar19,*(undefined8 *)(*plVar19 + 0x2a0));
              if (iVar8 < 1) {
                uVar11 = FUN_054b5130(param_1,plVar18);
                if ((uVar11 & 1) == 0) {
                  if (plVar18 == (long *)0x0) goto LAB_054b29e0;
LAB_054b1c30:
                  plVar16 = (long *)FUN_0547ef10(plVar18,0);
                  lVar12 = FUN_0547e790(plVar18,0);
                  lVar25 = (**(code **)(*plVar18 + 0x2c8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                  if (lVar25 == 0) goto LAB_054b29e0;
                  lVar25 = *(long *)(lVar25 + 0x48);
                  uVar10 = thunk_FUN_02d8a638(*plVar17);
                  FUN_05488ecc(uVar10,*(undefined8 *)System_Xml_XmlEncodedRawTextWriter_TypeInfo,
                               lVar12,0);
                  puVar26 = (undefined8 *)PTR_DAT_0664d098;
                  if (lVar25 == 0) goto LAB_054b29e0;
                  plVar19 = (long *)FUN_054507ac(lVar25,uVar10,0);
                  if (plVar19 == (long *)0x0) {
                    plVar17 = (long *)(**(code **)(*param_3 + 0x5a8))
                                                (param_3,*(undefined8 *)
                                                          System_Net_WebPermission_TypeInfo,
                                                 *(undefined8 *)PTR_DAT_0664bf98,*puVar26,
                                                 *(undefined8 *)(*param_3 + 0x5b0));
                    uVar10 = FUN_0544fcb0(plVar18,0);
                    if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4)
                        == 0) {
                      thunk_FUN_02dabd98(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var);
                    }
                    uVar10 = FUN_0565abac(uVar10,0);
                    if (plVar17 == (long *)0x0) goto LAB_054b29e0;
                    (**(code **)(*plVar17 + 0x4d8))
                              (plVar17,*(undefined8 *)PTR_DAT_0664d150,uVar10,
                               *(undefined8 *)(*plVar17 + 0x4e0));
                    if (*(long *)(param_1 + 0x30) == 0) {
LAB_054b1dc0:
                      uVar10 = FUN_05418ef4(param_2,0);
                      (**(code **)(*plVar17 + 0x518))
                                (plVar17,*(undefined8 *)
                                          UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo
                                 ,*(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,uVar10,
                                 *(undefined8 *)(*plVar17 + 0x520));
                    }
                    else {
                      lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                      if (lVar25 == 0) goto LAB_054b29e0;
                      iVar8 = FUN_054626e8(lVar25,*(undefined8 *)(param_2 + 0x90),0);
                      if (iVar8 == -3) goto LAB_054b1dc0;
                    }
                    plVar21 = (long *)(**(code **)(*param_3 + 0x5a8))
                                                (param_3,*(undefined8 *)
                                                          System_Net_WebPermission_TypeInfo,
                                                 *(undefined8 *)PTR_DAT_0664aa98,*puVar26,
                                                 *(undefined8 *)(*param_3 + 0x5b0));
                    lVar25 = (**(code **)(*plVar18 + 0x2c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                    if (lVar25 == 0) goto LAB_054b29e0;
                    uVar10 = FUN_05420c80(lVar25,0);
                    uVar10 = FUN_04e80678(*(undefined8 *)
                                           System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo
                                          ,local_70,uVar10,0);
                    if (plVar21 == (long *)0x0) goto LAB_054b29e0;
                    (**(code **)(*plVar21 + 0x4d8))
                              (plVar21,*(undefined8 *)
                                        System_Xml_Serialization_XmlMembersMapping_TypeInfo,uVar10,
                               *(undefined8 *)(*plVar21 + 0x4e0));
                    (**(code **)(*plVar17 + 0x2c8))
                              (plVar17,plVar21,*(undefined8 *)(*plVar17 + 0x2d0));
                    if (lVar12 == 0) goto LAB_054b29e0;
                    if (*(long *)(lVar12 + 0x18) != 0) {
                      plVar21 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066492c0);
                      FUN_04e89168(plVar21,0);
                      if (0 < *(int *)(lVar12 + 0x18)) {
                        if (plVar21 == (long *)0x0) goto LAB_054b29e0;
                        lVar27 = 0;
                        lVar25 = lVar12 + 0x20;
                        do {
                          FUN_04e8a18c(plVar21,0,0);
                          uVar28 = (uint)lVar27;
                          if (*(int *)(param_1 + 0x5c) == 2) {
                            plVar20 = (long *)FUN_04e8aac8(plVar21,local_70,0);
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if ((lVar14 == 0) ||
                               (uVar10 = FUN_0543229c(lVar14,0), plVar20 == (long *)0x0))
                            goto LAB_054b29e0;
                          }
                          else {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_054b29e0;
                            uVar10 = FUN_05433ec8(lVar14,0);
                            FUN_054b3004(param_1,uVar10);
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_054b29e0;
                            uVar10 = FUN_05433ec8(lVar14,0);
                            uVar11 = FUN_04e7faf0(uVar10,0);
                            if ((uVar11 & 1) == 0) {
                              if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                              lVar14 = *(long *)(lVar25 + lVar27 * 8);
                              if (lVar14 == 0) goto LAB_054b29e0;
                              plVar20 = *(long **)(param_1 + 0x28);
                              uVar10 = FUN_05433ec8(lVar14,0);
                              if (plVar20 == (long *)0x0) goto LAB_054b29e0;
                              uVar10 = (**(code **)(*plVar20 + 0x308))
                                                 (plVar20,uVar10,*(undefined8 *)(*plVar20 + 0x310));
                              lVar14 = FUN_04e8b594(plVar21,uVar10,0);
                              if (lVar14 == 0) goto LAB_054b29e0;
                              FUN_04e8b3e4(lVar14,0x3a,0);
                            }
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_054b29e0;
                            uVar10 = FUN_0543229c(lVar14,0);
                            plVar20 = plVar21;
                          }
                          FUN_04e8aac8(plVar20,uVar10,0);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                          plVar20 = *(long **)(lVar25 + lVar27 * 8);
                          if (plVar20 == (long *)0x0) goto LAB_054b29e0;
                          iVar8 = (**(code **)(*plVar20 + 0x238))
                                            (plVar20,*(undefined8 *)(*plVar20 + 0x240));
                          if (iVar8 == 2) {
LAB_054b207c:
                            FUN_04e8b7fc(plVar21,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                            plVar20 = *(long **)(lVar25 + lVar27 * 8);
                            if (plVar20 == (long *)0x0) goto LAB_054b29e0;
                            iVar8 = (**(code **)(*plVar20 + 0x238))
                                              (plVar20,*(undefined8 *)(*plVar20 + 0x240));
                            if (iVar8 == 4) goto LAB_054b207c;
                          }
                          plVar20 = (long *)(**(code **)(*param_3 + 0x5a8))
                                                      (param_3,*(undefined8 *)
                                                                System_Net_WebPermission_TypeInfo,
                                                       *(undefined8 *)
                                                                                                                
                                                  Photon_Realtime_IConnectionCallbacks_TypeInfo,
                                                  *(undefined8 *)PTR_DAT_0664d098,
                                                  *(undefined8 *)(*param_3 + 0x5b0));
                          uVar10 = (**(code **)(*plVar21 + 0x168))
                                             (plVar21,*(undefined8 *)(*plVar21 + 0x170));
                          if (plVar20 == (long *)0x0) goto LAB_054b29e0;
                          (**(code **)(*plVar20 + 0x4d8))
                                    (plVar20,*(undefined8 *)
                                              System_Xml_Serialization_XmlMembersMapping_TypeInfo,
                                     uVar10,*(undefined8 *)(*plVar20 + 0x4e0));
                          (**(code **)(*plVar17 + 0x2c8))
                                    (plVar17,plVar20,*(undefined8 *)(*plVar17 + 0x2d0));
                          lVar27 = lVar27 + 1;
                        } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
                      }
                    }
                    plVar21 = *(long **)(param_1 + 0x78);
                    if (plVar21 == (long *)0x0) goto LAB_054b29e0;
                    (**(code **)(*plVar21 + 0x288))
                              (plVar21,plVar17,*(undefined8 *)(param_1 + 0x80),
                               *(undefined8 *)(*plVar21 + 0x290));
                    puVar26 = (undefined8 *)PTR_DAT_0664d098;
                    plVar17 = (long *)PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo;
                  }
                  else {
                    bVar1 = *(byte *)(*plVar17 + 0x130);
                    if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17)) {
LAB_054b29e8:
                    /* WARNING: Subroutine does not return */
                      FUN_02d4e268(plVar19);
                    }
                  }
                  plVar21 = (long *)(**(code **)(*param_3 + 0x5a8))
                                              (param_3,*(undefined8 *)
                                                        System_Net_WebPermission_TypeInfo,
                                               *(undefined8 *)
                                                System_Linq_Expressions_Interpreter_SubInstruction_TypeInfo
                                               ,*puVar26,*(undefined8 *)(*param_3 + 0x5b0));
                  uVar10 = FUN_0544fcb0(plVar18,0);
                  if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) ==
                      0) {
                    thunk_FUN_02dabd98(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var);
                  }
                  uVar10 = FUN_0565abac(uVar10,0);
                  if (plVar21 == (long *)0x0) goto LAB_054b29e0;
                  (**(code **)(*plVar21 + 0x4d8))
                            (plVar21,*(undefined8 *)PTR_DAT_0664d150,uVar10,
                             *(undefined8 *)(*plVar21 + 0x4e0));
                  if (*(long *)(param_1 + 0x30) == 0) {
LAB_054b2234:
                    lVar12 = (**(code **)(*plVar18 + 0x1b8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    if (lVar12 == 0) goto LAB_054b29e0;
                    uVar10 = FUN_05418ef4(lVar12,0);
                    (**(code **)(*plVar21 + 0x518))
                              (plVar21,*(undefined8 *)
                                        UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo
                               ,*(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,uVar10,
                               *(undefined8 *)(*plVar21 + 0x520));
                  }
                  else {
                    lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                    lVar12 = (**(code **)(*plVar18 + 0x2c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                    if ((lVar12 == 0) || (lVar25 == 0)) goto LAB_054b29e0;
                    iVar8 = FUN_054626e8(lVar25,*(undefined8 *)(lVar12 + 0x90),0);
                    if (iVar8 == -3) goto LAB_054b2234;
                  }
                  plVar20 = plVar18;
                  if (plVar19 != (long *)0x0) {
                    plVar20 = plVar19;
                  }
                  uVar10 = FUN_0544fcb0(plVar20,0);
                  if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) ==
                      0) {
                    thunk_FUN_02dabd98(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var);
                  }
                  uVar10 = FUN_0565abac(uVar10,0);
                  (**(code **)(*plVar21 + 0x4d8))
                            (plVar21,*(undefined8 *)
                                      UnityEngine_UIElements_StyleVariableResolver_TypeInfo,uVar10,
                             *(undefined8 *)(*plVar21 + 0x4e0));
                  lVar12 = plVar18[6];
                  uVar10 = *(undefined8 *)UnityEngine_UIElements_TimerState_TypeInfo;
                  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar10 = FUN_050121a8(uVar10,0);
                  FUN_054a7d28(lVar12,plVar21,uVar10);
                  uVar10 = (**(code **)(*plVar18 + 0x178))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                  uVar15 = FUN_0544fcb0(plVar18,0);
                  uVar11 = FUN_04e7eb78(uVar10,uVar15,0);
                  if ((uVar11 & 1) != 0) {
                    uVar10 = (**(code **)(*plVar18 + 0x178))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                    (**(code **)(*plVar21 + 0x518))
                              (plVar21,*(undefined8 *)
                                        UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo,
                               *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,uVar10,
                               *(undefined8 *)(*plVar21 + 0x520));
                  }
                  if (plVar16 == (long *)0x0) {
                    lVar12 = *plVar21;
                    uVar15 = *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Locomotion_XRMovableBody_TypeInfo;
                    uVar22 = *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
                    uVar23 = *(undefined8 *)(lVar12 + 0x520);
                    uVar10 = *(undefined8 *)PTR_DAT_06647d30;
LAB_054b2500:
                    (**(code **)(lVar12 + 0x518))(plVar21,uVar15,uVar22,uVar10,uVar23);
                  }
                  else {
                    uVar11 = (**(code **)(*plVar16 + 0x1d8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                    if ((uVar11 & 1) != 0) {
                      (**(code **)(*plVar21 + 0x518))
                                (plVar21,*(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_TypeInfo
                                 ,*(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,
                                 *(undefined8 *)PTR_DAT_06647d30,*(undefined8 *)(*plVar21 + 0x520));
                    }
                    lVar12 = plVar16[3];
                    uVar10 = *(undefined8 *)UnityEngine_UIElements_UIR_VectorImageManager_TypeInfo;
                    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    uVar10 = FUN_050121a8(uVar10,0);
                    FUN_054a7d28(lVar12,plVar21,uVar10);
                    uVar10 = (**(code **)(*plVar18 + 0x178))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                    uVar15 = (**(code **)(*plVar16 + 0x1c8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                    uVar11 = FUN_04e7eb78(uVar10,uVar15,0);
                    if ((uVar11 & 1) != 0) {
                      uVar10 = (**(code **)(*plVar16 + 0x1c8))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                      if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4)
                          == 0) {
                        thunk_FUN_02dabd98(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var
                                          );
                      }
                      uVar10 = FUN_0565abac(uVar10,0);
                      lVar12 = *plVar21;
                      uVar15 = *(undefined8 *)
                                UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo;
                      uVar23 = *(undefined8 *)(lVar12 + 0x520);
                      uVar22 = *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
                      goto LAB_054b2500;
                    }
                  }
                  plVar16 = (long *)(**(code **)(*param_3 + 0x5a8))
                                              (param_3,*(undefined8 *)
                                                        System_Net_WebPermission_TypeInfo,
                                               *(undefined8 *)PTR_DAT_0664aa98,*puVar26,
                                               *(undefined8 *)(*param_3 + 0x5b0));
                  uVar10 = FUN_05420c80(param_2,0);
                  uVar10 = FUN_04e80678(*(undefined8 *)
                                         System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo
                                        ,local_70,uVar10,0);
                  if (plVar16 == (long *)0x0) goto LAB_054b29e0;
                  (**(code **)(*plVar16 + 0x4d8))
                            (plVar16,*(undefined8 *)
                                      System_Xml_Serialization_XmlMembersMapping_TypeInfo,uVar10,
                             *(undefined8 *)(*plVar16 + 0x4e0));
                  (**(code **)(*plVar21 + 0x2c8))(plVar21,plVar16,*(undefined8 *)(*plVar21 + 0x2d0))
                  ;
                  iVar8 = (**(code **)(*plVar18 + 0x278))(plVar18,*(undefined8 *)(*plVar18 + 0x280))
                  ;
                  puVar3 = UnityEngine_UIElements_Scroller_TypeInfo;
                  if (iVar8 != 0) {
                    (**(code **)(*plVar18 + 0x278))(plVar18,*(undefined8 *)(*plVar18 + 0x280));
                    uVar10 = FUN_054b4a6c();
                    (**(code **)(*plVar21 + 0x518))
                              (plVar21,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginMovement_TypeInfo
                               ,*(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar21 + 0x520));
                  }
                  iVar8 = (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0));
                    uVar10 = FUN_054b4adc();
                    (**(code **)(*plVar21 + 0x518))
                              (plVar21,*(undefined8 *)
                                        UnityEngine_Experimental_Rendering_XROcclusionMesh_TypeInfo,
                               *(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar21 + 0x520));
                  }
                  iVar8 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
                    uVar10 = FUN_054b4adc();
                    (**(code **)(*plVar21 + 0x518))
                              (plVar21,*(undefined8 *)Unity_XR_CoreUtils_XROrigin_TypeInfo,
                               *(undefined8 *)puVar3,uVar10,*(undefined8 *)(*plVar21 + 0x520));
                  }
                  lVar12 = (**(code **)(*plVar18 + 0x268))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x270));
                  if (lVar12 == 0) goto LAB_054b29e0;
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    plVar16 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066492c0);
                    FUN_04e89168(plVar16,0);
                    if (0 < *(int *)(lVar12 + 0x18)) {
                      if (plVar16 == (long *)0x0) goto LAB_054b29e0;
                      lVar27 = 0;
                      lVar25 = lVar12 + 0x20;
                      do {
                        FUN_04e8a18c(plVar16,0,0);
                        uVar28 = (uint)lVar27;
                        if (*(int *)(param_1 + 0x5c) == 2) {
                          plVar18 = (long *)FUN_04e8aac8(plVar16,local_70,0);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if ((lVar14 == 0) ||
                             (uVar10 = FUN_0543229c(lVar14,0), plVar18 == (long *)0x0))
                          goto LAB_054b29e0;
                        }
                        else {
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_054b29e0;
                          uVar10 = FUN_05433ec8(lVar14,0);
                          FUN_054b3004(param_1,uVar10);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_054b29e0;
                          uVar10 = FUN_05433ec8(lVar14,0);
                          uVar11 = FUN_04e7faf0(uVar10,0);
                          if ((uVar11 & 1) == 0) {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_054b29e0;
                            plVar18 = *(long **)(param_1 + 0x28);
                            uVar10 = FUN_05433ec8(lVar14,0);
                            if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                            uVar10 = (**(code **)(*plVar18 + 0x308))
                                               (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
                            lVar14 = FUN_04e8b594(plVar16,uVar10,0);
                            if (lVar14 == 0) goto LAB_054b29e0;
                            FUN_04e8b3e4(lVar14,0x3a,0);
                          }
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_054b29e0;
                          uVar10 = FUN_0543229c(lVar14,0);
                          plVar18 = plVar16;
                        }
                        FUN_04e8aac8(plVar18,uVar10,0);
                        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                        plVar18 = *(long **)(lVar25 + lVar27 * 8);
                        if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                        iVar8 = (**(code **)(*plVar18 + 0x238))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x240));
                        if (iVar8 == 2) {
LAB_054b28a8:
                          FUN_04e8b7fc(plVar16,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                          plVar18 = *(long **)(lVar25 + lVar27 * 8);
                          if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                          iVar8 = (**(code **)(*plVar18 + 0x238))
                                            (plVar18,*(undefined8 *)(*plVar18 + 0x240));
                          if (iVar8 == 4) goto LAB_054b28a8;
                        }
                        plVar18 = (long *)(**(code **)(*param_3 + 0x5a8))
                                                    (param_3,*(undefined8 *)
                                                              System_Net_WebPermission_TypeInfo,
                                                     *(undefined8 *)
                                                      Photon_Realtime_IConnectionCallbacks_TypeInfo,
                                                     *(undefined8 *)PTR_DAT_0664d098,
                                                     *(undefined8 *)(*param_3 + 0x5b0));
                        uVar10 = (**(code **)(*plVar16 + 0x168))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                        if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                        (**(code **)(*plVar18 + 0x4d8))
                                  (plVar18,*(undefined8 *)
                                            System_Xml_Serialization_XmlMembersMapping_TypeInfo,
                                   uVar10,*(undefined8 *)(*plVar18 + 0x4e0));
                        (**(code **)(*plVar21 + 0x2c8))
                                  (plVar21,plVar18,*(undefined8 *)(*plVar21 + 0x2d0));
                        lVar27 = lVar27 + 1;
                      } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
                    }
                  }
                  plVar16 = *(long **)(param_1 + 0x78);
                  if (plVar16 == (long *)0x0) goto LAB_054b29e0;
                  (**(code **)(*plVar16 + 0x298))
                            (plVar16,plVar21,*(undefined8 *)(param_1 + 0x80),
                             *(undefined8 *)(*plVar16 + 0x2a0));
                  plVar16 = (long *)System_Net_ResponseStream_TypeInfo;
                  puVar26 = (undefined8 *)System_Net_WebPermission_TypeInfo;
                }
              }
              else {
                if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                plVar16 = *(long **)(param_1 + 0x38);
                uVar10 = (**(code **)(*plVar18 + 0x2c8))(plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                if (plVar16 == (long *)0x0) goto LAB_054b29e0;
                uVar11 = (**(code **)(*plVar16 + 0x348))
                                   (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x350));
                plVar16 = (long *)System_Net_ResponseStream_TypeInfo;
                if ((uVar11 & 1) != 0) {
                  plVar16 = *(long **)(param_1 + 0x38);
                  uVar10 = (**(code **)(*plVar18 + 0x1b8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                  if (plVar16 == (long *)0x0) goto LAB_054b29e0;
                  uVar11 = (**(code **)(*plVar16 + 0x348))
                                     (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x350));
                  plVar16 = (long *)System_Net_ResponseStream_TypeInfo;
                  if (((uVar11 & 1) != 0) &&
                     (uVar11 = FUN_054b5130(param_1,plVar18), (uVar11 & 1) == 0)) goto LAB_054b1c30;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar17 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
          goto LAB_054b156c;
          plVar19 = (long *)FUN_054500a4(plVar13,iVar4,0);
          if (plVar19 == (long *)0x0) {
            uVar11 = FUN_054b5130(param_1,0);
            if ((uVar11 & 1) == 0) goto LAB_054b29e0;
          }
          else {
            bVar1 = *(byte *)(*plVar17 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
            goto LAB_054b29e8;
            uVar11 = FUN_054b5130(param_1,plVar19);
            if ((uVar11 & 1) != 0) goto LAB_054b298c;
            lVar12 = plVar19[7];
            plVar16 = (long *)(**(code **)(*param_3 + 0x5a8))
                                        (param_3,*puVar26,
                                         *(undefined8 *)System_Xml_XmlNamedNodeMap_TypeInfo,
                                         *(undefined8 *)PTR_DAT_0664d098,
                                         *(undefined8 *)(*param_3 + 0x5b0));
            if (*(long *)(param_1 + 0x30) == 0) {
LAB_054b175c:
              uVar10 = FUN_05418ef4(param_2,0);
              if (plVar16 == (long *)0x0) goto LAB_054b29e0;
              (**(code **)(*plVar16 + 0x518))
                        (plVar16,*(undefined8 *)
                                  UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo,
                         *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,uVar10,
                         *(undefined8 *)(*plVar16 + 0x520));
            }
            else {
              lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
              if (lVar25 == 0) goto LAB_054b29e0;
              iVar8 = FUN_054626e8(lVar25,*(undefined8 *)(param_2 + 0x90),0);
              if (iVar8 == -3) goto LAB_054b175c;
            }
            uVar10 = FUN_0544fcb0(plVar19,0);
            if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
              thunk_FUN_02dabd98(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var);
            }
            uVar10 = FUN_0565abac(uVar10,0);
            if (plVar16 == (long *)0x0) goto LAB_054b29e0;
            (**(code **)(*plVar16 + 0x4d8))
                      (plVar16,*(undefined8 *)PTR_DAT_0664d150,uVar10,
                       *(undefined8 *)(*plVar16 + 0x4e0));
            uVar10 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
            uVar15 = FUN_0544fcb0(plVar19,0);
            uVar11 = FUN_04e7eb78(uVar10,uVar15,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
              (**(code **)(*plVar16 + 0x518))
                        (plVar16,*(undefined8 *)
                                  UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo,
                         *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,uVar10,
                         *(undefined8 *)(*plVar16 + 0x520));
            }
            FUN_054a7d28(plVar19[6],plVar16,0);
            plVar17 = (long *)(**(code **)(*param_3 + 0x5a8))
                                        (param_3,*puVar26,*(undefined8 *)PTR_DAT_0664aa98,
                                         *(undefined8 *)PTR_DAT_0664d098,
                                         *(undefined8 *)(*param_3 + 0x5b0));
            uVar10 = FUN_05420c80(param_2,0);
            uVar10 = FUN_04e80678(*(undefined8 *)
                                   System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo
                                  ,local_70,uVar10,0);
            if (plVar17 == (long *)0x0) goto LAB_054b29e0;
            (**(code **)(*plVar17 + 0x4d8))
                      (plVar17,*(undefined8 *)System_Xml_Serialization_XmlMembersMapping_TypeInfo,
                       uVar10,*(undefined8 *)(*plVar17 + 0x4e0));
            (**(code **)(*plVar16 + 0x2c8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2d0));
            uVar11 = FUN_05489f84(plVar19,0);
            if ((uVar11 & 1) != 0) {
              (**(code **)(*plVar16 + 0x518))
                        (plVar16,*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_TypeInfo
                         ,*(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,
                         *(undefined8 *)PTR_DAT_06647d30,*(undefined8 *)(*plVar16 + 0x520));
            }
            if (lVar12 == 0) goto LAB_054b29e0;
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar17 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066492c0);
              FUN_04e89168(plVar17,0);
              if (0 < *(int *)(lVar12 + 0x18)) {
                if (plVar17 == (long *)0x0) goto LAB_054b29e0;
                lVar27 = 0;
                lVar25 = lVar12 + 0x20;
                do {
                  FUN_04e8a18c(plVar17,0,0);
                  uVar28 = (uint)lVar27;
                  if (*(int *)(param_1 + 0x5c) == 2) {
                    plVar18 = (long *)FUN_04e8aac8(plVar17,local_70,0);
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if ((lVar14 == 0) || (uVar10 = FUN_0543229c(lVar14,0), plVar18 == (long *)0x0))
                    goto LAB_054b29e0;
                  }
                  else {
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_054b29e0;
                    uVar10 = FUN_05433ec8(lVar14,0);
                    FUN_054b3004(param_1,uVar10);
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_054b29e0;
                    uVar10 = FUN_05433ec8(lVar14,0);
                    uVar11 = FUN_04e7faf0(uVar10,0);
                    if ((uVar11 & 1) == 0) {
                      if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                      lVar14 = *(long *)(lVar25 + lVar27 * 8);
                      if (lVar14 == 0) goto LAB_054b29e0;
                      plVar18 = *(long **)(param_1 + 0x28);
                      uVar10 = FUN_05433ec8(lVar14,0);
                      if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                      uVar10 = (**(code **)(*plVar18 + 0x308))
                                         (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
                      lVar14 = FUN_04e8b594(plVar17,uVar10,0);
                      if (lVar14 == 0) goto LAB_054b29e0;
                      FUN_04e8b3e4(lVar14,0x3a,0);
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_054b29e0;
                    uVar10 = FUN_0543229c(lVar14,0);
                    plVar18 = plVar17;
                  }
                  FUN_04e8aac8(plVar18,uVar10,0);
                  if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                  plVar18 = *(long **)(lVar25 + lVar27 * 8);
                  if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                  iVar8 = (**(code **)(*plVar18 + 0x238))(plVar18,*(undefined8 *)(*plVar18 + 0x240))
                  ;
                  if (iVar8 == 2) {
LAB_054b1b34:
                    FUN_04e8b7fc(plVar17,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_054b29e4;
                    plVar18 = *(long **)(lVar25 + lVar27 * 8);
                    if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                    iVar8 = (**(code **)(*plVar18 + 0x238))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x240));
                    if (iVar8 == 4) goto LAB_054b1b34;
                  }
                  plVar18 = (long *)(**(code **)(*param_3 + 0x5a8))
                                              (param_3,*(undefined8 *)
                                                        System_Net_WebPermission_TypeInfo,
                                               *(undefined8 *)
                                                Photon_Realtime_IConnectionCallbacks_TypeInfo,
                                               *(undefined8 *)PTR_DAT_0664d098,
                                               *(undefined8 *)(*param_3 + 0x5b0));
                  uVar10 = (**(code **)(*plVar17 + 0x168))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x170));
                  if (plVar18 == (long *)0x0) goto LAB_054b29e0;
                  (**(code **)(*plVar18 + 0x4d8))
                            (plVar18,*(undefined8 *)
                                      System_Xml_Serialization_XmlMembersMapping_TypeInfo,uVar10,
                             *(undefined8 *)(*plVar18 + 0x4e0));
                  (**(code **)(*plVar16 + 0x2c8))(plVar16,plVar18,*(undefined8 *)(*plVar16 + 0x2d0))
                  ;
                  lVar27 = lVar27 + 1;
                } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
              }
            }
            plVar17 = *(long **)(param_1 + 0x78);
            if (plVar17 == (long *)0x0) goto LAB_054b29e0;
            (**(code **)(*plVar17 + 0x288))
                      (plVar17,plVar16,*(undefined8 *)(param_1 + 0x80),
                       *(undefined8 *)(*plVar17 + 0x290));
            plVar16 = (long *)System_Net_ResponseStream_TypeInfo;
            plVar17 = (long *)PlayFab_ClientModels_RestoreIOSPurchasesRequest_TypeInfo;
            puVar26 = (undefined8 *)System_Net_WebPermission_TypeInfo;
          }
        }
LAB_054b298c:
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      } while (iVar4 < iVar8);
    }
    FUN_054a7d28(*(undefined8 *)(param_2 + 0x88),plVar9,0);
    return plVar9;
  }
LAB_054b29e0:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


