/*
FUNCTION_NAME: FUN_08ad4f18
ENTRY_POINT: 08ad4f18
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void FUN_08ad4f18(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  if ((DAT_096a5207 & 1) == 0) {
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var);
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                );
    DAT_096a5207 = 1;
  }
  if (param_3 < 0x10009) {
    if (param_3 == 0x10001) {
      lVar1 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(undefined8 *)(lVar1 + 0x10) = param_4;
    }
    else if (param_3 == 0x10002) {
      lVar1 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(undefined8 *)(lVar1 + 0x18) = param_4;
    }
    else {
      if (param_3 != 0x10008) goto switchD_08ad4fb4_caseD_20008;
      lVar1 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(undefined8 *)(lVar1 + 0x5c) = param_4;
    }
joined_r0x08ad5068:
    if (param_2 == 0) {
LAB_08ad56e0:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar4 = 0x818;
  }
  else {
    if (0x70006 < param_3) {
      if (param_3 < 0x7000c) {
        if (param_3 == 0x70007) {
          lVar1 = FUN_060ffbc0(param_1 + 0x28,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                              );
          *(undefined8 *)(lVar1 + 0x74) = param_4;
        }
        else {
          if (param_3 != 0x70008) goto switchD_08ad4fb4_caseD_20008;
          lVar1 = FUN_060ffbc0(param_1 + 0x28,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                              );
          *(undefined8 *)(lVar1 + 0x7c) = param_4;
        }
      }
      else if (param_3 == 0x7000c) {
        lVar1 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        *(undefined8 *)(lVar1 + 0xb4) = param_4;
      }
      else {
        if (param_3 != 0x7000d) goto switchD_08ad4fb4_caseD_20008;
        lVar1 = FUN_060ffbc0(param_1 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        *(undefined8 *)(lVar1 + 0xbc) = param_4;
      }
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = 0x880;
      goto LAB_08ad56a8;
    }
    switch(param_3) {
    case 0x20007:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x1c) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a01200(uVar4,uVar2,0);
      break;
    case 0x20008:
    case 0x2000a:
    case 0x2000b:
    case 0x2000c:
    case 0x2000d:
    case 0x2000f:
    case 0x2001d:
switchD_08ad4fb4_caseD_20008:
      local_48 = thunk_FUN_03f786f8(
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                                   );
      uStack_40 = 0xffffffffffffffff;
      local_38 = param_3;
      uVar4 = FUN_074ecd38(&local_48,0);
      uVar2 = thunk_FUN_03f786f8(Sentry_Internal_ICloneable<App>_TypeInfo);
      uVar3 = thunk_FUN_03f786f8(Sentry_Internal_ICloneable<Browser>_TypeInfo);
      uVar4 = FUN_07327464(uVar2,uVar4,uVar3,0);
      thunk_FUN_03f786f8(PTR_DAT_0910e988);
      uVar2 = thunk_FUN_03f4e68c();
      uVar3 = thunk_FUN_03f786f8(PTR_DAT_09122fd8);
      FUN_07412d14(uVar2,uVar4,uVar3,0);
      uVar4 = thunk_FUN_03f786f8(Sentry_Internal_ICloneable<Device>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar2,uVar4);
    case 0x20009:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x28) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a00d74(uVar4,uVar2,0);
      break;
    case 0x2000e:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x40) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a00e68(uVar4,uVar2,0);
      break;
    case 0x20010:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x4c) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a010a8(uVar4,uVar2,0);
      break;
    case 0x20011:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x54) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a01390(uVar4,uVar2,0);
      break;
    case 0x20012:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x5c) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a0120c(uVar4,uVar2,0);
      break;
    case 0x20013:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 100) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a01384(uVar4,uVar2,0);
      break;
    case 0x20014:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x6c) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a01378(uVar4,uVar2,0);
      break;
    case 0x20015:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x74) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a00f60(uVar4,uVar2,0);
      break;
    case 0x20016:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x7c) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a00ebc(uVar4,uVar2,0);
      break;
    case 0x20017:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x84) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a01008(uVar4,uVar2,0);
      break;
    case 0x20018:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x8c) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a00fb4(uVar4,uVar2,0);
      break;
    case 0x20019:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x94) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a014f8(uVar4,uVar2,0);
      break;
    case 0x2001a:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0x9c) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a0139c(uVar4,uVar2,0);
      break;
    case 0x2001b:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0xa4) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a014ec(uVar4,uVar2,0);
      break;
    case 0x2001c:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0xac) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a014e0(uVar4,uVar2,0);
      break;
    case 0x2001e:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0xb8) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      UnityEngine_UI_Selectable__FindSelectableOnDown(uVar4,uVar2,0);
      break;
    case 0x2001f:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 0xc0) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a011e8(uVar4,uVar2,0);
      break;
    case 0x20020:
      lVar1 = FUN_060fe7e4(param_1 + 8,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                          );
      *(undefined8 *)(lVar1 + 200) = param_4;
      if (param_2 == 0) goto LAB_08ad56e0;
      uVar4 = FUN_0895fbac(param_2,0);
      uVar2 = FUN_08987de8(param_4,0);
      FUN_08a00e14(uVar4,uVar2,0);
      break;
    default:
      if (param_3 != 0x1000f) goto switchD_08ad4fb4_caseD_20008;
      lVar1 = FUN_060fe2e8(param_1,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      *(undefined8 *)(lVar1 + 0x88) = param_4;
      goto joined_r0x08ad5068;
    }
    uVar4 = 8;
  }
LAB_08ad56a8:
  FUN_08966324(param_2,uVar4,0);
  return;
}


