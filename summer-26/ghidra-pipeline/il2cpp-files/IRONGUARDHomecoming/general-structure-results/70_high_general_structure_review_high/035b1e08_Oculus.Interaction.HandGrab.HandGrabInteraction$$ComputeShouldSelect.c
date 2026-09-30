/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteraction$$ComputeShouldSelect
ENTRY_POINT: 035b1e08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


long * Oculus_Interaction_HandGrab_HandGrabInteraction__ComputeShouldSelect(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long unaff_x19;
  uint unaff_w21;
  long *plVar11;
  long *unaff_x25;
  ulong uVar12;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  lVar13 = *param_1;
  __cxa_end_catch();
  FUN_02c7ab68(&stack0x00000040,
               *(undefined8 *)
                Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
              );
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar13);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                  ,*(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar5 == (long *)0x0) goto LAB_035b1db8;
    if (0 < (int)plVar5[3]) {
      uVar12 = 0;
      plVar11 = plVar5 + 4;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar13 = FUN_030f28e4(*(long *)(unaff_x19 + 0x28),uVar12 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__),
           lVar13 == 0)) goto LAB_035b1db8;
        lVar13 = FUN_035b15c0();
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        }
        uVar6 = FUN_03582560(lVar13,0,0);
        if ((uVar6 & 1) != 0) {
          if ((unaff_w21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar13 = *(long *)(unaff_x19 + 0x28);
          if (lVar13 != 0) {
            uVar9 = thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
            lVar13 = FUN_030f28e4(lVar13,uVar12 & 0xffffffff,uVar9);
            if (lVar13 != 0) {
              plVar5 = *(long **)(lVar13 + 0x10);
              uVar3 = thunk_FUN_01efb3a4(
                                        Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__
                                        );
              uVar9 = 0;
              if (plVar5 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
              }
              uVar4 = thunk_FUN_01efb3a4(
                                        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                        );
              uVar9 = FUN_0340ebc0(uVar3,uVar9,uVar4,0);
              thunk_FUN_01efb3a4(
                                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                                );
              uVar3 = thunk_FUN_01f117cc();
              FUN_035ad268(uVar3,uVar9);
              uVar9 = thunk_FUN_01efb3a4(
                                        Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar3,uVar9);
            }
          }
          goto LAB_035b1db8;
        }
        if ((lVar13 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
          uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar9,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *plVar11 = lVar13;
        thunk_FUN_01f51358(plVar11,lVar13);
        uVar12 = uVar12 + 1;
        plVar11 = plVar11 + 1;
      } while ((long)uVar12 < (long)(int)plVar5[3]);
    }
    if (unaff_x25 == (long *)0x0) goto LAB_035b1db8;
    unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x928))();
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x30),
                 *(undefined8 *)Method_Mono_Math_BigInteger_Kernel_RightShift__);
    puVar2 = Method_Mono_Math_BigInteger_ModulusRing_Difference__;
    puVar1 = Method_Mono_Math_BigInteger_Kernel_modInverse__;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar12 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar1), plVar5 = in_stack_00000030
          , (uVar12 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *in_stack_00000030;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b1c5c;
          }
          uVar12 = uVar12 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(in_stack_00000030,*(long *)puVar2,0);
LAB_035b1c5c:
      unaff_x25 = (long *)(*(code *)*puVar8)(plVar5,unaff_x25,puVar8[1]);
    }
    FUN_02c7ab68(&stack0x00000020,*(undefined8 *)Method_Mono_Math_BigInteger_Kernel_LeftShift__);
  }
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    if (unaff_x25 == (long *)0x0) {
LAB_035b1db8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x918))
                                  (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x920));
  }
  return unaff_x25;
}


