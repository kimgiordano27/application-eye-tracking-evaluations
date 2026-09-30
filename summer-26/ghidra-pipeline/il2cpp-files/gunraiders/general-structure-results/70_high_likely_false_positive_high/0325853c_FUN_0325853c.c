/*
FUNCTION_NAME: FUN_0325853c
ENTRY_POINT: 0325853c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x03259544) */

void FUN_0325853c(int *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 local_80 [16];
  long *local_70;
  ulong uStack_68;
  undefined1 local_60 [16];
  
  if ((DAT_04532ac9 & 1) == 0) {
    FUN_01c5d288(Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectedEventArgs>_get_HasHandlers__)
    ;
    FUN_01c5d288(Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>__ctor__);
    FUN_01c5d288(PTR_DAT_042320b0);
    FUN_01c5d288(Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_AddHandler__);
    FUN_01c5d288(UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo);
    FUN_01c5d288(WeaponPickup_<AfterGrab>d__20_TypeInfo);
    FUN_01c5d288(AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_DropdownMenu_<>c__DisplayClass4_0_TypeInfo);
    FUN_01c5d288(System_IO_Compression_DeflateStreamNative_SafeDeflateStreamHandle_TypeInfo);
    FUN_01c5d288(Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_InvokeAsync__);
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04532ac9 = 1;
  }
  puVar2 = PTR_DAT_042320b0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  iVar18 = *param_1;
  lVar13 = *(long *)(param_1 + 10);
  if (iVar18 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    iVar18 = -1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_03258694:
    FUN_03201ea0(local_60,0);
    auVar19 = local_60;
  }
  else {
    auVar19 = ZEXT816(0);
    if (3 < iVar18 - 1U) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      local_60 = FUN_0334498c(*(long *)(param_1 + 8),0,0);
      uVar8 = FUN_03201e70(local_60,0);
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_022f87d4(param_1 + 2,local_60,param_1,
                     *(undefined8 *)
                      Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectedEventArgs>_get_HasHandlers__
                    );
        return;
      }
      goto LAB_03258694;
    }
  }
  switch(iVar18) {
  case 1:
    uStack_68 = *(ulong *)(param_1 + 0x18);
    local_70 = *(long **)(param_1 + 0x16);
    iVar18 = -1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_032586d8:
    local_60 = auVar19;
    if (DAT_04531f56 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f56 = '\x01';
    }
    if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f57 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f57 = '\x01';
    }
    plVar9 = local_70;
    if (local_70 != (long *)0x0) {
      lVar16 = *local_70;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = uStack_68 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_03258ba0;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258ba0:
        (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
      }
      else {
        FUN_032018f0(local_70,0);
      }
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(lVar13 + 0x44) = 0;
    auVar19 = FUN_0309ef84(param_1 + 0xc,
                           *(undefined8 *)
                            AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo);
    FUN_03238610(lVar13,auVar19._0_8_,auVar19._8_8_,0);
    goto LAB_03258e68;
  case 2:
    uStack_68 = *(ulong *)(param_1 + 0x18);
    local_70 = *(long **)(param_1 + 0x16);
    iVar18 = -1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_032588e8:
    local_60 = auVar19;
    if (DAT_04531f56 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f56 = '\x01';
    }
    if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f57 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f57 = '\x01';
    }
    plVar9 = local_70;
    if (local_70 != (long *)0x0) {
      lVar16 = *local_70;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = uStack_68 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_03258e94;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258e94:
        (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
      }
      else {
        FUN_032018f0(local_70,0);
      }
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(lVar13 + 0x44) = 0;
    break;
  case 3:
    uStack_68 = *(ulong *)(param_1 + 0x18);
    local_70 = *(long **)(param_1 + 0x16);
    iVar18 = -1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_032587d4:
    local_60 = auVar19;
    if (DAT_04531f56 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f56 = '\x01';
    }
    if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f57 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f57 = '\x01';
    }
    plVar9 = local_70;
    if (local_70 != (long *)0x0) {
      lVar16 = *local_70;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = uStack_68 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_03258bfc;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258bfc:
        (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
      }
      else {
        FUN_032018f0(local_70,0);
      }
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(lVar13 + 0x44) = 0;
LAB_03258c14:
    plVar9 = *(long **)(lVar13 + 0x28);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    auVar19 = (**(code **)(*plVar9 + 0x318))
                        (plVar9,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                         *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar9 + 800));
    puVar3 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
    if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uStack_68 = auVar19._8_8_ & 0xffff;
    local_70 = auVar19._0_8_;
    if (DAT_04531f54 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f54 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f55 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f55 = '\x01';
    }
    plVar9 = local_70;
    auVar19 = local_60;
    if (local_70 != (long *)0x0) {
      lVar16 = *local_70;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = uStack_68 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03258d48;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_03258d48:
        iVar7 = (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
        auVar19 = local_60;
        if (iVar7 == 0) goto LAB_03258f6c;
      }
      else {
        uVar8 = FUN_03344708(local_70,0);
        auVar19 = local_60;
        if ((uVar8 & 1) == 0) {
LAB_03258f6c:
          *param_1 = 4;
          *(ulong *)(param_1 + 0x18) = uStack_68;
          *(long **)(param_1 + 0x16) = local_70;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_022f9ca8(param_1 + 2,&local_70,param_1,
                       *(undefined8 *)
                        Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>__ctor__);
          return;
        }
      }
    }
    goto LAB_03258d5c;
  case 4:
    uStack_68 = *(ulong *)(param_1 + 0x18);
    local_70 = *(long **)(param_1 + 0x16);
    iVar18 = -1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_03258d5c:
    local_60 = auVar19;
    if (DAT_04531f56 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f56 = '\x01';
    }
    if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f57 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f57 = '\x01';
    }
    plVar9 = local_70;
    if (local_70 != (long *)0x0) {
      lVar16 = *local_70;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = uStack_68 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_03258e54;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258e54:
        (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
      }
      else {
        FUN_032018f0(local_70,0);
      }
    }
