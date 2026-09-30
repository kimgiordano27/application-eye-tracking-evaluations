/*
FUNCTION_NAME: Oculus.Interaction.GrabAPI.HandGrabAPI$$GetHandPalmScore
ENTRY_POINT: 035b1dfc
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


/* WARNING: Removing unreachable block (ram,0x035b1e58) */

long * Oculus_Interaction_GrabAPI_HandGrabAPI__GetHandPalmScore(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
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
  
  if (!in_ZR) {
    FUN_02c7ab68(&stack0x00000040,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface_<>c__DisplayClass7_0_<CalculateBestPoseAtSurface>b__1__
                );
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar13 = *plVar9;
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
    plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                  ,*(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar9 == (long *)0x0) goto LAB_035b1db8;
    if (0 < (int)plVar9[3]) {
      uVar12 = 0;
      plVar11 = plVar9 + 4;
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
        uVar5 = FUN_03582560(lVar13,0,0);
        if ((uVar5 & 1) != 0) {
          if ((unaff_w21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar13 = *(long *)(unaff_x19 + 0x28);
          if (lVar13 != 0) {
            uVar8 = thunk_FUN_01efb3a4(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
            lVar13 = FUN_030f28e4(lVar13,uVar12 & 0xffffffff,uVar8);
            if (lVar13 != 0) {
              plVar9 = *(long **)(lVar13 + 0x10);
              uVar3 = thunk_FUN_01efb3a4(
                                        Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_2__
                                        );
              uVar8 = 0;
              if (plVar9 != (long *)0x0) {
                uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
              }
              uVar4 = thunk_FUN_01efb3a4(
                                        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                        );
              uVar8 = FUN_0340ebc0(uVar3,uVar8,uVar4,0);
              thunk_FUN_01efb3a4(
                                Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                                );
              uVar3 = thunk_FUN_01f117cc();
              FUN_035ad268(uVar3,uVar8);
              uVar8 = thunk_FUN_01efb3a4(
                                        Method_Sirenix_Serialization_BinaryDataReader_<>c_<_cctor>b__64_3__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar3,uVar8);
            }
          }
          goto LAB_035b1db8;
        }
        if ((lVar13 != 0) &&
           (lVar6 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
          uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar8,0);
        }
        if (*(uint *)(plVar9 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *plVar11 = lVar13;
        thunk_FUN_01f51358(plVar11,lVar13);
        uVar12 = uVar12 + 1;
        plVar11 = plVar11 + 1;
      } while ((long)uVar12 < (long)(int)plVar9[3]);
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
    while (uVar12 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar1), plVar9 = in_stack_00000030
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
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b1c5c;
          }
          uVar12 = uVar12 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(in_stack_00000030,*(long *)puVar2,0);
LAB_035b1c5c:
      unaff_x25 = (long *)(*(code *)*puVar7)(plVar9,unaff_x25,puVar7[1]);
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


