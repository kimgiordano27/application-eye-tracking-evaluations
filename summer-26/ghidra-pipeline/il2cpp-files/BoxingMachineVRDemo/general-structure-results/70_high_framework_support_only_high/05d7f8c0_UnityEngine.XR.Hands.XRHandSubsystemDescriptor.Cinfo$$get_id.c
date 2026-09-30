/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSubsystemDescriptor.Cinfo$$get_id
ENTRY_POINT: 05d7f8c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8
UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo__get_id
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  char cStack0000000000000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  puVar3 = Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__;
  if ((DAT_06b82ce0 & 1) == 0) {
    FUN_02d6084c(Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
    FUN_02d6084c(
                Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
    FUN_02d6084c(PTR_DAT_067693b8);
    FUN_02d6084c(
                Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                );
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    DAT_06b82ce0 = 1;
  }
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000098 = 0;
  _cStack0000000000000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_05d7fd1c(param_3);
  if ((uVar6 & 1) == 0) goto LAB_05d7fb0c;
  if (param_3 != 0) {
    lVar7 = FUN_05d69ae4(param_3,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar3);
    }
    if (lVar7 != 0) {
      lVar7 = FUN_04895670(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),
                           *(undefined8 *)
                            Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
      if (lVar7 != 0) {
        uVar8 = FUN_05d68d60(lVar7,0);
        puVar3 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__ +
                    0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)
                              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__
                            );
        }
        FUN_05d7e82c(&stack0x00000040,param_4);
        puVar4 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__;
        in_stack_00000098 = in_stack_00000048;
        _cStack0000000000000090 = in_stack_00000040;
        uVar11 = _cStack0000000000000090;
        in_stack_000000a8 = in_stack_00000058;
        in_stack_000000a0 = in_stack_00000050;
        cStack0000000000000090 = (char)in_stack_00000040;
        bVar1 = cStack0000000000000090 != '\0';
        _cStack0000000000000090 = uVar11;
        if (bVar1) {
          FUN_0463feb8(&stack0x00000040,&stack0x00000090,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
          uVar6 = FUN_04e8c024(in_stack_00000048,uVar8,0);
          puVar2 = PTR_DAT_067693b8;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_067693b8;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar7 = *(long *)puVar2;
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
            uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            in_stack_00000080 = uVar11;
            in_stack_00000088 = uVar12;
            FUN_0463feb8(&stack0x00000028,&stack0x00000090,*(undefined8 *)puVar4);
            in_stack_00000048 = in_stack_00000030;
            in_stack_00000040 = in_stack_00000028;
            in_stack_00000050 = in_stack_00000038;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            in_stack_00000018 = in_stack_00000048;
            in_stack_00000010 = in_stack_00000040;
            in_stack_00000020 = in_stack_00000050;
            auVar13 = FUN_05d7fdd4(uVar8,&stack0x00000010,&stack0x00000078);
            _in_stack_00000080 = FUN_05d68034(uVar11,uVar12,auVar13._0_8_,auVar13._8_8_,0);
            uVar6 = FUN_05d67b1c(&stack0x00000080,0);
            puVar3 = 
            Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
            ;
            uVar11 = in_stack_00000088;
            uVar8 = in_stack_00000080;
            if ((uVar6 & 1) != 0) {
LAB_05d7fcfc:
              uVar8 = FUN_05d7cd00(param_1,param_4);
              *param_6 = uVar8;
              thunk_FUN_02dd37b4(param_6,uVar8);
              return in_stack_00000080;
            }
            if (in_stack_00000078 != 0) {
              FUN_03b58eb0(&stack0x00000040,in_stack_00000078,0,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                          );
              auVar13 = FUN_05d800f0(param_1,param_2,param_3,in_stack_00000050,param_5,param_6);
              if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              auVar13 = FUN_05d68034(uVar8,uVar11,auVar13._0_8_,auVar13._8_8_,0);
              _in_stack_00000080 = auVar13;
              uVar6 = FUN_05d67b1c(&stack0x00000080,0);
              if ((uVar6 & 1) != 0) {
                return in_stack_00000080;
              }
              if (in_stack_00000078 != 0) {
                iVar10 = 1;
                do {
                  puVar4 = 
                  Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                  ;
                  if (*(int *)(in_stack_00000078 + 0x18) <= iVar10) {
                    if (*(int *)(*(long *)
                                  Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                                + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar6 = FUN_05d80538(param_3);
                    puVar2 = Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__;
                    puVar3 = PTR_DAT_067693b8;
                    if ((uVar6 & 1) != 0) {
                      lVar7 = FUN_05d69ae4(param_3,0);
                      lVar9 = *(long *)puVar4;
                      if (*(int *)(lVar9 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar9);
                      }
                      if (lVar7 == 0) break;
                      lVar7 = FUN_04895670(lVar7,*(undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                                           *(undefined8 *)puVar2);
                      if (lVar7 == 0) break;
                      uVar8 = FUN_05d68d60(lVar7,0);
                      uVar5 = FUN_05004bec(uVar8,0);
                      if (*(long *)(param_1 + 0x28) == 0) break;
                      FUN_05d805f0(*(long *)(param_1 + 0x28),uVar5,*param_5);
                    }
                    _in_stack_00000040 = _in_stack_00000080;
                    uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000040);
                    param_4 = thunk_FUN_02d709fc(uVar8,0);
                    goto LAB_05d7fcfc;
                  }
                  FUN_03b58eb0(&stack0x00000040,in_stack_00000078,iVar10,*(undefined8 *)puVar3);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  uVar8 = FUN_05d80484(&stack0x00000060,*param_5);
                  *param_5 = uVar8;
                  thunk_FUN_02dd37b4(param_5,uVar8);
                  iVar10 = iVar10 + 1;
                } while (in_stack_00000078 != 0);
              }
            }
            goto LAB_05d7fd18;
          }
        }
LAB_05d7fb0c:
        uVar8 = FUN_05d800f0(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar8;
      }
    }
  }
LAB_05d7fd18:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


