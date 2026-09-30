/*
FUNCTION_NAME: FUN_032569c4
ENTRY_POINT: 032569c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03256e40) */

void FUN_032569c4(int *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  long *local_60;
  ulong uStack_58;
  undefined1 local_50 [16];
  
  if ((DAT_04532ac2 & 1) == 0) {
    FUN_01c5d288(Method_MQTTnet_Internal_AsyncEvent<InspectMqttPacketEventArgs>__ctor__);
    FUN_01c5d288(Method_MQTTnet_Internal_AsyncEvent<InspectMqttPacketEventArgs>_InvokeAsync__);
    FUN_01c5d288(PTR_DAT_0422f998);
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04532ac2 = 1;
  }
  puVar2 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  auVar13 = ZEXT816(0);
  local_60 = (long *)0x0;
  uStack_58 = 0;
  iVar12 = *param_1;
  lVar9 = *(long *)(param_1 + 10);
  if (iVar12 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    iVar12 = -1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_03256ab4:
    FUN_03201ea0(local_50,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar10 = *(long **)(lVar9 + 0x28);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    auVar13 = (**(code **)(*plVar10 + 0x3a8))(plVar10,*(undefined8 *)(*plVar10 + 0x3b0));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uStack_58 = auVar13._8_8_ & 0xffff;
    local_60 = auVar13._0_8_;
    if (DAT_04531f54 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f54 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f55 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f55 = '\x01';
    }
    plVar10 = local_60;
    if (local_60 != (long *)0x0) {
      lVar6 = *local_60;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
        uVar11 = uStack_58 & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03256c1c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c72498(local_60,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_03256c1c:
        iVar3 = (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
        if (iVar3 == 0) goto LAB_03256df8;
      }
      else {
        uVar7 = FUN_03344708(local_60,0);
        if ((uVar7 & 1) == 0) {
LAB_03256df8:
          *param_1 = 1;
          *(ulong *)(param_1 + 0x16) = uStack_58;
          *(long **)(param_1 + 0x14) = local_60;
          FUN_022feda4(param_1 + 2,&local_60,param_1,
                       *(undefined8 *)
                        Method_MQTTnet_Internal_AsyncEvent<InspectMqttPacketEventArgs>_InvokeAsync__
                      );
          return;
        }
      }
    }
  }
  else {
    if (iVar12 != 1) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(lVar9 + 0x28) == 0) goto LAB_03256d8c;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      lVar6 = FUN_03257014(lVar9);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      local_50 = FUN_0334498c(lVar6,0,0);
      uVar7 = FUN_03201e70(local_50,0);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
        FUN_022fed20(param_1 + 2,local_50,param_1,
                     *(undefined8 *)
                      Method_MQTTnet_Internal_AsyncEvent<InspectMqttPacketEventArgs>__ctor__);
        return;
      }
      goto LAB_03256ab4;
    }
    uStack_58 = *(ulong *)(param_1 + 0x16);
    local_60 = *(long **)(param_1 + 0x14);
    iVar12 = -1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
    local_50 = ZEXT816(0);
  }
  if (DAT_04531f56 == '\0') {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04531f56 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f57 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f57 = '\x01';
  }
  plVar10 = local_60;
  if (local_60 != (long *)0x0) {
    lVar6 = *local_60;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar11 = uStack_58 & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_03256d20;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(local_60,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03256d20:
      (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
    }
    else {
      FUN_032018f0(local_60,0);
    }
  }
  plVar10 = *(long **)(param_1 + 0xc);
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0422f998 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0422f998))
    {
      lVar9 = FUN_032000a0(plVar10,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03200160(lVar9,0);
    }
    uVar5 = thunk_FUN_01c273e8(
                              Method_MQTTnet_Internal_AsyncEvent<InspectMqttPacketEventArgs>_get_HasHandlers__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(plVar10,uVar5);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  auVar13 = local_50;
LAB_03256d8c:
  local_50 = auVar13;
  if (iVar12 < 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
  }
  *param_1 = -2;
  FUN_032007b4(param_1 + 2,0);
  return;
}


