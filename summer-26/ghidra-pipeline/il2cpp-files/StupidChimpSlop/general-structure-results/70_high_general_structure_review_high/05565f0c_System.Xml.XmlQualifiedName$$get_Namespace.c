/*
FUNCTION_NAME: System.Xml.XmlQualifiedName$$get_Namespace
ENTRY_POINT: 05565f0c
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


void System_Xml_XmlQualifiedName__get_Namespace(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long in_stack_00000020;
  ulong in_stack_00000028;
  
code_r0x05565f0c:
  uVar4 = FUN_05666158(param_1,param_2);
  if ((uVar4 & 1) != 0) goto System_Xml_XmlQualifiedName__get_Name;
  plVar8 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                     );
  FUN_055c98b0(plVar8,0);
  if (unaff_x26 != 0) {
    *(long *)(unaff_x26 + 0x98) = (long)plVar8;
    thunk_FUN_02dc1ef0((long *)(unaff_x26 + 0x98),plVar8);
    lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor_TypeInfo
                              );
    FUN_055c9980(lVar5,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x228))(plVar8,lVar5,*(undefined8 *)(*plVar8 + 0x230));
      if ((*unaff_x23 != 0) && (lVar5 != 0)) {
        FUN_055c98c0(lVar5,*(undefined8 *)(*unaff_x23 + 0xb0),0);
        puVar1 = System_Resources_ResourceSet_TypeInfo;
        lVar10 = *unaff_x23;
        if (lVar10 != 0) {
          lVar6 = *(long *)System_Resources_ResourceSet_TypeInfo;
          *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar10 + 0x10);
          *(undefined4 *)(lVar10 + 0x10) = 0;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar6 = *(long *)puVar1;
          }
          uVar4 = FUN_055be238(lVar10,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8),0);
          do {
            if (*(long *)(unaff_x26 + 0x98) == 0) {
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              FUN_055bc3c8(unaff_x26,0);
              FUN_055bc460(unaff_x26,0);
            }
            else {
              lVar5 = FUN_0556636c(uVar4,unaff_x26);
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) break;
              (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if ((plVar8 == (long *)0x0) ||
                 ((**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
                 lVar5 == 0)) break;
              FUN_055bc460(unaff_x26,0);
            }
            lVar5 = FUN_05562e08();
            puVar1 = System_Security_SecurityException_TypeInfo;
            if (lVar5 != 0) {
              if (in_stack_00000020 == 0) break;
              FUN_055b917c(in_stack_00000020,lVar5,0);
            }
            while( true ) {
              while( true ) {
                plVar8 = *(long **)(unaff_x21 + 0x20);
                if (plVar8 == (long *)0x0) goto LAB_05566258;
                uVar4 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
                if ((uVar4 & 1) == 0) {
                  if (((in_stack_00000028 & 0x100000000) == 0) && (unaff_x26 != 0)) {
                    FUN_055662dc();
                    return;
                  }
                  return;
                }
                plVar8 = *(long **)(unaff_x21 + 0x20);
                if (plVar8 == (long *)0x0) goto LAB_05566258;
                uVar2 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
                uVar4 = thunk_FUN_04e7e884(uVar2,*unaff_x25,0);
                if ((uVar4 & 1) != 0) {
                  thunk_FUN_02db45e8(
                                    Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo
                                    );
                  uVar3 = thunk_FUN_02d8a638();
                  uVar2 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
                  FUN_05561358(uVar3,uVar2,0,0);
                  goto LAB_05566290;
                }
                plVar8 = *(long **)(unaff_x21 + 0x20);
                if (plVar8 == (long *)0x0) goto LAB_05566258;
                uVar2 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
                uVar4 = thunk_FUN_04e7e884(uVar2,*unaff_x24,0);
                plVar8 = *(long **)(unaff_x21 + 0x20);
                if ((uVar4 & 1) == 0) break;
                if (plVar8 == (long *)0x0) goto LAB_05566258;
                uVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                uVar4 = thunk_FUN_04e7e884(uVar2,*(undefined8 *)
                                                  System_ComponentModel_DesignOnlyAttribute_var,0);
                if ((uVar4 & 1) != 0) {
                  plVar8 = *(long **)(unaff_x21 + 0x20);
                  if (plVar8 == (long *)0x0) goto LAB_05566258;
                  plVar9 = *(long **)(unaff_x21 + 0x38);
                  uVar2 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                  plVar8 = *(long **)(unaff_x21 + 0x20);
                  if ((plVar8 == (long *)0x0) ||
                     (uVar3 = (**(code **)(*plVar8 + 0x1e8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
                     plVar9 == (long *)0x0)) goto LAB_05566258;
                  (**(code **)(*plVar9 + 0x1f8))
                            (plVar9,uVar2,uVar3,*(undefined8 *)(*plVar9 + 0x200));
                }
              }
              if (plVar8 == (long *)0x0) goto LAB_05566258;
              uVar2 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              uVar4 = thunk_FUN_04e7e884(uVar2,*(undefined8 *)Mono_Security_X509_X509Store_TypeInfo,
                                         0);
              if ((uVar4 & 1) == 0) break;
              plVar8 = *(long **)(unaff_x21 + 0x20);
              if (plVar8 == (long *)0x0) goto LAB_05566258;
              uVar2 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              uVar4 = thunk_FUN_04e7e884(uVar2,*(undefined8 *)System_Xml_XmlCachedStream_TypeInfo,0)
              ;
              if ((uVar4 & 1) == 0) {
                uVar4 = FUN_04e7eb78(uVar2,*(undefined8 *)PTR_DAT_0664b148,0);
                if ((((uVar4 & 1) != 0) &&
                    (uVar4 = FUN_04e7eb78(uVar2,*(undefined8 *)System_Xml_XmlImplementation_TypeInfo
                                          ,0), (uVar4 & 1) != 0)) &&
                   (uVar4 = FUN_04e7eb78(uVar2,*(undefined8 *)
                                                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                                         ,0), (uVar4 & 1) != 0)) {
                  thunk_FUN_02db45e8(
                                    Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4_TypeInfo
                                    );
                  uVar3 = thunk_FUN_02d8a638();
                  uVar7 = thunk_FUN_02db45e8(UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
                  FUN_05567ff8(uVar3,uVar7,uVar2);
LAB_05566290:
                  uVar2 = thunk_FUN_02db45e8(
                                            UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_02d4ddac(uVar3,uVar2);
                }
              }
              else {
                if (*unaff_x23 == 0) goto LAB_05566258;
                FUN_055be0c0(*unaff_x23,1,0);
              }
            }
            if (unaff_x26 == 0) {
LAB_05565ec8:
              unaff_x26 = thunk_FUN_02d8a638();
              FUN_055bc1a8(unaff_x26,0);
              if (*unaff_x23 == 0) break;
              plVar8 = (long *)(*unaff_x23 + 0xb8);
              *plVar8 = unaff_x26;
              uVar4 = thunk_FUN_02dc1ef0(plVar8,unaff_x26);
            }
            else {
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              if (DAT_06a5416c == '\0') {
                FUN_02d4dc40(puVar1);
                DAT_06a5416c = '\x01';
              }
              uVar4 = *(ulong *)puVar1;
              if (*(int *)(uVar4 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                uVar4 = *(ulong *)puVar1;
              }
              if (unaff_x26 == **(long **)(uVar4 + 0xb8)) goto LAB_05565ec8;
            }
            if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x68) != 0)) goto code_r0x05565ef8;
System_Xml_XmlQualifiedName__get_Name:
            if (unaff_x26 == 0) break;
          } while( true );
        }
      }
    }
  }
LAB_05566258:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
code_r0x05565ef8:
  if ((*unaff_x23 == 0) || (param_1 = *(long *)(*unaff_x23 + 0xb0), param_1 == 0))
  goto LAB_05566258;
  param_2 = 0;
  goto code_r0x05565f0c;
}


