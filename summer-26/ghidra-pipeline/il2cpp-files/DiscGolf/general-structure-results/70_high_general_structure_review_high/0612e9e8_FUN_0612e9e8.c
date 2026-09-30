/*
FUNCTION_NAME: FUN_0612e9e8
ENTRY_POINT: 0612e9e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_11
*/


void FUN_0612e9e8(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_68;
  
  if ((DAT_06dc6711 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc860);
    FUN_02d965b8(Method_System_Guid_Parse__);
    FUN_02d965b8(PTR_DAT_069fe788);
    FUN_02d965b8(Method_System_Guid_Parse__);
    FUN_02d965b8(Method_System_Guid_StringToInt__);
    FUN_02d965b8(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandle__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<string,_string>>,_SessionsManager_<CreateSession>d__55>__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleRead__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_LobbyManager_<CreateLobby>d__52>__
                );
    FUN_02d965b8(Method_System_Guid_StringToLong__);
    FUN_02d965b8(Method_System_Guid_ToString__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyManager_<HandleLobbyPolling>d__47>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<>c__DisplayClass46_0_<<CreateChannel>b__1>d>__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__);
    FUN_02d965b8(Method_System_Guid_TryFormat__);
    FUN_02d965b8(Method_System_ComponentModel_GuidConverter_ConvertTo__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_HID_HID_OnFindLayoutForDevice__);
    DAT_06dc6711 = 1;
  }
  puVar1 = PTR_DAT_069fe788;
  local_68 = 0;
  if (*param_1 == 0) {
    local_68 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar13 = *(long *)(param_1 + 10);
    lVar2 = FUN_035c1040(*(long *)(param_1 + 8),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                        );
    if (lVar2 == 0) {
      thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_HID_HID_ReadHIDDeviceDescriptor__);
      uVar12 = thunk_FUN_02dd3144();
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_InputSystem_HID_HIDParser_ParseReportDescriptor__
                                );
      FUN_06353088(uVar12,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_InputSystem_HID_HIDParser_ParseReportDescriptor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar8);
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = FUN_035c1040(*(long *)(param_1 + 8),*(undefined8 *)Method_System_Guid_StringToLong__);
    if (lVar3 == 0) {
      thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_HID_HID_ReadHIDDeviceDescriptor__);
      uVar12 = thunk_FUN_02dd3144();
      uVar8 = thunk_FUN_02dfd288(Method_System_Security_Cryptography_HMAC_set_Key__);
      FUN_06353088(uVar12,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_InputSystem_HID_HIDParser_ParseReportDescriptor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar8);
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar4 = (long *)FUN_035c1040(*(long *)(param_1 + 8),
                                  *(undefined8 *)
                                   Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandle__
                                 );
    if (plVar4 == (long *)0x0) {
      thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_HID_HID_ReadHIDDeviceDescriptor__);
      uVar12 = thunk_FUN_02dd3144();
      uVar8 = thunk_FUN_02dfd288(Method_System_Xml_HWStack_Push__);
      FUN_06353088(uVar12,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_InputSystem_HID_HIDParser_ParseReportDescriptor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar8);
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar5 = (long *)FUN_035c1040(*(long *)(param_1 + 8),
                                  *(undefined8 *)
                                   Method_UnityEngine_Rendering_BaseCommandBuffer_ValidateTextureHandleRead__
                                 );
    if (plVar5 == (long *)0x0) {
      thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_HID_HID_ReadHIDDeviceDescriptor__);
      uVar12 = thunk_FUN_02dd3144();
      uVar8 = thunk_FUN_02dfd288(Method_System_Xml_HWStack_get_Item__);
      FUN_06353088(uVar12,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_InputSystem_HID_HIDParser_ParseReportDescriptor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar8);
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar6 = (long *)FUN_035c1040(*(long *)(param_1 + 8),
                                  *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<string,_string>>,_SessionsManager_<CreateSession>d__55>__
                                 );
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar12 = *(undefined8 *)Method_UnityEngine_InputSystem_HID_HID_OnFindLayoutForDevice__;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyManager_<HandleLobbyPolling>d__47>__
           ) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0612ec34;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar6,*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyManager_<HandleLobbyPolling>d__47>__
                          ,0);
LAB_0612ec34:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,uVar12,puVar7[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar12 = *(undefined8 *)Method_System_ComponentModel_GuidConverter_ConvertTo__;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<>c__DisplayClass46_0_<<CreateChannel>b__1>d>__
           ) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0612ecb0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar6,*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<>c__DisplayClass46_0_<<CreateChannel>b__1>d>__
                          ,2);
LAB_0612ecb0:
    (*(code *)*puVar7)(0x3ff0000000000000,plVar6,uVar12,0,puVar7[1]);
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_035c1040(*(long *)(param_1 + 8),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_LobbyManager_<CreateLobby>d__52>__
                        );
    if (lVar9 == 0) {
      thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_HID_HID_ReadHIDDeviceDescriptor__);
      uVar12 = thunk_FUN_02dd3144();
      uVar8 = thunk_FUN_02dfd288(Method_System_Xml_HWStack_set_Item__);
      FUN_06353088(uVar12,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_InputSystem_HID_HIDParser_ParseReportDescriptor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar8);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar12 = FUN_0612e858(lVar9,plVar4,lVar9);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Guid_TryFormat__);
    FUN_0552aca4(uVar8,0);
    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Guid_StringToInt__);
    FUN_06122644(lVar13,uVar12,lVar2,plVar6,lVar3,uVar8);
    plVar6 = (long *)(param_1 + 0xc);
    *plVar6 = lVar13;
    LeanTween__value(plVar6,lVar13);
    lVar2 = *plVar6;
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc860);
    FUN_04be213c(uVar12,lVar2,*(undefined8 *)Method_System_Guid_Parse__,0);
    lVar2 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__)
        {
          puVar7 = (undefined8 *)(lVar2 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0612ede4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar5,*(long *)
                                  Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__
                          ,1);
LAB_0612ede4:
    (*(code *)*puVar7)(plVar5,uVar12,puVar7[1]);
    lVar2 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
           ) {
          puVar7 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0612ee48;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar4,*(long *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                          ,0);
LAB_0612ee48:
    uVar12 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    uVar10 = FUN_0536c9cc(uVar12,0);
    if ((uVar10 & 1) != 0) goto LAB_0612ee9c;
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = FUN_06123280(*plVar6,1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_68 = FUN_0555c32c(lVar2,0);
    uVar10 = FUN_0540fae0(&local_68,0);
    if ((uVar10 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_68;
      LeanTween__value(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0353a974(param_1 + 2,&local_68,param_1,*(undefined8 *)Method_System_Guid_Parse__);
      return;
    }
  }
  FUN_0540fba8(&local_68,0);
LAB_0612ee9c:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_035c1610(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),
                 *(undefined8 *)Method_System_Guid_ToString__);
    *param_1 = -2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    LeanTween__value(param_1 + 0xc,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05410914(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


