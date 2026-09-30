/*
FUNCTION_NAME: FUN_0393bf14
ENTRY_POINT: 0393bf14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_0393bf14(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  long *local_70;
  ulong uStack_68;
  undefined1 local_60 [16];
  
  if ((DAT_04539a84 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_Sprite_GetPhysicsShapePointCount__);
    FUN_01c5d288(Method_UnityEngine_Sprite_OverridePhysicsShape__);
    FUN_01c5d288(PTR_DAT_042320b0);
    FUN_01c5d288(System_Runtime_Remoting_Messaging_MonoMethodMessage_TypeInfo);
    FUN_01c5d288(MqTopic_TypeInfo);
    FUN_01c5d288(MQTTnet_MqttApplicationMessageBuilder_TypeInfo);
    FUN_01c5d288(System_Threading_Tasks_TaskSchedulerException_TypeInfo);
    FUN_01c5d288(MQTTnet_Packets_MqttAuthPacket_TypeInfo);
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04539a84 = 1;
  }
  puVar7 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
  puVar6 = PTR_DAT_042320b0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  lVar14 = *(long *)(param_1 + 0xe);
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_0393c008:
    FUN_03201ea0(local_60,0);
    auVar17 = local_60;
LAB_0393c0a4:
    if ((char)param_1[8] != '\t') goto LAB_0393c3ec;
    local_60 = auVar17;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(char *)(lVar14 + 0x18) != '\0') {
      auVar18 = FUN_02579218(lVar14 + 0x38,
                             *(undefined8 *)MQTTnet_MqttApplicationMessageBuilder_TypeInfo);
      uVar5 = *(uint *)(lVar14 + 0x88);
      uVar12 = *(ulong *)(param_1 + 10);
      lVar11 = *(long *)MQTTnet_Packets_MqttAuthPacket_TypeInfo;
      if ((auVar18._8_4_ < uVar5) || (auVar18._8_4_ - uVar5 < (uint)uVar12)) {
        FUN_032f1cb4(0);
      }
      if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      iVar9 = param_1[0xc];
      if (*(int *)(*(long *)System_Runtime_Remoting_Messaging_MonoMethodMessage_TypeInfo + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_039391b0(auVar18._0_8_ + (long)(int)uVar5,uVar12 & 0xffffffff,iVar9,0);
    }
    uVar1 = *(uint *)(lVar14 + 0x88);
    uVar2 = *(uint *)(lVar14 + 0x44);
    uVar3 = param_1[10];
    lVar11 = *(long *)MqTopic_TypeInfo;
    uVar5 = uVar2 & 0x7fffffff;
    if ((uVar5 < uVar1) || (uVar5 - uVar1 < uVar3)) {
      FUN_032f1cb4(0);
    }
    uVar15 = *(undefined8 *)(lVar14 + 0x38);
    iVar9 = *(int *)(lVar14 + 0x40);
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_01c72394();
    }
    auVar17 = FUN_02ec31a4(uVar15,CONCAT44(uVar2 & 0x80000000 | uVar3,iVar9 + uVar1),
                           *(undefined8 *)System_Threading_Tasks_TaskSchedulerException_TypeInfo);
    auVar17 = FUN_03936ba0(lVar14,10,1,auVar17._0_8_,auVar17._8_8_,0);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uStack_68 = auVar17._8_8_ & 0xffff;
    local_70 = auVar17._0_8_;
    if (DAT_04531f54 == '\0') {
      FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
      DAT_04531f54 = '\x01';
    }
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (DAT_04531f55 == '\0') {
      FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
      FUN_01c5d288(PTR_DAT_04230030);
      DAT_04531f55 = '\x01';
    }
    plVar8 = local_70;
    if (local_70 != (long *)0x0) {
      lVar11 = *local_70;
      bVar4 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar16 = uStack_68 & 0xffff;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0393c2d8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_0393c2d8:
        iVar9 = (*(code *)*puVar10)(plVar8,uVar16,puVar10[1]);
        if (iVar9 == 0) goto LAB_0393c46c;
      }
      else {
        uVar12 = FUN_03344708(local_70,0);
        if ((uVar12 & 1) == 0) {
LAB_0393c46c:
          *param_1 = 1;
          *(ulong *)(param_1 + 0x18) = uStack_68;
          *(long **)(param_1 + 0x16) = local_70;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_022f9d24(param_1 + 2,&local_70,param_1,
                       *(undefined8 *)Method_UnityEngine_Sprite_OverridePhysicsShape__);
          return;
        }
      }
    }
  }
  else {
    if (*param_1 != 1) {
      lVar11 = *(long *)(param_1 + 10);
      auVar17 = ZEXT816(0);
      if (0 < lVar11) {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        auVar17 = ZEXT816(0);
        if (*(int *)(lVar14 + 0x8c) < lVar11) {
          lVar11 = FUN_03938f10(lVar14,lVar11,*(undefined8 *)(param_1 + 0x10),1);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          local_60 = FUN_0334498c(lVar11,0,0);
          uVar12 = FUN_03201e70(local_60,0);
          if ((uVar12 & 1) == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_022f8abc(param_1 + 2,local_60,param_1,
                         *(undefined8 *)Method_UnityEngine_Sprite_GetPhysicsShapePointCount__);
            return;
          }
          goto LAB_0393c008;
        }
      }
      goto LAB_0393c0a4;
    }
    uStack_68 = *(ulong *)(param_1 + 0x18);
    local_70 = *(long **)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    local_60 = ZEXT816(0);
  }
  if (DAT_04531f56 == '\0') {
    FUN_01c5d288(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    DAT_04531f56 = '\x01';
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04531f57 == '\0') {
    FUN_01c5d288(System_Threading_Tasks_Task_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230030);
    DAT_04531f57 = '\x01';
  }
  plVar8 = local_70;
  auVar17 = local_60;
  if (local_70 != (long *)0x0) {
    lVar11 = *local_70;
    bVar4 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_04230030)) {
      uVar16 = uStack_68 & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_0393c3dc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_01c72498(local_70,*(long *)System_Threading_Tasks_Task_TypeInfo,2)
      ;
LAB_0393c3dc:
      (*(code *)*puVar10)(plVar8,uVar16,puVar10[1]);
      auVar17 = local_60;
    }
    else {
      FUN_032018f0(local_70,0);
      auVar17 = local_60;
    }
  }
LAB_0393c3ec:
  local_60 = auVar17;
  if (0 < *(long *)(param_1 + 10)) {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar9 = (int)*(long *)(param_1 + 10);
    *(int *)(lVar14 + 0x88) = *(int *)(lVar14 + 0x88) + iVar9;
    *(int *)(lVar14 + 0x8c) = *(int *)(lVar14 + 0x8c) - iVar9;
  }
  *param_1 = -2;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03200824(param_1 + 2,0);
  return;
}


