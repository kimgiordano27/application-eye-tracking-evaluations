/*
FUNCTION_NAME: OVR.SoundEmitter.<DelayedSyncTo>d__57$$System.IDisposable.Dispose
ENTRY_POINT: 034fa688
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long * OVR_SoundEmitter_<DelayedSyncTo>d__57__System_IDisposable_Dispose(long param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar7;
  undefined8 uVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar6;
  
  if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
  if (*(uint *)(in_x9 + 0x18) < 0xe) {
LAB_034fb04c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  if (*(long **)(in_x9 + 0x88) == unaff_x21) {
    lVar3 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_034fadd8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_034fadd8:
    uVar11 = (*(code *)*puVar2)();
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar11);
    puVar2 = (undefined8 *)
             Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
FUN_034fae6c:
    uVar4 = *puVar2;
OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current:
    unaff_x19 = (long *)thunk_FUN_01f113fc(uVar4,&stack0x00000008);
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0xf) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x90) == unaff_x21) {
      lVar3 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
            goto LAB_034fae50;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_034fae50:
      in_stack_00000008 = (*(code *)*puVar2)();
      puVar2 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
      goto FUN_034fae6c;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0x10) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x98) == unaff_x21) {
      lVar3 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_034fa90c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_034fa90c:
      _in_stack_00000008 = (*(code *)*puVar2)();
      uVar4 = *(undefined8 *)Method_System_Numerics_BigNumber_FormatBigInteger__;
      goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0x11) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0xa0) == unaff_x21) {
      lVar3 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_034fad74;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_034fad74:
      uVar4 = (*(code *)*puVar2)();
      in_stack_00000008 = uVar4;
      uVar4 = *(undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
      goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0x13) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0xb0) == unaff_x21) {
      lVar3 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xf) * 0x10 + 0x138);
            goto LAB_034faf2c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_034faf2c:
      plVar7 = (long *)(*(code *)*puVar2)();
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
        return plVar7;
      }
      goto LAB_034faf4c;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 2) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x28) != unaff_x21) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        param_1 = *(long *)(*unaff_x23 + 0xb8);
      }
      if (unaff_x21 != *(long **)(param_1 + 0x10)) {
        lVar3 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                  );
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar3 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                  );
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 == 0) {
OVR_SoundFX__SetOnFinished:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_034fb04c;
        if (*(long **)(lVar3 + 0x30) == unaff_x21) {
          thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
          uVar4 = thunk_FUN_01f117cc();
          puVar6 = 
          Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__;
        }
        else {
          lVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                    );
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                    );
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar3 == 0) goto OVR_SoundFX__SetOnFinished;
          if (*(int *)(lVar3 + 0x18) == 0) goto LAB_034fb04c;
          if (*(long **)(lVar3 + 0x20) != unaff_x21) {
            FUN_01bc50c0();
            plVar7 = (long *)thunk_FUN_01ecaf38();
            FUN_01bc50c0();
            uVar4 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
            FUN_01bc50c0();
            uVar5 = (**(code **)(*unaff_x21 + 0x2e8))();
            uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_XR_Management_XRGeneralSettings_Quit__);
            uVar4 = FUN_0340f2f0(uVar8,uVar4,uVar5,0);
            thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
            uVar5 = thunk_FUN_01f117cc();
            FUN_03568188(uVar5,uVar4,0);
            uVar4 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar5,uVar4);
          }
          thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
          uVar4 = thunk_FUN_01f117cc();
          puVar6 = 
          Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__;
        }
        uVar5 = thunk_FUN_01efb3a4(puVar6);
        FUN_03568188(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar4,uVar5);
      }
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                       + 0x130);
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
    }
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return unaff_x19;
  }
LAB_034faf4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


