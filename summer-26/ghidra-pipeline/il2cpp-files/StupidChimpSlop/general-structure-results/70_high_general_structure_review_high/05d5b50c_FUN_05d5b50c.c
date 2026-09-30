/*
FUNCTION_NAME: FUN_05d5b50c
ENTRY_POINT: 05d5b50c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_05d5b50c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  if ((DAT_06a580c2 & 1) == 0) {
    FUN_02d4dc40(Method_System_Net_ServicePoint_set_ReceiveBufferSize__);
                    /* try { // try from 05d5b53c to 05e5b547 has its CatchHandler @ 05d5bfc0 */
    FUN_02d4dc40(Method_System_Net_ServicePointManager_FindServicePoint__);
                    /* try { // try from 05d5b548 to 05e5b59f has its CatchHandler @ 05d5b278 */
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_Wait__);
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_WaitAsync__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__);
    FUN_02d4dc40(Method_System_Threading_SendOrPostCallback_Invoke__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_Sensor_get_samplingFrequency__);
    FUN_02d4dc40(Method_UnityEngine_Rendering_SerializableEnum_get_value__);
                    /* try { // try from 05d5b5a0 to 05e5b5af has its CatchHandler @ 05d5bfc0 */
    FUN_02d4dc40(Method_System_Net_ServicePointManager_SetTcpKeepAlive__);
    FUN_02d4dc40(
                Method_System_Security_Authentication_ExtendedProtection_ServiceNameCollection_AddIfNew__
                );
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_AddValue__);
    FUN_02d4dc40(Method_System_Net_ServicePointManager_get_EnableDnsRoundRobin__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_FindElement__);
    FUN_02d4dc40(Method_System_Net_ServicePointManager_set_DefaultConnectionLimit__);
    FUN_02d4dc40(Method_System_Net_ServicePointManager_set_EnableDnsRoundRobin__);
    FUN_02d4dc40(Method_System_Net_ServicePointManager_set_MaxServicePointIdleTime__);
    DAT_06a580c2 = 1;
  }
  plVar4 = (long *)param_1[0x14];
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_88._8_8_ = 0;
  local_78 = 0;
  local_88._0_8_ = 0;
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x180));
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Runtime_Serialization_SerializationInfo_AddValue__) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_05d5b6a0;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d87540(param_2,*(long *)
                                     Method_System_Runtime_Serialization_SerializationInfo_AddValue__
                            ,9);
