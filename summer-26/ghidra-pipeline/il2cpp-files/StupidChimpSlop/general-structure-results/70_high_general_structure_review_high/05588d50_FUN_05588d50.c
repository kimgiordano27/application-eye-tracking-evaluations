/*
FUNCTION_NAME: FUN_05588d50
ENTRY_POINT: 05588d50
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_9;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05589b98) */
/* WARNING: Removing unreachable block (ram,0x0558a2d8) */
/* WARNING: Removing unreachable block (ram,0x05589de8) */
/* WARNING: Removing unreachable block (ram,0x05589928) */
/* WARNING: Removing unreachable block (ram,0x0558a058) */
/* WARNING: Removing unreachable block (ram,0x0558ae2c) */
/* WARNING: Removing unreachable block (ram,0x0558a528) */
/* WARNING: Removing unreachable block (ram,0x0558ae3c) */

void FUN_05588d50(long param_1,long param_2,long param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  int *piVar20;
  long *plVar21;
  int iVar22;
  
  if ((DAT_06a541ab & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_0664bda0);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(Photon_Pun_PhotonAnimatorView_<>c__DisplayClass23_0_TypeInfo);
    FUN_02d4dc40(Photon_Pun_PhotonAnimatorView_<>c__DisplayClass24_0_TypeInfo);
    FUN_02d4dc40(Photon_Pun_PhotonAnimatorView_<>c__DisplayClass25_0_TypeInfo);
    FUN_02d4dc40(Photon_Pun_PhotonAnimatorView_SynchronizedLayer_TypeInfo);
    FUN_02d4dc40(Photon_Pun_PhotonAnimatorView_SynchronizedParameter_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(Newtonsoft_Json_Converters_XAttributeWrapper_TypeInfo);
    FUN_02d4dc40(System_Xml_Linq_XCData_TypeInfo);
    FUN_02d4dc40(System_Xml_Linq_XComment_TypeInfo);
    FUN_02d4dc40(System_Security_SecurityException_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo);
    FUN_02d4dc40(System_Xml_Linq_XContainer_TypeInfo);
    FUN_02d4dc40(PhotonDebug_<>c_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Converters_XContainerWrapper_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_OnExecutionRegisteredDelegate_TypeInfo
                );
    FUN_02d4dc40(PhotonDebug_<>c__DisplayClass37_0_TypeInfo);
    FUN_02d4dc40(Photon_Pun_PhotonHandler_<>c_TypeInfo);
    FUN_02d4dc40(System_Net_WebConnectionTunnel_TypeInfo);
    FUN_02d4dc40(System_Data_XDRSchema_TypeInfo);
    FUN_02d4dc40(Photon_Pun_PhotonNetwork_<>c_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_OnGraphRegisteredDelegate_TypeInfo
                );
    FUN_02d4dc40(Photon_Pun_PhotonNetwork_SerializeViewBatch_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_PlayerInputManager_PlayerLeftEvent_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_PlayerLoopHelper_<>c_TypeInfo);
    FUN_02d4dc40(Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo);
    FUN_02d4dc40(UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo);
    FUN_02d4dc40(PlayFab_Events_PlayFabEvents_PlayFabErrorEvent_TypeInfo);
    FUN_02d4dc40(PlayFab_Internal_PlayFabHttp_<SendScreenTimeEvents>d__17_TypeInfo);
    FUN_02d4dc40(PlayFab_Internal_PlayFabHttp_ApiProcessErrorEvent_TypeInfo);
    FUN_02d4dc40(System_Net_PathList_PathListComparer_TypeInfo);
    FUN_02d4dc40(PlayFab_Internal_PlayFabUnityHttp_<SimpleCallCoroutine>d__10_TypeInfo);
    FUN_02d4dc40(System_Xml_XmlImplementation_TypeInfo);
    DAT_06a541ab = 1;
  }
  if (param_2 == 0) goto LAB_0558adc4;
  if (*(char *)(param_2 + 0x30) != '\0') {
    return;
  }
  plVar21 = (long *)(param_2 + 0x48);
  *(undefined1 *)(param_2 + 0x30) = 1;
  if (*plVar21 != 0) {
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 == (long *)0x0) goto LAB_0558adc4;
    lVar12 = (**(code **)(*plVar11 + 0x198))(plVar11,*plVar21,*(undefined8 *)(*plVar11 + 0x1a0));
    *plVar21 = lVar12;
    thunk_FUN_02dc1ef0(plVar21,lVar12);
    if (lVar12 == 0) goto LAB_0558adc4;
    if (*(int *)(lVar12 + 0x10) == 0) {
      FUN_056996a8(param_1,*(undefined8 *)Photon_Pun_PhotonNetwork_SerializeViewBatch_TypeInfo,
                   param_2,0);
    }
    else {
      if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_0565fb78(lVar12,0);
    }
  }
  lVar12 = *(long *)(param_2 + 0x50);
  if (lVar12 != 0) {
    if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_0565be04(lVar12,0);
  }
  if (param_4 == 2) {
    uVar13 = FUN_04e7eb78(param_3,*plVar21,0);
    puVar15 = (undefined8 *)Photon_Pun_PhotonNetwork_<>c_TypeInfo;
joined_r0x05589080:
    if ((uVar13 & 1) != 0) {
      FUN_056997e8(param_1,*puVar15,param_3,*(undefined8 *)(param_2 + 0x48),param_2,0);
    }
  }
  else if (param_4 == 1) {
    if (*plVar21 != 0) {
      uVar13 = FUN_04e7eb78(param_3,*plVar21,0);
      puVar15 = (undefined8 *)PlayFab_Internal_PlayFabUnityHttp_<SimpleCallCoroutine>d__10_TypeInfo;
      goto joined_r0x05589080;
    }
  }
  else if (param_4 == 0) {
    lVar18 = *plVar21;
    lVar12 = lVar18;
    if (((param_3 != 0) && (lVar12 = param_3, lVar18 == 0)) &&
       (lVar12 = 0, *(int *)(param_3 + 0x10) != 0)) {
      lVar12 = param_3;
    }
    uVar13 = FUN_04e7eb78(lVar12,lVar18,0);
    param_3 = lVar12;
    puVar15 = (undefined8 *)System_Net_PathList_PathListComparer_TypeInfo;
    goto joined_r0x05589080;
  }
  puVar4 = 
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_OnExecutionRegisteredDelegate_TypeInfo;
  puVar8 = PlayFab_Events_PlayFabEvents_PlayFabErrorEvent_TypeInfo;
  puVar5 = Newtonsoft_Json_Converters_XContainerWrapper_TypeInfo;
  puVar3 = UnityEngine_InputSystem_Controls_DpadControl_var;
  lVar12 = *(long *)(param_2 + 0x58);
  if (lVar12 != 0) {
    iVar22 = 0;
    while (iVar9 = FUN_04fa9478(lVar12,0), iVar22 < iVar9) {
      plVar11 = *(long **)(param_2 + 0x58);
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                      (plVar11,iVar22,*(undefined8 *)(*plVar11 + 0x310)),
         plVar11 == (long *)0x0)) goto LAB_0558adc4;
      bVar1 = *(byte *)(*(long *)System_Xml_Linq_XContainer_TypeInfo + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Xml_Linq_XContainer_TypeInfo)) goto LAB_0558ae24;
      plVar11[5] = param_2;
      uVar14 = thunk_FUN_02dc1ef0(plVar11 + 5,param_2);
      FUN_0558b454(uVar14,plVar11);
      lVar12 = plVar11[7];
      if (lVar12 == 0) {
        lVar12 = *plVar11;
        bVar1 = *(byte *)(*(long *)Photon_Pun_PhotonHandler_<>c_TypeInfo + 0x130);
        if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Photon_Pun_PhotonHandler_<>c_TypeInfo)) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
          goto LAB_05589198;
        }
        if (plVar11[9] == 0) {
          FUN_05699620(param_1,*(undefined8 *)
                                PlayFab_Internal_PlayFabHttp_ApiProcessErrorEvent_TypeInfo,
                       *(undefined8 *)System_Xml_XmlImplementation_TypeInfo,plVar11,0);
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_0565fb78(lVar12,0);
      }
