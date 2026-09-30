/*
FUNCTION_NAME: FUN_07e5e9dc
ENTRY_POINT: 07e5e9dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_07e5e9dc(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long *plStack_70;
  long local_68;
  
  local_68 = param_1;
  if ((DAT_0899a833 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<Dictionary<string,_string>>,_SaveData_<LoadAsync>d__3>__
                );
    FUN_03a8a718(PTR_DAT_08491e00);
    FUN_03a8a718(NWH_VehiclePhysics2_VehicleController_<LODCheckCoroutine>d__56_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<GetItemsResponse>>,_DataService_<LoadAsync>d__13>__
                );
    FUN_03a8a718(PTR_DAT_08491e08);
    FUN_03a8a718(Gley_TrafficSystem_Internal_VehicleEvents_ObjectInTrigger_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_AwaitUnsafeOnCompleted<TaskAwaiter<ReadOnlyCollection<VivoxMessage>>,_VivoxServiceInternal_<GetDirectTextMessageHistoryAsync>d__202>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VivoxServiceInternal_<GetChannelTextMessageHistoryAsync>d__201>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VivoxServiceInternal_<GetDirectTextMessageHistoryAsync>d__202>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_Start<ChannelSession_<GetChannelTextMessageHistoryAsync>d__113>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_Start<DataService_<LoadAsync>d__13>__
                );
    FUN_03a8a718(PTR_DAT_08491e10);
    FUN_03a8a718(Gley_TrafficSystem_Internal_VehicleEvents_TriggerCleared_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_08496110);
    FUN_03a8a718(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDelayProperty_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty_TypeInfo
                );
    DAT_0899a833 = 1;
  }
  puVar12 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_Start<ChannelSession_<GetChannelTextMessageHistoryAsync>d__113>__
  ;
  puVar11 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VivoxServiceInternal_<GetChannelTextMessageHistoryAsync>d__201>__
  ;
  puVar10 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<Dictionary<string,_string>>,_SaveData_<LoadAsync>d__3>__
  ;
  puVar9 = Gley_TrafficSystem_Internal_VehicleEvents_TriggerCleared_TypeInfo;
  puVar8 = NWH_VehiclePhysics2_VehicleController_<LODCheckCoroutine>d__56_TypeInfo;
  puVar7 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDelayProperty_TypeInfo;
  puVar6 = PTR_DAT_08496110;
  puVar5 = PTR_DAT_08491e10;
  puVar4 = PTR_DAT_08491e00;
  puVar3 = PTR_DAT_08486738;
  iVar1 = *(int *)(param_1 + 0x10);
  plStack_70 = &local_68;
  local_78 = 0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
    goto LAB_07e5ef98;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    goto UnityEngine_UIElements_Panel__Repaint;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar12);
    FUN_049d8fb0(uVar13,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VivoxServiceInternal_<GetDirectTextMessageHistoryAsync>d__202>__
                );
    *(undefined8 *)(local_68 + 0x30) = uVar13;
    thunk_FUN_03afed3c((undefined8 *)(local_68 + 0x30),uVar13);
    if (*(long *)(local_68 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar14 = *(long *)(*(long *)(local_68 + 0x28) + 0x30);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_04de90b8(&local_a8,lVar14,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_Start<DataService_<LoadAsync>d__13>__
                );
    uStack_88 = uStack_a0;
    local_90 = local_a8;
    local_80 = local_98;
    *(undefined8 *)(local_68 + 0x40) = uStack_a0;
    *(undefined8 *)(local_68 + 0x38) = local_a8;
    *(undefined8 *)(local_68 + 0x48) = local_98;
    thunk_FUN_03afed3c(local_68 + 0x38,0);
    *(undefined4 *)(local_68 + 0x10) = 0xfffffffd;
    while (uVar16 = FUN_061c1964(local_68 + 0x38,*(undefined8 *)puVar10), (uVar16 & 1) != 0) {
      *(undefined8 *)(local_68 + 0x50) = *(undefined8 *)(local_68 + 0x48);
      thunk_FUN_03afed3c();
      if (*(long *)(local_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar16 = FUN_07e58150(*(long *)(local_68 + 0x50),0);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(local_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar14 = FUN_07e580cc(*(long *)(local_68 + 0x50),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_04de90b8(&local_a8,lVar14,*(undefined8 *)puVar9);
        uStack_88 = uStack_a0;
        local_90 = local_a8;
        local_80 = local_98;
        *(undefined8 *)(local_68 + 0x60) = uStack_a0;
        *(undefined8 *)(local_68 + 0x58) = local_a8;
        *(undefined8 *)(local_68 + 0x68) = local_98;
        thunk_FUN_03afed3c(local_68 + 0x58,0);
        *(undefined4 *)(local_68 + 0x10) = 0xfffffffc;
        while (uVar16 = FUN_061c1964(local_68 + 0x58,*(undefined8 *)puVar8), (uVar16 & 1) != 0) {
          *(undefined8 *)(local_68 + 0x70) = *(undefined8 *)(local_68 + 0x68);
          thunk_FUN_03afed3c();
          if (*(long *)(local_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar16 = FUN_049d96b4(*(long *)(local_68 + 0x30),*(undefined8 *)(local_68 + 0x70),
                                *(undefined8 *)puVar11);
          param_1 = local_68;
          if ((uVar16 & 1) == 0) {
            if (*(long *)(local_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_049da1a4(*(long *)(local_68 + 0x30),*(undefined8 *)(local_68 + 0x70),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_AwaitUnsafeOnCompleted<TaskAwaiter<ReadOnlyCollection<VivoxMessage>>,_VivoxServiceInternal_<GetDirectTextMessageHistoryAsync>d__202>__
                        );
            *(undefined8 *)(local_68 + 0x18) = *(undefined8 *)(local_68 + 0x70);
            thunk_FUN_03afed3c();
            uVar13 = 1;
            *(undefined4 *)(local_68 + 0x10) = 1;
            goto LAB_07e5f020;
          }
UnityEngine_UIElements_Panel__Repaint:
          *(undefined8 *)(param_1 + 0x70) = 0;
          thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x70),0);
        }
        FUN_07e5f0d8();
        *(undefined8 *)(local_68 + 0x60) = 0;
        *(undefined8 *)(local_68 + 0x68) = 0;
        *(undefined8 *)(local_68 + 0x58) = 0;
      }
      if (*(long *)(local_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar16 = FUN_07e580bc(*(long *)(local_68 + 0x50),0);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(local_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar14 = FUN_07e58038(*(long *)(local_68 + 0x50),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_04de90b8(&local_a8,lVar14,*(undefined8 *)puVar5);
        uStack_88 = uStack_a0;
        local_90 = local_a8;
        local_80 = local_98;
        *(undefined8 *)(local_68 + 0x80) = uStack_a0;
        *(undefined8 *)(local_68 + 0x78) = local_a8;
        *(undefined8 *)(local_68 + 0x88) = local_98;
        thunk_FUN_03afed3c(local_68 + 0x78,0);
        *(undefined4 *)(local_68 + 0x10) = 0xfffffffb;
        while (uVar16 = FUN_061c1964(local_68 + 0x78,*(undefined8 *)puVar4), (uVar16 & 1) != 0) {
          *(undefined8 *)(local_68 + 0x90) = *(undefined8 *)(local_68 + 0x88);
          thunk_FUN_03afed3c();
          uVar18 = *(undefined8 *)puVar7;
          uVar13 = *(undefined8 *)(local_68 + 0x90);
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar18 = FUN_0675ff58(uVar18,0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          plVar15 = (long *)FUN_07f5d528(0x3f800000,uVar13,uVar18,0);
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)0x0;
            *(undefined8 *)(local_68 + 0x98) = 0;
          }
          else {
            lVar14 = *(long *)
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty_TypeInfo
            ;
            bVar2 = *(byte *)(lVar14 + 0x130);
            plVar17 = (long *)0x0;
            if ((bVar2 <= *(byte *)(*plVar15 + 0x130)) &&
               (plVar17 = plVar15,
               *(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != lVar14)) {
              plVar17 = (long *)0x0;
            }
            *(long **)(local_68 + 0x98) = plVar17;
            if (*(byte *)(*plVar15 + 0x130) < bVar2) {
              plVar15 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != lVar14) {
              plVar15 = (long *)0x0;
            }
          }
          thunk_FUN_03afed3c(local_68 + 0x98,plVar15);
          uVar13 = *(undefined8 *)(local_68 + 0x98);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar16 = FUN_07c9c218(uVar13,0,0);
          param_1 = local_68;
          if ((uVar16 & 1) != 0) {
            if (*(long *)(local_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar16 = FUN_049d96b4(*(long *)(local_68 + 0x30),*(undefined8 *)(local_68 + 0x98),
                                  *(undefined8 *)puVar11);
            param_1 = local_68;
            if ((uVar16 & 1) == 0) {
              if (*(long *)(local_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_049da1a4(*(long *)(local_68 + 0x30),*(undefined8 *)(local_68 + 0x98),
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReadOnlyCollection<VivoxMessage>>_AwaitUnsafeOnCompleted<TaskAwaiter<ReadOnlyCollection<VivoxMessage>>,_VivoxServiceInternal_<GetDirectTextMessageHistoryAsync>d__202>__
                          );
              *(undefined8 *)(local_68 + 0x18) = *(undefined8 *)(local_68 + 0x98);
              thunk_FUN_03afed3c();
              uVar13 = 1;
              *(undefined4 *)(local_68 + 0x10) = 2;
              goto LAB_07e5f020;
            }
          }
LAB_07e5ef98:
          *(undefined8 *)(param_1 + 0x98) = 0;
          thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x98),0);
          *(undefined8 *)(local_68 + 0x90) = 0;
          thunk_FUN_03afed3c((undefined8 *)(local_68 + 0x90),0);
        }
        UnityEngine_UIElements_Panel__GetUpdater();
        *(undefined8 *)(local_68 + 0x80) = 0;
        *(undefined8 *)(local_68 + 0x88) = 0;
        *(undefined8 *)(local_68 + 0x78) = 0;
      }
      *(undefined8 *)(local_68 + 0x50) = 0;
      thunk_FUN_03afed3c((undefined8 *)(local_68 + 0x50),0);
    }
    FUN_07e5f178();
    uVar13 = 0;
    *(undefined8 *)(local_68 + 0x40) = 0;
    *(undefined8 *)(local_68 + 0x48) = 0;
    *(undefined8 *)(local_68 + 0x38) = 0;
  }
  else {
    uVar13 = 0;
  }
LAB_07e5f020:
  lVar14 = local_78;
  if (local_78 != 0) {
    FUN_03a7cdbc(&plStack_70);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(lVar14);
  }
  return uVar13;
}


