/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_get_message__SWIG_0
ENTRY_POINT: 05fcf62c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05fcfd58) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_get_message__SWIG_0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  int in_w8;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x22;
  long unaff_x26;
  undefined1 *unaff_x27;
  int unaff_w28;
  double dVar19;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_000000a8;
  long *in_stack_00000138;
  undefined *puVar12;
  
  if (in_w8 <= unaff_w28) {
    in_w8 = unaff_w28;
  }
  if (*(char *)(unaff_x20 + 0x86c) == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    *(undefined1 *)(unaff_x20 + 0x86c) = 1;
  }
  puVar12 = PTR_DAT_069fbb48;
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
                    /* catch() { ... } // from try @ 05fcf55c with catch @ 05fcf680 */
  dVar19 = (double)FUN_054e8f58((double)in_w8,0x4000000000000000,0);
                    /* try { // try from 05fcf684 to 060cf68b has its CatchHandler @ 05fcf694 */
                    /* try { // try from 05fcf68c to 060cf697 has its CatchHandler @ 05fce880 */
  iVar16 = -0x7fffffff;
  if ((float)dVar19 != INFINITY) {
    iVar16 = (int)dVar19 + 1;
  }
  if (*(int *)(unaff_x19 + 7) == -1) {
    *(int *)(unaff_x19 + 7) = unaff_w28 - *(int *)((long)unaff_x19 + 0x34);
  }
  if (*(int *)((long)unaff_x19 + 0x44) == -1) {
    *(int *)((long)unaff_x19 + 0x44) = iVar16 - *(int *)(unaff_x19 + 8);
  }
  if (*(int *)(*(long *)Method_System_Span<FrameTiming>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (unaff_x27[0x285] == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    unaff_x27[0x285] = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (*(char *)(unaff_x26 + 0x286) == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    *(undefined1 *)(unaff_x26 + 0x286) = 1;
  }
  puVar4 = PTR_DAT_06a0f5d8;
  iVar13 = (uint)*(ushort *)((long)unaff_x19 + 2) << 0x10;
  if (*(ushort *)((long)unaff_x19 + 2) != 0) {
    lVar7 = *(long *)PTR_DAT_06a0f5d8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar4;
    }
    piVar14 = *(int **)(lVar7 + 0xb8);
    if (iVar13 != *piVar14) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar14 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
      }
      if (iVar13 != piVar14[1]) goto LAB_05fcf87c;
    }
    FUN_05fb45b0(&stack0x00000028);
    if (in_stack_00000028._4_4_ <= iStack0000000000000030) {
      in_stack_00000028._4_4_ = iStack0000000000000030;
    }
    iVar13 = in_stack_00000028._4_4_;
    if (in_stack_00000028._4_4_ <= iStack0000000000000034) {
      iVar13 = iStack0000000000000034;
    }
    if (*(char *)(unaff_x20 + 0x86c) == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      *(undefined1 *)(unaff_x20 + 0x86c) = 1;
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    dVar19 = (double)FUN_054e8f58((double)iVar13,0x4000000000000000,0);
    iVar13 = -0x7fffffff;
    if ((float)dVar19 != INFINITY) {
      iVar13 = (int)dVar19 + 1;
    }
    if ((*(int *)(unaff_x19 + 6) != -1) &&
       (iStack0000000000000034 - *(int *)(unaff_x19 + 6) < *(int *)(unaff_x19 + 7))) {
      uVar17 = thunk_FUN_02dfd288(
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                                 );
      puVar12 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputBindingComposite>__
      ;
      goto LAB_05fcfda8;
    }
    unaff_x27 = &DAT_06dc4000;
    if ((*(int *)((long)unaff_x19 + 0x3c) != -1) &&
       (iVar13 - *(int *)((long)unaff_x19 + 0x3c) < *(int *)((long)unaff_x19 + 0x44))) {
      uVar17 = thunk_FUN_02dfd288(
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                                 );
      puVar12 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputControl>__;
      goto LAB_05fcfda8;
    }
  }
LAB_05fcf87c:
  if (unaff_w28 - *(int *)((long)unaff_x19 + 0x34) < *(int *)(unaff_x19 + 7)) {
    uVar17 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar12 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Gamepad>__;
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x44) <= iVar16 - *(int *)(unaff_x19 + 8)) {
      in_stack_00000138 = (long *)FUN_037fefa4();
      lVar7 = in_stack_000000a8;
      if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(in_stack_000000a8 + 0x10) = *(undefined4 *)(unaff_x19 + 0xc);
      uVar17 = *unaff_x19;
      *(undefined8 *)(in_stack_000000a8 + 0x1c) = unaff_x19[1];
      *(undefined8 *)(in_stack_000000a8 + 0x14) = uVar17;
      memcpy(&stack0x00000028,unaff_x19,0x78);
      *(undefined8 *)(lVar7 + 0x2c) = in_stack_00000040;
      *(undefined8 *)(lVar7 + 0x24) = in_stack_00000038;
      *(undefined8 *)(lVar7 + 0x34) = unaff_x19[4];
      *(undefined8 *)(lVar7 + 0x3c) = unaff_x19[5];
      *(undefined8 *)(lVar7 + 0x48) = unaff_x19[9];
      LeanTween__value((undefined8 *)(lVar7 + 0x48));
      if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(in_stack_000000a8 + 0x50) = *(undefined4 *)(unaff_x19 + 10);
      *(undefined8 *)(in_stack_000000a8 + 0x58) = unaff_x19[0xb];
      LeanTween__value();
      lVar7 = in_stack_000000a8;
      if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar13 = *(int *)(unaff_x19 + 6);
      *(int *)(in_stack_000000a8 + 0x60) = iVar13;
      uVar1 = *(undefined4 *)((long)unaff_x19 + 0x34);
      iVar16 = 0;
      if (iVar13 != -1) {
        iVar16 = iVar13;
      }
      *(undefined4 *)(in_stack_000000a8 + 100) = uVar1;
      uVar2 = *(undefined4 *)(unaff_x19 + 7);
      *(undefined4 *)(in_stack_000000a8 + 0x68) = uVar2;
      *(undefined4 *)(in_stack_000000a8 + 0x6c) = *(undefined4 *)((long)unaff_x19 + 0x3c);
      *(undefined4 *)(in_stack_000000a8 + 0x70) = *(undefined4 *)(unaff_x19 + 8);
      uVar3 = *(undefined4 *)((long)unaff_x19 + 0x44);
      *(undefined4 *)(in_stack_000000a8 + 0x74) = uVar3;
      *(undefined4 *)(in_stack_000000a8 + 0x78) = *(undefined4 *)(unaff_x19 + 0xe);
      *(undefined4 *)(in_stack_000000a8 + 0x7c) = *(undefined4 *)((long)unaff_x19 + 100);
      puVar12 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
      *(undefined4 *)(in_stack_000000a8 + 0x80) = *(undefined4 *)(unaff_x19 + 0xd);
      lVar8 = *(long *)puVar12;
      *(undefined4 *)(in_stack_000000a8 + 0x84) = *(undefined4 *)((long)unaff_x19 + 0x6c);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar6 = FUN_05fce98c(&stack0x000000b0,iVar16,uVar1,uVar2,uVar3);
      puVar12 = Method_System_Span<FrameTiming>__ctor__;
      *(byte *)(lVar7 + 0x88) = bVar6 & 1;
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar12 = PTR_DAT_06a0f5d8;
      if (unaff_x27[0x285] == '\0') {
        FUN_02d965b8(PTR_DAT_06a0f5d8);
        unaff_x27[0x285] = 1;
      }
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (*(char *)(unaff_x26 + 0x286) == '\0') {
        FUN_02d965b8(PTR_DAT_06a0f5d8);
        *(undefined1 *)(unaff_x26 + 0x286) = 1;
      }
      puVar4 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
      iVar16 = (uint)*(ushort *)((long)unaff_x19 + 2) << 0x10;
      if (*(ushort *)((long)unaff_x19 + 2) != 0) {
        lVar7 = *(long *)puVar12;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar12;
        }
        piVar14 = *(int **)(lVar7 + 0xb8);
        if (iVar16 != *piVar14) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            piVar14 = *(int **)(*(long *)puVar12 + 0xb8);
          }
          if (iVar16 != piVar14[1]) goto LAB_05fcfaf8;
        }
        plVar5 = in_stack_00000138;
        if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *in_stack_00000138;
        lVar7 = *(long *)puVar4;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05fcfae4;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(in_stack_00000138,lVar7,0);
