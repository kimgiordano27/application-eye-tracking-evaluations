/*
FUNCTION_NAME: FUN_054aef58
ENTRY_POINT: 054aef58
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


long * FUN_054aef58(long param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((DAT_06a53abc & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06649f98);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                );
    FUN_02d4dc40(Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_Scroller_TypeInfo);
    FUN_02d4dc40(System_Net_WebUtility_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlLinkedNode_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_XRDevice_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06649350);
    FUN_02d4dc40(System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor_TypeInfo);
    FUN_02d4dc40(System_Net_WebPermission_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647d30);
    FUN_02d4dc40(System_Xml_Schema_XmlListConverter_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664d150);
    FUN_02d4dc40(PTR_DAT_0664d098);
    FUN_02d4dc40(System_Xml_Linq_XDocumentType_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_SubtractInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647c80);
    DAT_06a53abc = 1;
  }
  puVar5 = UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_TypeInfo;
  puVar4 = UnityEngine_UIElements_Scroller_TypeInfo;
  puVar3 = UnityEngine_InputSystem_Controls_DpadControl_var;
  puVar2 = PTR_DAT_0664d150;
  puVar1 = PTR_DAT_06647d30;
  lVar13 = param_3;
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_054af574;
    lVar13 = *(long *)(param_4 + 0x20);
    if (lVar13 != 0) goto LAB_054af0c0;
    plVar10 = *(long **)(param_1 + 0x78);
    if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = FUN_0565abac(*(undefined8 *)
                           PlayFab_EconomyModels_SubtractInventoryItemsRequest_TypeInfo,0);
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    (**(code **)(*plVar10 + 0x4d8))
              (plVar10,*(undefined8 *)puVar2,uVar11,*(undefined8 *)(*plVar10 + 0x4e0));
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar1,
               *(undefined8 *)(*plVar10 + 0x520));
    plVar10 = *(long **)(param_1 + 0x78);
    lVar13 = FUN_05418ef4(param_4,0);
    if (lVar13 == 0) goto LAB_054af574;
    uVar11 = *(undefined8 *)puVar4;
    uVar12 = *(undefined8 *)UnityEngine_XR_XRDevice_TypeInfo;
    if (*(int *)(lVar13 + 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_4 + 0x90);
    }
    else {
      uVar7 = FUN_05418ef4(param_4,0);
      uVar7 = FUN_04e80678(uVar7,*(undefined8 *)PTR_DAT_06649350,*(undefined8 *)(param_4 + 0x90),0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar7 = FUN_0565abac(uVar7,0);
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    (**(code **)(*plVar10 + 0x518))(plVar10,uVar12,uVar11,uVar7,*(undefined8 *)(*plVar10 + 0x520));
    if (*(char *)(param_4 + 0xe8) != '\0') {
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 == (long *)0x0) goto LAB_054af574;
      (**(code **)(*plVar10 + 0x518))
                (plVar10,*(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                 ,*(undefined8 *)puVar4,*(undefined8 *)puVar1,*(undefined8 *)(*plVar10 + 0x520));
    }
    if (*(char *)(param_4 + 0xc0) == '\0') {
      plVar10 = *(long **)(param_4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar11 = FUN_04f9d7e0(0);
      if (plVar10 == (long *)0x0) goto LAB_054af574;
      uVar8 = (**(code **)(*plVar10 + 0x138))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x140));
      if ((uVar8 & 1) == 0) goto LAB_054af56c;
      goto LAB_054af318;
    }
LAB_054af56c:
    plVar10 = *(long **)(param_4 + 0xb8);
joined_r0x054af570:
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    plVar9 = *(long **)(param_1 + 0x78);
    uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    if (plVar9 == (long *)0x0) goto LAB_054af574;
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)System_Xml_Linq_XDocumentType_TypeInfo,*(undefined8 *)puVar4,
               uVar11,*(undefined8 *)(*plVar9 + 0x520));
  }
  else {
LAB_054af0c0:
    plVar10 = *(long **)(param_1 + 0x78);
    uVar11 = *(undefined8 *)(lVar13 + 0x40);
    if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = FUN_0565abac(uVar11,0);
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    (**(code **)(*plVar10 + 0x4d8))
              (plVar10,*(undefined8 *)puVar2,uVar11,*(undefined8 *)(*plVar10 + 0x4e0));
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar1,
               *(undefined8 *)(*plVar10 + 0x520));
    if (param_3 == 0) {
      if (param_4 == 0) goto LAB_054af574;
      plVar10 = *(long **)(param_1 + 0x78);
      lVar6 = FUN_05418ef4(param_4,0);
      if (lVar6 == 0) goto LAB_054af574;
      uVar11 = *(undefined8 *)puVar4;
      uVar12 = *(undefined8 *)UnityEngine_XR_XRDevice_TypeInfo;
      if (*(int *)(lVar6 + 0x10) == 0) {
        uVar7 = *(undefined8 *)(param_4 + 0x90);
      }
      else {
        uVar7 = FUN_05418ef4(param_4,0);
        uVar7 = FUN_04e80678(uVar7,*(undefined8 *)PTR_DAT_06649350,*(undefined8 *)(param_4 + 0x90),0
                            );
      }
      if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar7 = FUN_0565abac(uVar7,0);
      if (plVar10 == (long *)0x0) goto LAB_054af574;
      (**(code **)(*plVar10 + 0x518))(plVar10,uVar12,uVar11,uVar7,*(undefined8 *)(*plVar10 + 0x520))
      ;
    }
    if (*(char *)(lVar13 + 0x59) != '\0') {
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 == (long *)0x0) goto LAB_054af574;
      (**(code **)(*plVar10 + 0x518))
                (plVar10,*(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                 ,*(undefined8 *)puVar4,*(undefined8 *)puVar1,*(undefined8 *)(*plVar10 + 0x520));
    }
    if (*(char *)(lVar13 + 0x68) != '\0') {
LAB_054af348:
      plVar10 = *(long **)(lVar13 + 0x60);
      goto joined_r0x054af570;
    }
    plVar10 = *(long **)(lVar13 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = FUN_04f9d7e0(0);
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    uVar8 = (**(code **)(*plVar10 + 0x138))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x140));
    if ((uVar8 & 1) == 0) goto LAB_054af348;
LAB_054af318:
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_054af574;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor_TypeInfo,
               *(undefined8 *)puVar4,*(undefined8 *)puVar1,*(undefined8 *)(*plVar10 + 0x520));
  }
  puVar2 = System_Net_WebPermission_TypeInfo;
  puVar1 = PTR_DAT_0664d098;
  if (param_2 != (long *)0x0) {
    plVar10 = (long *)(**(code **)(*param_2 + 0x5a8))
                                (param_2,*(undefined8 *)System_Net_WebPermission_TypeInfo,
                                 *(undefined8 *)System_Xml_Schema_XmlListConverter_TypeInfo,
                                 *(undefined8 *)PTR_DAT_0664d098,*(undefined8 *)(*param_2 + 0x5b0));
    puVar3 = System_Xml_XmlLinkedNode_TypeInfo;
    plVar9 = *(long **)(param_1 + 0x78);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x2c8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2d0));
      plVar9 = (long *)(**(code **)(*param_2 + 0x5a8))
                                 (param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar3,
                                  *(undefined8 *)puVar1,*(undefined8 *)(*param_2 + 0x5b0));
      puVar2 = System_Xml_Serialization_XmlEnumAttribute_TypeInfo;
      puVar1 = System_Net_WebUtility_TypeInfo;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x4d8))
                  (plVar9,*(undefined8 *)Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo,
                   *(undefined8 *)PTR_DAT_06647c80,*(undefined8 *)(*plVar9 + 0x4e0));
        (**(code **)(*plVar9 + 0x4d8))
                  (plVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
                   *(undefined8 *)(*plVar9 + 0x4e0));
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x2c8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2d0));
          return plVar9;
        }
      }
    }
  }
LAB_054af574:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


