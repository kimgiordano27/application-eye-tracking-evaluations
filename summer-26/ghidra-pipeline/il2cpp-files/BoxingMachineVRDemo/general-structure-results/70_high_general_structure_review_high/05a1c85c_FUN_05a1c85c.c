/*
FUNCTION_NAME: FUN_05a1c85c
ENTRY_POINT: 05a1c85c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05a1c85c(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  float local_6c;
  long local_68;
  long local_58;
  
  puVar2 = PTR_DAT_06761808;
  if ((DAT_06b8112c & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(Method_Unity_VisualScripting_Add<Vector2>__ctor__);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsStringAsync>d__55>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__
                );
    FUN_02d6084c(PTR_DAT_06761808);
    FUN_02d6084c(PTR_DAT_06763f68);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<TaskAwaiter,_CorePackageInitializer_<GetSerializedProjectConfigurationAsync>d__63>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<CorePackageInitializer_<GetSerializedProjectConfigurationAsync>d__63>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<JsonTextReader_<DoReadAsStringAsync>d__55>__
                );
    FUN_02d6084c(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__);
    DAT_06b8112c = 1;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsStringAsync>d__55>__
  ;
  local_58 = 0;
  local_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_033f7d70(&local_58,*(undefined8 *)puVar3);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_033f7d70(&local_68,
                       *(undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__
                      );
  if ((uVar4 & 1) != 0) {
    if (local_68 == 0) goto LAB_05a1ce44;
    if (*(char *)(local_68 + 0x1c) != '\0') {
      return 0;
    }
  }
  if (local_58 != 0) {
    uVar6 = *(undefined8 *)(local_58 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05a55cc4(uVar6,0);
    *(undefined8 *)(param_1 + 0x198) = uVar6;
    thunk_FUN_02dd37b4(param_1 + 0x198);
    if ((*(long *)(param_1 + 0x198) != 0) &&
       (FUN_06037f48(*(long *)(param_1 + 0x198),1,0), local_58 != 0)) {
      *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(local_58 + 0x38);
      thunk_FUN_02dd37b4(param_1 + 0x1a0);
      lVar7 = *(long *)(param_1 + 0x1a0);
      if (DAT_06b7224b == '\0') {
        FUN_02d6084c(PTR_DAT_0675e318);
        DAT_06b7224b = '\x01';
      }
      puVar2 = PTR_DAT_0675e318;
      puVar5 = *(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8);
      uVar6 = *puVar5;
      uVar9 = *(undefined4 *)(puVar5 + 1);
      if (DAT_06b722a7 == '\0') {
        FUN_02d6084c(PTR_DAT_0675e318);
        DAT_06b722a7 = '\x01';
        puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      fVar1 = DAT_01208358;
      if (lVar7 != 0) {
        local_74 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20) * 1e+07 *
                            0.5,(float)*(undefined8 *)((long)puVar5 + 0xc) * 1e+07 * 0.5);
        local_6c = *(float *)((long)puVar5 + 0x14) * DAT_01208358 * 0.5;
        local_80 = uVar6;
        local_78 = uVar9;
        FUN_0603fcb4(lVar7,&local_80,0);
        if (local_58 != 0) {
          uVar6 = FUN_05a55cc4(*(undefined8 *)(local_58 + 0x28),0);
          *(undefined8 *)(param_1 + 0x1a8) = uVar6;
          thunk_FUN_02dd37b4(param_1 + 0x1a8);
          if (local_58 != 0) {
            uVar6 = FUN_05a55cc4(*(undefined8 *)(local_58 + 0x18),0);
            *(undefined8 *)(param_1 + 0x1b0) = uVar6;
            thunk_FUN_02dd37b4(param_1 + 0x1b0);
            if (*(long *)(param_1 + 0x1b0) != 0) {
              FUN_06037f48(*(long *)(param_1 + 0x1b0),1,0);
              puVar3 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
              ;
              lVar7 = *(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
              ;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar7 = *(long *)puVar3;
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
              uVar6 = *(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<JsonTextReader_<DoReadAsStringAsync>d__55>__
              ;
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_05015c2c(uVar6,0);
              if (*(int *)(*(long *)PTR_DAT_06763f68 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06763f68);
              }
              uVar9 = thunk_FUN_02d6d330(uVar6,0);
              uVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                          Method_Unity_VisualScripting_Add<Vector2>__ctor__);
              FUN_0603a658(uVar6,0x10,2,uVar9,0);
              if (lVar7 != 0) {
                puVar5 = (undefined8 *)(lVar7 + 0x30);
                *puVar5 = uVar6;
                thunk_FUN_02dd37b4(puVar5,uVar6);
                if (local_58 != 0) {
                  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(local_58 + 0x40);
                  thunk_FUN_02dd37b4(param_1 + 0x1b8);
                  uVar6 = FUN_0352a3b8(*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
                                       ,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<CorePackageInitializer_<GetSerializedProjectConfigurationAsync>d__63>__
                                      );
                  *(undefined8 *)(param_1 + 0x1c0) = uVar6;
                  thunk_FUN_02dd37b4(param_1 + 0x1c0);
                  lVar7 = *(long *)(param_1 + 0x1c0);
                  if (DAT_06b7224b == '\0') {
                    FUN_02d6084c(PTR_DAT_0675e318);
                    DAT_06b7224b = '\x01';
                  }
                  puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                  uVar6 = *puVar5;
                  uVar9 = *(undefined4 *)(puVar5 + 1);
                  if (DAT_06b722a7 == '\0') {
                    FUN_02d6084c(puVar2);
                    DAT_06b722a7 = '\x01';
                    puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                  }
                  if (lVar7 != 0) {
                    local_84 = *(float *)((long)puVar5 + 0x14) * fVar1 * 0.5;
                    local_8c = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20)
                                        * 1e+07 * 0.5,
                                        (float)*(undefined8 *)((long)puVar5 + 0xc) * 1e+07 * 0.5);
                    local_98 = uVar6;
                    local_90 = uVar9;
                    FUN_0603fcb4(lVar7,&local_98,0);
                    if (local_58 != 0) {
                      uVar6 = FUN_05a55cc4(*(undefined8 *)(local_58 + 0x30),0);
                      *(undefined8 *)(param_1 + 0x1c8) = uVar6;
                      thunk_FUN_02dd37b4(param_1 + 0x1c8);
                      if ((*(long *)(param_1 + 0x1c8) != 0) &&
                         (FUN_06037f48(*(long *)(param_1 + 0x1c8),1,0), local_58 != 0)) {
                        uVar6 = FUN_05a55cc4(*(undefined8 *)(local_58 + 0x20),0);
                        *(undefined8 *)(param_1 + 0x1d0) = uVar6;
                        thunk_FUN_02dd37b4(param_1 + 0x1d0);
                        puVar2 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<TaskAwaiter,_CorePackageInitializer_<GetSerializedProjectConfigurationAsync>d__63>__
                        ;
                        lVar8 = *(long *)(param_1 + 0x180);
                        lVar7 = *(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<TaskAwaiter,_CorePackageInitializer_<GetSerializedProjectConfigurationAsync>d__63>__
                        ;
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar7 = *(long *)puVar2;
                        }
                        if (lVar8 != 0) {
                          if (*(int *)(lVar8 + 0x18) != 0) {
                            uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
                            *(undefined8 *)(lVar8 + 0x28) =
                                 *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38);
                            *(undefined8 *)(lVar8 + 0x20) = uVar6;
                            lVar7 = *(long *)(param_1 + 0x180);
                            if (lVar7 == 0) goto LAB_05a1ce44;
                            if (1 < *(uint *)(lVar7 + 0x18)) {
                              uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
                              *(undefined8 *)(lVar7 + 0x38) =
                                   *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                              *(undefined8 *)(lVar7 + 0x30) = uVar6;
                              lVar7 = *(long *)(param_1 + 0x180);
                              if (lVar7 == 0) goto LAB_05a1ce44;
                              if (2 < *(uint *)(lVar7 + 0x18)) {
                                uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                                *(undefined8 *)(lVar7 + 0x48) =
                                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
                                *(undefined8 *)(lVar7 + 0x40) = uVar6;
                                lVar7 = *(long *)(param_1 + 0x180);
                                if (lVar7 == 0) goto LAB_05a1ce44;
                                if (3 < *(uint *)(lVar7 + 0x18)) {
                                  uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
                                  *(undefined8 *)(lVar7 + 0x58) =
                                       *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
                                  *(undefined8 *)(lVar7 + 0x50) = uVar6;
                                  lVar7 = *(long *)(param_1 + 0x180);
                                  if (lVar7 == 0) goto LAB_05a1ce44;
                                  if (4 < *(uint *)(lVar7 + 0x18)) {
                                    uVar6 = *(undefined8 *)
                                             (*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
                                    *(undefined8 *)(lVar7 + 0x68) =
                                         *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
                                    *(undefined8 *)(lVar7 + 0x60) = uVar6;
                                    lVar7 = *(long *)(param_1 + 0x180);
                                    if (lVar7 == 0) goto LAB_05a1ce44;
                                    if (5 < *(uint *)(lVar7 + 0x18)) {
                                      uVar6 = *(undefined8 *)
                                               (*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
                                      *(undefined8 *)(lVar7 + 0x78) =
                                           *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88)
                                      ;
                                      *(undefined8 *)(lVar7 + 0x70) = uVar6;
                                      lVar7 = *(long *)(param_1 + 0x180);
                                      if (lVar7 == 0) goto LAB_05a1ce44;
                                      if (6 < *(uint *)(lVar7 + 0x18)) {
                                        uVar6 = *(undefined8 *)
                                                 (*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
                                        *(undefined8 *)(lVar7 + 0x88) =
                                             *(undefined8 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
                                        *(undefined8 *)(lVar7 + 0x80) = uVar6;
                                        return 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_02d60af0();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05a1ce44:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


