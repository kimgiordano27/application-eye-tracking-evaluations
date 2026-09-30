/*
FUNCTION_NAME: FUN_08ad2388
ENTRY_POINT: 08ad2388
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void FUN_08ad2388(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((DAT_096a5201 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910b5c0);
    FUN_03f13384(PTR_DAT_091a9b48);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var);
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                );
    FUN_03f13384(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                );
    FUN_03f13384(System_Collections_Generic_HashSet<UIButton>_TypeInfo);
    DAT_096a5201 = 1;
  }
  puVar4 = 
  Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var;
  iVar2 = *param_2;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_2[1] == 4) {
    if (*(long *)(lVar3 + 0x28) == local_38) {
      FUN_08acbc94(param_1);
      return;
    }
    goto LAB_08ad3300;
  }
  pfVar1 = (float *)(param_2 + 2);
  if (0x20020 < iVar2) {
    if (iVar2 < 0x30009) {
      if (iVar2 < 0x30005) {
        if (iVar2 < 0x30003) {
          if (iVar2 == 0x30001) {
            lVar8 = FUN_060fece0(param_1 + 0x10,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                );
            iVar2 = -0x80000000;
            if (*pfVar1 != INFINITY) {
              iVar2 = (int)*pfVar1;
            }
            *(int *)(lVar8 + 0x18) = iVar2;
          }
          else {
            if (iVar2 != 0x30002) goto switchD_08ad24a0_caseD_70005;
            lVar8 = FUN_060fece0(param_1 + 0x10,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                );
            uStack_48 = *(undefined8 *)(param_2 + 2);
            local_50 = *(undefined8 *)param_2;
            local_40 = *(undefined8 *)(param_2 + 4);
            *(undefined8 *)(lVar8 + 0x24) = local_40;
            *(undefined8 *)(lVar8 + 0x1c) = uStack_48;
          }
        }
        else {
          if (iVar2 != 0x30003) {
            if (iVar2 == 0x30004) {
              lVar8 = FUN_060fece0(param_1 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              goto LAB_08ad30d4;
            }
            goto switchD_08ad24a0_caseD_70005;
          }
          lVar8 = FUN_060fece0(param_1 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          iVar2 = -0x80000000;
          if (*pfVar1 != INFINITY) {
            iVar2 = (int)*pfVar1;
          }
          *(int *)(lVar8 + 0x2c) = iVar2;
        }
      }
      else if (iVar2 < 0x30007) {
        if (iVar2 == 0x30005) {
          lVar8 = FUN_060fece0(param_1 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          iVar2 = -0x80000000;
          if (*pfVar1 != INFINITY) {
            iVar2 = (int)*pfVar1;
          }
          *(int *)(lVar8 + 0x34) = iVar2;
        }
        else {
          if (iVar2 != 0x30006) goto switchD_08ad24a0_caseD_70005;
          lVar8 = FUN_060fece0(param_1 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          iVar2 = -0x80000000;
          if (*pfVar1 != INFINITY) {
            iVar2 = (int)*pfVar1;
          }
          *(int *)(lVar8 + 0x38) = iVar2;
        }
      }
      else if (iVar2 == 0x30007) {
        lVar8 = FUN_060fece0(param_1 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        *(float *)(lVar8 + 0x3c) = *pfVar1;
      }
      else {
        if (iVar2 != 0x30008) goto switchD_08ad24a0_caseD_70005;
        lVar8 = FUN_060fece0(param_1 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar8 + 0x40) = iVar2;
      }
    }
    else {
      switch(iVar2) {
      case 0x70000:
        puVar5 = (undefined8 *)
                 FUN_060ffbc0(param_1 + 0x28,
                              *(undefined8 *)
                               Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                             );
        goto LAB_08ad25dc;
      case 0x70001:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(long *)pfVar1 == 0) {
          uStack_68 = 0;
          local_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
        }
        else {
          uVar9 = FUN_08ae3d88(pfVar1,0);
          FUN_089455b4(&local_70,uVar9,0);
        }
        *(undefined8 *)(lVar8 + 0x18) = uStack_68;
        *(undefined8 *)(lVar8 + 0x10) = local_70;
        *(undefined8 *)(lVar8 + 0x28) = uStack_58;
        *(undefined8 *)(lVar8 + 0x20) = uStack_60;
        thunk_FUN_03f86000(lVar8 + 0x10,0);
        break;
      case 0x70002:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uStack_48 = *(undefined8 *)(param_2 + 2);
        local_50 = *(undefined8 *)param_2;
        *(int *)(lVar8 + 0x38) = (int)*(undefined8 *)(param_2 + 4);
        *(undefined8 *)(lVar8 + 0x30) = uStack_48;
        break;
      case 0x70003:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uStack_48 = *(undefined8 *)(param_2 + 2);
        local_50 = *(undefined8 *)param_2;
        *(int *)(lVar8 + 0x44) = (int)*(undefined8 *)(param_2 + 4);
        *(undefined8 *)(lVar8 + 0x3c) = uStack_48;
        break;
      case 0x70004:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        *(long *)(lVar8 + 0x48) = *(long *)pfVar1;
        break;
      case 0x70005:
switchD_08ad24a0_caseD_70005:
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        uVar9 = thunk_FUN_03f4e2c4(*(undefined8 *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                                   ,&local_50);
        uVar9 = FUN_0731d5f8(*(undefined8 *)System_Collections_Generic_HashSet<UIButton>_TypeInfo,
                             uVar9,0);
        if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_0910b5c0);
        }
        FUN_087929a4(uVar9,0);
        break;
      case 0x70006:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uStack_48 = *(undefined8 *)(param_2 + 2);
        local_50 = *(undefined8 *)param_2;
        local_40 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(lVar8 + 0x6c) = local_40;
        *(undefined8 *)(lVar8 + 100) = uStack_48;
        break;
      case 0x70007:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        goto LAB_08ad303c;
      case 0x70008:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        goto LAB_08ad31a4;
      case 0x70009:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uStack_48 = *(undefined8 *)(param_2 + 2);
        local_50 = *(undefined8 *)param_2;
        local_40 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(lVar8 + 0x8c) = local_40;
        *(undefined8 *)(lVar8 + 0x84) = uStack_48;
        break;
      case 0x7000a:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uStack_48 = *(undefined8 *)(param_2 + 2);
        local_50 = *(undefined8 *)param_2;
        local_40 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(lVar8 + 0x9c) = local_40;
        *(undefined8 *)(lVar8 + 0x94) = uStack_48;
        break;
      case 0x7000b:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uStack_48 = *(undefined8 *)(param_2 + 2);
        local_50 = *(undefined8 *)param_2;
        local_40 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(lVar8 + 0xac) = local_40;
        *(undefined8 *)(lVar8 + 0xa4) = uStack_48;
        break;
      case 0x7000c:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        *(long *)(lVar8 + 0xb4) = *(long *)pfVar1;
        break;
      case 0x7000d:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        *(long *)(lVar8 + 0xbc) = *(long *)pfVar1;
        break;
      case 0x7000e:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        *(float *)(lVar8 + 0xc4) = *pfVar1;
        break;
      case 0x7000f:
        lVar8 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar8 + 200) = iVar2;
        break;
      default:
        if (iVar2 == 0x30009) {
          lVar8 = FUN_060fece0(param_1 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          iVar2 = -0x80000000;
          if (*pfVar1 != INFINITY) {
            iVar2 = (int)*pfVar1;
          }
          *(int *)(lVar8 + 0x44) = iVar2;
        }
        else {
          if (iVar2 != 0x3000b) goto switchD_08ad24a0_caseD_70005;
          lVar8 = FUN_060fece0(param_1 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          iVar2 = -0x80000000;
          if (*pfVar1 != INFINITY) {
            iVar2 = (int)*pfVar1;
          }
          *(int *)(lVar8 + 0x5c) = iVar2;
        }
      }
    }
    goto LAB_08ad3284;
  }
  switch(iVar2) {
  case 0x20000:
    piVar6 = (int *)FUN_060fe7e4(param_1 + 8,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                                );
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *piVar6 = iVar2;
    if (param_2[1] == 2) {
      puVar7 = (undefined4 *)FUN_060fe7e4(param_1 + 8,*(undefined8 *)puVar4);
      *puVar7 = 0;
    }
    break;
  case 0x20001:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *(int *)(lVar8 + 4) = iVar2;
    if (param_2[1] == 2) {
      lVar8 = FUN_060fe7e4(param_1 + 8,*(undefined8 *)puVar4);
      *(undefined4 *)(lVar8 + 4) = 0;
    }
    break;
  case 0x20002:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *(int *)(lVar8 + 8) = iVar2;
    if (param_2[1] == 2) {
      lVar8 = FUN_060fe7e4(param_1 + 8,*(undefined8 *)puVar4);
      *(undefined4 *)(lVar8 + 8) = 0;
    }
    break;
  case 0x20003:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(float *)(lVar8 + 0xc) = *pfVar1;
    break;
  case 0x20004:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(float *)(lVar8 + 0x10) = *pfVar1;
    break;
  case 0x20005:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(float *)(lVar8 + 0x14) = *pfVar1;
    break;
  case 0x20006:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(float *)(lVar8 + 0x18) = *pfVar1;
    break;
  case 0x20007:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x1c) = *(long *)pfVar1;
    break;
  case 0x20008:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *(int *)(lVar8 + 0x24) = iVar2;
    if (param_2[1] == 3) {
      lVar8 = FUN_060fe7e4(param_1 + 8,*(undefined8 *)puVar4);
      *(undefined4 *)(lVar8 + 0x24) = 1;
    }
    break;
  case 0x20009:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x28) = *(long *)pfVar1;
    break;
  case 0x2000a:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
LAB_08ad30d4:
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar8 + 0x30) = iVar2;
    break;
  case 0x2000b:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(float *)(lVar8 + 0x34) = *pfVar1;
    break;
  case 0x2000c:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(float *)(lVar8 + 0x38) = *pfVar1;
    break;
  case 0x2000d:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
LAB_08ad305c:
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar8 + 0x3c) = iVar2;
    break;
  case 0x2000e:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x40) = *(long *)pfVar1;
    break;
  case 0x2000f:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar8 + 0x48) = iVar2;
    break;
  case 0x20010:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x4c) = *(long *)pfVar1;
    break;
  case 0x20011:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x54) = *(long *)pfVar1;
    break;
  case 0x20012:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
LAB_08ad30b4:
    *(long *)(lVar8 + 0x5c) = *(long *)pfVar1;
    break;
  case 0x20013:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 100) = *(long *)pfVar1;
    break;
  case 0x20014:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x6c) = *(long *)pfVar1;
    break;
  case 0x20015:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
LAB_08ad303c:
    *(long *)(lVar8 + 0x74) = *(long *)pfVar1;
    break;
  case 0x20016:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
LAB_08ad31a4:
    *(long *)(lVar8 + 0x7c) = *(long *)pfVar1;
    break;
  case 0x20017:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x84) = *(long *)pfVar1;
    break;
  case 0x20018:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x8c) = *(long *)pfVar1;
    break;
  case 0x20019:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x94) = *(long *)pfVar1;
    break;
  case 0x2001a:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0x9c) = *(long *)pfVar1;
    break;
  case 0x2001b:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0xa4) = *(long *)pfVar1;
    break;
  case 0x2001c:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0xac) = *(long *)pfVar1;
    break;
  case 0x2001d:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar8 + 0xb4) = iVar2;
    break;
  case 0x2001e:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0xb8) = *(long *)pfVar1;
    break;
  case 0x2001f:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 0xc0) = *(long *)pfVar1;
    break;
  case 0x20020:
    lVar8 = FUN_060fe7e4(param_1 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    *(long *)(lVar8 + 200) = *(long *)pfVar1;
    break;
  default:
    switch(iVar2) {
    case 0x10000:
      puVar5 = (undefined8 *)
               FUN_060fe2e8(param_1,*(undefined8 *)
                                     Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                           );
LAB_08ad25dc:
      uStack_48 = *(undefined8 *)(param_2 + 2);
      local_50 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)(param_2 + 4);
      puVar5[1] = local_40;
      *puVar5 = uStack_48;
      break;
    case 0x10001:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(long *)(lVar8 + 0x10) = *(long *)pfVar1;
      break;
    case 0x10002:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(long *)(lVar8 + 0x18) = *(long *)pfVar1;
      break;
    default:
      goto switchD_08ad24a0_caseD_70005;
    case 0x10004:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      goto LAB_08ad305c;
    case 0x10005:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if ((*(long *)pfVar1 == 0) ||
         (plVar10 = (long *)FUN_08ae3d88(pfVar1,0), plVar10 == (long *)0x0)) {
        plVar10 = (long *)0x0;
      }
      else if (*plVar10 != *(long *)PTR_DAT_091a9b48) {
        plVar10 = (long *)0x0;
      }
      pauVar11 = (undefined1 (*) [16])(lVar8 + 0x40);
      *(long **)*pauVar11 = plVar10;
      if (*(long *)(lVar3 + 0x28) == local_38) {
LAB_08ad32ec:
        thunk_FUN_03f86000(pauVar11,plVar10);
        return;
      }
      goto LAB_08ad3300;
    case 0x10006:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(long *)pfVar1 == 0) {
        auVar12 = ZEXT816(0);
      }
      else {
        uVar9 = FUN_08ae3d88(pfVar1,0);
        auVar12 = FUN_08948b74(uVar9,0);
      }
      pauVar11 = (undefined1 (*) [16])(lVar8 + 0x48);
      *pauVar11 = auVar12;
      if (*(long *)(lVar3 + 0x28) == local_38) {
        plVar10 = (long *)0x0;
        goto LAB_08ad32ec;
      }
      goto LAB_08ad3300;
    case 0x10007:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x58) = iVar2;
      break;
    case 0x10008:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      goto LAB_08ad30b4;
    case 0x10009:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 100) = iVar2;
      break;
    case 0x1000a:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x68) = iVar2;
      break;
    case 0x1000b:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      uStack_48 = *(undefined8 *)(param_2 + 2);
      local_50 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(lVar8 + 0x74) = local_40;
      *(undefined8 *)(lVar8 + 0x6c) = uStack_48;
      break;
    case 0x1000c:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(float *)(lVar8 + 0x7c) = *pfVar1;
      break;
    case 0x1000d:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x80) = iVar2;
      break;
    case 0x1000e:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x84) = iVar2;
      break;
    case 0x1000f:
      lVar8 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(long *)(lVar8 + 0x88) = *(long *)pfVar1;
    }
  }
LAB_08ad3284:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_08ad3300:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