LAB_05589198:
      lVar18 = *plVar11;
      lVar12 = plVar11[9];
      bVar1 = *(byte *)(lVar18 + 0x130);
      if (lVar12 == 0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if (((bVar2 <= bVar1) &&
            (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) &&
           (lVar12 = plVar11[0xd], lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x10) == 0) {
            FUN_05699620(param_1,*(undefined8 *)
                                  Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo,lVar12,
                         plVar11,0);
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0565fb78(lVar12,0);
          }
        }
      }
      else {
        bVar2 = *(byte *)(*(long *)Photon_Pun_PhotonHandler_<>c_TypeInfo + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Photon_Pun_PhotonHandler_<>c_TypeInfo)) {
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5))
          goto LAB_055891f8;
          if (((plVar11[0xd] == 0) &&
              (puVar15 = (undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_RenderGraph_OnGraphRegisteredDelegate_TypeInfo
              , *plVar21 == 0)) ||
             (uVar13 = thunk_FUN_04e7e884(plVar11[0xd],*plVar21,0), puVar15 = (undefined8 *)puVar8,
             (uVar13 & 1) != 0)) {
            FUN_056996a8(param_1,*puVar15,plVar11,0);
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
LAB_0558ae24:
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268(plVar11);
          }
          lVar12 = plVar11[9];
          lVar18 = plVar11[0xd];
          uVar14 = 2;
        }
        else {
LAB_055891f8:
          lVar18 = *plVar21;
          uVar14 = 1;
        }
        FUN_05588d50(param_1,lVar12,lVar18,uVar14);
      }
      lVar12 = *(long *)(param_2 + 0x58);
      iVar22 = iVar22 + 1;
      if (lVar12 == 0) goto LAB_0558adc4;
    }
    FUN_0558b234(param_1,param_2);
    if (param_3 == 0) {
      param_3 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
    }
    if (param_1 != 0) {
      *(long *)(param_1 + 0x48) = param_3;
      thunk_FUN_02dc1ef0((long *)(param_1 + 0x48),param_3);
      uVar19 = *(uint *)(param_2 + 0x3c);
      if (uVar19 != 0xff) {
        if (uVar19 == 0x100) {
          uVar19 = 0;
        }
        else {
          if (7 < uVar19) {
            FUN_056996a8(param_1,*(undefined8 *)
                                  Cysharp_Threading_Tasks_PlayerLoopHelper_<>c_TypeInfo,param_2,0);
            uVar19 = *(uint *)(param_2 + 0x3c);
          }
          uVar19 = uVar19 & 7;
        }
      }
      *(uint *)(param_1 + 0x5c) = uVar19;
      uVar19 = *(uint *)(param_2 + 0x40);
      if (uVar19 != 0xff) {
        if (uVar19 == 0x100) {
          uVar19 = 0;
        }
        else {
          if ((uVar19 & 0xffffffe1) != 0) {
            FUN_056996a8(param_1,*(undefined8 *)
                                  UnityEngine_InputSystem_PlayerInputManager_PlayerLeftEvent_TypeInfo
                         ,param_2,0);
            uVar19 = *(uint *)(param_2 + 0x40);
          }
          uVar19 = uVar19 & 0x1e;
        }
      }
      *(uint *)(param_1 + 0x60) = uVar19;
      iVar22 = 2;
      if (*(int *)(param_2 + 0x38) != 0) {
        iVar22 = *(int *)(param_2 + 0x38);
      }
      *(int *)(param_1 + 0x54) = iVar22;
      iVar22 = 2;
      if (*(int *)(param_2 + 0x34) != 0) {
        iVar22 = *(int *)(param_2 + 0x34);
      }
      *(int *)(param_1 + 0x58) = iVar22;
      puVar8 = PhotonDebug_<>c__DisplayClass37_0_TypeInfo;
      puVar5 = PhotonDebug_<>c_TypeInfo;
      puVar3 = PTR_DAT_066479b0;
      lVar12 = *(long *)(param_2 + 0x58);
      if (lVar12 != 0) {
        iVar22 = 0;
        goto LAB_0558956c;
      }
    }
  }
