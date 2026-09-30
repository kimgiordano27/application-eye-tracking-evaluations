/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteraction$$CanInteractWith
ENTRY_POINT: 035b1770
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 222
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_3
*/


long * Oculus_Interaction_HandGrab_HandGrabInteraction__CanInteractWith(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  ulong unaff_x21;
  long *plVar13;
  long unaff_x23;
  long *plVar14;
  uint unaff_w29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  plVar3 = (long *)FUN_034ba52c();
  uVar4 = FUN_034ba77c(plVar3,0,0);
  puVar2 = Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_0__;
  if ((uVar4 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar5 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_1__);
    uVar6 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                              );
    uVar5 = FUN_0340ebc0(uVar5,uVar12,uVar6,0);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                      );
    uVar6 = thunk_FUN_01f117cc();
    FUN_034c71ec(uVar6,uVar5,0);
LAB_035b1944:
    uVar5 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar5);
  }
  plVar14 = *(long **)(unaff_x19 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_035b1db8;
  lVar10 = *plVar14;
  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar4 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_0__) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_035b184c;
      }
      uVar4 = uVar4 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar14,*(long *)
                                 Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_0__
                        ,0);
LAB_035b184c:
  uVar5 = (*(code *)*puVar7)(plVar14,puVar7[1]);
  if (unaff_x23 == 0) {
    if (plVar3 == (long *)0x0) goto LAB_035b1db8;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x288))
                               (plVar3,uVar5,0,unaff_w29 & 1,*(undefined8 *)(*plVar3 + 0x290));
  }
  else {
    plVar3 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (*(undefined8 *)(unaff_x23 + 0x40),plVar3,uVar5,unaff_w29 & 1,
                                *(undefined8 *)(unaff_x23 + 0x28));
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03582560(plVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    plVar3 = *(long **)(unaff_x19 + 0x10);
LAB_035b18dc:
    uVar6 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__);
    uVar5 = 0;
    if (plVar3 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    uVar12 = thunk_FUN_01efb3a4(
                               Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                               );
    uVar5 = FUN_0340ebc0(uVar6,uVar5,uVar12,0);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                      );
    uVar6 = thunk_FUN_01f117cc();
    FUN_035ad268(uVar6,uVar5);
    goto LAB_035b1944;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x20),
                 *(undefined8 *)Method_Mono_Math_BigInteger_Kernel_LeftShift__);
    puVar1 = Method_Mono_Math_BigInteger_Kernel_RightShift__;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar4 = FUN_02c7ab6c(&stack0x00000040,*(undefined8 *)puVar1), plVar14 = in_stack_00000050
          , (uVar4 & 1) != 0) {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *in_stack_00000050;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_035b19fc;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(in_stack_00000050,*(long *)puVar2,0);
LAB_035b19fc:
      uVar5 = (*(code *)*puVar7)(plVar14,puVar7[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar5,uVar5);
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x7c8))
                                 (plVar3,uVar5,0x30,*(undefined8 *)(*plVar3 + 2000));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03582560(plVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((unaff_x21 & 1) == 0) {
          FUN_02c7ab68(&stack0x00000040,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                      );
          return (long *)0x0;
        }
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__
                                  );
        uVar6 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        uVar12 = thunk_FUN_01efb3a4(
                                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                   );
        uVar5 = FUN_0340ebc0(uVar5,uVar6,uVar12,0);
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                          );
        uVar6 = thunk_FUN_01f117cc();
        FUN_03579ad0(uVar6,uVar5,0);
        FUN_035a1ed4(uVar6,0x80131522,0);
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,uVar5);
      }
    }
    FUN_02c7ab68(&stack0x00000040,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                );
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar14 = (long *)FUN_01f08890(*(undefined8 *)
                                    Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                   ,*(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar14 == (long *)0x0) goto LAB_035b1db8;
    if (0 < (int)plVar14[3]) {
      uVar4 = 0;
      plVar13 = plVar14 + 4;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar10 = FUN_030f28e4(*(long *)(unaff_x19 + 0x28),uVar4 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__),
           lVar10 == 0)) goto LAB_035b1db8;
        lVar10 = FUN_035b15c0();
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        }
        uVar8 = FUN_03582560(lVar10,0,0);
        if ((uVar8 & 1) != 0) {
          if ((unaff_x21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar10 = *(long *)(unaff_x19 + 0x28);
          if (lVar10 == 0) goto LAB_035b1db8;
          uVar5 = thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
          lVar10 = FUN_030f28e4(lVar10,uVar4 & 0xffffffff,uVar5);
          if (lVar10 == 0) goto LAB_035b1db8;
          plVar3 = *(long **)(lVar10 + 0x10);
          goto LAB_035b18dc;
        }
        if ((lVar10 != 0) &&
           (lVar9 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0)) {
          uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar5,0);
        }
        if (*(uint *)(plVar14 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *plVar13 = lVar10;
        thunk_FUN_01f51358(plVar13,lVar10);
        uVar4 = uVar4 + 1;
        plVar13 = plVar13 + 1;
      } while ((long)uVar4 < (long)(int)plVar14[3]);
    }
    if (plVar3 == (long *)0x0) goto LAB_035b1db8;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x928))(plVar3,plVar14,*(undefined8 *)(*plVar3 + 0x930))
    ;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x30),
                 *(undefined8 *)Method_Mono_Math_BigInteger_Kernel_RightShift__);
    puVar1 = Method_Mono_Math_BigInteger_ModulusRing_Difference__;
    puVar2 = Method_Mono_Math_BigInteger_Kernel_modInverse__;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar2), plVar14 = in_stack_00000030
          , (uVar4 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_035b1c5c;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(in_stack_00000030,*(long *)puVar1,0);
LAB_035b1c5c:
      plVar3 = (long *)(*(code *)*puVar7)(plVar14,plVar3,puVar7[1]);
    }
    FUN_02c7ab68(&stack0x00000020,*(undefined8 *)Method_Mono_Math_BigInteger_Kernel_LeftShift__);
  }
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    return plVar3;
  }
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x918))(plVar3,*(undefined8 *)(*plVar3 + 0x920));
    return plVar3;
  }
LAB_035b1db8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


