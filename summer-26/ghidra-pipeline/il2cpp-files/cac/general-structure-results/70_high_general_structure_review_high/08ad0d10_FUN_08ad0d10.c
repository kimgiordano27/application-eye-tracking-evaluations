/*
FUNCTION_NAME: FUN_08ad0d10
ENTRY_POINT: 08ad0d10
PROGRAM: cac-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_21
*/


void FUN_08ad0d10(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((DAT_096a5200 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910b5c0);
    FUN_03f13384(System_Threading_Volatile_VolatileObject_var);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var);
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                );
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                );
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var);
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                );
    FUN_03f13384(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                );
    FUN_03f13384(System_Buffers_IBufferWriter<byte>_TypeInfo);
    DAT_096a5200 = 1;
  }
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(long *)(param_6 + 0x48) != 0) {
    uVar1 = *(uint *)(param_6 + 0x50);
    do {
      uVar3 = FUN_08acbb7c(param_5,param_6,param_7);
      if ((uVar3 & 1) != 0) goto LAB_08ad0e1c;
      if ((int)uVar1 < 0x20021) {
        if ((int)uVar1 < 1) {
          if (uVar1 == 0xffffffff) {
            FUN_08acde40(param_5,param_6);
          }
          else if (uVar1 != 0) goto switchD_08ad1060_default;
          goto LAB_08ad0e1c;
        }
        switch(uVar1) {
        case 0x20000:
          puVar4 = (undefined4 *)
                   FUN_060fe7e4(param_5 + 8,
                                *(undefined8 *)
                                 Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                               );
          uVar2 = FUN_08a12838(param_6,0,0,0);
          *puVar4 = uVar2;
          break;
        case 0x20001:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a12838(param_6,0,0,0);
          *(undefined4 *)(lVar5 + 4) = uVar2;
          break;
        case 0x20002:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a12838(param_6,0,0,0);
          *(undefined4 *)(lVar5 + 8) = uVar2;
          break;
        case 0x20003:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a126e4(param_6,0,0);
          *(undefined4 *)(lVar5 + 0xc) = uVar2;
          break;
        case 0x20004:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a126e4(param_6,0,0);
          *(undefined4 *)(lVar5 + 0x10) = uVar2;
          break;
        case 0x20005:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a126e4(param_6,0,0);
          *(undefined4 *)(lVar5 + 0x14) = uVar2;
          break;
        case 0x20006:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a126e4(param_6,0,0);
          *(undefined4 *)(lVar5 + 0x18) = uVar2;
          break;
        case 0x20007:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x1c) = uVar8;
          break;
        case 0x20008:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a12838(param_6,4,0,0);
          *(undefined4 *)(lVar5 + 0x24) = uVar2;
          break;
        case 0x20009:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x28) = uVar8;
          break;
        case 0x2000a:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a12838(param_6,7,0,0);
LAB_08ad2098:
          *(undefined4 *)(lVar5 + 0x30) = uVar2;
          break;
        case 0x2000b:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a126e4(param_6,0,0);
          *(undefined4 *)(lVar5 + 0x34) = uVar2;
          break;
        case 0x2000c:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a126e4(param_6,0,0);
          *(undefined4 *)(lVar5 + 0x38) = uVar2;
          break;
        case 0x2000d:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = 0x1a;
LAB_08ad2010:
          uVar2 = FUN_08a12838(param_6,uVar8,0,0);
          *(undefined4 *)(lVar5 + 0x3c) = uVar2;
          break;
        case 0x2000e:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x40) = uVar8;
          break;
        case 0x2000f:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a12838(param_6,9,0,0);
          *(undefined4 *)(lVar5 + 0x48) = uVar2;
          break;
        case 0x20010:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x4c) = uVar8;
          break;
        case 0x20011:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x54) = uVar8;
          break;
        case 0x20012:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
LAB_08ad2224:
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x5c) = uVar8;
          break;
        case 0x20013:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 100) = uVar8;
          break;
        case 0x20014:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x6c) = uVar8;
          break;
        case 0x20015:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
LAB_08ad1fa4:
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x74) = uVar8;
          break;
        case 0x20016:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
