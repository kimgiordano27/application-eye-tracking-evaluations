/*
FUNCTION_NAME: FUN_07f7da98
ENTRY_POINT: 07f7da98
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_21
*/


ulong FUN_07f7da98(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,int param_6,long param_7,long param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined8 in_stack_fffffffffffffeb0;
  undefined8 in_stack_fffffffffffffeb8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar17 = (undefined4)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  uVar18 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  if ((DAT_0899b4f0 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08489200);
    FUN_03a8a718(PTR_DAT_084961e0);
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                );
    DAT_0899b4f0 = 1;
  }
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0x20020 < param_6) {
    uVar4 = 0;
    if (param_6 < 0x30009) {
      if (0x30004 < param_6) {
        if (param_6 < 0x30007) {
          if (param_6 == 0x30005) {
            if (*(int *)(param_8 + 4) == 4) {
              if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              iVar2 = FUN_07ea51e0(0);
            }
            else {
              iVar2 = -0x80000000;
              if (*(float *)(param_8 + 8) != INFINITY) {
                iVar2 = (int)*(float *)(param_8 + 8);
              }
            }
            if (param_5 != 0) {
              plVar6 = (long *)FUN_07e02864(param_5,0);
              lVar7 = FUN_0586ded4(param_7 + 0x10,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                  );
              if (plVar6 != (long *)0x0) {
                lVar14 = *plVar6;
                uVar17 = *(undefined4 *)(lVar7 + 0x34);
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                      puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_07f7f6e4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,1);
LAB_07f7f6e4:
                UNRECOVERED_JUMPTABLE = (code *)*puVar8;
                uVar10 = puVar8[1];
                uVar4 = 0x30005;
                goto LAB_07f80b68;
              }
            }
          }
          else {
            if (param_6 != 0x30006) goto switchD_07f7db98_caseD_70005;
            if (*(int *)(param_8 + 4) == 4) {
              if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              iVar2 = FUN_07ea5258(0);
            }
            else {
              iVar2 = -0x80000000;
              if (*(float *)(param_8 + 8) != INFINITY) {
                iVar2 = (int)*(float *)(param_8 + 8);
              }
            }
            if (param_5 != 0) {
              plVar6 = (long *)FUN_07e02864(param_5,0);
              lVar7 = FUN_0586ded4(param_7 + 0x10,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                  );
              if (plVar6 != (long *)0x0) {
                lVar14 = *plVar6;
                uVar17 = *(undefined4 *)(lVar7 + 0x38);
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                      puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_07f7f774;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,1);
LAB_07f7f774:
                UNRECOVERED_JUMPTABLE = (code *)*puVar8;
                uVar10 = puVar8[1];
                uVar4 = 0x30006;
                goto LAB_07f80b68;
              }
            }
          }
        }
        else if (param_6 == 0x30007) {
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar17 = FUN_07ea52d0(0);
          }
          else {
            uVar17 = *(undefined4 *)(param_8 + 8);
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_07e02864(param_5,0);
            lVar7 = FUN_0586ded4(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar18 = *(undefined4 *)(lVar7 + 0x3c);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                    puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_07f7f728;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,0);
LAB_07f7f728:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar19 = 0x30007;
              goto LAB_07f80934;
            }
          }
        }
        else {
          if (param_6 != 0x30008) goto switchD_07f7db98_caseD_70005;
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            iVar2 = FUN_07ea5348(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_07e02864(param_5,0);
            lVar7 = FUN_0586ded4(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x40);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_07f7f7bc;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,1);
LAB_07f7f7bc:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar4 = 0x30008;
              goto LAB_07f80b68;
            }
          }
        }
        goto LAB_07f80d60;
      }
      if (0x30002 < param_6) {
        if (param_6 == 0x30003) {
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            iVar2 = FUN_07ea507c(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_07e02864(param_5,0);
            lVar7 = FUN_0586ded4(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x2c);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                    goto LAB_07f7f708;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f7f708:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar4 = 0x30003;
              goto LAB_07f80b68;
            }
          }
        }
        else {
          if (param_6 != 0x30004) goto switchD_07f7db98_caseD_70005;
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            iVar2 = FUN_07ea5168(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_07e02864(param_5,0);
            lVar7 = FUN_0586ded4(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x30);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_07f7f798;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,1);
LAB_07f7f798:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar4 = 0x30004;
              goto LAB_07f80b68;
            }
          }
        }
        goto LAB_07f80d60;
      }
      if (param_6 == 0x30001) {
        if (*(int *)(param_8 + 4) == 4) {
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          iVar2 = FUN_07ea49c8(0);
        }
        else {
          iVar2 = -0x80000000;
          if (*(float *)(param_8 + 8) != INFINITY) {
            iVar2 = (int)*(float *)(param_8 + 8);
          }
        }
        if (param_5 != 0) {
          plVar6 = (long *)FUN_07e02864(param_5,0);
          lVar7 = FUN_0586ded4(param_7 + 0x10,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                              );
          if (plVar6 != (long *)0x0) {
            lVar14 = *plVar6;
            uVar17 = *(undefined4 *)(lVar7 + 0x18);
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                  puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                  goto LAB_07f7f684;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f7f684:
                    /* WARNING: Could not recover jumptable at 0x07f7f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar15 = (*(code *)*puVar8)(plVar6,0x30001,uVar17,iVar2,param_9,param_10,param_11,
                                        puVar8[1]);
            return uVar15;
          }
        }
        goto LAB_07f80d60;
      }
      if (param_6 != 0x30002) goto switchD_07f7db98_caseD_70005;
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea4e2c(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      plVar6 = (long *)FUN_07e02864(param_5,0);
      lVar7 = FUN_0586ded4(param_7 + 0x10,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                          );
      if (plVar6 == (long *)0x0) goto LAB_07f80d60;
      lVar14 = *plVar6;
      uVar19 = *(undefined4 *)(lVar7 + 0x24);
      uVar18 = *(undefined4 *)(lVar7 + 0x28);
      uVar21 = *(undefined4 *)(lVar7 + 0x1c);
      uVar20 = *(undefined4 *)(lVar7 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_07f7f74c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,3);
LAB_07f7f74c:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar11 = 0x30002;
LAB_07f80a50:
      uVar15 = (*UNRECOVERED_JUMPTABLE)
                         (uVar21,uVar20,uVar19,uVar18,uVar17,param_2,param_3,param_4,plVar6,uVar11,
                          param_9,param_10,param_11,uVar10);
      goto joined_r0x07f7f424;
    }
    switch(param_6) {
    case 0x70000:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea3200(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      puVar5 = (undefined4 *)
               FUN_0586edb4(param_7 + 0x28,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                           );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar11 = 0x70000;
      uVar20 = puVar5[2];
      uVar21 = puVar5[3];
      uVar18 = *puVar5;
      uVar19 = puVar5[1];
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      break;
    case 0x70001:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07ea327c(&local_f0,0);
      }
      else {
        if (*(long *)(param_8 + 8) == 0) {
          uStack_c8 = 0;
          local_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          uVar10 = FUN_07f822b8(param_8 + 8,0);
          FUN_07de3bb0(&local_d0,uVar10,0);
        }
        uStack_e8 = uStack_c8;
        local_f0 = local_d0;
        uStack_d8 = uStack_b8;
        uStack_e0 = uStack_c0;
      }
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      if (param_5 != 0) {
        lVar7 = FUN_07e02864(param_5,0);
        lVar14 = FUN_0586edb4(param_7 + 0x28,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                             );
        if (lVar7 != 0) {
          uStack_108 = *(undefined8 *)(lVar14 + 0x18);
          local_110 = *(undefined8 *)(lVar14 + 0x10);
          uStack_f8 = *(undefined8 *)(lVar14 + 0x28);
          uStack_100 = *(undefined8 *)(lVar14 + 0x20);
          uStack_128 = uStack_a8;
          local_130 = local_b0;
          uStack_118 = uStack_98;
          uStack_120 = uStack_a0;
          uVar4 = FUN_03a84d24(5,*(undefined8 *)PTR_DAT_084961e0,lVar7,0x70001,&local_110,&local_130
                               ,param_9,param_10,param_11);
          goto switchD_07f7db98_caseD_70005;
        }
      }
      goto LAB_07f80d60;
    case 0x70002:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        auVar22 = UnityEngine_UI_Selectable__get_image(0);
      }
      else {
        auVar22._12_4_ = 0;
        auVar22._0_12_ = *(undefined1 (*) [12])(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586edb4(param_7 + 0x28,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                           );
      if (lVar7 == 0) goto LAB_07f80d60;
      uVar19 = *(undefined4 *)(lVar14 + 0x38);
      uVar11 = *(undefined8 *)(lVar14 + 0x30);
      uVar20 = 0x70002;
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      goto LAB_07f7f340;
    case 0x70003:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        auVar22 = FUN_07ea337c(0);
      }
      else {
        auVar22._12_4_ = 0;
        auVar22._0_12_ = *(undefined1 (*) [12])(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586edb4(param_7 + 0x28,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                           );
      if (lVar7 == 0) goto LAB_07f80d60;
      uVar19 = *(undefined4 *)(lVar14 + 0x44);
      uVar11 = *(undefined8 *)(lVar14 + 0x3c);
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      uVar20 = 0x70003;
LAB_07f7f340:
      uVar4 = FUN_03a84df4(0xd,uVar10,lVar7,uVar20,uVar11,uVar19,auVar22._0_8_,
                           auVar22._8_8_ & 0xffffffff,CONCAT44(uVar17,param_9),
                           CONCAT44(uVar18,param_10),param_11);
      goto switchD_07f7db98_caseD_70005;
    case 0x70004:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_07ea33fc(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        lVar7 = FUN_07e02864(param_5,0);
        lVar14 = FUN_0586edb4(param_7 + 0x28,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                             );
        if (lVar7 != 0) {
          uVar4 = FUN_03a84eb8(0xe,*(undefined8 *)PTR_DAT_084961e0,lVar7,0x70004,
                               *(undefined8 *)(lVar14 + 0x48),uVar10,param_9,param_10,param_11);
          goto switchD_07f7db98_caseD_70005;
        }
      }
      goto LAB_07f80d60;
    case 0x70005:
      goto switchD_07f7db98_caseD_70005;
    case 0x70006:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea34fc(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar20 = *(undefined4 *)(lVar7 + 0x6c);
      uVar21 = *(undefined4 *)(lVar7 + 0x70);
      uVar18 = *(undefined4 *)(lVar7 + 100);
      uVar19 = *(undefined4 *)(lVar7 + 0x68);
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      uVar11 = 0x70006;
      break;
    case 0x70007:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_07ea3578(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar13 = *(undefined8 *)(lVar7 + 0x74);
      uVar11 = *(undefined8 *)PTR_DAT_084961e0;
      uVar12 = 0x70007;
      goto LAB_07f801a0;
    case 0x70008:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_07ea35f0(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar13 = *(undefined8 *)(lVar7 + 0x7c);
      uVar11 = *(undefined8 *)PTR_DAT_084961e0;
      uVar12 = 0x70008;
      goto LAB_07f801a0;
    case 0x70009:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea36e0(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar20 = *(undefined4 *)(lVar7 + 0x8c);
      uVar21 = *(undefined4 *)(lVar7 + 0x90);
      uVar18 = *(undefined4 *)(lVar7 + 0x84);
      uVar19 = *(undefined4 *)(lVar7 + 0x88);
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      uVar11 = 0x70009;
      break;
    case 0x7000a:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea37d4(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar20 = *(undefined4 *)(lVar7 + 0x9c);
      uVar21 = *(undefined4 *)(lVar7 + 0xa0);
      uVar18 = *(undefined4 *)(lVar7 + 0x94);
      uVar19 = *(undefined4 *)(lVar7 + 0x98);
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      uVar11 = 0x7000a;
      break;
    case 0x7000b:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea38c8(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar20 = *(undefined4 *)(lVar7 + 0xac);
      uVar21 = *(undefined4 *)(lVar7 + 0xb0);
      uVar18 = *(undefined4 *)(lVar7 + 0xa4);
      uVar19 = *(undefined4 *)(lVar7 + 0xa8);
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      uVar11 = 0x7000b;
      break;
    case 0x7000c:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_07ea3944(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar13 = *(undefined8 *)(lVar7 + 0xb4);
      uVar11 = *(undefined8 *)PTR_DAT_084961e0;
      uVar12 = 0x7000c;
      goto LAB_07f801a0;
    case 0x7000d:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_07ea39bc(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar13 = *(undefined8 *)(lVar7 + 0xbc);
      uVar11 = *(undefined8 *)PTR_DAT_084961e0;
      uVar12 = 0x7000d;
      goto LAB_07f801a0;
    case 0x7000e:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea4504(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        lVar7 = FUN_07e02864(param_5,0);
        lVar14 = FUN_0586edb4(param_7 + 0x28,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                             );
        if (lVar7 != 0) {
          uVar18 = *(undefined4 *)(lVar14 + 0xc4);
          uVar10 = 0x7000e;
          goto LAB_07f7ffec;
        }
      }
      goto LAB_07f80d60;
    case 0x7000f:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar2 = FUN_07ea457c(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) goto LAB_07f80d60;
      lVar14 = FUN_07e02864(param_5,0);
      lVar7 = FUN_0586edb4(param_7 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                          );
      if (lVar14 == 0) goto LAB_07f80d60;
      uVar17 = *(undefined4 *)(lVar7 + 200);
      uVar10 = *(undefined8 *)PTR_DAT_084961e0;
      uVar11 = 0x7000f;
      goto LAB_07f7fcdc;
    default:
      if (param_6 != 0x30009) {
        if (param_6 == 0x3000b) {
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            iVar2 = FUN_07ea5694(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_07e02864(param_5,0);
            lVar7 = FUN_0586ded4(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x5c);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                    goto LAB_07f80888;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f80888:
                    /* WARNING: Could not recover jumptable at 0x07f808dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar15 = (*(code *)*puVar8)(plVar6,0x3000b,uVar17,iVar2,param_9,param_10,param_11,
                                          puVar8[1]);
              return uVar15;
            }
          }
          goto LAB_07f80d60;
        }
        goto switchD_07f7db98_caseD_70005;
      }
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar2 = UnityEngine_UI_Slider__LayoutComplete(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) goto LAB_07f80d60;
      plVar6 = (long *)FUN_07e02864(param_5,0);
      lVar7 = FUN_0586ded4(param_7 + 0x10,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                          );
      if (plVar6 == (long *)0x0) goto LAB_07f80d60;
      lVar14 = *plVar6;
      uVar17 = *(undefined4 *)(lVar7 + 0x44);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_07f808f0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f808f0:
      uVar4 = 0x30001;
      goto LAB_07f80aa0;
    }
    uVar15 = FUN_03a84c30(uVar18,uVar19,uVar20,uVar21,uVar17,param_2,param_3,param_4,3,uVar10,lVar14
                          ,uVar11,param_9,param_10,param_11);
joined_r0x07f7f424:
    if ((uVar15 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_07e05068(param_5,0);
      if ((uVar4 >> 3 & 1) == 0) {
        uVar4 = FUN_07e05068(param_5,0);
        FUN_07e05088(param_5,uVar4 | 8,0);
      }
      uVar4 = 1;
    }
    goto switchD_07f7db98_caseD_70005;
  }
  uVar4 = 0;
  switch(param_6) {
  case 0x20000:
    iVar1 = *(int *)(param_8 + 4);
    if (iVar1 == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar3 = FUN_07ea3098(0);
      iVar1 = *(int *)(param_8 + 4);
    }
    else {
      iVar3 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar3 = (int)*(float *)(param_8 + 8);
      }
    }
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar3;
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    puVar5 = (undefined4 *)
             FUN_0586d9d8(param_7 + 8,
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                         );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar11 = 0x20000;
    uVar17 = *puVar5;
    uVar10 = *(undefined8 *)PTR_DAT_084961e0;
    goto LAB_07f7fcdc;
  case 0x20001:
    iVar1 = *(int *)(param_8 + 4);
    if (iVar1 == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar3 = FUN_07ea3110(0);
      iVar1 = *(int *)(param_8 + 4);
    }
    else {
      iVar3 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar3 = (int)*(float *)(param_8 + 8);
      }
    }
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar3;
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar17 = *(undefined4 *)(lVar7 + 4);
    uVar10 = *(undefined8 *)PTR_DAT_084961e0;
    uVar11 = 0x20001;
    goto LAB_07f7fcdc;
  case 0x20002:
    iVar1 = *(int *)(param_8 + 4);
    if (iVar1 == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar3 = FUN_07ea3188(0);
      iVar1 = *(int *)(param_8 + 4);
    }
    else {
      iVar3 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar3 = (int)*(float *)(param_8 + 8);
      }
    }
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar3;
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar11 = 0x20002;
    uVar17 = *(undefined4 *)(lVar7 + 8);
    goto LAB_07f7fcd0;
  case 0x20003:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar17 = FUN_07ea3668(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586d9d8(param_7 + 8,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20003;
        uVar18 = *(undefined4 *)(lVar14 + 0xc);
LAB_07f7ffec:
        uVar15 = FUN_03a84f64(uVar18,uVar17,0,*(undefined8 *)PTR_DAT_084961e0,lVar7,uVar10,param_9,
                              param_10,param_11);
        return uVar15;
      }
    }
    goto LAB_07f80d60;
  case 0x20004:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar17 = UnityEngine_UI_Selectable__InstantClearState(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586d9d8(param_7 + 8,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20004;
        uVar18 = *(undefined4 *)(lVar14 + 0x10);
        goto LAB_07f7ffec;
      }
    }
    goto LAB_07f80d60;
  case 0x20005:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar17 = FUN_07ea3850(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586d9d8(param_7 + 8,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20005;
        uVar18 = *(undefined4 *)(lVar14 + 0x14);
        goto LAB_07f7ffec;
      }
    }
    goto LAB_07f80d60;
  case 0x20006:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar17 = FUN_07ea3a34(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586d9d8(param_7 + 8,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20006;
        uVar18 = *(undefined4 *)(lVar14 + 0x18);
        goto LAB_07f7ffec;
      }
    }
    goto LAB_07f80d60;
  case 0x20007:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea3aac(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20007;
    uVar13 = *(undefined8 *)(lVar7 + 0x1c);
    break;
  case 0x20008:
    goto switchD_07f7db98_caseD_70005;
  case 0x20009:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea3c9c(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20009;
    uVar13 = *(undefined8 *)(lVar7 + 0x28);
    break;
  case 0x2000a:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar2 = FUN_07ea3d14(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar11 = 0x2000a;
    uVar17 = *(undefined4 *)(lVar7 + 0x30);
    goto LAB_07f7fcd0;
  case 0x2000b:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar17 = FUN_07ea3d8c(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586d9d8(param_7 + 8,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x2000b;
        uVar18 = *(undefined4 *)(lVar14 + 0x34);
        goto LAB_07f7ffec;
      }
    }
    goto LAB_07f80d60;
  case 0x2000c:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar17 = FUN_07ea3e04(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_07e02864(param_5,0);
      lVar14 = FUN_0586d9d8(param_7 + 8,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x2000c;
        uVar18 = *(undefined4 *)(lVar14 + 0x38);
        goto LAB_07f7ffec;
      }
    }
    goto LAB_07f80d60;
  case 0x2000d:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar2 = FUN_07ea3e7c(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar11 = 0x2000d;
    uVar17 = *(undefined4 *)(lVar7 + 0x3c);
    goto LAB_07f7fcd0;
  case 0x2000e:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea3f68(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x2000e;
    uVar13 = *(undefined8 *)(lVar7 + 0x40);
    break;
  case 0x2000f:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar2 = FUN_07ea3fe0(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar11 = 0x2000f;
    uVar17 = *(undefined4 *)(lVar7 + 0x48);
    goto LAB_07f7fcd0;
  case 0x20010:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea4058(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20010;
    uVar13 = *(undefined8 *)(lVar7 + 0x4c);
    break;
  case 0x20011:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea4144(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20011;
    uVar13 = *(undefined8 *)(lVar7 + 0x54);
    break;
  case 0x20012:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea41bc(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20012;
    uVar13 = *(undefined8 *)(lVar7 + 0x5c);
    break;
  case 0x20013:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea4234(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20013;
    uVar13 = *(undefined8 *)(lVar7 + 100);
    break;
  case 0x20014:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea42ac(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20014;
    uVar13 = *(undefined8 *)(lVar7 + 0x6c);
    break;
  case 0x20015:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea4324(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20015;
    uVar13 = *(undefined8 *)(lVar7 + 0x74);
    break;
  case 0x20016:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea439c(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20016;
    uVar13 = *(undefined8 *)(lVar7 + 0x7c);
    break;
  case 0x20017:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea4414(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20017;
    uVar13 = *(undefined8 *)(lVar7 + 0x84);
    break;
  case 0x20018:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea448c(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20018;
    uVar13 = *(undefined8 *)(lVar7 + 0x8c);
    break;
  case 0x20019:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea45f4(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x20019;
    uVar13 = *(undefined8 *)(lVar7 + 0x94);
    break;
  case 0x2001a:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea466c(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x2001a;
    uVar13 = *(undefined8 *)(lVar7 + 0x9c);
    break;
  case 0x2001b:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = UnityEngine_UI_SetPropertyUtility__SetColor(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x2001b;
    uVar13 = *(undefined8 *)(lVar7 + 0xa4);
    break;
  case 0x2001c:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea475c(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x2001c;
    uVar13 = *(undefined8 *)(lVar7 + 0xac);
    break;
  case 0x2001d:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar2 = FUN_07ea47d4(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar11 = 0x2001d;
    uVar17 = *(undefined4 *)(lVar7 + 0xb4);
LAB_07f7fcd0:
    uVar10 = *(undefined8 *)PTR_DAT_084961e0;
LAB_07f7fcdc:
    uVar4 = FUN_03a84b84(4,uVar10,lVar14,uVar11,uVar17,iVar2,param_9,param_10,param_11);
    goto switchD_07f7db98_caseD_70005;
  case 0x2001e:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea484c(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x2001e;
    uVar13 = *(undefined8 *)(lVar7 + 0xb8);
    break;
  case 0x2001f:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea4ac4(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar12 = 0x2001f;
    uVar13 = *(undefined8 *)(lVar7 + 0xc0);
    break;
  case 0x20020:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_07ea57f4(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_07f80d60;
    lVar14 = FUN_07e02864(param_5,0);
    lVar7 = FUN_0586d9d8(param_7 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                        );
    if (lVar14 == 0) goto LAB_07f80d60;
    uVar13 = *(undefined8 *)(lVar7 + 200);
    uVar12 = 0x20020;
    uVar11 = *(undefined8 *)PTR_DAT_084961e0;
    goto LAB_07f801a0;
  default:
    switch(param_6) {
    case 0x10000:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea3b24(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) break;
      plVar6 = (long *)FUN_07e02864(param_5,0);
      puVar5 = (undefined4 *)
               FUN_0586d4dc(param_7,*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                           );
      if (plVar6 == (long *)0x0) break;
      lVar7 = *plVar6;
      uVar19 = puVar5[2];
      uVar18 = puVar5[3];
      uVar21 = *puVar5;
      uVar20 = puVar5[1];
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_07f80a44;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,3);
LAB_07f80a44:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar11 = 0x10000;
      goto LAB_07f80a50;
    case 0x10001:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_07ea3ef4(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar11 = *(undefined8 *)(lVar7 + 0x10);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_07f80abc;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,2);
LAB_07f80abc:
                    /* WARNING: Could not recover jumptable at 0x07f80b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*(code *)*puVar8)(plVar6,0x10001,uVar11,uVar10,param_9,param_10,param_11,
                                      puVar8[1]);
          return uVar15;
        }
      }
      break;
    case 0x10002:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        plVar6 = (long *)FUN_07ea40d0(0);
      }
      else {
        plVar6 = *(long **)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x18);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_07f80a24;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084961e0,2);
LAB_07f80a24:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x10002;
LAB_07f80c84:
                    /* WARNING: Could not recover jumptable at 0x07f80cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*UNRECOVERED_JUMPTABLE)
                             (plVar9,uVar12,uVar10,plVar6,param_9,param_10,param_11,uVar11);
          return uVar15;
        }
      }
      break;
    default:
      goto switchD_07f7db98_caseD_70005;
    case 0x10005:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        plVar6 = (long *)FUN_07ea4f1c(0);
      }
      else if ((*(long *)(param_8 + 8) == 0) ||
              (plVar6 = (long *)FUN_07f822b8(param_8 + 8,0), plVar6 == (long *)0x0)) {
        plVar6 = (long *)0x0;
      }
      else if (*plVar6 != *(long *)PTR_DAT_08489200) {
        plVar6 = (long *)0x0;
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x40);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                goto LAB_07f80c78;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084961e0,7);
LAB_07f80c78:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x10005;
          goto LAB_07f80c84;
        }
      }
      break;
    case 0x10006:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        auVar22 = FUN_07ea4f90(0);
      }
      else if (*(long *)(param_8 + 8) == 0) {
        auVar22 = ZEXT816(0);
      }
      else {
        uVar10 = FUN_07f822b8(param_8 + 8,0);
        auVar22 = FUN_07de7170(uVar10,0);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar10 = *(undefined8 *)(lVar7 + 0x48);
          uVar11 = *(undefined8 *)(lVar7 + 0x50);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                goto LAB_07f80b18;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,6);
LAB_07f80b18:
          uVar4 = (*(code *)*puVar8)(plVar6,0x10006,uVar10,uVar11,auVar22._0_8_,auVar22._8_8_,
                                     param_9,param_10,param_11,puVar8[1]);
          goto switchD_07f7db98_caseD_70005;
        }
      }
      break;
    case 0x10007:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar2 = FUN_07ea5008(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) break;
      plVar6 = (long *)FUN_07e02864(param_5,0);
      lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                          );
      if (plVar6 == (long *)0x0) break;
      lVar14 = *plVar6;
      uVar17 = *(undefined4 *)(lVar7 + 0x58);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_07f80b5c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f80b5c:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar4 = 0x10007;
      goto LAB_07f80b68;
    case 0x10008:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        plVar6 = (long *)FUN_07ea50f4(0);
      }
      else {
        plVar6 = *(long **)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x5c);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_07f80bbc;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084961e0,2);
LAB_07f80bbc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x10008;
          goto LAB_07f80c84;
        }
      }
      break;
    case 0x10009:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar2 = FUN_07ea5438(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) break;
      plVar6 = (long *)FUN_07e02864(param_5,0);
      lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                          );
      if (plVar6 == (long *)0x0) break;
      lVar14 = *plVar6;
      uVar17 = *(undefined4 *)(lVar7 + 100);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_07f80a9c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f80a9c:
      uVar4 = 0x10001;
LAB_07f80aa0:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar4 = uVar4 | 8;
LAB_07f80b68:
                    /* WARNING: Could not recover jumptable at 0x07f80ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*UNRECOVERED_JUMPTABLE)(plVar6,uVar4,uVar17,iVar2,param_9,param_10,param_11,uVar10);
      return uVar15;
    case 0x1000b:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea55a8(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar19 = *(undefined4 *)(lVar7 + 0x74);
          uVar18 = *(undefined4 *)(lVar7 + 0x78);
          uVar21 = *(undefined4 *)(lVar7 + 0x6c);
          uVar20 = *(undefined4 *)(lVar7 + 0x70);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                goto LAB_07f809a8;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,3);
LAB_07f809a8:
                    /* WARNING: Could not recover jumptable at 0x07f80a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*(code *)*puVar8)(uVar21,uVar20,uVar19,uVar18,uVar17,param_2,param_3,param_4,
                                      plVar6,0x1000b,param_9,param_10,param_11,puVar8[1]);
          return uVar15;
        }
      }
      break;
    case 0x1000c:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07ea5620(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar18 = *(undefined4 *)(lVar7 + 0x7c);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_07f80928;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,0);
LAB_07f80928:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar10 = puVar8[1];
          uVar19 = 0x1000c;
LAB_07f80934:
                    /* WARNING: Could not recover jumptable at 0x07f80974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*UNRECOVERED_JUMPTABLE)
                             (uVar18,uVar17,plVar6,uVar19,param_9,param_10,param_11,uVar10);
          return uVar15;
        }
      }
      break;
    case 0x1000d:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar2 = UnityEngine_UI_Slider__Set(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar17 = *(undefined4 *)(lVar7 + 0x80);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_07f8090c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f8090c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar10 = puVar8[1];
          uVar4 = 0x1000d;
          goto LAB_07f80b68;
        }
      }
      break;
    case 0x1000e:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar2 = FUN_07ea5780(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar17 = *(undefined4 *)(lVar7 + 0x84);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_07f80988;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_084961e0,4);
LAB_07f80988:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar10 = puVar8[1];
          uVar4 = 0x1000e;
          goto LAB_07f80b68;
        }
      }
      break;
    case 0x1000f:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        plVar6 = (long *)FUN_07ea586c(0);
      }
      else {
        plVar6 = *(long **)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_07e02864(param_5,0);
        lVar7 = FUN_0586d4dc(param_7,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x88);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_084961e0) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_07f80bdc;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084961e0,2);
LAB_07f80bdc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x1000f;
          goto LAB_07f80c84;
        }
      }
    }
LAB_07f80d60:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar11 = *(undefined8 *)PTR_DAT_084961e0;
LAB_07f801a0:
  uVar4 = FUN_03a84eb8(2,uVar11,lVar14,uVar12,uVar13,uVar10,param_9,param_10,param_11);
switchD_07f7db98_caseD_70005:
  return (ulong)(uVar4 & 1);
}