LAB_0558adc4:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
LAB_0558956c:
  iVar9 = FUN_04fa9478(lVar12,0);
  if (iVar22 < iVar9) {
    plVar21 = *(long **)(param_2 + 0x58);
    if ((plVar21 != (long *)0x0) &&
       (plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                    (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310)),
       plVar21 != (long *)0x0)) {
      bVar1 = *(byte *)(*plVar21 + 0x130);
      bVar2 = *(byte *)(*(long *)System_Xml_Linq_XContainer_TypeInfo + 0x130);
      if ((bVar1 < bVar2) ||
         (lVar12 = *(long *)(*plVar21 + 200),
         *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *(long *)System_Xml_Linq_XContainer_TypeInfo))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar21);
      }
      bVar2 = *(byte *)(*(long *)Photon_Pun_PhotonHandler_<>c_TypeInfo + 0x130);
      if ((bVar2 <= bVar1) &&
         (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) ==
          *(long *)Photon_Pun_PhotonHandler_<>c_TypeInfo)) {
        if (plVar21[9] == 0) {
          lVar12 = plVar21[0xd];
          if (lVar12 == 0) goto LAB_0558adc4;
          iVar9 = 0;
          while (iVar10 = FUN_04fa9478(lVar12,0), iVar9 < iVar10) {
            plVar11 = (long *)plVar21[0xd];
            if (plVar11 == (long *)0x0) goto LAB_0558adc4;
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar9,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 == (long *)0x0) {
LAB_05589694:
              FUN_056996a8(param_1,*(undefined8 *)
                                    PlayFab_Internal_PlayFabHttp_<SendScreenTimeEvents>d__17_TypeInfo
                           ,plVar21,0);
              break;
            }
            bVar1 = *(byte *)(*(long *)Newtonsoft_Json_Converters_XAttributeWrapper_TypeInfo + 0x130
                             );
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Newtonsoft_Json_Converters_XAttributeWrapper_TypeInfo)) goto LAB_05589694;
            lVar12 = plVar21[0xd];
            iVar9 = iVar9 + 1;
            if (lVar12 == 0) goto LAB_0558adc4;
          }
        }
        else {
          FUN_0558b540(param_1,plVar21);
        }
      }
      lVar12 = plVar21[9];
      if (lVar12 == 0) goto LAB_0558a52c;
      lVar18 = FUN_055b803c(lVar12,0);
      if ((lVar18 != 0) &&
         (plVar11 = (long *)FUN_055c0968(lVar18,0),
         puVar4 = Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo, plVar11 != (long *)0x0)) {
        lVar18 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar13 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0664bda0) {
              puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_05589738;
            }
            uVar13 = uVar13 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar13 != 0);
        }
        puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0664bda0,0);
