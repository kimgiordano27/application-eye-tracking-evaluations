/*
FUNCTION_NAME: FUN_05565bdc
ENTRY_POINT: 05565bdc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_05565bdc(long param_1,long *param_2,long *param_3,uint param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  
  puVar2 = MS_Internal_Xml_XPath_XPathScanner_TypeInfo;
  if ((DAT_06a5412a & 1) == 0) {
    FUN_02d4dc40(System_Resources_ResourceSet_TypeInfo);
    FUN_02d4dc40(System_Security_SecurityException_TypeInfo);
    FUN_02d4dc40(MS_Internal_Xml_XPath_XPathScanner_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlCachedStream_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactables_DistanceInfo_var);
    FUN_02d4dc40(
                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                );
    FUN_02d4dc40(Mono_Security_X509_X509Store_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_DesignOnlyAttribute_var);
    FUN_02d4dc40(PTR_DAT_0664d098);
    FUN_02d4dc40(PTR_DAT_0664b148);
    FUN_02d4dc40(System_Xml_XmlImplementation_TypeInfo);
    DAT_06a5412a = 1;
  }
  puVar19 = (ulong *)System_Security_SecurityException_TypeInfo;
  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
  FUN_055b79e4(lVar5,0);
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Interactables_DistanceInfo_var;
  puVar2 = PTR_DAT_0664d098;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*puVar19 + 0x130);
    if (bVar1 <= *(byte *)(*param_3 + 0x130)) {
      plVar10 = param_3;
      if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *puVar19) {
        plVar10 = (long *)0x0;
      }
      goto LAB_05565d2c;
    }
  }
  plVar10 = (long *)0x0;
LAB_05565d2c:
  do {
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_05566258;
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar8 = thunk_FUN_04e7e884(uVar7,*(undefined8 *)puVar2,0);
    if ((uVar8 & 1) != 0) {
      thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
      uVar9 = thunk_FUN_02d8a638();
      uVar7 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
      FUN_05561358(uVar9,uVar7,0,0);
LAB_05566290:
      uVar7 = thunk_FUN_02db45e8(
                                UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar9,uVar7);
    }
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_05566258;
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar8 = thunk_FUN_04e7e884(uVar7,*(undefined8 *)puVar3,0);
    plVar6 = *(long **)(param_1 + 0x20);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05566258;
      uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      uVar8 = thunk_FUN_04e7e884(uVar7,*(undefined8 *)Mono_Security_X509_X509Store_TypeInfo,0);
      if ((uVar8 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        uVar8 = thunk_FUN_04e7e884(uVar7,*(undefined8 *)System_Xml_XmlCachedStream_TypeInfo,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = FUN_04e7eb78(uVar7,*(undefined8 *)PTR_DAT_0664b148,0);
          if ((((uVar8 & 1) != 0) &&
              (uVar8 = FUN_04e7eb78(uVar7,*(undefined8 *)System_Xml_XmlImplementation_TypeInfo,0),
              (uVar8 & 1) != 0)) &&
             (uVar8 = FUN_04e7eb78(uVar7,*(undefined8 *)
                                          UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                                   ,0), (uVar8 & 1) != 0)) {
            thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
            uVar9 = thunk_FUN_02d8a638();
            uVar15 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
            FUN_05567ff8(uVar9,uVar15,uVar7);
            goto LAB_05566290;
          }
        }
        else {
          if (*param_2 == 0) goto LAB_05566258;
          FUN_055be0c0(*param_2,1,0);
        }
        goto LAB_05566110;
      }
      if (plVar10 == (long *)0x0) {
LAB_05565ec8:
        plVar10 = (long *)thunk_FUN_02d8a638();
        FUN_055bc1a8(plVar10,0);
        if (*param_2 == 0) goto LAB_05566258;
        plVar6 = (long *)(*param_2 + 0xb8);
        *plVar6 = (long)plVar10;
        uVar8 = thunk_FUN_02dc1ef0(plVar6,plVar10);
      }
      else {
        if (*(int *)(*puVar19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (DAT_06a5416c == '\0') {
          FUN_02d4dc40(puVar19);
          DAT_06a5416c = '\x01';
        }
        uVar8 = *puVar19;
        if (*(int *)(uVar8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          uVar8 = *puVar19;
        }
        if (plVar10 == (long *)**(long **)(uVar8 + 0xb8)) goto LAB_05565ec8;
      }
      if ((param_3 == (long *)0x0) || (param_3[0xd] == 0)) {
System_Xml_XmlQualifiedName__get_Name:
        if (plVar10 == (long *)0x0) goto LAB_05566258;
      }
      else {
        if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0xb0), lVar11 == 0))
        goto LAB_05566258;
        uVar8 = FUN_05666158(lVar11,0);
        if ((uVar8 & 1) != 0) goto System_Xml_XmlQualifiedName__get_Name;
        plVar6 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                             UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                           );
        FUN_055c98b0(plVar6,0);
        if (plVar10 == (long *)0x0) goto LAB_05566258;
        plVar10[0x13] = (long)plVar6;
        thunk_FUN_02dc1ef0(plVar10 + 0x13,plVar6);
        lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_TypeInfo
                                   );
        FUN_055c9980(lVar11,0);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        (**(code **)(*plVar6 + 0x228))(plVar6,lVar11,*(undefined8 *)(*plVar6 + 0x230));
        if ((*param_2 == 0) || (lVar11 == 0)) goto LAB_05566258;
        FUN_055c98c0(lVar11,*(undefined8 *)(*param_2 + 0xb0),0);
        puVar4 = System_Resources_ResourceSet_TypeInfo;
        lVar17 = *param_2;
        if (lVar17 == 0) goto LAB_05566258;
        lVar14 = *(long *)System_Resources_ResourceSet_TypeInfo;
        *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar17 + 0x10);
        *(undefined4 *)(lVar17 + 0x10) = 0;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar14 = *(long *)puVar4;
        }
        uVar8 = FUN_055be238(lVar17,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
      }
      if (plVar10[0x13] == 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar9 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar15 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar12 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        uVar18 = FUN_055bc3c8(plVar10,0);
        uVar13 = FUN_055bc460(plVar10,0);
      }
      else {
        lVar11 = FUN_0556636c(uVar8,plVar10);
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar9 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        uVar15 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        plVar6 = *(long **)(param_1 + 0x20);
        if ((plVar6 == (long *)0x0) ||
           (uVar12 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
           lVar11 == 0)) goto LAB_05566258;
        uVar18 = *(undefined8 *)(lVar11 + 0x50);
        uVar13 = FUN_055bc460(plVar10,0);
      }
      lVar11 = FUN_05562e08(param_1,uVar7,uVar9,uVar15,uVar12,param_4 & 1,param_5,uVar18,uVar13);
      puVar19 = (ulong *)System_Security_SecurityException_TypeInfo;
      if (lVar11 != 0) {
        if (lVar5 == 0) goto LAB_05566258;
        FUN_055b917c(lVar5,lVar11,0);
      }
    }
    else {
      if (plVar6 == (long *)0x0) goto LAB_05566258;
      uVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      uVar8 = thunk_FUN_04e7e884(uVar7,*(undefined8 *)System_ComponentModel_DesignOnlyAttribute_var,
                                 0);
      if ((uVar8 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05566258;
        plVar16 = *(long **)(param_1 + 0x38);
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if ((plVar6 == (long *)0x0) ||
           (uVar9 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
           plVar16 == (long *)0x0)) goto LAB_05566258;
        (**(code **)(*plVar16 + 0x1f8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x200));
      }
    }
LAB_05566110:
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) {
LAB_05566258:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar8 = (**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
    if ((uVar8 & 1) == 0) {
      if (((param_4 & 1) == 0) && (plVar10 != (long *)0x0)) {
        FUN_055662dc(param_1,plVar10,lVar5);
        return;
      }
      return;
    }
  } while( true );
}


