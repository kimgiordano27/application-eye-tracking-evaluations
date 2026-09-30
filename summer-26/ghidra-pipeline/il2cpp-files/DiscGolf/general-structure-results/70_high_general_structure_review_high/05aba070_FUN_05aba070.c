/*
FUNCTION_NAME: FUN_05aba070
ENTRY_POINT: 05aba070
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05aba070(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  puVar10 = OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo;
  puVar9 = OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo;
  puVar8 = OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo;
  puVar7 = OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo;
  puVar6 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_0000035D_PostfixBurstDelegate_TypeInfo
  ;
  puVar5 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
  puVar4 = PTR_DAT_06a17050;
  puVar3 = PTR_DAT_06a17020;
  puVar2 = PTR_DAT_06a17010;
  puVar1 = PTR_DAT_06a10f28;
  if ((DAT_06dc1ded & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                );
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_0000035D_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a17008);
    FUN_02d965b8(PTR_DAT_06a17010);
    FUN_02d965b8(PTR_DAT_06a17020);
    FUN_02d965b8(System_Net_Http_HttpClientHandler_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Write_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f20);
    FUN_02d965b8(PTR_DAT_06a1e340);
    FUN_02d965b8(PTR_DAT_06a13660);
    FUN_02d965b8(PTR_DAT_06a17038);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
                );
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00020);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17050);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f28);
    FUN_02d965b8(PTR_DAT_06a17068);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo);
    DAT_06dc1ded = 1;
  }
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar1,0);
  **(undefined8 **)(*(long *)puVar6 + 0xb8) = uVar11;
  LeanTween__value(*(undefined8 *)(*(long *)puVar6 + 0xb8),uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)PTR_DAT_06a00020,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x38);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Write_TypeInfo,*(undefined8 *)puVar1,0)
  ;
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x40);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo,
               *(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x48);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)PTR_DAT_06a17038,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x50);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)PTR_DAT_06a17068,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x58);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)PTR_DAT_06a17008,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo,
               *(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x68);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)PTR_DAT_06a1e340,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x70);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)PTR_DAT_06a13660,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x78);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)System_Net_Http_HttpClientHandler_<>c_TypeInfo,
               *(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x80);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo,
               *(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x88);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)PTR_DAT_06a10f20,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x90);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05bca5c4(uVar11,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
               ,*(undefined8 *)puVar1,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x98);
  *puVar12 = uVar11;
  LeanTween__value(puVar12,uVar11);
  plVar13 = (long *)FUN_02d966a4(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                                 ,0x13);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar16 = **(long **)(*(long *)puVar6 + 0xb8);
  if ((lVar16 != 0) &&
     (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_05abab44:
    uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar11,0);
  }
  if ((int)plVar13[3] != 0) {
    plVar13[4] = lVar16;
    LeanTween__value(plVar13 + 4,lVar16);
    lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    if ((lVar16 != 0) &&
       (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
    goto LAB_05abab44;
    if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
      plVar13[5] = lVar16;
      LeanTween__value(plVar13 + 5,lVar16);
      lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      if ((lVar16 != 0) &&
         (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
      goto LAB_05abab44;
      if (2 < *(uint *)(plVar13 + 3)) {
        plVar13[6] = lVar16;
        LeanTween__value(plVar13 + 6,lVar16);
        lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
        if ((lVar16 != 0) &&
           (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_05abab44;
        if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
          plVar13[7] = lVar16;
          LeanTween__value(plVar13 + 7,lVar16);
          lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
          if ((lVar16 != 0) &&
             (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
          goto LAB_05abab44;
          if (4 < *(uint *)(plVar13 + 3)) {
            plVar13[8] = lVar16;
            LeanTween__value(plVar13 + 8,lVar16);
            lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28);
            if ((lVar16 != 0) &&
               (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
            goto LAB_05abab44;
            if (5 < *(uint *)(plVar13 + 3)) {
              plVar13[9] = lVar16;
              LeanTween__value(plVar13 + 9,lVar16);
              lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30);
              if ((lVar16 != 0) &&
                 (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)
                 ) goto LAB_05abab44;
              if (6 < *(uint *)(plVar13 + 3)) {
                plVar13[10] = lVar16;
                LeanTween__value(plVar13 + 10,lVar16);
                lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x38);
                if ((lVar16 != 0) &&
                   (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar14 == 0)) goto LAB_05abab44;
                if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                  plVar13[0xb] = lVar16;
                  LeanTween__value(plVar13 + 0xb,lVar16);
                  lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x40);
                  if ((lVar16 != 0) &&
                     (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar14 == 0)) goto LAB_05abab44;
                  if (8 < *(uint *)(plVar13 + 3)) {
                    plVar13[0xc] = lVar16;
                    LeanTween__value(plVar13 + 0xc,lVar16);
                    lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x48);
                    if ((lVar16 != 0) &&
                       (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar14 == 0)) goto LAB_05abab44;
                    if (9 < *(uint *)(plVar13 + 3)) {
                      plVar13[0xd] = lVar16;
                      LeanTween__value(plVar13 + 0xd,lVar16);
                      lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x50);
                      if ((lVar16 != 0) &&
                         (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar14 == 0)) goto LAB_05abab44;
                      if (10 < *(uint *)(plVar13 + 3)) {
                        plVar13[0xe] = lVar16;
                        LeanTween__value(plVar13 + 0xe,lVar16);
                        lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x58);
                        if ((lVar16 != 0) &&
                           (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar14 == 0)) goto LAB_05abab44;
                        if (0xb < *(uint *)(plVar13 + 3)) {
                          plVar13[0xf] = lVar16;
                          LeanTween__value(plVar13 + 0xf,lVar16);
                          lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60);
                          if ((lVar16 != 0) &&
                             (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar14 == 0)) goto LAB_05abab44;
                          if (0xc < *(uint *)(plVar13 + 3)) {
                            plVar13[0x10] = lVar16;
                            LeanTween__value(plVar13 + 0x10,lVar16);
                            lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x68);
                            if ((lVar16 != 0) &&
                               (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar13 + 0x40))
                               , lVar14 == 0)) goto LAB_05abab44;
                            if (0xd < *(uint *)(plVar13 + 3)) {
                              plVar13[0x11] = lVar16;
                              LeanTween__value(plVar13 + 0x11,lVar16);
                              lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x70);
                              if ((lVar16 != 0) &&
                                 (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                      (*plVar13 + 0x40)),
                                 lVar14 == 0)) goto LAB_05abab44;
                              if (0xe < *(uint *)(plVar13 + 3)) {
                                plVar13[0x12] = lVar16;
                                LeanTween__value(plVar13 + 0x12,lVar16);
                                lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x78);
                                if ((lVar16 != 0) &&
                                   (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar14 == 0)) goto LAB_05abab44;
                                if ((*(uint *)(plVar13 + 3) & 0xfffffff0) != 0) {
                                  plVar13[0x13] = lVar16;
                                  LeanTween__value(plVar13 + 0x13,lVar16);
                                  lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x80);
                                  if ((lVar16 != 0) &&
                                     (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                          (*plVar13 + 0x40)),
                                     lVar14 == 0)) goto LAB_05abab44;
                                  if (0x10 < *(uint *)(plVar13 + 3)) {
                                    plVar13[0x14] = lVar16;
                                    LeanTween__value(plVar13 + 0x14,lVar16);
                                    lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x88);
                                    if ((lVar16 != 0) &&
                                       (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                            (*plVar13 + 0x40)),
                                       lVar14 == 0)) goto LAB_05abab44;
                                    if (0x11 < *(uint *)(plVar13 + 3)) {
                                      plVar13[0x15] = lVar16;
                                      LeanTween__value(plVar13 + 0x15,lVar16);
                                      lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x90);
                                      if ((lVar16 != 0) &&
                                         (lVar14 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)
                                                                              (*plVar13 + 0x40)),
                                         lVar14 == 0)) goto LAB_05abab44;
                                      if (0x12 < *(uint *)(plVar13 + 3)) {
                                        plVar13[0x16] = lVar16;
                                        LeanTween__value(plVar13 + 0x16,lVar16);
                                        plVar15 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xa0)
                                        ;
                                        *plVar15 = (long)plVar13;
                                        LeanTween__value(plVar15,plVar13);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


