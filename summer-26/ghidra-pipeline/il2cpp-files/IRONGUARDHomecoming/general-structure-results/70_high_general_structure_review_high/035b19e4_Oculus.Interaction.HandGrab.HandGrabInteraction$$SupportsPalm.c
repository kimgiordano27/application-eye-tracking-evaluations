/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteraction$$SupportsPalm
ENTRY_POINT: 035b19e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


long * Oculus_Interaction_HandGrab_HandGrabInteraction__SupportsPalm(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  ulong unaff_x21;
  long *plVar13;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000050;
  
code_r0x035b19e4:
  do {
    puVar3 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
    while( true ) {
      uVar4 = (*(code *)*puVar3)(unaff_x26,puVar3[1]);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar4,uVar4);
      }
      unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x7c8))
                                    (unaff_x25,uVar4,0x30,*(undefined8 *)(*unaff_x25 + 2000));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03582560(unaff_x25,0,0);
      if ((uVar5 & 1) != 0) {
        if ((unaff_x21 & 1) == 0) {
          FUN_02c7ab68(&stack0x00000040,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                      );
          return (long *)0x0;
        }
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__
                                  );
        uVar9 = (**(code **)(*unaff_x26 + 0x168))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x170));
        uVar10 = thunk_FUN_01efb3a4(
                                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                   );
        uVar4 = FUN_0340ebc0(uVar4,uVar9,uVar10,0);
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                          );
        uVar9 = thunk_FUN_01f117cc();
        FUN_03579ad0(uVar9,uVar4,0);
        FUN_035a1ed4(uVar9,0x80131522,0);
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,uVar4);
      }
      uVar5 = FUN_02c7ab6c(&stack0x00000040,*unaff_x29);
      if ((uVar5 & 1) == 0) {
        FUN_02c7ab68(&stack0x00000040,
                     *(undefined8 *)
                      Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                    );
        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_035b1bb8;
        plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                       Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                      ,*(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
        if (plVar6 == (long *)0x0) goto LAB_035b1db8;
        if ((int)plVar6[3] < 1) goto LAB_035b1b94;
        uVar5 = 0;
        plVar13 = plVar6 + 4;
        goto LAB_035b1ad4;
      }
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *in_stack_00000050;
      param_2 = *unaff_x28;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      param_1 = in_stack_00000050;
      unaff_x26 = in_stack_00000050;
      if (uVar5 == 0) break;
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      while (*(long *)(piVar12 + -2) != param_2) {
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
        if (uVar5 == 0) goto code_r0x035b19e4;
      }
      puVar3 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
    }
  } while( true );
  while( true ) {
    if ((lVar11 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
      uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,0);
    }
    if (*(uint *)(plVar6 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *plVar13 = lVar11;
    thunk_FUN_01f51358(plVar13,lVar11);
    uVar5 = uVar5 + 1;
    plVar13 = plVar13 + 1;
    if ((long)(int)plVar6[3] <= (long)uVar5) break;
LAB_035b1ad4:
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (lVar11 = FUN_030f28e4(*(long *)(unaff_x19 + 0x28),uVar5 & 0xffffffff,
                              *(undefined8 *)
                               Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__),
       lVar11 == 0)) goto LAB_035b1db8;
    lVar11 = FUN_035b15c0();
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar7 = FUN_03582560(lVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if ((unaff_x21 & 1) == 0) {
        return (long *)0x0;
      }
      lVar11 = *(long *)(unaff_x19 + 0x28);
      if (lVar11 != 0) {
        uVar4 = thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
        lVar11 = FUN_030f28e4(lVar11,uVar5 & 0xffffffff,uVar4);
        if (lVar11 != 0) {
          plVar6 = *(long **)(lVar11 + 0x10);
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__
                                    );
          uVar4 = 0;
          if (plVar6 != (long *)0x0) {
            uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          }
          uVar10 = thunk_FUN_01efb3a4(
                                     Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                     );
          uVar4 = FUN_0340ebc0(uVar9,uVar4,uVar10,0);
          thunk_FUN_01efb3a4(
                            Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                            );
          uVar9 = thunk_FUN_01f117cc();
          FUN_035ad268(uVar9,uVar4);
          uVar4 = thunk_FUN_01efb3a4(
                                    Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar9,uVar4);
        }
      }
      goto LAB_035b1db8;
    }
  }
LAB_035b1b94:
  if (unaff_x25 == (long *)0x0) {
LAB_035b1db8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x928))
                                (unaff_x25,plVar6,*(undefined8 *)(*unaff_x25 + 0x930));
LAB_035b1bb8:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x30),
                 *(undefined8 *)Method_Mono_Math_BigInteger_Kernel_RightShift__);
    puVar2 = Method_Mono_Math_BigInteger_ModulusRing_Difference__;
    puVar1 = Method_Mono_Math_BigInteger_Kernel_modInverse__;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar1), plVar6 = in_stack_00000030,
          (uVar5 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *in_stack_00000030;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_035b1c5c;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(in_stack_00000030,*(long *)puVar2,0);
LAB_035b1c5c:
      unaff_x25 = (long *)(*(code *)*puVar3)(plVar6,unaff_x25,puVar3[1]);
    }
    FUN_02c7ab68(&stack0x00000020,*(undefined8 *)Method_Mono_Math_BigInteger_Kernel_LeftShift__);
  }
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    if (unaff_x25 == (long *)0x0) goto LAB_035b1db8;
    unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x918))
                                  (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x920));
  }
  return unaff_x25;
}


