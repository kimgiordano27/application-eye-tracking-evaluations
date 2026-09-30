/*
FUNCTION_NAME: Newtonsoft.Json.JsonExtensionDataAttribute$$get_ReadData
ENTRY_POINT: 0325861c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_20;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03259544) */

void Newtonsoft_Json_JsonExtensionDataAttribute__get_ReadData(void)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  int *piVar13;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long *unaff_x24;
  int unaff_w25;
  undefined1 auVar18 [16];
  long *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  _in_stack_00000020 = FUN_0334498c(*(long *)(unaff_x19 + 8),0,0);
  uVar9 = FUN_03201e70(&stack0x00000020,0);
  if ((uVar9 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000020;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_022f87d4(unaff_x19 + 2,&stack0x00000020);
    return;
  }
  FUN_03201ea0(&stack0x00000020,0);
  switch(unaff_w25) {
  case 1:
    in_stack_00000018 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000010 = *(long **)(unaff_x19 + 0x16);
    unaff_w25 = -1;
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
LAB_032586d8:
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
    plVar10 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar16 = *in_stack_00000010;
      bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = in_stack_00000018 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_03258ba0;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258ba0:
        (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
      }
      else {
        FUN_032018f0(in_stack_00000010,0);
      }
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(unaff_x20 + 0x44) = 0;
    FUN_0309ef84(unaff_x19 + 0xc,
                 *(undefined8 *)AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo);
    FUN_03238610();
    goto LAB_03258e68;
  case 2:
    in_stack_00000018 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000010 = *(long **)(unaff_x19 + 0x16);
    unaff_w25 = -1;
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
LAB_032588e8:
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
    plVar10 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar16 = *in_stack_00000010;
      bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = in_stack_00000018 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_03258e94;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258e94:
        (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
      }
      else {
        FUN_032018f0(in_stack_00000010,0);
      }
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(unaff_x20 + 0x44) = 0;
    break;
  case 3:
    in_stack_00000018 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000010 = *(long **)(unaff_x19 + 0x16);
    unaff_w25 = -1;
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
LAB_032587d4:
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
    plVar10 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar16 = *in_stack_00000010;
      bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = in_stack_00000018 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_03258bfc;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258bfc:
        (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
      }
      else {
        FUN_032018f0(in_stack_00000010,0);
      }
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(unaff_x20 + 0x44) = 0;
LAB_03258c14:
    plVar10 = *(long **)(unaff_x20 + 0x28);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    auVar18 = (**(code **)(*plVar10 + 0x318))
                        (plVar10,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),
                         *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar10 + 800));
    puVar4 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
    if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    in_stack_00000018 = auVar18._8_8_ & 0xffff;
    in_stack_00000010 = auVar18._0_8_;
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
    plVar10 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar16 = *in_stack_00000010;
      bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = in_stack_00000018 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03258d48;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_03258d48:
        iVar8 = (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
        if (iVar8 == 0) goto LAB_03258f6c;
      }
      else {
        uVar9 = FUN_03344708(in_stack_00000010,0);
        if ((uVar9 & 1) == 0) {
LAB_03258f6c:
          *unaff_x19 = 4;
          *(ulong *)(unaff_x19 + 0x18) = in_stack_00000018;
          *(long **)(unaff_x19 + 0x16) = in_stack_00000010;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
          return;
        }
      }
    }
    goto LAB_03258d5c;
  case 4:
    in_stack_00000018 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000010 = *(long **)(unaff_x19 + 0x16);
    unaff_w25 = -1;
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
LAB_03258d5c:
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
    plVar10 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar16 = *in_stack_00000010;
      bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04230030))
      {
        uVar15 = in_stack_00000018 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_03258e54;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,2);
LAB_03258e54:
        (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
      }
      else {
        FUN_032018f0(in_stack_00000010,0);
      }
    }