LAB_05589738:
        plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar18 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_055897ac;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,0);
LAB_055897ac:
          uVar13 = (*(code *)*puVar15)(plVar11,puVar15[1]);
          if ((uVar13 & 1) == 0) goto LAB_0558988c;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar18 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_05589814;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,1);
LAB_05589814:
          plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
          if (plVar16 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4e268(plVar16);
            }
          }
          uVar14 = FUN_055b803c(param_2,0);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8(uVar14,uVar14);
          }
          FUN_05698e50(param_1,uVar14,plVar16[0x18],plVar16,0);
        } while( true );
      }
    }
  }
  else {
    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                 Photon_Pun_PhotonAnimatorView_SynchronizedParameter_TypeInfo);
    FUN_036a55a0(lVar12,*(undefined8 *)Photon_Pun_PhotonAnimatorView_<>c__DisplayClass24_0_TypeInfo)
    ;
    puVar6 = Photon_Pun_PhotonAnimatorView_<>c__DisplayClass23_0_TypeInfo;
    puVar4 = System_Net_WebConnectionTunnel_TypeInfo;
    puVar3 = System_Security_SecurityException_TypeInfo;
    lVar18 = *(long *)(param_2 + 0x60);
    if (lVar18 != 0) {
      iVar22 = 0;
      puVar15 = (undefined8 *)UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo;
      goto LAB_0558a7bc;
    }
  }
  goto LAB_0558adc4;
LAB_0558988c:
  plVar11 = (long *)thunk_FUN_02d8a53c(plVar11,*(undefined8 *)PTR_DAT_066479a8);
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05589910;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_066479a8,0);
LAB_05589910:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  lVar18 = FUN_055b7eec(lVar12,0);
  if ((lVar18 != 0) &&
     (plVar11 = (long *)FUN_055c0968(lVar18,0), puVar4 = System_Xml_Linq_XComment_TypeInfo,
     plVar11 != (long *)0x0)) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0664bda0) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_055899a8;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0664bda0,0);
LAB_055899a8:
    plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05589a1c;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,0);
LAB_05589a1c:
      uVar13 = (*(code *)*puVar15)(plVar11,puVar15[1]);
      if ((uVar13 & 1) == 0) goto LAB_05589afc;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_05589a84;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,1);
