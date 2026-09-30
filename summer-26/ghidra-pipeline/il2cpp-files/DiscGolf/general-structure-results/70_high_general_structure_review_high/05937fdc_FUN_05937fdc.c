/*
FUNCTION_NAME: FUN_05937fdc
ENTRY_POINT: 05937fdc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_05937fdc(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  
  if ((DAT_06dc1062 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0acf0);
    FUN_02d965b8(PTR_DAT_06a1ffd8);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a0ad38);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    FUN_02d965b8(CodeMonkey_MonoBehaviours_CameraFollow_<>c__DisplayClass5_0_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo);
    FUN_02d965b8(System_Xml_XmlDocument_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayTexelAspect_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_02d965b8(Unity_Services_Lobbies_Http_HttpClient_<>c__DisplayClass4_0_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetSkeletalBoneData_TypeInfo);
    FUN_02d965b8(System_BitConverter_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayTexture_TypeInfo);
    FUN_02d965b8(System_Net_Cache_RequestCacheLevel_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_XmlSerializableWriter_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__RemoveApplicationManifest_TypeInfo);
    FUN_02d965b8(System_Xml_XmlDictionaryReaderQuotas_TypeInfo);
    DAT_06dc1062 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_0593886c;
  uVar8 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  puVar3 = PTR_DAT_069fb9c0;
  if (param_3 == (long *)0x0) {
LAB_05938180:
    bVar2 = false;
    bVar6 = false;
    plVar12 = (long *)0x0;
LAB_0593818c:
    lVar15 = *(long *)(PTR_DAT_069fb9c0 + 0x90);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_054f73b4(lVar15 + 0x20,0);
    uVar10 = FUN_05501380(uVar8,uVar9,0);
    if ((uVar10 & 1) != 0) {
      lVar15 = *(long *)(puVar3 + 0x28);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054f73b4(lVar15 + 0x20,0);
      uVar10 = FUN_05501380(uVar8,uVar9,0);
      if ((uVar10 & 1) != 0) {
        lVar15 = *(long *)(puVar3 + 0xe0);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar15);
        }
        uVar9 = FUN_054f73b4(lVar15 + 0x20,0);
        uVar10 = FUN_05501380(uVar8,uVar9,0);
        if ((uVar10 & 1) != 0) {
          lVar15 = *(long *)(puVar3 + 0x10);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar9 = FUN_054f73b4(lVar15 + 0x20,0);
          uVar10 = FUN_05501380(uVar8,uVar9,0);
          if ((uVar10 & 1) != 0) {
            uVar9 = *(undefined8 *)PTR_DAT_06a1ffd8;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar9 = FUN_054f73b4(uVar9,0);
            uVar10 = FUN_05501380(uVar8,uVar9,0);
            if ((uVar10 & 1) != 0) {
              lVar15 = *(long *)(puVar3 + 0x68);
              if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar9 = FUN_054f73b4(lVar15 + 0x20,0);
              uVar10 = FUN_05501380(uVar8,uVar9,0);
              if ((uVar10 & 1) != 0) {
                lVar15 = *(long *)(puVar3 + 0x48);
                if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar9 = FUN_054f73b4(lVar15 + 0x20,0);
                uVar10 = FUN_05501380(uVar8,uVar9,0);
                if ((uVar10 & 1) != 0) {
                  return;
                }
              }
            }
          }
        }
      }
    }
    bVar14 = false;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
       )) goto LAB_05938180;
    bVar2 = true;
    bVar14 = true;
    bVar6 = (char)param_3[0x12] != '\0';
    plVar12 = param_3;
    if (*(char *)((long)param_3 + 0x91) == '\0') goto LAB_0593818c;
  }
  uVar10 = (**(code **)(*param_2 + 0x298))(param_2,param_3,*(undefined8 *)(*param_2 + 0x2a0));
  if ((uVar10 & 1) == 0) {
    if (!bVar6) {
      return;
    }
  }
  else {
    lVar15 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    puVar3 = OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo;
    if (*(int *)(*(long *)OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    }
    if (lVar15 == 0) goto LAB_0593886c;
    uVar7 = FUN_05c99e6c(lVar15,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
    if (!bVar6 && (uVar7 & 1) == 0) {
      return;
    }
  }
  plVar11 = (long *)(**(code **)(*param_2 + 600))(param_2,param_3,*(undefined8 *)(*param_2 + 0x260))
  ;
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    bVar1 = *(byte *)(*(long *)CodeMonkey_MonoBehaviours_CameraFollow_<>c__DisplayClass5_0_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar15 + 0x130)) &&
       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)CodeMonkey_MonoBehaviours_CameraFollow_<>c__DisplayClass5_0_TypeInfo)) {
      return;
    }
    bVar1 = *(byte *)(*(long *)System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(lVar15 + 0x130)) &&
       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo)) {
      return;
    }
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)System_Xml_XmlDocument_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)
                               System_Runtime_Serialization_XmlSerializableWriter_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)System_Xml_XmlDictionaryReaderQuotas_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)System_BitConverter_<>c_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)
                               OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayTexelAspect_TypeInfo,4
                        ,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayTexture_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)
                               OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)
                               Unity_Services_Lobbies_Http_HttpClient_<>c__DisplayClass4_0_TypeInfo,
                        4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  if (bVar2) {
    uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    puVar3 = OVR_OpenVR_IVRApplications__RemoveApplicationManifest_TypeInfo;
    uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)
                                 OVR_OpenVR_IVRApplications__RemoveApplicationManifest_TypeInfo,4,0)
    ;
    if ((uVar10 & 1) != 0) {
      if (plVar12 != (long *)0x0) {
        lVar15 = FUN_05938870(plVar12[7]);
        puVar4 = PTR_DAT_069fb9c0;
        if (!bVar6) {
          lVar13 = plVar12[7];
          uVar8 = *(undefined8 *)PTR_DAT_06a0acf0;
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar8 = FUN_054f73b4(uVar8,0);
          uVar10 = FUN_055006dc(lVar13,uVar8,0);
          puVar5 = OVR_OpenVR_IVRInput__GetSkeletalBoneData_TypeInfo;
          if ((uVar10 & 1) == 0) {
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x10) == 0) {
                bVar14 = true;
              }
              if ((!bVar14) &&
                 ((uVar10 = thunk_FUN_0536b75c(lVar15,*(undefined8 *)
                                                                                                              
                                                  OVR_OpenVR_IVRInput__GetSkeletalBoneData_TypeInfo,
                                               0), (uVar10 & 1) == 0 ||
                  (uVar10 = FUN_0536ba54(plVar12[0x1c],*(undefined8 *)puVar5,0), (uVar10 & 1) == 0))
                 )) {
                lVar15 = plVar12[7];
                uVar8 = *(undefined8 *)PTR_DAT_06a0ad38;
                if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar8 = FUN_054f73b4(uVar8,0);
                uVar10 = FUN_055006dc(lVar15,uVar8,0);
                if ((uVar10 & 1) == 0) {
                  return;
                }
              }
              FUN_05939414(param_1,param_4,plVar12[7]);
              return;
            }
            goto LAB_0593886c;
          }
        }
        plVar12 = (long *)plVar12[7];
        if ((plVar12 == (long *)0x0) ||
           (uVar8 = (**(code **)(*plVar12 + 0x368))(plVar12,*(undefined8 *)(*plVar12 + 0x370)),
           param_4 == (long *)0x0)) goto LAB_0593886c;
        lVar15 = *param_4;
        uVar9 = *(undefined8 *)puVar3;
        goto LAB_05938798;
      }
      goto LAB_0593886c;
    }
    uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    uVar10 = FUN_0536b7a8(uVar8,*(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlaySortOrder_TypeInfo,4
                          ,0);
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  lVar15 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  if (lVar15 != 0) {
    uVar8 = FUN_05ca9e5c(lVar15,plVar11,0);
    uVar9 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    if (param_4 != (long *)0x0) {
      lVar15 = *param_4;
LAB_05938798:
                    /* WARNING: Could not recover jumptable at 0x059387bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 0x558))
                (param_4,uVar9,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,uVar8,
                 *(undefined8 *)(lVar15 + 0x560));
      return;
    }
  }
LAB_0593886c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