LAB_05fcfae4:
        (*(code *)*puVar9)(plVar5);
      }
LAB_05fcfaf8:
      plVar5 = in_stack_00000138;
      if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *in_stack_00000138;
      lVar7 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto Unity_Services_Vivox_vx_device_t___ctor;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(in_stack_00000138,lVar7,0);
Unity_Services_Vivox_vx_device_t___ctor:
      (*(code *)*puVar9)(plVar5,unaff_x19 + 2,2,puVar9[1]);
      plVar5 = in_stack_00000138;
      puVar12 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      lVar7 = *(long *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar12;
      }
      puVar9 = *(undefined8 **)(lVar7 + 0xb8);
      lVar8 = puVar9[3];
      if (lVar8 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar9 = *(undefined8 **)(*(long *)puVar12 + 0xb8);
        }
        uVar17 = *puVar9;
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputDeviceMatcher_MatcherJson_Capability>__
                                  );
        FUN_04444ef4(lVar8,uVar17,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                     ,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 0x18);
        *plVar10 = lVar8;
        LeanTween__value(plVar10,lVar8);
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar5;
      lVar18 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputControl,_InputControlList<InputControl>>__
      ;
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar18 + 0x20)) {
            lVar7 = lVar7 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 + 0x138;
            goto LAB_05fcfc44;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      lVar7 = FUN_02dd004c(plVar5);
LAB_05fcfc44:
      lVar7 = thunk_FUN_02db5310(*(undefined8 *)(lVar7 + 8),lVar18);
      (**(code **)(lVar7 + 8))(plVar5,lVar8,lVar7);
      plVar5 = in_stack_00000138;
      if (in_stack_00000138 != (long *)0x0) {
        lVar7 = *in_stack_00000138;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05fcfcc8;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(in_stack_00000138,*(long *)PTR_DAT_069fbff0,0);
LAB_05fcfcc8:
        (*(code *)*puVar9)(plVar5,puVar9[1]);
      }
      return;
    }
    uVar17 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar12 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputActionMap>__;
  }
LAB_05fcfda8:
  uVar11 = thunk_FUN_02dfd288(puVar12);
  uVar17 = FUN_0536d554(uVar17,unaff_x22,uVar11,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar11 = thunk_FUN_02dd3144();
  FUN_05452924(uVar11,uVar17,0);
  uVar17 = thunk_FUN_02dfd288(
                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar11,uVar17);
}


