/*
FUNCTION_NAME: FUN_05d7f8b8
ENTRY_POINT: 05d7f8b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8
FUN_05d7f8b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
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
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
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
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
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
        FUN_05d7e82c(local_d0,param_4);
        puVar4 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__;
        uStack_78 = local_d0._8_8_;
        local_80 = local_d0._0_8_;
        uVar11 = local_80;
        uStack_68 = uStack_b8;
        uStack_70 = local_c0;
        local_80._0_1_ = (char)local_d0._0_8_;
        bVar1 = (char)local_80 != '\0';
        local_80 = uVar11;
        if (bVar1) {
          FUN_0463feb8(local_d0,&local_80,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
          uVar6 = FUN_04e8c024(local_d0._8_8_,uVar8,0);
          puVar2 = PTR_DAT_067693b8;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_067693b8;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar7 = *(long *)puVar2;
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
            uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            local_90._0_8_ = uVar11;
            local_90._8_8_ = uVar12;
            FUN_0463feb8(&local_e8,&local_80,*(undefined8 *)puVar4);
            local_d0._8_8_ = uStack_e0;
            local_d0._0_8_ = local_e8;
            local_c0 = local_d8;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uStack_f8 = local_d0._8_8_;
            local_100 = local_d0._0_8_;
            local_f0 = local_c0;
            auVar13 = FUN_05d7fdd4(uVar8,&local_100,&local_98);
            local_90 = FUN_05d68034(uVar11,uVar12,auVar13._0_8_,auVar13._8_8_,0);
            uVar6 = FUN_05d67b1c(local_90,0);
            puVar3 = 
            Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
            ;
            uVar11 = local_90._8_8_;
            uVar8 = local_90._0_8_;
            if ((uVar6 & 1) != 0) {
LAB_05d7fcfc:
              uVar8 = FUN_05d7cd00(param_1,param_4);
              *param_6 = uVar8;
              thunk_FUN_02dd37b4(param_6,uVar8);
              return local_90._0_8_;
            }
            if (local_98 != 0) {
              FUN_03b58eb0(local_d0,local_98,0,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                          );
              auVar13 = FUN_05d800f0(param_1,param_2,param_3,local_c0,param_5,param_6);
              if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              auVar13 = FUN_05d68034(uVar8,uVar11,auVar13._0_8_,auVar13._8_8_,0);
              local_90 = auVar13;
              uVar6 = FUN_05d67b1c(local_90,0);
              if ((uVar6 & 1) != 0) {
                return local_90._0_8_;
              }
              if (local_98 != 0) {
                iVar10 = 1;
                do {
                  puVar4 = 
                  Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                  ;
                  if (*(int *)(local_98 + 0x18) <= iVar10) {
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
                    local_d0 = local_90;
                    uVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,local_d0);
                    param_4 = thunk_FUN_02d709fc(uVar8,0);
                    goto LAB_05d7fcfc;
                  }
                  FUN_03b58eb0(local_d0,local_98,iVar10,*(undefined8 *)puVar3);
                  uStack_a8 = local_d0._8_8_;
                  local_b0 = local_d0._0_8_;
                  local_a0 = local_c0;
                  uVar8 = FUN_05d80484(&local_b0,*param_5);
                  *param_5 = uVar8;
                  thunk_FUN_02dd37b4(param_5,uVar8);
                  iVar10 = iVar10 + 1;
                } while (local_98 != 0);
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


