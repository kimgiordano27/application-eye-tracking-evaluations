/*
FUNCTION_NAME: System.Xml.XmlNamespaceManager$$LookupNamespace
ENTRY_POINT: 05565d4c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void System_Xml_XmlNamespaceManager__LookupNamespace(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
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
    if ((param_1 & 1) != 0) {
      thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
      uVar5 = thunk_FUN_02d8a638();
      uVar3 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
      FUN_05561358(uVar5,uVar3,0,0);
LAB_05566290:
      uVar3 = thunk_FUN_02db45e8(
                                UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar5,uVar3);
    }
    plVar2 = *(long **)(unaff_x21 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_05566258;
    uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    uVar4 = thunk_FUN_04e7e884(uVar3,*unaff_x24,0);
    plVar2 = *(long **)(unaff_x21 + 0x20);
    if ((uVar4 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_05566258;
      uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      uVar4 = thunk_FUN_04e7e884(uVar3,*(undefined8 *)Mono_Security_X509_X509Store_TypeInfo,0);
      if ((uVar4 & 1) == 0) {
        if (unaff_x26 == 0) {
LAB_05565ec8:
          unaff_x26 = thunk_FUN_02d8a638();
          FUN_055bc1a8(unaff_x26,0);
          if (*unaff_x23 == 0) goto LAB_05566258;
          plVar2 = (long *)(*unaff_x23 + 0xb8);
          *plVar2 = unaff_x26;
          uVar4 = thunk_FUN_02dc1ef0(plVar2,unaff_x26);
        }
        else {
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (DAT_06a5416c == '\0') {
            FUN_02d4dc40(unaff_x29);
            DAT_06a5416c = '\x01';
          }
          uVar4 = *unaff_x29;
          if (*(int *)(uVar4 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            uVar4 = *unaff_x29;
          }
          if (unaff_x26 == **(long **)(uVar4 + 0xb8)) goto LAB_05565ec8;
        }
        if ((unaff_x22 == 0) || (*(long *)(unaff_x22 + 0x68) == 0)) {
System_Xml_XmlQualifiedName__get_Name:
          if (unaff_x26 == 0) goto LAB_05566258;
        }
        else {
          if ((*unaff_x23 == 0) || (lVar6 = *(long *)(*unaff_x23 + 0xb0), lVar6 == 0))
          goto LAB_05566258;
          uVar4 = FUN_05666158(lVar6,0);
          if ((uVar4 & 1) != 0) goto System_Xml_XmlQualifiedName__get_Name;
          plVar2 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                             );
          FUN_055c98b0(plVar2,0);
          if (unaff_x26 == 0) goto LAB_05566258;
          *(long *)(unaff_x26 + 0x98) = (long)plVar2;
          thunk_FUN_02dc1ef0((long *)(unaff_x26 + 0x98),plVar2);
          lVar6 = thunk_FUN_02d8a638(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_TypeInfo
                                    );
          FUN_055c9980(lVar6,0);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x228))(plVar2,lVar6,*(undefined8 *)(*plVar2 + 0x230));
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
          uVar4 = FUN_055be238(lVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
        }
        if (*(long *)(unaff_x26 + 0x98) == 0) {
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
          FUN_055bc3c8(unaff_x26,0);
          FUN_055bc460(unaff_x26,0);
        }
        else {
          lVar6 = FUN_0556636c(uVar4,unaff_x26);
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_05566258;
          (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
          plVar2 = *(long **)(unaff_x21 + 0x20);
          if ((plVar2 == (long *)0x0) ||
             ((**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0)), lVar6 == 0))
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
        plVar2 = *(long **)(unaff_x21 + 0x20);
        if (plVar2 == (long *)0x0) goto LAB_05566258;
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        uVar4 = thunk_FUN_04e7e884(uVar3,*(undefined8 *)System_Xml_XmlCachedStream_TypeInfo,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_04e7eb78(uVar3,*(undefined8 *)PTR_DAT_0664b148,0);
          if ((((uVar4 & 1) == 0) ||
              (uVar4 = FUN_04e7eb78(uVar3,*(undefined8 *)System_Xml_XmlImplementation_TypeInfo,0),
              (uVar4 & 1) == 0)) ||
             (uVar4 = FUN_04e7eb78(uVar3,*(undefined8 *)
                                          UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                                   ,0), (uVar4 & 1) == 0)) goto LAB_05566110;
          thunk_FUN_02db45e8(Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo);
          uVar5 = thunk_FUN_02d8a638();
          uVar8 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
          FUN_05567ff8(uVar5,uVar8,uVar3);
          goto LAB_05566290;
        }
        if (*unaff_x23 == 0) goto LAB_05566258;
        FUN_055be0c0(*unaff_x23,1,0);
      }
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_05566258;
      uVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
      uVar4 = thunk_FUN_04e7e884(uVar3,*(undefined8 *)System_ComponentModel_DesignOnlyAttribute_var,
                                 0);
      if ((uVar4 & 1) != 0) {
        plVar2 = *(long **)(unaff_x21 + 0x20);
        if (plVar2 == (long *)0x0) goto LAB_05566258;
        plVar9 = *(long **)(unaff_x21 + 0x38);
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        plVar2 = *(long **)(unaff_x21 + 0x20);
        if ((plVar2 == (long *)0x0) ||
           (uVar5 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0)),
           plVar9 == (long *)0x0)) goto LAB_05566258;
        (**(code **)(*plVar9 + 0x1f8))(plVar9,uVar3,uVar5,*(undefined8 *)(*plVar9 + 0x200));
      }
    }
LAB_05566110:
    plVar2 = *(long **)(unaff_x21 + 0x20);
    if (plVar2 == (long *)0x0) {
LAB_05566258:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar4 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
    if ((uVar4 & 1) == 0) {
      if (((in_stack_00000028 & 0x100000000) == 0) && (unaff_x26 != 0)) {
        FUN_055662dc();
        return;
      }
      return;
    }
    plVar2 = *(long **)(unaff_x21 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_05566258;
    uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    param_1 = thunk_FUN_04e7e884(uVar3,*unaff_x25,0);
  } while( true );
}


