/*
FUNCTION_NAME: OVR.SoundEmitter$$FadeSoundChannelTo
ENTRY_POINT: 034fa4fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * OVR_SoundEmitter__FadeSoundChannelTo(long param_1,long param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar9;
  undefined8 uVar10;
  long in_x9;
  ulong uVar11;
  long *in_x10;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar8;
  
  if (in_x10 == unaff_x21) {
    lVar5 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_034fa9e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fa9e8:
    uVar2 = (*(code *)*puVar4)();
    puVar4 = (undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
LAB_034faa74:
    uVar6 = *puVar4;
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current:
    unaff_x19 = (long *)thunk_FUN_01f113fc(uVar6,&stack0x00000008);
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 7) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x50) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_034faa5c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034faa5c:
      uVar2 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
      goto LAB_034faa74;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 8) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x58) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_034fab10;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fab10:
      uVar3 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
LAB_034fa984:
      uVar6 = *puVar4;
      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
      goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 9) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x60) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_034fab84;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fab84:
      uVar3 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
      goto LAB_034fa984;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 10) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x68) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 7) * 0x10 + 0x138);
            goto LAB_034fabf8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fabf8:
      uVar13 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
FUN_034fac84:
      uVar6 = *puVar4;
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar13);
      goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0xb) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x70) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_034fac6c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fac6c:
      uVar13 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
      goto FUN_034fac84;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0xc) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x78) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_034face8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034face8:
      uVar6 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
LAB_034fad74:
      in_stack_00000008 = uVar6;
      uVar6 = *puVar4;
      goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0xd) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x80) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 10) * 0x10 + 0x138);
            goto FUN_034fad5c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
FUN_034fad5c:
      uVar6 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
      goto LAB_034fad74;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0xe) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x88) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
            goto LAB_034fadd8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fadd8:
      uVar13 = (*(code *)*puVar4)();
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar13);
      puVar4 = (undefined8 *)
               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
FUN_034fae6c:
      uVar6 = *puVar4;
      goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
      param_1 = *(long *)(param_2 + 0xb8);
      in_x9 = *(long *)(param_1 + 8);
      if (in_x9 == 0) goto OVR_SoundFX__SetOnFinished;
    }
    if (*(uint *)(in_x9 + 0x18) < 0xf) goto LAB_034fb04c;
    if (*(long **)(in_x9 + 0x90) == unaff_x21) {
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_034fae50;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fae50:
      in_stack_00000008 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
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
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
            goto LAB_034fa90c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034fa90c:
      _in_stack_00000008 = (*(code *)*puVar4)();
      uVar6 = *(undefined8 *)Method_System_Numerics_BigNumber_FormatBigInteger__;
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
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
            goto LAB_034faf00;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034faf00:
      uVar6 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
      goto LAB_034fad74;
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
      lVar5 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
            goto LAB_034faf2c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_034faf2c:
      plVar9 = (long *)(*(code *)*puVar4)();
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
        return plVar9;
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
        lVar5 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                  );
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar5 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                  );
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) {
OVR_SoundFX__SetOnFinished:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)(lVar5 + 0x18) < 3) {
LAB_034fb04c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*(long **)(lVar5 + 0x30) == unaff_x21) {
          thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
          uVar6 = thunk_FUN_01f117cc();
          puVar8 = 
          Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__;
        }
        else {
          lVar5 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                    );
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar5 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                    );
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 == 0) goto OVR_SoundFX__SetOnFinished;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_034fb04c;
          if (*(long **)(lVar5 + 0x20) != unaff_x21) {
            FUN_01bc50c0();
            plVar9 = (long *)thunk_FUN_01ecaf38();
            FUN_01bc50c0();
            uVar6 = (**(code **)(*plVar9 + 0x2e8))(plVar9,*(undefined8 *)(*plVar9 + 0x2f0));
            FUN_01bc50c0();
            uVar7 = (**(code **)(*unaff_x21 + 0x2e8))();
            uVar10 = thunk_FUN_01efb3a4(Method_UnityEngine_XR_Management_XRGeneralSettings_Quit__);
            uVar6 = FUN_0340f2f0(uVar10,uVar6,uVar7,0);
            thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
            uVar7 = thunk_FUN_01f117cc();
            FUN_03568188(uVar7,uVar6,0);
            uVar6 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar7,uVar6);
          }
          thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
          uVar6 = thunk_FUN_01f117cc();
          puVar8 = 
          Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__;
        }
        uVar7 = thunk_FUN_01efb3a4(puVar8);
        FUN_03568188(uVar6,uVar7,0);
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,uVar7);
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


