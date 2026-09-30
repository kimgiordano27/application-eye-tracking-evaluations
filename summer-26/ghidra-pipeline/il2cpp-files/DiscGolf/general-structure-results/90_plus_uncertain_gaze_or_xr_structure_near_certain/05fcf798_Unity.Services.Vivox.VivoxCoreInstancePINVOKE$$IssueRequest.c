/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$IssueRequest
ENTRY_POINT: 05fcf798
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fcfd58) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__IssueRequest(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x27;
  int unaff_w28;
  int unaff_w29;
  double dVar19;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_000000a8;
  long *in_stack_00000138;
  undefined *puVar13;
  
  if (unaff_w21 == *(int *)(*(long *)(param_1 + 0xb8) + 4)) {
    FUN_05fb45b0(&stack0x00000028);
    if (in_stack_00000028._4_4_ <= iStack0000000000000030) {
      in_stack_00000028._4_4_ = iStack0000000000000030;
    }
    iVar14 = in_stack_00000028._4_4_;
    if (in_stack_00000028._4_4_ <= iStack0000000000000034) {
      iVar14 = iStack0000000000000034;
    }
    if (*(char *)(unaff_x20 + 0x86c) == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      *(undefined1 *)(unaff_x20 + 0x86c) = 1;
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    dVar19 = (double)FUN_054e8f58((double)iVar14,0x4000000000000000,0);
    iVar14 = -0x7fffffff;
    if ((float)dVar19 != INFINITY) {
      iVar14 = (int)dVar19 + 1;
    }
    if ((*(int *)(unaff_x19 + 6) != -1) &&
       (iStack0000000000000034 - *(int *)(unaff_x19 + 6) < *(int *)(unaff_x19 + 7))) {
      uVar17 = thunk_FUN_02dfd288(
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                                 );
      puVar13 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputBindingComposite>__
      ;
      goto LAB_05fcfda8;
    }
    unaff_x27 = &DAT_06dc4000;
    if ((*(int *)((long)unaff_x19 + 0x3c) != -1) &&
       (iVar14 - *(int *)((long)unaff_x19 + 0x3c) < *(int *)((long)unaff_x19 + 0x44))) {
      uVar17 = thunk_FUN_02dfd288(
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                                 );
      puVar13 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputControl>__;
      goto LAB_05fcfda8;
    }
  }
  if (unaff_w28 - *(int *)((long)unaff_x19 + 0x34) < *(int *)(unaff_x19 + 7)) {
    uVar17 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar13 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Gamepad>__;
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x44) <= unaff_w29 - *(int *)(unaff_x19 + 8)) {
      in_stack_00000138 = (long *)FUN_037fefa4();
      lVar9 = in_stack_000000a8;
      if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(in_stack_000000a8 + 0x10) = *(undefined4 *)(unaff_x19 + 0xc);
      uVar17 = *unaff_x19;
      *(undefined8 *)(in_stack_000000a8 + 0x1c) = unaff_x19[1];
      *(undefined8 *)(in_stack_000000a8 + 0x14) = uVar17;
      memcpy(&stack0x00000028,unaff_x19,0x78);
      *(undefined8 *)(lVar9 + 0x2c) = in_stack_00000040;
      *(undefined8 *)(lVar9 + 0x24) = in_stack_00000038;
      *(undefined8 *)(lVar9 + 0x34) = unaff_x19[4];
      *(undefined8 *)(lVar9 + 0x3c) = unaff_x19[5];
      *(undefined8 *)(lVar9 + 0x48) = unaff_x19[9];
      LeanTween__value((undefined8 *)(lVar9 + 0x48));
      if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(in_stack_000000a8 + 0x50) = *(undefined4 *)(unaff_x19 + 10);
      *(undefined8 *)(in_stack_000000a8 + 0x58) = unaff_x19[0xb];
      LeanTween__value();
      lVar9 = in_stack_000000a8;
      if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar1 = *(int *)(unaff_x19 + 6);
      *(int *)(in_stack_000000a8 + 0x60) = iVar1;
      uVar2 = *(undefined4 *)((long)unaff_x19 + 0x34);
      iVar14 = 0;
      if (iVar1 != -1) {
        iVar14 = iVar1;
      }
      *(undefined4 *)(in_stack_000000a8 + 100) = uVar2;
      uVar3 = *(undefined4 *)(unaff_x19 + 7);
      *(undefined4 *)(in_stack_000000a8 + 0x68) = uVar3;
      *(undefined4 *)(in_stack_000000a8 + 0x6c) = *(undefined4 *)((long)unaff_x19 + 0x3c);
      *(undefined4 *)(in_stack_000000a8 + 0x70) = *(undefined4 *)(unaff_x19 + 8);
      uVar4 = *(undefined4 *)((long)unaff_x19 + 0x44);
      *(undefined4 *)(in_stack_000000a8 + 0x74) = uVar4;
      *(undefined4 *)(in_stack_000000a8 + 0x78) = *(undefined4 *)(unaff_x19 + 0xe);
      *(undefined4 *)(in_stack_000000a8 + 0x7c) = *(undefined4 *)((long)unaff_x19 + 100);
      puVar13 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
      *(undefined4 *)(in_stack_000000a8 + 0x80) = *(undefined4 *)(unaff_x19 + 0xd);
      lVar8 = *(long *)puVar13;
      *(undefined4 *)(in_stack_000000a8 + 0x84) = *(undefined4 *)((long)unaff_x19 + 0x6c);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar7 = FUN_05fce98c(&stack0x000000b0,iVar14,uVar2,uVar3,uVar4);
      puVar13 = Method_System_Span<FrameTiming>__ctor__;
      *(byte *)(lVar9 + 0x88) = bVar7 & 1;
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar13 = PTR_DAT_06a0f5d8;
      if (unaff_x27[0x285] == '\0') {
        FUN_02d965b8(PTR_DAT_06a0f5d8);
        unaff_x27[0x285] = 1;
      }
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (*(char *)(unaff_x26 + 0x286) == '\0') {
        FUN_02d965b8(PTR_DAT_06a0f5d8);
        *(undefined1 *)(unaff_x26 + 0x286) = 1;
      }
      puVar5 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
      iVar14 = (uint)*(ushort *)((long)unaff_x19 + 2) << 0x10;
      if (*(ushort *)((long)unaff_x19 + 2) != 0) {
        lVar9 = *(long *)puVar13;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar9 = *(long *)puVar13;
        }
        piVar15 = *(int **)(lVar9 + 0xb8);
        if (iVar14 != *piVar15) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            piVar15 = *(int **)(*(long *)puVar13 + 0xb8);
          }
          if (iVar14 != piVar15[1]) goto LAB_05fcfaf8;
        }
        plVar6 = in_stack_00000138;
        if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *in_stack_00000138;
        lVar9 = *(long *)puVar5;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar9) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05fcfae4;
            }
            uVar16 = uVar16 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000138,lVar9,0);