LAB_05d5b6a0:
      (*(code *)*puVar6)(param_2,puVar6[1]);
      if (param_1[0x14] != 0) {
        iVar3 = FUN_045ab28c(param_1[0x14],
                             *(undefined8 *)Method_System_Net_ServicePointManager_FindServicePoint__
                            );
        if (iVar3 < 1) {
LAB_05d5b828:
          if (param_1[0x13] != 0) {
            iVar3 = FUN_045ab28c(param_1[0x13],
                                 *(undefined8 *)
                                  Method_System_Net_ServicePoint_set_ReceiveBufferSize__);
            if (iVar3 < 1) {
LAB_05d5b9ac:
              plVar4 = (long *)param_1[0x14];
              if (plVar4 != (long *)0x0) {
                uVar5 = (**(code **)(*plVar4 + 0x1a8))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x1b0));
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if (param_1[0x1c] != 0) {
                  FUN_04cab084(param_1[0x1c],param_2,
                               *(undefined8 *)
                                Method_System_Net_ServicePointManager_SetTcpKeepAlive__);
                  if (param_1[0x26] != 0) {
                    local_88 = FUN_035b1878(param_1[0x26],&local_78,
                                            *(undefined8 *)
                                             Method_System_Net_ServicePointManager_get_EnableDnsRoundRobin__
                                           );
                    puStack_98 = (undefined8 *)local_88;
                    local_a0 = 0;
                    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d4dee8();
                    }
                    *(long *)(local_78 + 0x10) = (long)param_1;
                    thunk_FUN_02dc1ef0((long *)(local_78 + 0x10),param_1);
                    if (local_78 != 0) {
                      *(long *)(local_78 + 0x18) = (long)param_2;
                      thunk_FUN_02dc1ef0((long *)(local_78 + 0x18),param_2);
                      (**(code **)(*param_1 + 0x288))
                                (param_1,local_78,*(undefined8 *)(*param_1 + 0x290));
                      FUN_03a1908c(local_88,*(undefined8 *)
                                             Method_System_Net_ServicePointManager_set_DefaultConnectionLimit__
                                  );
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                }
              }
            }
            else {
              plVar4 = (long *)param_1[0x13];
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x1c8))
                          (plVar4,param_1[0x1e],*(undefined8 *)(*plVar4 + 0x1d0));
                if (param_1[0x1e] != 0) {
                  FUN_036a68ac(&local_a0,param_1[0x1e],
                               *(undefined8 *)
                                Method_System_Runtime_Serialization_SerializationInfo_FindElement__)
                  ;
                  puVar2 = 
                  Method_System_Security_Authentication_ExtendedProtection_ServiceNameCollection_AddIfNew__
                  ;
                  puVar1 = 
                  Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__;
                  puStack_68 = puStack_98;
                  local_70 = local_a0;
                  local_60 = local_90;
                  local_a0 = 0;
                  puStack_98 = &local_70;
                  do {
                    do {
                      uVar5 = FUN_049c6928(&local_70,*(undefined8 *)puVar1);
                      if ((uVar5 & 1) == 0) {
                        FUN_049c6924(&local_70,
                                     *(undefined8 *)Method_System_Threading_SemaphoreSlim_Wait__);
                        goto LAB_05d5b9ac;
                      }
                      plVar4 = (long *)thunk_FUN_02d8a53c(local_60,*(undefined8 *)puVar2);
                    } while (plVar4 == (long *)0x0);
                    lVar9 = *plVar4;
                    lVar8 = *(long *)puVar2;
                    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar5 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == lVar8) {
                          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                          goto LAB_05d5b914;
                        }
                        uVar5 = uVar5 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_02d87540(plVar4,lVar8,0);
LAB_05d5b914:
                    plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
                  } while (plVar4 != param_2);
                  uVar7 = FUN_04e762a8(*(undefined8 *)
                                        Method_System_Net_ServicePointManager_set_MaxServicePointIdleTime__
                                       ,param_2,0);
                  uVar7 = FUN_04e723e0(uVar7,*(undefined8 *)
                                              Method_System_Net_ServicePointManager_set_EnableDnsRoundRobin__
                                       ,0);
                  if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05ea2aa8(uVar7,param_1,0);
                  puVar6 = &local_70;
                  puVar10 = (undefined8 *)Method_System_Threading_SemaphoreSlim_Wait__;
                  goto LAB_05d5b98c;
                }
              }
            }
          }
        }
        else {
          plVar4 = (long *)param_1[0x14];
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x1c8))(plVar4,param_1[0x1d],*(undefined8 *)(*plVar4 + 0x1d0));
            if (param_1[0x1d] != 0) {
              FUN_036a68ac(&local_a0,param_1[0x1d],
                           *(undefined8 *)
                            Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__
                          );
              puVar2 = 
              Method_System_Security_Authentication_ExtendedProtection_ServiceNameCollection_AddIfNew__
              ;
              puVar1 = Method_System_Threading_SendOrPostCallback_Invoke__;
              puStack_48 = puStack_98;
              local_50 = local_a0;
              local_40 = local_90;
              local_a0 = 0;
              puStack_98 = &local_50;
              do {
                do {
                  uVar5 = FUN_049c6928(&local_50,*(undefined8 *)puVar1);
                  if ((uVar5 & 1) == 0) {
                    FUN_049c6924(&local_50,
                                 *(undefined8 *)Method_System_Threading_SemaphoreSlim_WaitAsync__);
                    goto LAB_05d5b828;
                  }
                  plVar4 = (long *)thunk_FUN_02d8a53c(local_40,*(undefined8 *)puVar2);
                } while (plVar4 == (long *)0x0);
                lVar9 = *plVar4;
                lVar8 = *(long *)puVar2;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_05d5b798;
                    }
                    uVar5 = uVar5 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)FUN_02d87540(plVar4,lVar8,0);
LAB_05d5b798:
                plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
              } while (plVar4 != param_2);
              uVar7 = FUN_04e762a8(*(undefined8 *)
                                    Method_System_Net_ServicePointManager_set_MaxServicePointIdleTime__
                                   ,param_2,0);
              uVar7 = FUN_04e723e0(uVar7,*(undefined8 *)
                                          Method_System_Net_ServicePointManager_set_EnableDnsRoundRobin__
                                   ,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05ea2aa8(uVar7,param_1,0);
              puVar6 = &local_50;
              puVar10 = (undefined8 *)Method_System_Threading_SemaphoreSlim_WaitAsync__;
LAB_05d5b98c:
              FUN_049c6924(puVar6,*puVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


