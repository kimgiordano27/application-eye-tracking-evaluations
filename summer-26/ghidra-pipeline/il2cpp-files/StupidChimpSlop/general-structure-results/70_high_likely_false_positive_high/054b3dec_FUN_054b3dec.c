/*
FUNCTION_NAME: FUN_054b3dec
ENTRY_POINT: 054b3dec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long * FUN_054b3dec(long param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_68;
  
  if ((DAT_06a53ac5 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06649f98);
    FUN_02d4dc40(System_Xml_XmlLoader_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0665b5f8);
    FUN_02d4dc40(System_Net_WebException_TypeInfo);
    FUN_02d4dc40(Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_Scroller_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06653048);
    FUN_02d4dc40(PTR_DAT_06650480);
    FUN_02d4dc40(PTR_DAT_0665d8c0);
    FUN_02d4dc40(PTR_DAT_06649350);
    FUN_02d4dc40(System_Xml_XmlNamespaceManager_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06660ae8);
    FUN_02d4dc40(System_Xml_Linq_XDocument_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlNode_TypeInfo);
    FUN_02d4dc40(System_Net_WebPermission_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647d30);
    FUN_02d4dc40(PTR_DAT_0664d150);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664d098);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlProcessingInstruction_TypeInfo);
    FUN_02d4dc40(System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_WriteTitleEventRequest_TypeInfo);
    DAT_06a53ac5 = 1;
  }
  puVar6 = System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo;
  puVar1 = (undefined8 *)PTR_DAT_0665b5f8;
  local_68 = 0;
  if (param_2 == (long *)0x0) goto LAB_054b489c;
  iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  puVar5 = System_Net_WebPermission_TypeInfo;
  puVar4 = PTR_DAT_0664d098;
  if (iVar7 != 1) {
    puVar1 = (undefined8 *)puVar6;
  }
  if (param_3 == (long *)0x0) goto LAB_054b489c;
  uVar18 = *puVar1;
  plVar8 = (long *)(**(code **)(*param_3 + 0x5a8))
                             (param_3,*(undefined8 *)System_Net_WebPermission_TypeInfo,uVar18,
                              *(undefined8 *)PTR_DAT_0664d098,*(undefined8 *)(*param_3 + 0x5b0));
  uVar9 = FUN_0543229c(param_2,0);
  if (plVar8 == (long *)0x0) goto LAB_054b489c;
  (**(code **)(*plVar8 + 0x4d8))
            (plVar8,*(undefined8 *)PTR_DAT_0664d150,uVar9,*(undefined8 *)(*plVar8 + 0x4e0));
  lVar10 = FUN_05433ec8(param_2,0);
  puVar6 = System_Xml_XmlLoader_TypeInfo;
  if (lVar10 == 0) goto LAB_054b489c;
  if (*(int *)(lVar10 + 0x10) == 0) {
    uVar9 = FUN_054b3cdc(param_1,param_2[0xf]);
    uVar11 = FUN_05433ec8(param_2,0);
    uVar12 = FUN_04e7eb78(uVar11,uVar9,0);
    if ((uVar12 & 1) != 0) {
      (**(code **)(*plVar8 + 0x4d8))
                (plVar8,*(undefined8 *)System_Xml_XmlNamespaceManager_TypeInfo,
                 *(undefined8 *)System_Xml_XmlNode_TypeInfo,*(undefined8 *)(*plVar8 + 0x4e0));
    }
  }
  uVar9 = thunk_FUN_02d5dae8(param_2,0);
  puVar3 = PTR_DAT_066462a0;
  uVar11 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)(PTR_DAT_066462a0 + 0xe0));
  }
  uVar11 = FUN_050121a8(uVar11,0);
  uVar12 = FUN_0501bc88(uVar9,uVar11,0);
  if ((uVar12 & 1) == 0) {
    FUN_054b36f0(param_1,param_2,plVar8);
  }
  else {
    FUN_054a8400(param_1,param_2,plVar8,param_3);
  }
  FUN_054a7d28(param_2[0x14],plVar8,0);
  FUN_054b3298(param_1,param_2,param_3,plVar8);
  iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar7 == 4) {
    if ((char)param_2[4] == '\0') {
      (**(code **)(*plVar8 + 0x518))
                (plVar8,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo
                 ,*(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,
                 *(undefined8 *)PTR_DAT_0665d8c0,*(undefined8 *)(*plVar8 + 0x520));
    }
    if (*(char *)((long)param_2 + 0x95) == '\0') {
      lVar10 = param_2[7];
      lVar19 = *(long *)(puVar3 + 0x28);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar9 = FUN_050121a8(lVar19 + 0x20,0);
      uVar12 = FUN_0501afe8(lVar10,uVar9,0);
      if ((uVar12 & 1) == 0) {
        FUN_054aa87c(param_2[7]);
        uVar9 = FUN_05432820(param_2,0);
        uVar9 = FUN_054325b4(param_2,uVar9,0);
        uVar11 = *(undefined8 *)UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo;
        uVar15 = *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
        pcVar17 = *(code **)(*plVar8 + 0x518);
        uVar16 = *(undefined8 *)(*plVar8 + 0x520);
      }
      else {
        plVar13 = (long *)FUN_05432820(param_2,0);
        if (plVar13 == (long *)0x0) goto LAB_054b489c;
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40))
        goto LAB_054b48a0;
        pcVar14 = (char *)thunk_FUN_02d8a780();
        uVar15 = *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
        uVar11 = *(undefined8 *)UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo;
        puVar1 = (undefined8 *)PTR_DAT_0665d8c0;
        if (*pcVar14 != '\0') {
          puVar1 = (undefined8 *)PTR_DAT_06647d30;
        }
        uVar16 = *(undefined8 *)(*plVar8 + 0x520);
        uVar9 = *puVar1;
        pcVar17 = *(code **)(*plVar8 + 0x518);
      }
      (*pcVar17)(plVar8,uVar11,uVar15,uVar9,uVar16);
    }
  }
  if (*(char *)((long)param_2 + 0x95) == '\0') {
    iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar7 != 4) {
      FUN_054aa87c(param_2[7]);
      iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if ((iVar7 == 2) && ((char)param_2[4] == '\0')) {
        lVar10 = param_2[7];
        lVar19 = *(long *)(puVar3 + 0x28);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar9 = FUN_050121a8(lVar19 + 0x20,0);
        uVar12 = FUN_0501afe8(lVar10,uVar9,0);
        plVar13 = (long *)FUN_05432820(param_2,0);
        if ((uVar12 & 1) == 0) {
          uVar9 = FUN_054325b4(param_2,plVar13,0);
          uVar11 = *(undefined8 *)UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo;
          uVar15 = *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
          pcVar17 = *(code **)(*plVar8 + 0x518);
          uVar16 = *(undefined8 *)(*plVar8 + 0x520);
        }
        else {
          if (plVar13 == (long *)0x0) goto LAB_054b489c;
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40))
          goto LAB_054b48a0;
          pcVar14 = (char *)thunk_FUN_02d8a780(plVar13);
          uVar15 = *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo;
          uVar11 = *(undefined8 *)UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo;
          puVar1 = (undefined8 *)PTR_DAT_0665d8c0;
          if (*pcVar14 != '\0') {
            puVar1 = (undefined8 *)PTR_DAT_06647d30;
          }
          uVar16 = *(undefined8 *)(*plVar8 + 0x520);
          uVar9 = *puVar1;
          pcVar17 = *(code **)(*plVar8 + 0x518);
        }
        (*pcVar17)(plVar8,uVar11,uVar15,uVar9,uVar16);
      }
      else {
        lVar10 = param_2[7];
        lVar19 = *(long *)(puVar3 + 0x28);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar9 = FUN_050121a8(lVar19 + 0x20,0);
        uVar12 = FUN_0501afe8(lVar10,uVar9,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_05435ba0(param_2,0);
          if ((uVar12 & 1) != 0) goto LAB_054b4490;
          uVar9 = FUN_05432820(param_2,0);
          uVar9 = FUN_054325b4(param_2,uVar9,0);
          lVar10 = *plVar8;
          uVar11 = *(undefined8 *)PTR_DAT_06650480;
        }
        else {
          plVar13 = (long *)FUN_05432820(param_2,0);
          if (plVar13 == (long *)0x0) goto LAB_054b489c;
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40)) {
LAB_054b48a0:
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268();
          }
          pcVar14 = (char *)thunk_FUN_02d8a780();
          lVar10 = *plVar8;
          uVar11 = *(undefined8 *)PTR_DAT_06650480;
          puVar1 = (undefined8 *)PTR_DAT_0665d8c0;
          if (*pcVar14 != '\0') {
            puVar1 = (undefined8 *)PTR_DAT_06647d30;
          }
          uVar9 = *puVar1;
        }
        (**(code **)(lVar10 + 0x4d8))(plVar8,uVar11,uVar9,*(undefined8 *)(lVar10 + 0x4e0));
      }
    }
  }
LAB_054b4490:
  iVar7 = *(int *)(param_1 + 0x5c);
  uVar9 = FUN_05433ec8(param_2,0);
  if (iVar7 == 2) {
    (**(code **)(*plVar8 + 0x518))
              (plVar8,*(undefined8 *)System_Net_WebException_TypeInfo,
               *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,uVar9,
               *(undefined8 *)(*plVar8 + 0x520));
  }
  else {
    if ((param_2[0xf] == 0) || (lVar10 = FUN_0541b6d0(param_2[0xf],0), lVar10 == 0))
    goto LAB_054b489c;
    uVar12 = FUN_05666158(lVar10,0);
    lVar10 = param_2[0xf];
    if ((uVar12 & 1) == 0) {
      if ((lVar10 == 0) || (lVar10 = FUN_0541b6d0(lVar10,0), lVar10 == 0)) goto LAB_054b489c;
      uVar11 = *(undefined8 *)(lVar10 + 0x18);
    }
    else {
      if (lVar10 == 0) goto LAB_054b489c;
      uVar11 = FUN_05418ef4(lVar10,0);
    }
    uVar12 = FUN_04e7eb78(uVar9,uVar11,0);
    if ((uVar12 & 1) != 0) {
      lVar10 = FUN_05433ec8(param_2,0);
      if (lVar10 == 0) goto LAB_054b489c;
      if (*(int *)(lVar10 + 0x10) != 0) {
        uVar9 = FUN_05433ec8(param_2,0);
        plVar13 = (long *)FUN_054b3004(param_1,uVar9);
        uVar9 = FUN_0543229c(param_2,0);
        lVar10 = FUN_054b48a4(uVar9,plVar13,uVar9);
        if (lVar10 == 0) {
          if (plVar13 == (long *)0x0) goto LAB_054b489c;
          (**(code **)(*plVar13 + 0x2c8))(plVar13,plVar8,*(undefined8 *)(*plVar13 + 0x2d0));
        }
        plVar8 = *(long **)(param_1 + 0x48);
        if (plVar8 == (long *)0x0) {
LAB_054b489c:
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x5a8))
                                   (plVar8,*(undefined8 *)puVar5,uVar18,*(undefined8 *)puVar4,
                                    *(undefined8 *)(*plVar8 + 0x5b0));
        plVar13 = *(long **)(param_1 + 0x28);
        uVar9 = FUN_05433ec8(param_2,0);
        if (plVar13 == (long *)0x0) goto LAB_054b489c;
        plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                    (plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x310));
        uVar9 = *(undefined8 *)PTR_DAT_06653048;
        if (plVar13 == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        uVar11 = FUN_0543229c(param_2,0);
        uVar18 = FUN_04e80678(uVar18,*(undefined8 *)PTR_DAT_06649350,uVar11,0);
        if (plVar8 == (long *)0x0) goto LAB_054b489c;
        (**(code **)(*plVar8 + 0x4d8))(plVar8,uVar9,uVar18,*(undefined8 *)(*plVar8 + 0x4e0));
        if (param_2[0xf] == 0) goto LAB_054b489c;
        uVar9 = FUN_05418ef4(param_2[0xf],0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_054b489c;
        uVar12 = FUN_04e7eb78(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),0);
        if ((uVar12 & 1) != 0) {
          plVar13 = *(long **)(param_1 + 0x28);
          uVar9 = FUN_05433ec8(param_2,0);
          if (plVar13 == (long *)0x0) goto LAB_054b489c;
          (**(code **)(*plVar13 + 0x308))(plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x310));
          if (param_2[0xf] == 0) goto LAB_054b489c;
          uVar9 = FUN_05418ef4(param_2[0xf],0);
          FUN_054b3004(param_1,uVar9);
        }
      }
    }
  }
  bVar2 = *(byte *)(param_2 + 4) ^ 1;
  local_68 = (ulong)CONCAT14(*(byte *)(param_2 + 4),(undefined4)local_68) ^ 0x100000000;
  iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if ((iVar7 == 2) && (bVar2 != 0)) {
    (**(code **)(*plVar8 + 0x4d8))
              (plVar8,*(undefined8 *)PlayFab_ClientModels_WriteTitleEventRequest_TypeInfo,
               *(undefined8 *)PTR_DAT_06660ae8,*(undefined8 *)(*plVar8 + 0x4e0));
  }
  iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar7 == 4) {
    uVar18 = *(undefined8 *)PlayFab_ClientModels_WriteTitleEventRequest_TypeInfo;
    uVar9 = *(undefined8 *)System_Xml_XmlProcessingInstruction_TypeInfo;
    pcVar17 = *(code **)(*plVar8 + 0x4d8);
    uVar11 = *(undefined8 *)(*plVar8 + 0x4e0);
  }
  else {
    iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if ((iVar7 == 2) || (bVar2 != 0)) goto LAB_054b47f0;
    if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar9 = FUN_04f9d780(0);
    uVar9 = FUN_05000798((long)&local_68 + 4,uVar9,0);
    uVar18 = *(undefined8 *)Photon_Voice_Unity_WebRtcAudioDsp_TypeInfo;
    pcVar17 = *(code **)(*plVar8 + 0x4d8);
    uVar11 = *(undefined8 *)(*plVar8 + 0x4e0);
  }
  (*pcVar17)(plVar8,uVar18,uVar9,uVar11);
LAB_054b47f0:
  iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if ((iVar7 == 1) && ((param_5 & 1) != 0)) {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((long)param_2 + 100));
    if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar9 = FUN_04f9d780(0);
    uVar9 = FUN_05000798(&local_68,uVar9,0);
    (**(code **)(*plVar8 + 0x518))
              (plVar8,*(undefined8 *)System_Xml_Linq_XDocument_TypeInfo,
               *(undefined8 *)UnityEngine_UIElements_Scroller_TypeInfo,uVar9,
               *(undefined8 *)(*plVar8 + 0x520));
  }
  return plVar8;
}