LAB_05589a84:
      plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      if (plVar16 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar16);
        }
      }
      uVar14 = FUN_055b7eec(param_2,0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8(uVar14,uVar14);
      }
      FUN_05698e50(param_1,uVar14,plVar16[0x10],plVar16,0);
    } while( true );
  }
  goto LAB_0558adc4;
LAB_05589afc:
  plVar11 = (long *)thunk_FUN_02d8a53c(plVar11,*(undefined8 *)PTR_DAT_066479a8);
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05589b80;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_066479a8,0);
LAB_05589b80:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  if ((*(long *)(lVar12 + 0xa0) != 0) &&
     (plVar11 = (long *)FUN_055c0968(*(long *)(lVar12 + 0xa0),0), plVar11 != (long *)0x0)) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0664bda0) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05589c0c;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0664bda0,0);
LAB_05589c0c:
    plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05589c80;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,0);
LAB_05589c80:
      uVar13 = (*(code *)*puVar15)(plVar11,puVar15[1]);
      if ((uVar13 & 1) == 0) goto LAB_05589d4c;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_05589ce8;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,1);
LAB_05589ce8:
      plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar16);
      }
      FUN_05698e50(param_1,*(undefined8 *)(param_2 + 0xa0),plVar16[0xd],plVar16,0);
    } while( true );
  }
  goto LAB_0558adc4;
LAB_05589d4c:
  plVar11 = (long *)thunk_FUN_02d8a53c(plVar11,*(undefined8 *)PTR_DAT_066479a8);
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05589dd0;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_066479a8,0);
LAB_05589dd0:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  lVar18 = FUN_055b7f5c(lVar12,0);
  if ((lVar18 != 0) &&
     (plVar11 = (long *)FUN_055c0968(lVar18,0), puVar4 = System_Xml_Linq_XCData_TypeInfo,
     plVar11 != (long *)0x0)) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0664bda0) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05589e68;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0664bda0,0);
LAB_05589e68:
    plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05589edc;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,0);
LAB_05589edc:
      uVar13 = (*(code *)*puVar15)(plVar11,puVar15[1]);
      if ((uVar13 & 1) == 0) goto LAB_05589fbc;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_05589f44;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,1);
LAB_05589f44:
      plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      if (plVar16 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar16);
        }
      }
      uVar14 = FUN_055b7f5c(param_2,0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8(uVar14,uVar14);
      }
      FUN_05698e50(param_1,uVar14,plVar16[0xd],plVar16,0);
    } while( true );
  }
  goto LAB_0558adc4;
LAB_05589fbc:
  plVar11 = (long *)thunk_FUN_02d8a53c(plVar11,*(undefined8 *)PTR_DAT_066479a8);
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0558a040;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_066479a8,0);
LAB_0558a040:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  lVar18 = FUN_055b7fcc(lVar12,0);
  if ((lVar18 != 0) &&
     (plVar11 = (long *)FUN_055c0968(lVar18,0), puVar4 = System_Data_XDRSchema_TypeInfo,
     plVar11 != (long *)0x0)) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0664bda0) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0558a0d8;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0664bda0,0);
LAB_0558a0d8:
    plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_0558a14c;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,0);
LAB_0558a14c:
      uVar13 = (*(code *)*puVar15)(plVar11,puVar15[1]);
      if ((uVar13 & 1) == 0) goto LAB_0558a23c;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar18 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_0558a1b4;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,1);
LAB_0558a1b4:
      plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      if (plVar16 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar16);
        }
      }
      uVar14 = FUN_055b7fcc(param_2,0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar17 = FUN_055c96a8(plVar16,0);
      FUN_05698e50(param_1,uVar14,uVar17,plVar16,0);
    } while( true );
  }
  goto LAB_0558adc4;
LAB_0558a23c:
  plVar11 = (long *)thunk_FUN_02d8a53c(plVar11,*(undefined8 *)PTR_DAT_066479a8);
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0558a2c0;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_066479a8,0);
LAB_0558a2c0:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
  if ((*(long *)(lVar12 + 0xa8) != 0) &&
     (plVar11 = (long *)FUN_055c0968(*(long *)(lVar12 + 0xa8),0), plVar11 != (long *)0x0)) {
    lVar12 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0664bda0) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0558a34c;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0664bda0,0);
LAB_0558a34c:
    plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar12 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_0558a3c0;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,0);