LAB_05fcfae4:
        (*(code *)*puVar10)(plVar6);
      }
LAB_05fcfaf8:
      plVar6 = in_stack_00000138;
      if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *in_stack_00000138;
      lVar9 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto Unity_Services_Vivox_vx_device_t___ctor;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000138,lVar9,0);
Unity_Services_Vivox_vx_device_t___ctor:
      (*(code *)*puVar10)(plVar6,unaff_x19 + 2,2,puVar10[1]);
      plVar6 = in_stack_00000138;
      puVar13 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      lVar9 = *(long *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar9 = *(long *)puVar13;
      }
      puVar10 = *(undefined8 **)(lVar9 + 0xb8);
      lVar8 = puVar10[3];
      if (lVar8 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar10 = *(undefined8 **)(*(long *)puVar13 + 0xb8);
        }
        uVar17 = *puVar10;
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputDeviceMatcher_MatcherJson_Capability>__
                                  );
        FUN_04444ef4(lVar8,uVar17,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                     ,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar13 + 0xb8) + 0x18);
        *plVar11 = lVar8;
        LeanTween__value(plVar11,lVar8);
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar6;
      lVar18 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputControl,_InputControlList<InputControl>>__
      ;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)(lVar18 + 0x20)) {
            lVar9 = lVar9 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 + 0x138;
            goto LAB_05fcfc44;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      lVar9 = FUN_02dd004c(plVar6);
LAB_05fcfc44:
      lVar9 = thunk_FUN_02db5310(*(undefined8 *)(lVar9 + 8),lVar18);
      (**(code **)(lVar9 + 8))(plVar6,lVar8,lVar9);
      plVar6 = in_stack_00000138;
      if (in_stack_00000138 != (long *)0x0) {
        lVar9 = *in_stack_00000138;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05fcfcc8;
            }
            uVar16 = uVar16 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000138,*(long *)PTR_DAT_069fbff0,0);
LAB_05fcfcc8:
        (*(code *)*puVar10)(plVar6,puVar10[1]);
      }
      return;
    }
    uVar17 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar13 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputActionMap>__;
  }
LAB_05fcfda8:
  uVar12 = thunk_FUN_02dfd288(puVar13);
  uVar17 = FUN_0536d554(uVar17,unaff_x22,uVar12,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar12 = thunk_FUN_02dd3144();
  FUN_05452924(uVar12,uVar17,0);
  uVar17 = thunk_FUN_02dfd288(
                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar12,uVar17);
}