LAB_08ad2254:
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x7c) = uVar8;
          break;
        case 0x20017:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x84) = uVar8;
          break;
        case 0x20018:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x8c) = uVar8;
          break;
        case 0x20019:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x94) = uVar8;
          break;
        case 0x2001a:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0x9c) = uVar8;
          break;
        case 0x2001b:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0xa4) = uVar8;
          break;
        case 0x2001c:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0xac) = uVar8;
          break;
        case 0x2001d:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar2 = FUN_08a12838(param_6,0xd,0,0);
          *(undefined4 *)(lVar5 + 0xb4) = uVar2;
          break;
        case 0x2001e:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0xb8) = uVar8;
          break;
        case 0x2001f:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 0xc0) = uVar8;
          break;
        case 0x20020:
          lVar5 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          uVar8 = FUN_08a11880(param_6,0,0);
          *(undefined8 *)(lVar5 + 200) = uVar8;
          break;
        default:
          switch(uVar1) {
          case 0x10000:
            puVar4 = (undefined4 *)
                     FUN_060fe2e8(param_5,*(undefined8 *)
                                           Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                 );
            goto LAB_08ad1078;
          case 0x10001:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar8 = FUN_08a11880(param_6,0,0);
            *(undefined8 *)(lVar5 + 0x10) = uVar8;
            break;
          case 0x10002:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar8 = FUN_08a11880(param_6,0,0);
            *(undefined8 *)(lVar5 + 0x18) = uVar8;
            break;
          case 0x10003:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            FUN_08a13f24(&local_80,param_6,0,0);
            param_2 = CONCAT44(local_70,uStack_74);
            *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_74,uStack_78);
            *(ulong *)(lVar5 + 0x20) = CONCAT44(uStack_7c,local_80);
            *(ulong *)(lVar5 + 0x34) = CONCAT44(uStack_68,uStack_6c);
            *(undefined8 *)(lVar5 + 0x2c) = param_2;
            break;
          case 0x10004:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar8 = 6;
            goto LAB_08ad2010;
          case 0x10005:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar8 = FUN_08a12e94(param_6,0,0);
            pauVar7 = (undefined1 (*) [16])(lVar5 + 0x40);
            *(undefined8 *)*pauVar7 = uVar8;
            goto LAB_08ad21d4;
          case 0x10006:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            auVar9 = FUN_08a12944(param_6,0,0);
            pauVar7 = (undefined1 (*) [16])(lVar5 + 0x48);
            *pauVar7 = auVar9;
            goto LAB_08ad21d0;
          case 0x10007:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar2 = FUN_08a12838(param_6,8,0,0);
            *(undefined4 *)(lVar5 + 0x58) = uVar2;
            break;
          case 0x10008:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            goto LAB_08ad2224;
          case 0x10009:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar2 = FUN_08a12838(param_6,0x12,0,0);
            *(undefined4 *)(lVar5 + 100) = uVar2;
            break;
          case 0x1000a:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar2 = FUN_08a12838(param_6,0x14,0,0);
            *(undefined4 *)(lVar5 + 0x68) = uVar2;
            break;
          case 0x1000b:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar2 = FUN_08a127d0(param_6,0,0);
            *(undefined4 *)(lVar5 + 0x6c) = uVar2;
            *(int *)(lVar5 + 0x70) = (int)param_2;
            *(undefined4 *)(lVar5 + 0x74) = param_3;
            *(undefined4 *)(lVar5 + 0x78) = param_4;
            break;
          case 0x1000c:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar2 = FUN_08a126e4(param_6,0,0);
            *(undefined4 *)(lVar5 + 0x7c) = uVar2;
            break;
          case 0x1000d:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar2 = FUN_08a12838(param_6,0x18,0,0);
            *(undefined4 *)(lVar5 + 0x80) = uVar2;
            break;
          case 0x1000e:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar2 = FUN_08a12838(param_6,0x19,0,0);
            *(undefined4 *)(lVar5 + 0x84) = uVar2;
            break;
          case 0x1000f:
            lVar5 = FUN_060fe2e8(param_5,*(undefined8 *)
                                          Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                                );
            uVar8 = FUN_08a11880(param_6,0,0);
            *(undefined8 *)(lVar5 + 0x88) = uVar8;
            break;
          default:
switchD_08ad1060_default:
            local_80 = uVar1;
            uVar8 = thunk_FUN_03f4e2c4(*(undefined8 *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                                       ,&local_80);
            uVar8 = FUN_0731d5f8(*(undefined8 *)System_Buffers_IBufferWriter<byte>_TypeInfo,uVar8,0)
            ;
            if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
              thunk_FUN_03f6fea8(*(long *)PTR_DAT_0910b5c0);
            }
            FUN_087929a4(uVar8,0);
          }
        }
        goto LAB_08ad0e1c;
      }
      if (uVar1 < 0x4000b) {
        if ((int)uVar1 < 0x3000b) {
          if ((int)uVar1 < 0x30005) {
            if ((int)uVar1 < 0x30002) {
              if (uVar1 == 0x30000) {
                pauVar7 = (undefined1 (*) [16])
                          FUN_060fece0(param_5 + 0x10,
                                       *(undefined8 *)
                                        Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                      );
                FUN_08a13c2c(&local_80,param_6,0,0);
                *(ulong *)pauVar7[1] = CONCAT44(uStack_6c,local_70);
                *(ulong *)(*pauVar7 + 8) = CONCAT44(uStack_74,uStack_78);
                *(ulong *)*pauVar7 = CONCAT44(uStack_7c,local_80);
                goto LAB_08ad21d0;
              }
              if (uVar1 != 0x30001) goto switchD_08ad1060_default;
              lVar5 = FUN_060fece0(param_5 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              uVar2 = FUN_08a12838(param_6,0x15,0,0);
              *(undefined4 *)(lVar5 + 0x18) = uVar2;
            }
            else if (uVar1 == 0x30002) {
              lVar5 = FUN_060fece0(param_5 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              uVar2 = FUN_08a127d0(param_6,0,0);
              *(undefined4 *)(lVar5 + 0x1c) = uVar2;
              *(int *)(lVar5 + 0x20) = (int)param_2;
              *(undefined4 *)(lVar5 + 0x24) = param_3;
              *(undefined4 *)(lVar5 + 0x28) = param_4;
            }
            else {
              if (uVar1 != 0x30003) {
                if (uVar1 == 0x30004) {
                  lVar5 = FUN_060fece0(param_5 + 0x10,
                                       *(undefined8 *)
                                        Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                      );
                  uVar2 = FUN_08a1274c(param_6,0,0);
                  goto LAB_08ad2098;
                }
                goto switchD_08ad1060_default;
              }
              lVar5 = FUN_060fece0(param_5 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              uVar2 = FUN_08a12838(param_6,0xb,0,0);
              *(undefined4 *)(lVar5 + 0x2c) = uVar2;
            }
          }
          else if ((int)uVar1 < 0x30008) {
            if (uVar1 == 0x30005) {
              lVar5 = FUN_060fece0(param_5 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              uVar2 = FUN_08a1274c(param_6,0,0);
              *(undefined4 *)(lVar5 + 0x34) = uVar2;
            }
            else if (uVar1 == 0x30006) {
              lVar5 = FUN_060fece0(param_5 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              uVar2 = FUN_08a1274c(param_6,0,0);
              *(undefined4 *)(lVar5 + 0x38) = uVar2;
            }
            else {
              if (uVar1 != 0x30007) goto switchD_08ad1060_default;
              lVar5 = FUN_060fece0(param_5 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              uVar2 = FUN_08a126e4(param_6,0,0);
              *(undefined4 *)(lVar5 + 0x3c) = uVar2;
            }
          }
          else if (uVar1 == 0x30008) {
            lVar5 = FUN_060fece0(param_5 + 0x10,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                );
            uVar2 = FUN_08a1274c(param_6,0,0);
            *(undefined4 *)(lVar5 + 0x40) = uVar2;
          }
          else if (uVar1 == 0x30009) {
            lVar5 = FUN_060fece0(param_5 + 0x10,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                );
            uVar2 = FUN_08a12838(param_6,0x11,0,0);
            *(undefined4 *)(lVar5 + 0x44) = uVar2;
          }
          else {
            if (uVar1 != 0x3000a) goto switchD_08ad1060_default;
            lVar5 = FUN_060fece0(param_5 + 0x10,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                );
            FUN_08a1438c(&local_80,param_6,0,0);
            *(ulong *)(lVar5 + 0x50) = CONCAT44(uStack_74,uStack_78);
            *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_7c,local_80);
            *(undefined4 *)(lVar5 + 0x58) = local_70;
          }
        }
        else if ((int)uVar1 < 0x40005) {
          if ((int)uVar1 < 0x40002) {
            if (uVar1 == 0x3000b) {
              lVar5 = FUN_060fece0(param_5 + 0x10,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                                  );
              uVar2 = FUN_08a12838(param_6,0x16,0,0);
              *(undefined4 *)(lVar5 + 0x5c) = uVar2;
            }
            else if (uVar1 != 0x40000) {
              if (uVar1 != 0x40001) goto switchD_08ad1060_default;
              if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              FUN_08a07890(param_6,param_5,0);
            }
          }
          else if (uVar1 == 0x40002) {
            if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_08a0802c(param_6,param_5,0);
          }
          else if (uVar1 == 0x40003) {
            if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_08a082b0(param_6,param_5,0);
          }
          else {
            if (uVar1 != 0x40004) goto switchD_08ad1060_default;
            if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_08a084e4(param_6,param_5,0);
          }
        }
        else if ((int)uVar1 < 0x40008) {
          if (uVar1 == 0x40005) {
            if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_08a08684(param_6,param_5,0);
          }
          else if (uVar1 == 0x40006) {
            if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_08a08940(param_6,param_5,0);
          }
          else {
            if (uVar1 != 0x40007) goto switchD_08ad1060_default;
            if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_08a08bb4(param_6,param_5,0);
          }
        }
        else if (uVar1 == 0x40008) {
          if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          FUN_08a08ca0(param_6,param_5,0);
        }
        else if (uVar1 == 0x40009) {
          if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          FUN_08a094a8(param_6,param_5,0);
        }
        else {
          if (uVar1 != 0x4000a) goto switchD_08ad1060_default;
          if (*(int *)(*(long *)System_Threading_Volatile_VolatileObject_var + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          FUN_08a09664(param_6,param_5,0);
        }
        goto LAB_08ad0e1c;
      }
      if ((int)uVar1 < 0x60002) {
        if ((int)uVar1 < 0x50003) {
          if (uVar1 == 0x50000) {
            puVar6 = (undefined8 *)
                     FUN_060ff1dc(param_5 + 0x18,
                                  *(undefined8 *)
                                   Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                                 );
            FUN_08a120a8(&local_80,param_6,0,0);
            puVar6[2] = CONCAT44(uStack_6c,local_70);
            puVar6[1] = CONCAT44(uStack_74,uStack_78);
            *puVar6 = CONCAT44(uStack_7c,local_80);
          }
          else if (uVar1 == 0x50001) {
            lVar5 = FUN_060ff1dc(param_5 + 0x18,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                                );
            auVar9 = FUN_08a123f4(param_6,0,0);
            *(undefined1 (*) [16])(lVar5 + 0x18) = auVar9;
          }
          else {
            if (uVar1 != 0x50002) goto switchD_08ad1060_default;
            lVar5 = FUN_060ff1dc(param_5 + 0x18,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                                );
            FUN_08a11db4(&local_80,param_6,0,0);
            *(ulong *)(lVar5 + 0x30) = CONCAT44(uStack_74,uStack_78);
            *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_7c,local_80);
            *(undefined4 *)(lVar5 + 0x38) = local_70;
          }
        }
        else {
          if (uVar1 != 0x50003) {
            if (uVar1 == 0x60000) {
              puVar6 = (undefined8 *)
                       FUN_060ff6d8(param_5 + 0x20,
                                    *(undefined8 *)
                                     Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                                   );
              uVar8 = *puVar6;
            }
            else {
              if (uVar1 != 0x60001) goto switchD_08ad1060_default;
              lVar5 = FUN_060ff6d8(param_5 + 0x20,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                                  );
              uVar8 = *(undefined8 *)(lVar5 + 8);
            }
            FUN_08a14f28(param_6,uVar8,0,0);
            goto LAB_08ad18dc;
          }
          lVar5 = FUN_060ff1dc(param_5 + 0x18,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                              );
          FUN_08a11a0c(&local_80,param_6,0,0);
          *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_74,uStack_78);
          *(ulong *)(lVar5 + 0x3c) = CONCAT44(uStack_7c,local_80);
          *(ulong *)(lVar5 + 0x4c) = CONCAT44(uStack_6c,local_70);
        }
        goto LAB_08ad0e1c;
      }
      switch(uVar1) {
      case 0x70000:
        puVar4 = (undefined4 *)
                 FUN_060ffbc0(param_5 + 0x28,
                              *(undefined8 *)
                               Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                             );
LAB_08ad1078:
        uVar2 = FUN_08a127d0(param_6,0,0);
        *puVar4 = uVar2;
        puVar4[1] = (int)param_2;
        puVar4[2] = param_3;
        puVar4[3] = param_4;
        break;
      case 0x70001:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        UnityEngine_UIElements_PanelRaycaster__get_sortOrderPriority(&local_80,param_6,0,0);
        param_2 = CONCAT44(uStack_6c,local_70);
        pauVar7 = (undefined1 (*) [16])(lVar5 + 0x10);
        *(ulong *)(lVar5 + 0x18) = CONCAT44(uStack_74,uStack_78);
        *(ulong *)(lVar5 + 0x10) = CONCAT44(uStack_7c,local_80);
        *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_64,uStack_68);
        *(undefined8 *)(lVar5 + 0x20) = param_2;
        goto LAB_08ad21d0;
      case 0x70002:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        auVar10 = FUN_08a14614(param_6,0,0);
        *(undefined1 (*) [12])(lVar5 + 0x30) = auVar10;
        break;
      case 0x70003:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        auVar10 = FUN_08a146fc(param_6,0,0);
        *(undefined1 (*) [12])(lVar5 + 0x3c) = auVar10;
        break;
      case 0x70004:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar8 = FUN_08a14884(param_6,0,0);
        *(undefined8 *)(lVar5 + 0x48) = uVar8;
        break;
      case 0x70005:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        FUN_08a14a00(&local_80,param_6,0,0);
        *(ulong *)(lVar5 + 0x58) = CONCAT44(uStack_74,uStack_78);
        *(ulong *)(lVar5 + 0x50) = CONCAT44(uStack_7c,local_80);
        *(undefined4 *)(lVar5 + 0x60) = local_70;
        break;
      case 0x70006:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar2 = FUN_08a127d0(param_6,0,0);
        *(undefined4 *)(lVar5 + 100) = uVar2;
        *(int *)(lVar5 + 0x68) = (int)param_2;
        *(undefined4 *)(lVar5 + 0x6c) = param_3;
        *(undefined4 *)(lVar5 + 0x70) = param_4;
        break;
      case 0x70007:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        goto LAB_08ad1fa4;
      case 0x70008:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        goto LAB_08ad2254;
      case 0x70009:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar2 = FUN_08a127d0(param_6,0,0);
        *(undefined4 *)(lVar5 + 0x84) = uVar2;
        *(int *)(lVar5 + 0x88) = (int)param_2;
        *(undefined4 *)(lVar5 + 0x8c) = param_3;
        *(undefined4 *)(lVar5 + 0x90) = param_4;
        break;
      case 0x7000a:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar2 = FUN_08a127d0(param_6,0,0);
        *(undefined4 *)(lVar5 + 0x94) = uVar2;
        *(int *)(lVar5 + 0x98) = (int)param_2;
        *(undefined4 *)(lVar5 + 0x9c) = param_3;
        *(undefined4 *)(lVar5 + 0xa0) = param_4;
        break;
      case 0x7000b:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar2 = FUN_08a127d0(param_6,0,0);
        *(undefined4 *)(lVar5 + 0xa4) = uVar2;
        *(int *)(lVar5 + 0xa8) = (int)param_2;
        *(undefined4 *)(lVar5 + 0xac) = param_3;
        *(undefined4 *)(lVar5 + 0xb0) = param_4;
        break;
      case 0x7000c:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar8 = FUN_08a11880(param_6,0,0);
        *(undefined8 *)(lVar5 + 0xb4) = uVar8;
        break;
      case 0x7000d:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar8 = FUN_08a11880(param_6,0,0);
        *(undefined8 *)(lVar5 + 0xbc) = uVar8;
        break;
      case 0x7000e:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar2 = FUN_08a126e4(param_6,0,0);
        *(undefined4 *)(lVar5 + 0xc4) = uVar2;
        break;
      case 0x7000f:
        lVar5 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        uVar2 = FUN_08a12838(param_6,0xc,0,0);
        *(undefined4 *)(lVar5 + 200) = uVar2;
        break;
      default:
        if (uVar1 == 0x60002) {
          lVar5 = FUN_060ff6d8(param_5 + 0x20,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                              );
          FUN_08a150b4(param_6,*(undefined8 *)(lVar5 + 0x10),0,0);
        }
        else {
          if (uVar1 != 0x60003) goto switchD_08ad1060_default;
          lVar5 = FUN_060ff6d8(param_5 + 0x20,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                              );
          FUN_08a14d40(param_6,*(undefined8 *)(lVar5 + 0x18),0,0);
        }
LAB_08ad18dc:
        *(undefined8 *)(param_5 + 0x48) = 0;
        pauVar7 = (undefined1 (*) [16])(param_5 + 0x48);
LAB_08ad21d0:
        uVar8 = 0;
LAB_08ad21d4:
        thunk_FUN_03f86000(pauVar7,uVar8);
      }
LAB_08ad0e1c:
      uVar1 = FUN_08a111dc(param_6,0);
    } while (*(long *)(param_6 + 0x48) != 0);
  }
  return;
}