LAB_0558a3c0:
      uVar13 = (*(code *)*puVar15)(plVar11,puVar15[1]);
      if ((uVar13 & 1) == 0) goto LAB_0558a48c;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar12 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_0558a428;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)puVar3,1);
LAB_0558a428:
      plVar16 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar16);
      }
      FUN_05698e50(param_1,*(undefined8 *)(param_2 + 0xa8),plVar16[0xd],plVar16,0);
    } while( true );
  }
  goto LAB_0558adc4;
LAB_0558a48c:
  plVar11 = (long *)thunk_FUN_02d8a53c(plVar11,*(undefined8 *)PTR_DAT_066479a8);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_066479a8) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0558a510;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_066479a8,0);
LAB_0558a510:
    (*(code *)*puVar15)(plVar11,puVar15[1]);
  }
LAB_0558a52c:
  FUN_05588af4(param_1,plVar21);
  lVar12 = *(long *)(param_2 + 0x58);
  iVar22 = iVar22 + 1;
  if (lVar12 == 0) goto LAB_0558adc4;
  goto LAB_0558956c;
LAB_0558a7bc:
  iVar9 = FUN_04fa9478(lVar18,0);
  puVar7 = Photon_Pun_PhotonAnimatorView_SynchronizedLayer_TypeInfo;
  if (iVar9 <= iVar22) {
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) < 1) goto LAB_0558ae1c;
      iVar22 = 0;
      while( true ) {
        lVar18 = *(long *)(param_2 + 0x60);
        uVar14 = FUN_036a5b38(lVar12,iVar22,*(undefined8 *)puVar7);
        if (lVar18 == 0) break;
        FUN_055bfcc8(lVar18,uVar14,0);
        iVar22 = iVar22 + 1;
        if (*(int *)(lVar12 + 0x18) <= iVar22) {
LAB_0558ae1c:
          *(undefined1 *)(param_2 + 0x30) = 0;
          return;
        }
      }
    }
    goto LAB_0558adc4;
  }
  plVar21 = *(long **)(param_2 + 0x60);
  if ((plVar21 == (long *)0x0) ||
     (lVar18 = (**(code **)(*plVar21 + 0x308))(plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310)),
     lVar18 == 0)) goto LAB_0558adc4;
  *(long *)(lVar18 + 0x28) = param_2;
  thunk_FUN_02dc1ef0((long *)(lVar18 + 0x28),param_2);
  plVar21 = *(long **)(param_2 + 0x60);
  if (plVar21 == (long *)0x0) goto LAB_0558adc4;
  plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                              (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
  if (plVar21 == (long *)0x0) {
LAB_0558a850:
    plVar21 = *(long **)(param_2 + 0x60);
    if (plVar21 == (long *)0x0) goto LAB_0558adc4;
    plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
    if (plVar21 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)System_Xml_Linq_XCData_TypeInfo + 0x130);
      if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Xml_Linq_XCData_TypeInfo)) goto LAB_0558a8a4;
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 != (long *)0x0) {
        plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                    (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
        if (plVar21 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)System_Xml_Linq_XCData_TypeInfo + 0x130);
          if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Xml_Linq_XCData_TypeInfo)) goto LAB_0558ae44;
        }
        FUN_0558c764(param_1,plVar21);
        uVar14 = FUN_055b7f5c(param_2,0);
        if (plVar21 != (long *)0x0) {
LAB_0558ada4:
          lVar18 = plVar21[0xd];
          goto LAB_0558ada8;
        }
      }
      goto LAB_0558adc4;
    }
