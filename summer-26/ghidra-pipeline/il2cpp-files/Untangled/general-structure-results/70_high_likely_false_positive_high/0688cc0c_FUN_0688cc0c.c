/*
FUNCTION_NAME: FUN_0688cc0c
ENTRY_POINT: 0688cc0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void FUN_0688cc0c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = UnityEngine_UIElements_PointerMoveEvent_<>c_TypeInfo;
  puVar3 = PlayFab_Internal_PlayFabWebRequest_<>c__DisplayClass23_0_TypeInfo;
  puVar2 = PlayFab_Internal_PlayFabWebRequest_<>c__DisplayClass22_0_TypeInfo;
  if ((DAT_071d6dc5 & 1) == 0) {
    FUN_02f07e70(UnityEngine_UIElements_PointerCaptureEvent_<>c_TypeInfo);
    FUN_02f07e70(PlayFab_PlayFabSettings_<>c_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_PointerEnterEvent_<>c_TypeInfo);
    FUN_02f07e70(System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResult_TypeInfo);
    FUN_02f07e70(PlayFab_Internal_PlayFabWebRequest_<>c__DisplayClass23_0_TypeInfo);
    FUN_02f07e70(PlayFab_Internal_PlayFabWebRequest_<>c__DisplayClass22_0_TypeInfo);
    FUN_02f07e70(UnityEngine_EventSystems_PointerEventData_InputButton_TypeInfo);
    FUN_02f07e70(UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo);
    FUN_02f07e70(UnityEngine_EventSystems_PointerInputModule_MouseButtonEventData_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_PointerMoveEvent_<>c_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo);
    DAT_071d6dc5 = 1;
  }
  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_03fd0468(lVar5,*(undefined8 *)puVar3);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
  FUN_05645a04(uVar6,0);
  puVar2 = System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResult_TypeInfo;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResult_TypeInfo;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    puVar3 = UnityEngine_EventSystems_PointerEventData_InputButton_TypeInfo;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = uVar6;
        thunk_FUN_02f411dc(puVar7,uVar6);
      }
      else {
        FUN_03fd0c9c(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_06874c84(uVar6,0);
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      puVar3 = UnityEngine_UIElements_PointerEnterEvent_<>c_TypeInfo;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar6;
          thunk_FUN_02f411dc(puVar7,uVar6);
        }
        else {
          FUN_03fd0c9c(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
        FUN_06874c8c(uVar6,0);
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        puVar3 = UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = uVar6;
            thunk_FUN_02f411dc(puVar7,uVar6);
          }
          else {
            FUN_03fd0c9c(lVar5,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
          FUN_05645a04(uVar6,0);
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          puVar3 = UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar6;
              thunk_FUN_02f411dc(puVar7,uVar6);
            }
            else {
              FUN_03fd0c9c(lVar5,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
            FUN_06874c94(uVar6,0);
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar9 = *(long *)puVar2;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            puVar3 = UnityEngine_EventSystems_PointerInputModule_MouseButtonEventData_TypeInfo;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *puVar7 = uVar6;
                thunk_FUN_02f411dc(puVar7,uVar6);
              }
              else {
                FUN_03fd0c9c(lVar5,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
              FUN_05645a04(uVar6,0);
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              puVar3 = UnityEngine_UIElements_PointerCaptureEvent_<>c_TypeInfo;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar7 = uVar6;
                  thunk_FUN_02f411dc(puVar7,uVar6);
                }
                else {
                  FUN_03fd0c9c(lVar5,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                FUN_06874cac(uVar6,0);
                lVar8 = *(long *)(lVar5 + 0x10);
                lVar9 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                puVar2 = PlayFab_PlayFabSettings_<>c_TypeInfo;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar7 = uVar6;
                    thunk_FUN_02f411dc(puVar7,uVar6);
                  }
                  else {
                    FUN_03fd0c9c(lVar5,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  FUN_06872fc8(lVar5,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


