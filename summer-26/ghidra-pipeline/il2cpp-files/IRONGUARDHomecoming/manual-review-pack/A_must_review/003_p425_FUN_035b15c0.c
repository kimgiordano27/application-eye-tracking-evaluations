/*
FUNCTION_NAME: FUN_035b15c0
ENTRY_POINT: 035b15c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 258
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;strong_file_logging_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_7
*/


long * FUN_035b15c0(long param_1,long param_2,long param_3,uint param_4,uint param_5,
                   undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_04833605 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_StreamWriter_Flush__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                      );
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_Kernel_LeftShift__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_Kernel_RightShift__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_Kernel_modInverse__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_Difference__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_Kernel_LeftShift__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_Kernel_RightShift__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_Kernel_modInverse__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
    thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_Difference__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_0__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04833605 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (long *)0x0;
  if ((param_2 == 0) && (param_3 == 0)) {
    uVar3 = FUN_035c2f04(param_1);
    if (*(int *)(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    }
    plVar4 = (long *)FUN_035a2cf4(uVar3,param_4 & 1,param_5 & 1,0,param_6,0);
    return plVar4;
  }
  lVar13 = *(long *)(param_1 + 0x18);
  plVar4 = (long *)0x0;
  if (lVar13 != 0) {
    if (param_2 == 0) {
      plVar4 = (long *)FUN_034ba52c(lVar13,0);
    }
    else {
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_StreamWriter_Flush__);
      FUN_034ba858(uVar3,lVar13,0);
      plVar4 = (long *)(**(code **)(param_2 + 0x18))
                                 (*(undefined8 *)(param_2 + 0x40),uVar3,
                                  *(undefined8 *)(param_2 + 0x28));
    }
    uVar5 = FUN_034ba77c(plVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        return (long *)0x0;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_1__
                                );
      uVar6 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                );
      uVar3 = FUN_0340ebc0(uVar3,uVar11,uVar6,0);
      thunk_FUN_01efb3a4(
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                        );
      uVar6 = thunk_FUN_01f117cc();
      FUN_034c71ec(uVar6,uVar3,0);
      goto LAB_035b1944;
    }
  }
  puVar2 = Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_0__;
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_035b1db8;
  lVar13 = *plVar14;
  uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_0__) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_035b184c;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar14,*(long *)
                                 Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_0__
                        ,0);
LAB_035b184c:
  uVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
  if (param_3 == 0) {
    if (plVar4 == (long *)0x0) goto LAB_035b1db8;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x288))
                               (plVar4,uVar3,0,param_5 & 1,*(undefined8 *)(*plVar4 + 0x290));
  }
  else {
    plVar4 = (long *)(**(code **)(param_3 + 0x18))
                               (*(undefined8 *)(param_3 + 0x40),plVar4,uVar3,param_5 & 1,
                                *(undefined8 *)(param_3 + 0x28));
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03582560(plVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      return (long *)0x0;
    }
    plVar4 = *(long **)(param_1 + 0x10);
LAB_035b18dc:
    uVar6 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    uVar11 = thunk_FUN_01efb3a4(
                               Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                               );
    uVar3 = FUN_0340ebc0(uVar6,uVar3,uVar11,0);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                      );
    uVar6 = thunk_FUN_01f117cc();
    FUN_035ad268(uVar6,uVar3);
LAB_035b1944:
    uVar3 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar3);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_030f35d0(&local_b8,*(long *)(param_1 + 0x20),
                 *(undefined8 *)Method_Mono_Math_BigInteger_Kernel_LeftShift__);
    puVar1 = Method_Mono_Math_BigInteger_Kernel_RightShift__;
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    while (uVar5 = FUN_02c7ab6c(&local_80,*(undefined8 *)puVar1), plVar14 = local_70,
          (uVar5 & 1) != 0) {
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *local_70;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b19fc;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(local_70,*(long *)puVar2,0);
LAB_035b19fc:
      uVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar3,uVar3);
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x7c8))
                                 (plVar4,uVar3,0x30,*(undefined8 *)(*plVar4 + 2000));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03582560(plVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((param_4 & 1) == 0) {
          FUN_02c7ab68(&local_80,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                      );
          return (long *)0x0;
        }
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__
                                  );
        uVar6 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        uVar11 = thunk_FUN_01efb3a4(
                                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                   );
        uVar3 = FUN_0340ebc0(uVar3,uVar6,uVar11,0);
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                          );
        uVar6 = thunk_FUN_01f117cc();
        FUN_03579ad0(uVar6,uVar3,0);
        FUN_035a1ed4(uVar6,0x80131522,0);
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,uVar3);
      }
    }
    FUN_02c7ab68(&local_80,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                );
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar14 = (long *)FUN_01f08890(*(undefined8 *)
                                    Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                   ,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
    if (plVar14 == (long *)0x0) goto LAB_035b1db8;
    if (0 < (int)plVar14[3]) {
      uVar5 = 0;
      plVar12 = plVar14 + 4;
      do {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar13 = FUN_030f28e4(*(long *)(param_1 + 0x28),uVar5 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__),
           lVar13 == 0)) goto LAB_035b1db8;
        lVar13 = FUN_035b15c0(lVar13,param_2,param_3,param_4 & 1,param_5 & 1,param_6);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        }
        uVar8 = FUN_03582560(lVar13,0,0);
        if ((uVar8 & 1) != 0) {
          if ((param_4 & 1) == 0) {
            return (long *)0x0;
          }
          lVar13 = *(long *)(param_1 + 0x28);
          if (lVar13 == 0) goto LAB_035b1db8;
          uVar3 = thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
          lVar13 = FUN_030f28e4(lVar13,uVar5 & 0xffffffff,uVar3);
          if (lVar13 == 0) goto LAB_035b1db8;
          plVar4 = *(long **)(lVar13 + 0x10);
          goto LAB_035b18dc;
        }
        if ((lVar13 != 0) &&
           (lVar9 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0)) {
          uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3,0);
        }
        if (*(uint *)(plVar14 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *plVar12 = lVar13;
        thunk_FUN_01f51358(plVar12,lVar13);
        uVar5 = uVar5 + 1;
        plVar12 = plVar12 + 1;
      } while ((long)uVar5 < (long)(int)plVar14[3]);
    }
    if (plVar4 == (long *)0x0) goto LAB_035b1db8;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x928))(plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x930))
    ;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_030f35d0(&local_b8,*(long *)(param_1 + 0x30),
                 *(undefined8 *)Method_Mono_Math_BigInteger_Kernel_RightShift__);
    puVar1 = Method_Mono_Math_BigInteger_ModulusRing_Difference__;
    puVar2 = Method_Mono_Math_BigInteger_Kernel_modInverse__;
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    while (uVar5 = FUN_02c7ab6c(&local_a0,*(undefined8 *)puVar2), plVar14 = local_90,
          (uVar5 & 1) != 0) {
      if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *local_90;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b1c5c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(local_90,*(long *)puVar1,0);
LAB_035b1c5c:
      plVar4 = (long *)(*(code *)*puVar7)(plVar14,plVar4,puVar7[1]);
    }
    FUN_02c7ab68(&local_a0,*(undefined8 *)Method_Mono_Math_BigInteger_Kernel_LeftShift__);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    return plVar4;
  }
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x918))(plVar4,*(undefined8 *)(*plVar4 + 0x920));
    return plVar4;
  }
LAB_035b1db8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