LAB_0558a8a4:
    plVar21 = *(long **)(param_2 + 0x60);
    if (plVar21 == (long *)0x0) goto LAB_0558adc4;
    plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
    if (plVar21 == (long *)0x0) {
LAB_0558a8f0:
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                  (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
      if (plVar21 != (long *)0x0) {
        lVar18 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar18 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar21 + 0x130)) &&
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) == lVar18)) {
          plVar21 = *(long **)(param_2 + 0x60);
          if (plVar21 != (long *)0x0) {
            plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                        (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
            if (plVar21 != (long *)0x0) {
              lVar18 = *(long *)puVar4;
              bVar1 = *(byte *)(lVar18 + 0x130);
              if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) != lVar18))
              goto LAB_0558ae44;
            }
            FUN_0558d110(param_1,plVar21,0);
            goto LAB_0558ac40;
          }
          goto LAB_0558adc4;
        }
      }
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                  (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
      if (plVar21 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar21 + 0x130)) &&
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo)) {
          plVar21 = *(long **)(param_2 + 0x60);
          if (plVar21 != (long *)0x0) {
            plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                        (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
            if (plVar21 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo + 0x130
                               );
              if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Newtonsoft_Json_Converters_XCommentWrapper_TypeInfo)) goto LAB_0558ae44;
            }
            FUN_0558d708(param_1,plVar21);
            uVar14 = FUN_055b803c(param_2,0);
            if (plVar21 != (long *)0x0) {
              lVar18 = plVar21[0x18];
              goto LAB_0558ada8;
            }
          }
          goto LAB_0558adc4;
        }
      }
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                  (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
      if (plVar21 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar21 + 0x130)) &&
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          plVar21 = *(long **)(param_2 + 0x60);
          if (plVar21 != (long *)0x0) {
            plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                        (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
            if (plVar21 == (long *)0x0) {
              FUN_0558d95c(param_1,0);
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
LAB_0558ae44:
                    /* WARNING: Subroutine does not return */
              FUN_02d4e268(plVar21);
            }
            FUN_0558d95c(param_1,plVar21);
            uVar14 = *(undefined8 *)(param_2 + 0xa0);
            goto LAB_0558ada4;
          }
          goto LAB_0558adc4;
        }
      }
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                  (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
      if (plVar21 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar21 + 0x130)) &&
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar8)) {
          plVar21 = *(long **)(param_2 + 0x60);
          if (plVar21 != (long *)0x0) {
            uVar14 = (**(code **)(*plVar21 + 0x308))
                               (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
            plVar21 = (long *)FUN_02922484(uVar14,*(undefined8 *)puVar8);
            FUN_0558db28(param_1,plVar21);
            if (plVar21 != (long *)0x0) {
              uVar14 = *(undefined8 *)(param_2 + 0xa8);
              goto LAB_0558ada4;
            }
          }
          goto LAB_0558adc4;
        }
      }
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                  (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
      if (plVar21 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Newtonsoft_Json_Converters_XAttributeWrapper_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar21 + 0x130)) &&
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Newtonsoft_Json_Converters_XAttributeWrapper_TypeInfo)) goto LAB_0558adb8;
      }
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      uVar14 = (**(code **)(*plVar21 + 0x308))(plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
      FUN_056996a8(param_1,*puVar15,uVar14,0);
      plVar21 = *(long **)(param_2 + 0x60);
      if ((plVar21 == (long *)0x0) ||
         (uVar14 = (**(code **)(*plVar21 + 0x308))(plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310))
         , lVar12 == 0)) goto LAB_0558adc4;
      FUN_029257b4(lVar12,uVar14,*(undefined8 *)puVar6);
    }
    else {
      lVar18 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar18 + 0x130);
      if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) != lVar18))
      goto LAB_0558a8f0;
      plVar21 = *(long **)(param_2 + 0x60);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      plVar21 = (long *)(**(code **)(*plVar21 + 0x308))
                                  (plVar21,iVar22,*(undefined8 *)(*plVar21 + 0x310));
      if (plVar21 != (long *)0x0) {
        lVar18 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar18 + 0x130);
        if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) != lVar18))
        goto LAB_0558ae44;
      }
      FUN_0558c864(param_1,plVar21,0);
LAB_0558ac40:
      uVar14 = FUN_055b7fcc(param_2,0);
      if (plVar21 == (long *)0x0) goto LAB_0558adc4;
      uVar17 = FUN_055c96a8(plVar21,0);
      FUN_05698e50(param_1,uVar14,uVar17,plVar21,0);
      puVar15 = (undefined8 *)UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)System_Xml_Linq_XComment_TypeInfo + 0x130);
    if ((*(byte *)(*plVar21 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Linq_XComment_TypeInfo)) goto LAB_0558a850;
    FUN_0558c5f4(param_1,plVar21);
    uVar14 = FUN_055b7eec(param_2,0);
    lVar18 = plVar21[0x10];
LAB_0558ada8:
    FUN_05698e50(param_1,uVar14,lVar18,plVar21,0);
  }
LAB_0558adb8:
  lVar18 = *(long *)(param_2 + 0x60);
  iVar22 = iVar22 + 1;
  if (lVar18 == 0) goto LAB_0558adc4;
  goto LAB_0558a7bc;
}