LAB_03258e68:
    uVar5 = 0x1c;
    uVar14 = 0x1c;
    goto joined_r0x03258eb4;
  default:
    local_60 = auVar19;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar7 = *(int *)(lVar13 + 0x44);
    if (iVar7 == 0) {
      FUN_032373cc(lVar13,0);
      iVar7 = *(int *)(lVar13 + 0x44);
    }
    puVar3 = WeaponPickup_<AfterGrab>d__20_TypeInfo;
    piVar12 = param_1 + 0xc;
    iVar4 = FUN_0308f44c(piVar12,*(undefined8 *)WeaponPickup_<AfterGrab>d__20_TypeInfo);
    if (SCARRY4(iVar7,iVar4)) {
      uVar17 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar17,*(undefined8 *)
                           Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_InvokeAsync__
                  );
    }
    auVar19 = FUN_0308f44c(piVar12,*(undefined8 *)puVar3);
    uVar14 = iVar4 + iVar7;
    if (SCARRY4(uVar14,auVar19._0_4_)) {
      uVar17 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar17,*(undefined8 *)
                           Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_InvokeAsync__
                  );
    }
    iVar7 = *(int *)(lVar13 + 0x38);
    if (iVar7 + 0x40000000 < 0) {
      uVar17 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar17,*(undefined8 *)
                           Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_InvokeAsync__
                  );
    }
    if (iVar7 * 2 <= (int)(auVar19._0_4_ + uVar14)) {
      uVar5 = *(uint *)(lVar13 + 0x44);
      if ((int)uVar5 < 1) goto LAB_03258c14;
      if ((0x14000 < (int)uVar14) || (iVar7 * 2 < (int)uVar14)) {
        plVar9 = *(long **)(lVar13 + 0x28);
        lVar16 = *(long *)(lVar13 + 0x30);
        if (lVar16 == 0) {
          auVar19 = FUN_032f1cb4(0);
          lVar16 = 0;
          lVar11 = 0;
        }
        else {
          if (*(uint *)(lVar16 + 0x18) < uVar5) {
            auVar19 = FUN_032f1cb4(0);
          }
          lVar11 = (ulong)uVar5 << 0x20;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(auVar19._0_8_,auVar19._8_8_,lVar11);
        }
        auVar19 = (**(code **)(*plVar9 + 0x318))
                            (plVar9,lVar16,lVar11,*(undefined8 *)(param_1 + 0x10),
                             *(undefined8 *)(*plVar9 + 800));
        puVar3 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
        if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uStack_68 = auVar19._8_8_ & 0xffff;
        local_70 = auVar19._0_8_;
        if (DAT_04531f54 == '\0') {
          FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
          DAT_04531f54 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (DAT_04531f55 == '\0') {
          FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
          FUN_01c5d288(PTR_DAT_04230030);
          DAT_04531f55 = '\x01';
        }
        plVar9 = local_70;
        auVar19 = local_60;
        if (local_70 != (long *)0x0) {
          lVar16 = *local_70;
          bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
          if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_04230030)) {
            uVar15 = uStack_68 & 0xffff;
            uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
                  puVar10 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
                  goto FUN_032592ec;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
FUN_032592ec:
            iVar7 = (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
            auVar19 = local_60;
            if (iVar7 == 0) goto LAB_032594b4;
          }
          else {
            uVar8 = FUN_03344708(local_70,0);
            auVar19 = local_60;
            if ((uVar8 & 1) == 0) {
LAB_032594b4:
              *param_1 = 3;
              *(ulong *)(param_1 + 0x18) = uStack_68;
              *(long **)(param_1 + 0x16) = local_70;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_022f9ca8(param_1 + 2,&local_70,param_1,
                           *(undefined8 *)
                            Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>__ctor__
                          );
              return;
            }
          }
        }
        goto LAB_032587d4;
      }
      FUN_03236be8(lVar13,0);
      local_80 = FUN_0309ef84(piVar12,*(undefined8 *)
                                       AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo)
      ;
      lVar16 = *(long *)(lVar13 + 0x30);
      uVar5 = *(uint *)(lVar13 + 0x44);
      uVar6 = FUN_0308f44c(piVar12,*(undefined8 *)puVar3);
      if (lVar16 == 0) {
        if (uVar6 == 0 && uVar5 == 0) {
          lVar16 = 0;
          uVar6 = 0;
        }
        else {
          FUN_032f1cb4(0);
          lVar16 = 0;
          uVar6 = 0;
        }
      }
      else {
        if ((*(uint *)(lVar16 + 0x18) < uVar5) || (*(uint *)(lVar16 + 0x18) - uVar5 < uVar6)) {
          FUN_032f1cb4(0);
        }
        lVar16 = lVar16 + (int)uVar5 + 0x20;
      }
      auVar19 = FUN_03090c54(local_80,lVar16,uVar6,
                             *(undefined8 *)
                              UnityEngine_UIElements_DropdownMenu_<>c__DisplayClass4_0_TypeInfo);
      plVar9 = *(long **)(lVar13 + 0x28);
      lVar16 = *(long *)(lVar13 + 0x30);
      if (lVar16 == 0) {
        if (uVar14 != 0) {
          auVar19 = FUN_032f1cb4(0);
        }
        lVar16 = 0;
        lVar11 = 0;
      }
      else {
        if (*(uint *)(lVar16 + 0x18) < uVar14) {
          auVar19 = FUN_032f1cb4(0);
        }
        lVar11 = (ulong)uVar14 << 0x20;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(auVar19._0_8_,auVar19._8_8_,lVar11);
      }
      auVar19 = (**(code **)(*plVar9 + 0x318))
                          (plVar9,lVar16,lVar11,*(undefined8 *)(param_1 + 0x10),
                           *(undefined8 *)(*plVar9 + 800));
      puVar3 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
      if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_68 = auVar19._8_8_ & 0xffff;
      local_70 = auVar19._0_8_;
      if (DAT_04531f54 == '\0') {
        FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
        DAT_04531f54 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (DAT_04531f55 == '\0') {
        FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
        FUN_01c5d288(PTR_DAT_04230030);
        DAT_04531f55 = '\x01';
      }
      plVar9 = local_70;
      auVar19 = local_60;
      if (local_70 != (long *)0x0) {
        lVar16 = *local_70;
        bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
        if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)
           ) {
          uVar15 = uStack_68 & 0xffff;
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0325948c;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_0325948c:
          iVar7 = (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
          auVar19 = local_60;
          if (iVar7 == 0) goto LAB_03259504;
        }
        else {
          uVar8 = FUN_03344708(local_70,0);
          auVar19 = local_60;
          if ((uVar8 & 1) == 0) {
LAB_03259504:
            *param_1 = 2;
            *(ulong *)(param_1 + 0x18) = uStack_68;
            *(long **)(param_1 + 0x16) = local_70;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_022f9ca8(param_1 + 2,&local_70,param_1,
                         *(undefined8 *)
                          Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>__ctor__)
            ;
            return;
          }
        }
      }
      goto LAB_032588e8;
    }
    auVar19 = FUN_0309ef84(piVar12,*(undefined8 *)
                                    AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo);
    uVar5 = FUN_03238610(lVar13,auVar19._0_8_,auVar19._8_8_,0);
    uVar14 = param_1[0xf];
    lVar16 = *(long *)Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_AddHandler__
    ;
    uVar17 = extraout_x1;
    if ((uVar14 & 0x7fffffff) < uVar5) {
      FUN_032f1d2c(0x18,0);
      uVar17 = extraout_x1_00;
    }
    auVar19._8_8_ = uVar17;
    auVar19._0_8_ = *(long *)(lVar16 + 0x20);
    uVar17 = *(undefined8 *)(param_1 + 0xc);
    iVar7 = param_1[0xe];
    if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
      auVar19 = FUN_01c72394();
    }
    *(undefined8 *)(param_1 + 0xc) = uVar17;
    *(ulong *)(param_1 + 0xe) = CONCAT44(uVar14 - uVar5,iVar7 + uVar5);
    uVar14 = *(uint *)(lVar13 + 0x44);
    if (*(int *)(lVar13 + 0x38) <= (int)uVar14) {
      plVar9 = *(long **)(lVar13 + 0x28);
      lVar16 = *(long *)(lVar13 + 0x30);
      if (lVar16 == 0) {
        if (uVar14 != 0) {
          auVar19 = FUN_032f1cb4(0);
        }
        lVar16 = 0;
        lVar11 = 0;
      }
      else {
        if (*(uint *)(lVar16 + 0x18) < uVar14) {
          auVar19 = FUN_032f1cb4(0);
        }
        lVar11 = (ulong)uVar14 << 0x20;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(auVar19._0_8_,auVar19._8_8_,lVar11);
      }
      auVar19 = (**(code **)(*plVar9 + 0x318))
                          (plVar9,lVar16,lVar11,*(undefined8 *)(param_1 + 0x10),
                           *(undefined8 *)(*plVar9 + 800));
      puVar3 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
      if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_68 = auVar19._8_8_ & 0xffff;
      local_70 = auVar19._0_8_;
      if (DAT_04531f54 == '\0') {
        FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
        DAT_04531f54 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (DAT_04531f55 == '\0') {
        FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
        FUN_01c5d288(PTR_DAT_04230030);
        DAT_04531f55 = '\x01';
      }
      plVar9 = local_70;
      auVar19 = local_60;
      if (local_70 != (long *)0x0) {
        lVar16 = *local_70;
        bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
        if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)
           ) {
          uVar15 = uStack_68 & 0xffff;
          uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
                goto FUN_03259278;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
FUN_03259278:
          iVar7 = (*(code *)*puVar10)(plVar9,uVar15,puVar10[1]);
          auVar19 = local_60;
          if (iVar7 == 0) goto LAB_032592a0;
        }
        else {
          uVar8 = FUN_03344708(local_70,0);
          auVar19 = local_60;
          if ((uVar8 & 1) == 0) {
LAB_032592a0:
            *param_1 = 1;
            *(ulong *)(param_1 + 0x18) = uStack_68;
            *(long **)(param_1 + 0x16) = local_70;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_022f9ca8(param_1 + 2,&local_70,param_1,
                         *(undefined8 *)
                          Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>__ctor__)
            ;
            return;
          }
        }
      }
      goto LAB_032586d8;
    }
  }
  uVar5 = 0x14;
  uVar14 = 0x14;
joined_r0x03258eb4:
  if (iVar18 < 0) {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar13 = FUN_03236770(lVar13,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03338b98(lVar13,0);
    uVar14 = uVar5;
  }
  if ((uVar14 < 0x1d) && ((1 << (ulong)uVar14 & 0x10100001U) != 0)) {
    *param_1 = -2;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03200824(param_1 + 2,0);
  }
  return;
}