LAB_03258e68:
    uVar6 = 0x1c;
    uVar14 = 0x1c;
    goto joined_r0x03258eb4;
  default:
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar8 = *(int *)(unaff_x20 + 0x44);
    if (iVar8 == 0) {
      FUN_032373cc();
      iVar8 = *(int *)(unaff_x20 + 0x44);
    }
    puVar4 = WeaponPickup_<AfterGrab>d__20_TypeInfo;
    puVar1 = unaff_x19 + 0xc;
    iVar5 = FUN_0308f44c(puVar1,*(undefined8 *)WeaponPickup_<AfterGrab>d__20_TypeInfo);
    if (SCARRY4(iVar8,iVar5)) {
      uVar17 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar17,*(undefined8 *)
                           Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_InvokeAsync__
                  );
    }
    auVar18 = FUN_0308f44c(puVar1,*(undefined8 *)puVar4);
    uVar14 = iVar5 + iVar8;
    if (SCARRY4(uVar14,auVar18._0_4_)) {
      uVar17 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar17,*(undefined8 *)
                           Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_InvokeAsync__
                  );
    }
    iVar8 = *(int *)(unaff_x20 + 0x38);
    if (iVar8 + 0x40000000 < 0) {
      uVar17 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar17,*(undefined8 *)
                           Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_InvokeAsync__
                  );
    }
    if (iVar8 * 2 <= (int)(auVar18._0_4_ + uVar14)) {
      uVar6 = *(uint *)(unaff_x20 + 0x44);
      if ((int)uVar6 < 1) goto LAB_03258c14;
      if ((0x14000 < (int)uVar14) || (iVar8 * 2 < (int)uVar14)) {
        plVar10 = *(long **)(unaff_x20 + 0x28);
        lVar16 = *(long *)(unaff_x20 + 0x30);
        if (lVar16 == 0) {
          auVar18 = FUN_032f1cb4(0);
          lVar16 = 0;
          lVar12 = 0;
        }
        else {
          if (*(uint *)(lVar16 + 0x18) < uVar6) {
            auVar18 = FUN_032f1cb4(0);
          }
          lVar12 = (ulong)uVar6 << 0x20;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(auVar18._0_8_,auVar18._8_8_,lVar12);
        }
        auVar18 = (**(code **)(*plVar10 + 0x318))
                            (plVar10,lVar16,lVar12,*(undefined8 *)(unaff_x19 + 0x10),
                             *(undefined8 *)(*plVar10 + 800));
        puVar4 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
        if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        in_stack_00000018 = auVar18._8_8_ & 0xffff;
        in_stack_00000010 = auVar18._0_8_;
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
        plVar10 = in_stack_00000010;
        if (in_stack_00000010 != (long *)0x0) {
          lVar16 = *in_stack_00000010;
          bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
          if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_04230030)) {
            uVar15 = in_stack_00000018 & 0xffff;
            uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar9 != 0) {
              piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
                  puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                  goto FUN_032592ec;
                }
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0
                                  );
