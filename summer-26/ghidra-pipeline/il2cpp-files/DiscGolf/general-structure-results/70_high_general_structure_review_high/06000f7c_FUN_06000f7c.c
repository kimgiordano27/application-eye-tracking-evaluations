/*
FUNCTION_NAME: FUN_06000f7c
ENTRY_POINT: 06000f7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0600148c) */

long FUN_06000f7c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 local_50;
  long **pplStack_48;
  undefined4 local_40;
  long *local_38;
  
  if ((DAT_06dc49f4 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketErrorListener>d__51>__
                );
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(Method_System_Xml_Base64Encoder_Encode__);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<CustomMatchmakingNGO_<Awake>d__5>__
                );
    FUN_02d965b8(OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff540);
    FUN_02d965b8(PTR_DAT_069ff558);
    DAT_06dc49f4 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_38 = (long *)0x0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar6 = FUN_066465f4(*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      if (iVar1 != 1) {
Unity_Services_Vivox_AudioInputDevices__Clear:
        local_50 = thunk_FUN_02dfd288(Method_System_Text_Base64Encoding_GetByteCount__);
        local_40 = *(undefined4 *)(param_1 + 0x10);
        pplStack_48 = (long **)0xffffffffffffffff;
        uVar11 = FUN_0551e574(&local_50,0);
        uVar7 = thunk_FUN_02dfd288(
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LobbyManager_<CreateLobby>d__52>__
                                  );
        uVar11 = FUN_05362cb4(uVar7,uVar11,0);
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar7 = thunk_FUN_02dd3144();
        FUN_05452924(uVar7,uVar11,0);
        uVar11 = thunk_FUN_02dfd288(Method_System_Text_Base64Encoding_GetBytes__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar7,uVar11);
      }
      uVar5 = FUN_0536c9cc(*(undefined8 *)(param_1 + 0x28),0);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      if ((uVar5 & 1) == 0) {
        lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
                                  );
        puVar8 = (undefined8 *)PTR_DAT_069ff540;
        goto LAB_06001138;
      }
      lVar6 = FUN_06646710(uVar11,**(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8),0);
    }
  }
  else {
    if (iVar1 == 2) {
      uVar5 = FUN_0536c9cc(*(undefined8 *)(param_1 + 0x28),0);
      if ((uVar5 & 1) != 0) {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar11 = thunk_FUN_02dd3144();
        uVar7 = thunk_FUN_02dfd288(
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LobbyManager_<HandleLobbyPolling>d__47>__
                                  );
        FUN_05452924(uVar11,uVar7,0);
        uVar7 = thunk_FUN_02dfd288(Method_System_Text_Base64Encoding_GetBytes__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar11,uVar7);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
                                );
      puVar8 = (undefined8 *)OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo;
LAB_06001138:
      FUN_06644864(lVar6,uVar11,*puVar8,0);
      plVar12 = (long *)FUN_0538828c(0);
      if (plVar12 == (long *)0x0) goto LAB_06001488;
      uVar11 = (**(code **)(*plVar12 + 600))
                         (plVar12,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*plVar12 + 0x260))
      ;
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<CustomMatchmakingNGO_<Awake>d__5>__
                                );
      FUN_066468f0(uVar7,uVar11,0);
      if (lVar6 == 0) goto LAB_06001488;
      FUN_06644c54(lVar6,uVar7,0);
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketErrorListener>d__51>__
                                 );
      FUN_066443b4(uVar11,0);
    }
    else {
      if (iVar1 != 3) goto Unity_Services_Vivox_AudioInputDevices__Clear;
      lVar6 = FUN_06646698(*(undefined8 *)(param_1 + 0x18),0);
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketErrorListener>d__51>__
                                 );
      FUN_066443b4(uVar11,0);
      if (lVar6 == 0) goto LAB_06001488;
    }
    FUN_06644b8c(lVar6,uVar11,0);
  }
  uVar5 = FUN_0536c9cc(*(undefined8 *)(param_1 + 0x30),0);
  if ((uVar5 & 1) == 0) {
    if (lVar6 == 0) goto LAB_06001488;
    FUN_06645d78(lVar6,*(undefined8 *)PTR_DAT_069ff558,*(undefined8 *)(param_1 + 0x30),0);
  }
  plVar12 = *(long **)(param_1 + 0x20);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06001260;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)
                                   UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                          ,0);
LAB_06001260:
    puVar3 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
    puVar2 = PTR_DAT_069fbff8;
    local_38 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    pplStack_48 = &local_38;
    local_50 = 0;
    do {
      plVar12 = local_38;
      if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *local_38;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_060012dc;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c(local_38,*(long *)puVar2,0);
LAB_060012dc:
      uVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      plVar12 = local_38;
      if ((uVar5 & 1) == 0) {
        if (local_38 == (long *)0x0) break;
        lVar9 = *local_38;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 == 0) goto LAB_060013b8;
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_060013a0;
      }
      if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *local_38;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06001340;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c(local_38,*(long *)puVar3,0);
LAB_06001340:
      auVar13 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_06645d78(lVar6,auVar13._0_8_,auVar13._8_8_,0);
    } while( true );
  }
  goto LAB_060013e4;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_060013a0:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_060013d4;
    }
  }
LAB_060013b8:
  puVar8 = (undefined8 *)FUN_02dd004c(local_38,*(long *)PTR_DAT_069fbff0,0);
LAB_060013d4:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
LAB_060013e4:
  plVar12 = *(long **)(param_1 + 0x40);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_System_Xml_Base64Encoder_Encode__) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06001444;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)Method_System_Xml_Base64Encoder_Encode__,1)
    ;
LAB_06001444:
    uVar4 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (lVar6 != 0) {
      FUN_066464e8(lVar6,uVar4,0);
      return lVar6;
    }
  }
LAB_06001488:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


