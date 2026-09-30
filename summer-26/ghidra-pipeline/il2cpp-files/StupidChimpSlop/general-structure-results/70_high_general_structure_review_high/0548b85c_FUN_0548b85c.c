/*
FUNCTION_NAME: FUN_0548b85c
ENTRY_POINT: 0548b85c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


void FUN_0548b85c(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 local_68;
  int local_64;
  
  if ((DAT_06a53a3b & 1) == 0) {
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateNintendoResponse_var);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(PTR_DAT_0665b5f8);
    FUN_02d4dc40(System_Net_WebException_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_WriteClientCharacterEventRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_WriteClientPlayerEventRequest_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_Scroller_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06653048);
    FUN_02d4dc40(PlayFab_ClientModels_WriteEventResponse_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06650480);
    FUN_02d4dc40(PlayFab_EventsModels_WriteEventsRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_EventsModels_WriteEventsResponse_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo
                );
    FUN_02d4dc40(System_WindowsConsoleDriver_TypeInfo);
    FUN_02d4dc40(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664d998);
    FUN_02d4dc40(PTR_DAT_0664b148);
    FUN_02d4dc40(System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_WriteTitleEventRequest_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b860);
    DAT_06a53a3b = 1;
  }
  local_68 = 1;
  local_64 = 0;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x4c8))
              (param_2,*(undefined8 *)PlayFab_ClientModels_WriteTitleEventRequest_TypeInfo,
               *(undefined8 *)(*param_2 + 0x4d0));
    plVar7 = (long *)(**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
    puVar3 = System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo;
    puVar2 = UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo;
    if (plVar7 == (long *)0x0) goto LAB_0548bee4;
    uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    if ((int)uVar8 < 1) {
      uVar10 = **(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
    }
    else {
      lVar9 = (**(code **)(*param_2 + 0x4c8))
                        (param_2,*(undefined8 *)PTR_DAT_06653048,*(undefined8 *)(*param_2 + 0x4d0));
      if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x10))) {
        return;
      }
      uVar10 = FUN_0548b6dc(lVar9,param_2);
      if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_0548bee4;
      plVar7 = (long *)System_Xml_XmlTextReaderImpl__ParseNumericCharRef
                                 (*(long *)(param_3 + 0x40),uVar10,*(undefined8 *)(param_1 + 0x18),0
                                 );
      uVar8 = 0;
      if (plVar7 != (long *)0x0) {
        iVar5 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (iVar5 == 2) {
          uVar8 = *(undefined8 *)puVar3;
        }
        else {
          uVar8 = *(undefined8 *)PTR_DAT_0665b5f8;
        }
        uVar11 = FUN_05490050(param_2,uVar8,*(undefined8 *)puVar2,0);
        if ((uVar11 & 1) != 0) {
          uVar8 = FUN_0543bf4c(uVar10,0);
          goto LAB_0548c014;
        }
        uVar8 = FUN_05490214(uVar10,param_3,0);
        uVar10 = uVar8;
      }
    }
    plVar7 = (long *)FUN_0548a598(uVar8,param_2);
    puVar4 = System_WindowsConsoleDriver_TypeInfo;
    puVar1 = PTR_DAT_0664b860;
    if (plVar7 == (long *)0x0) {
      FUN_0291d7ec(param_2);
      uVar8 = thunk_FUN_02db45e8(PTR_DAT_0664b148);
      uVar8 = (**(code **)(*param_2 + 0x4c8))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x4d0));
      uVar8 = FUN_0543b8bc(uVar8,0);
LAB_0548c014:
      uVar10 = thunk_FUN_02db45e8(Mono_Security_X509_X501_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar8,uVar10);
    }
    lVar9 = (**(code **)(*plVar7 + 0x508))
                      (plVar7,*(undefined8 *)PTR_DAT_0664b148,
                       *(undefined8 *)System_WindowsConsoleDriver_TypeInfo,
                       *(undefined8 *)(*plVar7 + 0x510));
    uVar8 = (**(code **)(*plVar7 + 0x508))
                      (plVar7,*(undefined8 *)puVar1,*(undefined8 *)puVar4,
                       *(undefined8 *)(*plVar7 + 0x510));
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) == 0)) {
      lVar13 = *(long *)(PTR_DAT_066462a0 + 0x90);
      lVar9 = **(long **)(lVar13 + 0xb8);
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar12 = FUN_050121a8(lVar13 + 0x20,0);
      uVar17 = 0;
    }
    else {
      uVar12 = FUN_0548b590(uVar8,lVar9,uVar8);
      uVar11 = thunk_FUN_04e7e884(lVar9,*(undefined8 *)PTR_DAT_0664d998,0);
      if ((uVar11 & 1) != 0) {
        lVar9 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
      }
      uVar11 = thunk_FUN_04e7e884(lVar9,*(undefined8 *)
                                         PlayFab_ClientModels_WriteClientCharacterEventRequest_TypeInfo
                                  ,0);
      uVar17 = 0;
      if ((uVar11 & 1) != 0) {
        lVar9 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
        uVar17 = FUN_05488a74(4,uVar12);
      }
      uVar11 = thunk_FUN_04e7e884(lVar9,*(undefined8 *)
                                         PlayFab_EventsModels_WriteEventsResponse_TypeInfo,0);
      if ((uVar11 & 1) != 0) {
        lVar9 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
        uVar17 = FUN_05488900(uVar8);
      }
      uVar11 = thunk_FUN_04e7e884(lVar9,*(undefined8 *)
                                         System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo
                                  ,0);
      if ((uVar11 & 1) != 0) {
        lVar9 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
        uVar17 = FUN_0548898c();
      }
      uVar11 = thunk_FUN_04e7e884(lVar9,*(undefined8 *)
                                         PlayFab_ClientModels_WriteClientPlayerEventRequest_TypeInfo
                                  ,0);
      if ((uVar11 & 1) != 0) {
        lVar9 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
        uVar17 = FUN_0548898c();
      }
    }
    puVar1 = PlayFab_AddonModels_CreateOrUpdateNintendoResponse_var;
    uVar11 = FUN_05490050(param_2,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0);
    FUN_0548c0cc(uVar11,param_2,0,&local_64,&local_68);
    lVar13 = (**(code **)(*param_2 + 0x4c8))
                       (param_2,*(undefined8 *)PTR_DAT_06650480,*(undefined8 *)(*param_2 + 0x4d0));
    if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var);
    }
    uVar8 = FUN_0565ac08(uVar10,0);
    uVar15 = 1;
    if ((uVar11 & 1) != 0) {
      uVar15 = 2;
    }
    lVar14 = thunk_FUN_02d8a638(1,*(undefined8 *)puVar1);
    System_Globalization_FormatProvider_Number__MatchChars(lVar14,uVar8,uVar12,0,uVar15,0);
    uVar8 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
    FUN_0548fc38(lVar14,uVar8,0);
    if (lVar14 != 0) {
      *(long *)(lVar14 + 0xe0) = lVar9;
      thunk_FUN_02dc1ef0((long *)(lVar14 + 0xe0),lVar9);
      FUN_0542fbc0(lVar14,uVar17,0);
      FUN_05430590(lVar14,local_64 == 0,0);
      if ((uVar11 & 1) == 0) {
        puVar16 = (undefined8 *)(param_1 + 0x18);
      }
      else {
        puVar16 = *(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
      }
      FUN_05433f0c(lVar14,*puVar16,0);
      lVar9 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
      if (lVar9 == 0) {
LAB_0548bf2c:
        lVar9 = (**(code **)(*param_2 + 0x4c8))
                          (param_2,*(undefined8 *)System_Net_WebException_TypeInfo,
                           *(undefined8 *)(*param_2 + 0x4d0));
        if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x10))) {
          FUN_05433f0c(lVar14,lVar9,0);
        }
        if ((param_3 != 0) && (*(long *)(param_3 + 0x40) != 0)) {
          FUN_05453da8(*(long *)(param_3 + 0x40),lVar14,0);
          if ((lVar13 != 0) && (*(int *)(lVar13 + 0x10) != 0)) {
            uVar8 = FUN_054ed26c(lVar13,uVar12,0);
            FUN_05432954(lVar14,uVar8,0);
          }
          return;
        }
      }
      else {
        plVar7 = (long *)(**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
        puVar3 = PlayFab_ClientModels_WriteEventResponse_TypeInfo;
        puVar2 = UnityEngine_UIElements_Scroller_TypeInfo;
        if (plVar7 != (long *)0x0) {
          iVar5 = 0;
          do {
            iVar6 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
            if (iVar6 <= iVar5) goto LAB_0548bf2c;
            lVar9 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
            if ((lVar9 == 0) ||
               (plVar7 = (long *)FUN_05636334(lVar9,iVar5,0), plVar7 == (long *)0x0)) break;
            uVar8 = (**(code **)(*plVar7 + 0x348))(plVar7,*(undefined8 *)(*plVar7 + 0x350));
            uVar11 = thunk_FUN_04e7e884(uVar8,*(undefined8 *)puVar2,0);
            if ((uVar11 & 1) != 0) {
              lVar9 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
              if ((lVar9 == 0) ||
                 (plVar7 = (long *)FUN_05636334(lVar9,iVar5,0), plVar7 == (long *)0x0)) break;
              uVar8 = (**(code **)(*plVar7 + 0x378))(plVar7,*(undefined8 *)(*plVar7 + 0x380));
              uVar11 = thunk_FUN_04e7e884(uVar8,*(undefined8 *)puVar3,0);
              if ((uVar11 & 1) != 0) {
                lVar9 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
                if ((lVar9 != 0) &&
                   (plVar7 = (long *)FUN_05636334(lVar9,iVar5,0), plVar7 != (long *)0x0)) {
                  uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
                  FUN_0542fd1c(lVar14,uVar8,0);
                  goto LAB_0548bf2c;
                }
                break;
              }
            }
            iVar5 = iVar5 + 1;
            plVar7 = (long *)(**(code **)(*param_2 + 0x218))
                                       (param_2,*(undefined8 *)(*param_2 + 0x220));
          } while (plVar7 != (long *)0x0);
        }
      }
    }
  }
LAB_0548bee4:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


