/*
FUNCTION_NAME: FUN_06ac5b7c
ENTRY_POINT: 06ac5b7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_06ac5b7c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  long local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_076e3191 & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitRequestOptions>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__);
    thunk_FUN_032e1da0(PTR_DAT_0727b8b8);
    thunk_FUN_032e1da0(PTR_DAT_0727b8c0);
    thunk_FUN_032e1da0(PTR_DAT_0727b8c8);
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__);
    thunk_FUN_032e1da0(PTR_DAT_0727a8d8);
    thunk_FUN_032e1da0(PTR_DAT_0727ac80);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitResponseClass>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0727b8d0);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitResponseNode>__ctor__);
    DAT_076e3191 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  plVar7 = (long *)param_1[0x15];
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x178))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x180));
    if ((uVar8 & 1) == 0) {
      return;
    }
    lVar9 = thunk_FUN_032a55a4(param_2,*(undefined8 *)
                                        Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                              );
    if (lVar9 != 0) {
      (**(code **)(*param_1 + 0x328))(param_1,lVar9,*(undefined8 *)(*param_1 + 0x330));
    }
    lVar9 = thunk_FUN_032a55a4(param_2,*(undefined8 *)PTR_DAT_0727ac80);
    if (lVar9 != 0) {
      FUN_06ac6018(param_1,lVar9);
    }
    lVar9 = thunk_FUN_032a55a4(param_2,*(undefined8 *)
                                        Method_System_Threading_Tasks_TaskFactory<IPAddress[]>_FromAsync<string>__
                              );
    if (lVar9 != 0) {
      FUN_06ac60b0(param_1,lVar9);
    }
    plVar7 = (long *)param_1[0x15];
    if (plVar7 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x1b0));
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (param_2 != (long *)0x0) {
        lVar9 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0727a8d8) {
              puVar10 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto LAB_06ac5d64;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(param_2,*(long *)PTR_DAT_0727a8d8,5);
LAB_06ac5d64:
        lVar9 = (*(code *)*puVar10)(param_2,puVar10[1]);
        if (lVar9 != 0) {
          FUN_041e3694(&local_98,lVar9,*(undefined8 *)PTR_DAT_0727b8d0);
          puVar4 = Method_UnityEngine_Events_UnityEvent<WitRequestOptions>_Invoke__;
          puVar3 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__;
          puVar2 = PTR_DAT_0727b8c0;
          puVar1 = PTR_DAT_072794f0;
          uStack_58 = uStack_90;
          local_60 = local_98;
          local_50 = local_88;
          while (uVar8 = FUN_052d44b4(&local_60,*(undefined8 *)puVar2), uVar5 = local_50,
                (uVar8 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar8 = FUN_06bece64(uVar5,0,0);
            if ((uVar8 & 1) == 0) {
              if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              bVar6 = FUN_050fa644(param_1[0x11],uVar5,&local_68,*(undefined8 *)puVar3);
              if ((bVar6 & local_68 == param_2) != 0) {
                if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                          (param_1[0x11],uVar5,*(undefined8 *)puVar4);
              }
            }
          }
          FUN_052d44b0(&local_60,*(undefined8 *)PTR_DAT_0727b8b8);
          if (param_1[0x2c] != 0) {
            local_80 = FUN_03fdb010(param_1[0x2c],&local_70,
                                    *(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<WitResponseClass>__ctor__)
            ;
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            *(long *)(local_70 + 0x10) = (long)param_1;
            thunk_FUN_0333a630((long *)(local_70 + 0x10),param_1);
            if (local_70 != 0) {
              *(long *)(local_70 + 0x18) = (long)param_2;
              thunk_FUN_0333a630((long *)(local_70 + 0x18),param_2);
              (**(code **)(*param_1 + 0x308))(param_1,local_70,*(undefined8 *)(*param_1 + 0x310));
              FUN_0479c18c(local_80,*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<WitResponseNode>__ctor__);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