FUN_032592ec:
            iVar8 = (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
            if (iVar8 == 0) goto LAB_032594b4;
          }
          else {
            uVar9 = FUN_03344708(in_stack_00000010,0);
            if ((uVar9 & 1) == 0) {
LAB_032594b4:
              *unaff_x19 = 3;
              *(ulong *)(unaff_x19 + 0x18) = in_stack_00000018;
              *(long **)(unaff_x19 + 0x16) = in_stack_00000010;
              if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
              return;
            }
          }
        }
        goto LAB_032587d4;
      }
      FUN_03236be8();
      FUN_0309ef84(puVar1,*(undefined8 *)
                           AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo);
      lVar16 = *(long *)(unaff_x20 + 0x30);
      uVar6 = *(uint *)(unaff_x20 + 0x44);
      uVar7 = FUN_0308f44c(puVar1,*(undefined8 *)puVar4);
      if (lVar16 == 0) {
        if (uVar7 != 0 || uVar6 != 0) {
          FUN_032f1cb4(0);
        }
      }
      else {
        uVar2 = *(uint *)(lVar16 + 0x18);
        if ((uVar2 < uVar6) || (uVar2 - uVar6 < uVar7)) {
          FUN_032f1cb4(0);
        }
      }
      auVar18 = FUN_03090c54();
      plVar10 = *(long **)(unaff_x20 + 0x28);
      lVar16 = *(long *)(unaff_x20 + 0x30);
      if (lVar16 == 0) {
        if (uVar14 != 0) {
          auVar18 = FUN_032f1cb4(0);
        }
        lVar16 = 0;
        lVar12 = 0;
      }
      else {
        if (*(uint *)(lVar16 + 0x18) < uVar14) {
          auVar18 = FUN_032f1cb4(0);
        }
        lVar12 = (ulong)uVar14 << 0x20;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(auVar18._0_8_,auVar18._8_8_,lVar12);
      }
      auVar18 = (**(code **)(*plVar10 + 0x318))
                          (plVar10,lVar16,lVar12,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)(*plVar10 + 800));
      puVar4 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
      if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      in_stack_00000018 = auVar18._8_8_ & 0xffff;
      in_stack_00000010 = auVar18._0_8_;
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
      plVar10 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar16 = *in_stack_00000010;
        bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
        if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04230030)
           ) {
          uVar15 = in_stack_00000018 & 0xffff;
          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0325948c;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
LAB_0325948c:
          iVar8 = (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
          if (iVar8 == 0) goto LAB_03259504;
        }
        else {
          uVar9 = FUN_03344708(in_stack_00000010,0);
          if ((uVar9 & 1) == 0) {
LAB_03259504:
            *unaff_x19 = 2;
            *(ulong *)(unaff_x19 + 0x18) = in_stack_00000018;
            *(long **)(unaff_x19 + 0x16) = in_stack_00000010;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
            return;
          }
        }
      }
      goto LAB_032588e8;
    }
    FUN_0309ef84(puVar1,*(undefined8 *)AeLa_EasyFeedback_APIs_Trello_<GetBoardsAsync>d__20_TypeInfo)
    ;
    uVar6 = FUN_03238610();
    uVar14 = unaff_x19[0xf];
    lVar16 = *(long *)Method_MQTTnet_Internal_AsyncEvent<MqttClientConnectingEventArgs>_AddHandler__
    ;
    uVar17 = extraout_x1;
    if ((uVar14 & 0x7fffffff) < uVar6) {
      FUN_032f1d2c(0x18,0);
      uVar17 = extraout_x1_00;
    }
    auVar18._8_8_ = uVar17;
    auVar18._0_8_ = *(long *)(lVar16 + 0x20);
    uVar17 = *(undefined8 *)(unaff_x19 + 0xc);
    iVar8 = unaff_x19[0xe];
    if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
      auVar18 = FUN_01c72394();
    }
    *(undefined8 *)(unaff_x19 + 0xc) = uVar17;
    *(ulong *)(unaff_x19 + 0xe) = CONCAT44(uVar14 - uVar6,iVar8 + uVar6);
    uVar14 = *(uint *)(unaff_x20 + 0x44);
    if (*(int *)(unaff_x20 + 0x38) <= (int)uVar14) {
      plVar10 = *(long **)(unaff_x20 + 0x28);
      lVar16 = *(long *)(unaff_x20 + 0x30);
      if (lVar16 == 0) {
        if (uVar14 != 0) {
          auVar18 = FUN_032f1cb4(0);
        }
        lVar16 = 0;
        lVar12 = 0;
      }
      else {
        if (*(uint *)(lVar16 + 0x18) < uVar14) {
          auVar18 = FUN_032f1cb4(0);
        }
        lVar12 = (ulong)uVar14 << 0x20;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(auVar18._0_8_,auVar18._8_8_,lVar12);
      }
      auVar18 = (**(code **)(*plVar10 + 0x318))
                          (plVar10,lVar16,lVar12,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)(*plVar10 + 800));
      puVar4 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
      if (*(int *)(*(long *)Oculus_Platform_Models_NetSyncSessionList_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      in_stack_00000018 = auVar18._8_8_ & 0xffff;
      in_stack_00000010 = auVar18._0_8_;
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
      plVar10 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar16 = *in_stack_00000010;
        bVar3 = *(byte *)(*(long *)PTR_DAT_04230030 + 0x130);
        if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04230030)
           ) {
          uVar15 = in_stack_00000018 & 0xffff;
          uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)System_Threading_Tasks_Task_TypeInfo) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                goto FUN_03259278;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_01c72498(in_stack_00000010,*(long *)System_Threading_Tasks_Task_TypeInfo,0);
FUN_03259278:
          iVar8 = (*(code *)*puVar11)(plVar10,uVar15,puVar11[1]);
          if (iVar8 == 0) goto LAB_032592a0;
        }
        else {
          uVar9 = FUN_03344708(in_stack_00000010,0);
          if ((uVar9 & 1) == 0) {
LAB_032592a0:
            *unaff_x19 = 1;
            *(ulong *)(unaff_x19 + 0x18) = in_stack_00000018;
            *(long **)(unaff_x19 + 0x16) = in_stack_00000010;
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_022f9ca8(unaff_x19 + 2,&stack0x00000010);
            return;
          }
        }
      }
      goto LAB_032586d8;
    }
  }
  uVar6 = 0x14;
  uVar14 = 0x14;
joined_r0x03258eb4:
  if (unaff_w25 < 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar16 = FUN_03236770();
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03338b98(lVar16,0);
    uVar14 = uVar6;
  }
  if ((uVar14 < 0x1d) && ((1 << (ulong)uVar14 & 0x10100001U) != 0)) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03200824(unaff_x19 + 2,0);
  }
  return;
}


