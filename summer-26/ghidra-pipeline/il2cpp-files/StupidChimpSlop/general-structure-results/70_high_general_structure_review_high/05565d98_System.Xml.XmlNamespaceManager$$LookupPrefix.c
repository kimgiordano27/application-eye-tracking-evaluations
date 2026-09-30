/*
FUNCTION_NAME: System.Xml.XmlNamespaceManager$$LookupPrefix
ENTRY_POINT: 05565d98
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void System_Xml_XmlNamespaceManager__LookupPrefix
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  ulong *unaff_x29;
  long in_stack_00000020;
  ulong in_stack_00000028;
  
  do {
    uVar2 = thunk_FUN_04e7e884(param_2,*param_1,param_4);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(unaff_x21 + 0x20);
      if (plVar3 == (long *)0x0) {
LAB_05566258:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      plVar9 = *(long **)(unaff_x21 + 0x38);
      uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      plVar3 = *(long **)(unaff_x21 + 0x20);
      if ((plVar3 == (long *)0x0) ||
         (uVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0)),
         plVar9 == (long *)0x0)) goto LAB_05566258;
      (**(code **)(*plVar9 + 0x1f8))(plVar9,uVar4,uVar5,*(undefined8 *)(*plVar9 + 0x200));
    }
LAB_05566110:
    plVar3 = *(long **)(unaff_x21 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_05566258;
    uVar2 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
    if ((uVar2 & 1) == 0) {
      if (((in_stack_00000028 & 0x100000000) == 0) && (unaff_x26 != 0)) {
        FUN_055662dc();
        return;
      }
      return;
    }
    plVar3 = *(long **)(unaff_x21 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_05566258;
    uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    uVar2 = thunk_FUN_04e7e884(uVar4,*unaff_x25,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
      uVar5 = thunk_FUN_02d8a638();
      uVar4 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
      FUN_05561358(uVar5,uVar4,0,0);
LAB_05566290:
      uVar4 = thunk_FUN_02db45e8(
                                UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar5,uVar4);
    }
    plVar3 = *(long **)(unaff_x21 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_05566258;
    uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    uVar2 = thunk_FUN_04e7e884(uVar4,*unaff_x24,0);
    plVar3 = *(long **)(unaff_x21 + 0x20);
    if ((uVar2 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_05566258;
      uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      uVar2 = thunk_FUN_04e7e884(uVar4,*(undefined8 *)Mono_Security_X509_X509Store_TypeInfo,0);
      if ((uVar2 & 1) == 0) {
        if (unaff_x26 == 0) {
LAB_05565ec8:
          unaff_x26 = thunk_FUN_02d8a638();
          FUN_055bc1a8(unaff_x26,0);
          if (*unaff_x23 == 0) goto LAB_05566258;
          plVar3 = (long *)(*unaff_x23 + 0xb8);
          *plVar3 = unaff_x26;
          uVar2 = thunk_FUN_02dc1ef0(plVar3,unaff_x26);
          if (unaff_x22 == 0) goto System_Xml_XmlQualifiedName__get_Name;
LAB_05565ef0:
          if (*(long *)(unaff_x22 + 0x68) == 0) goto System_Xml_XmlQualifiedName__get_Name;
          if ((*unaff_x23 == 0) || (lVar6 = *(long *)(*unaff_x23 + 0xb0), lVar6 == 0))
          goto LAB_05566258;
          uVar2 = FUN_05666158(lVar6,0);
          if ((uVar2 & 1) != 0) goto System_Xml_XmlQualifiedName__get_Name;
          plVar3 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                             );
          FUN_055c98b0(plVar3,0);
          if (unaff_x26 == 0) goto LAB_05566258;
          *(long *)(unaff_x26 + 0x98) = (long)plVar3;
          thunk_FUN_02dc1ef0((long *)(unaff_x26 + 0x98),plVar3);
          lVar6 = thunk_FUN_02d8a638(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_TypeInfo
                                    );
          FUN_055c9980(lVar6,0);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x228))(plVar3,lVar6,*(undefined8 *)(*plVar3 + 0x230));
          if ((*unaff_x23 == 0) || (lVar6 == 0)) goto LAB_05566258;
          FUN_055c98c0(lVar6,*(undefined8 *)(*unaff_x23 + 0xb0),0);
          puVar1 = System_Resources_ResourceSet_TypeInfo;
          lVar10 = *unaff_x23;
          if (lVar10 == 0) goto LAB_05566258;
          lVar7 = *(long *)System_Resources_ResourceSet_TypeInfo;
          *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar10 + 0x10);
          *(undefined4 *)(lVar10 + 0x10) = 0;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar7 = *(long *)puVar1;
          }
          uVar2 = FUN_055be238(lVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
        }
        else {
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (DAT_06a5416c == '\0') {
            FUN_02d4dc40(unaff_x29);
            DAT_06a5416c = '\x01';
          }
          uVar2 = *unaff_x29;
          if (*(int *)(uVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            uVar2 = *unaff_x29;
          }
          if (unaff_x26 == **(long **)(uVar2 + 0xb8)) goto LAB_05565ec8;
          if (unaff_x22 != 0) goto LAB_05565ef0;
System_Xml_XmlQualifiedName__get_Name:
          if (unaff_x26 == 0) goto LAB_05566258;
        }
        if (*(long *)(unaff_x26 + 0x98) == 0) {
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
          FUN_055bc3c8(unaff_x26,0);
          FUN_055bc460(unaff_x26,0);
        }
        else {
          lVar6 = FUN_0556636c(uVar2,unaff_x26);
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
          plVar3 = *(long **)(unaff_x21 + 0x20);
          if ((plVar3 == (long *)0x0) ||
             ((**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0)), lVar6 == 0))
          goto LAB_05566258;
          FUN_055bc460(unaff_x26,0);
        }
        lVar6 = FUN_05562e08();
        unaff_x29 = (ulong *)System_Security_SecurityException_TypeInfo;
        if (lVar6 != 0) {
          if (in_stack_00000020 == 0) goto LAB_05566258;
          FUN_055b917c(in_stack_00000020,lVar6,0);
        }
      }
      else {
        plVar3 = *(long **)(unaff_x21 + 0x20);
        if (plVar3 == (long *)0x0) goto LAB_05566258;
        uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar2 = thunk_FUN_04e7e884(uVar4,*(undefined8 *)System_Xml_XmlCachedStream_TypeInfo,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_04e7eb78(uVar4,*(undefined8 *)PTR_DAT_0664b148,0);
          if ((((uVar2 & 1) != 0) &&
              (uVar2 = FUN_04e7eb78(uVar4,*(undefined8 *)System_Xml_XmlImplementation_TypeInfo,0),
              (uVar2 & 1) != 0)) &&
             (uVar2 = FUN_04e7eb78(uVar4,*(undefined8 *)
                                          UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                                   ,0), (uVar2 & 1) != 0)) {
            thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
            uVar5 = thunk_FUN_02d8a638();
            uVar8 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
            FUN_05567ff8(uVar5,uVar8,uVar4);
            goto LAB_05566290;
          }
        }
        else {
          if (*unaff_x23 == 0) goto LAB_05566258;
          FUN_055be0c0(*unaff_x23,1,0);
        }
      }
      goto LAB_05566110;
    }
    if (plVar3 == (long *)0x0) goto LAB_05566258;
    param_2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    param_4 = 0;
    param_1 = (undefined8 *)System_ComponentModel_DesignOnlyAttribute_var;
  } while( true );
}


