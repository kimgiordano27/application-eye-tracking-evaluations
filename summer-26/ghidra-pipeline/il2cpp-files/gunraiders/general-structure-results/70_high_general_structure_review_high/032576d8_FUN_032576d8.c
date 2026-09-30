/*
FUNCTION_NAME: FUN_032576d8
ENTRY_POINT: 032576d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_032576d8(int *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_60 [16];
  long *local_50;
  ulong uStack_48;
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  if ((DAT_04532ac5 & 1) == 0) {
    FUN_01c5d288(
                Method_MQTTnet_Internal_AsyncEvent<MqttApplicationMessageReceivedEventArgs>_AddHandler__
                );
    FUN_01c5d288(
                Method_MQTTnet_Internal_AsyncEvent<MqttApplicationMessageReceivedEventArgs>_InvokeAsync__
                );
    FUN_01c5d288(PTR_DAT_042320b0);
    FUN_01c5d288(UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_PassData_TypeInfo);
    auVar14 = FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04532ac5 = 1;
  }
  puVar4 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
  puVar3 = PTR_DAT_042320b0;
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  lVar13 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    uStack_48 = *(ulong *)(param_1 + 0xe);
    local_50 = *(long **)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto FUN_03257a68;
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar7 = *(long **)(lVar13 + 0x28);
    lVar9 = *(long *)(lVar13 + 0x30);
    uVar1 = *(uint *)(lVar13 + 0x44);
    if (lVar9 == 0) {
      if (uVar1 != 0) {
        auVar14 = FUN_032f1cb4(0);
      }
      lVar9 = 0;
      lVar8 = 0;
    }
    else {
      if (*(uint *)(lVar9 + 0x18) < uVar1) {
        auVar14 = FUN_032f1cb4(0);
      }
      lVar8 = (ulong)uVar1 << 0x20;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(auVar14._0_8_,auVar14._8_8_,lVar8);
    }
    auVar14 = (**(code **)(*plVar7 + 0x318))
                        (plVar7,lVar9,lVar8,*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(*plVar7 + 800));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uStack_48 = auVar14._8_8_ & 0xffff;
    local_50 = auVar14._0_8_;
    if (DAT_04531f54 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f54 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f55 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f55 = '\x01';
    }
    plVar7 = local_50;
    if (local_50 != (long *)0x0) {
      lVar9 = *local_50;
      bVar2 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
        uVar12 = uStack_48 & 0xffff;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0325790c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(local_50,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_0325790c:
        iVar5 = (*(code *)*puVar6)(plVar7,uVar12,puVar6[1]);
        if (iVar5 == 0) goto LAB_03257afc;
      }
      else {
        uVar10 = FUN_03344708(local_50,0);
        if ((uVar10 & 1) == 0) {
LAB_03257afc:
          *param_1 = 0;
          *(ulong *)(param_1 + 0xe) = uStack_48;
          *(long **)(param_1 + 0xc) = local_50;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_022f9c2c(param_1 + 2,&local_50,param_1,
                       *(undefined8 *)
                        Method_MQTTnet_Internal_AsyncEvent<MqttApplicationMessageReceivedEventArgs>_InvokeAsync__
                      );
          return;
        }
      }
    }
  }
  if (DAT_04531f56 == '\0') {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04531f56 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f57 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f57 = '\x01';
  }
  plVar7 = local_50;
  if (local_50 != (long *)0x0) {
    lVar9 = *local_50;
    bVar2 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar12 = uStack_48 & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_03257a10;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498(local_50,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03257a10:
      (*(code *)*puVar6)(plVar7,uVar12,puVar6[1]);
    }
    else {
      FUN_032018f0(local_50,0);
    }
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar7 = *(long **)(lVar13 + 0x28);
  *(undefined4 *)(lVar13 + 0x44) = 0;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar13 = (**(code **)(*plVar7 + 0x298))
                     (plVar7,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar7 + 0x2a0));
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  local_60 = FUN_0334498c(lVar13,0,0);
  uVar10 = FUN_03201e70(local_60,0);
  if ((uVar10 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_022f8758(param_1 + 2,local_60,param_1,
                 *(undefined8 *)
                  Method_MQTTnet_Internal_AsyncEvent<MqttApplicationMessageReceivedEventArgs>_AddHandler__
                );
    return;
  }
FUN_03257a68:
  FUN_03201ea0(local_60,0);
  *param_1 = -2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03200824(param_1 + 2,0);
  return;
}


