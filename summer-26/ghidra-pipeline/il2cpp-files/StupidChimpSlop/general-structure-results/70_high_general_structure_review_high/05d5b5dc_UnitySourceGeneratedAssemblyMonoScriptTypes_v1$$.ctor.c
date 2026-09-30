/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$.ctor
ENTRY_POINT: 05d5b5dc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0xf70));
  FUN_02d4dc40(Method_System_Net_ServicePointManager_set_DefaultConnectionLimit__);
  FUN_02d4dc40(Method_System_Net_ServicePointManager_set_EnableDnsRoundRobin__);
  FUN_02d4dc40(Method_System_Net_ServicePointManager_set_MaxServicePointIdleTime__);
  *(undefined1 *)(unaff_x21 + 0xc2) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000060 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if ((long *)unaff_x19[0x14] != (long *)0x0) {
    uVar4 = (**(code **)(*(long *)unaff_x19[0x14] + 0x178))();
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar8 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Runtime_Serialization_SerializationInfo_AddValue__) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_05d5b6a0;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d87540();
LAB_05d5b6a0:
      (*(code *)*puVar5)();
      if (unaff_x19[0x14] != 0) {
        iVar3 = FUN_045ab28c(unaff_x19[0x14],
                             *(undefined8 *)Method_System_Net_ServicePointManager_FindServicePoint__
                            );
        if (iVar3 < 1) {
LAB_05d5b828:
          if (unaff_x19[0x13] != 0) {
            iVar3 = FUN_045ab28c(unaff_x19[0x13],
                                 *(undefined8 *)
                                  Method_System_Net_ServicePoint_set_ReceiveBufferSize__);
            if (iVar3 < 1) {
LAB_05d5b9ac:
              if ((long *)unaff_x19[0x14] != (long *)0x0) {
                uVar4 = (**(code **)(*(long *)unaff_x19[0x14] + 0x1a8))();
                if ((uVar4 & 1) == 0) {
                  return;
                }
                if (unaff_x19[0x1c] != 0) {
                  FUN_04cab084();
                  if (unaff_x19[0x26] != 0) {
                    _in_stack_00000018 =
                         FUN_035b1878(unaff_x19[0x26],&stack0x00000028,
                                      *(undefined8 *)
                                       Method_System_Net_ServicePointManager_get_EnableDnsRoundRobin__
                                     );
                    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d4dee8();
                    }
                    *(long **)(in_stack_00000028 + 0x10) = unaff_x19;
                    thunk_FUN_02dc1ef0();
                    if (in_stack_00000028 != 0) {
                      *(long **)(in_stack_00000028 + 0x18) = unaff_x20;
                      thunk_FUN_02dc1ef0();
                      (**(code **)(*unaff_x19 + 0x288))();
                      FUN_03a1908c(&stack0x00000018,
                                   *(undefined8 *)
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
              plVar6 = (long *)unaff_x19[0x13];
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x1c8))
                          (plVar6,unaff_x19[0x1e],*(undefined8 *)(*plVar6 + 0x1d0));
                if (unaff_x19[0x1e] != 0) {
                  FUN_036a68ac(unaff_x19[0x1e],
                               *(undefined8 *)
                                Method_System_Runtime_Serialization_SerializationInfo_FindElement__)
                  ;
                  puVar2 = 
                  Method_System_Security_Authentication_ExtendedProtection_ServiceNameCollection_AddIfNew__
                  ;
                  puVar1 = 
                  Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__;
                  in_stack_00000038 = in_stack_00000008;
                  in_stack_00000030 = in_stack_00000000;
                  in_stack_00000040 = in_stack_00000010;
                  do {
                    do {
                      uVar4 = FUN_049c6928(&stack0x00000030,*(undefined8 *)puVar1);
                      if ((uVar4 & 1) == 0) {
                        FUN_049c6924(&stack0x00000030,
                                     *(undefined8 *)Method_System_Threading_SemaphoreSlim_Wait__);
                        goto LAB_05d5b9ac;
                      }
                      plVar6 = (long *)thunk_FUN_02d8a53c(in_stack_00000040,*(undefined8 *)puVar2);
                    } while (plVar6 == (long *)0x0);
                    lVar9 = *plVar6;
                    lVar8 = *(long *)puVar2;
                    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar4 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == lVar8) {
                          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                          goto LAB_05d5b914;
                        }
                        uVar4 = uVar4 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_02d87540(plVar6,lVar8,0);
LAB_05d5b914:
                    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
                  } while (plVar6 != unaff_x20);
                  uVar7 = FUN_04e762a8(*(undefined8 *)
                                        Method_System_Net_ServicePointManager_set_MaxServicePointIdleTime__
                                      );
                  uVar7 = FUN_04e723e0(uVar7,*(undefined8 *)
                                              Method_System_Net_ServicePointManager_set_EnableDnsRoundRobin__
                                       ,0);
                  if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05ea2aa8(uVar7);
                  puVar5 = &stack0x00000030;
                  puVar10 = (undefined8 *)Method_System_Threading_SemaphoreSlim_Wait__;
                  goto LAB_05d5b98c;
                }
              }
            }
          }
        }
        else {
          plVar6 = (long *)unaff_x19[0x14];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x1c8))(plVar6,unaff_x19[0x1d],*(undefined8 *)(*plVar6 + 0x1d0));
            if (unaff_x19[0x1d] != 0) {
              FUN_036a68ac(unaff_x19[0x1d],
                           *(undefined8 *)
                            Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__
                          );
              puVar2 = 
              Method_System_Security_Authentication_ExtendedProtection_ServiceNameCollection_AddIfNew__
              ;
              puVar1 = Method_System_Threading_SendOrPostCallback_Invoke__;
              in_stack_00000058 = in_stack_00000008;
              in_stack_00000050 = in_stack_00000000;
              in_stack_00000060 = in_stack_00000010;
              in_stack_00000000 = 0;
              do {
                do {
                  uVar4 = FUN_049c6928(&stack0x00000050,*(undefined8 *)puVar1);
                  if ((uVar4 & 1) == 0) {
                    FUN_049c6924(&stack0x00000050,
                                 *(undefined8 *)Method_System_Threading_SemaphoreSlim_WaitAsync__);
                    in_stack_00000008 = &stack0x00000050;
                    goto LAB_05d5b828;
                  }
                  plVar6 = (long *)thunk_FUN_02d8a53c(in_stack_00000060,*(undefined8 *)puVar2);
                } while (plVar6 == (long *)0x0);
                lVar9 = *plVar6;
                lVar8 = *(long *)puVar2;
                uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar4 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar8) {
                      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_05d5b798;
                    }
                    uVar4 = uVar4 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_02d87540(plVar6,lVar8,0);
LAB_05d5b798:
                plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
              } while (plVar6 != unaff_x20);
              uVar7 = FUN_04e762a8(*(undefined8 *)
                                    Method_System_Net_ServicePointManager_set_MaxServicePointIdleTime__
                                  );
              uVar7 = FUN_04e723e0(uVar7,*(undefined8 *)
                                          Method_System_Net_ServicePointManager_set_EnableDnsRoundRobin__
                                   ,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05ea2aa8(uVar7);
              puVar5 = &stack0x00000050;
              puVar10 = (undefined8 *)Method_System_Threading_SemaphoreSlim_WaitAsync__;
LAB_05d5b98c:
              FUN_049c6924(puVar5,*puVar10);
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


