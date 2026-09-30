/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$Initialize
ENTRY_POINT: 05fcf8e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05fcfd58) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__Initialize(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 in_w8;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_000000a8;
  long *in_stack_00000138;
  
  *(undefined4 *)(unaff_x20 + 0x10) = in_w8;
  uVar16 = *unaff_x19;
  *(undefined8 *)(unaff_x20 + 0x1c) = unaff_x19[1];
  *(undefined8 *)(unaff_x20 + 0x14) = uVar16;
  memcpy(param_1,param_2,0x78);
  *(undefined8 *)(unaff_x20 + 0x2c) = in_stack_00000040;
  *(undefined8 *)(unaff_x20 + 0x24) = in_stack_00000038;
  *(undefined8 *)(unaff_x20 + 0x34) = unaff_x19[4];
  *(undefined8 *)(unaff_x20 + 0x3c) = unaff_x19[5];
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19[9];
  LeanTween__value((undefined8 *)(unaff_x20 + 0x48));
  if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 05fcf928 to 060cf94f has its CatchHandler @ 05fcfa14 */
  *(undefined4 *)(in_stack_000000a8 + 0x50) = *(undefined4 *)(unaff_x19 + 10);
  *(undefined8 *)(in_stack_000000a8 + 0x58) = unaff_x19[0xb];
  LeanTween__value();
  if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = *(int *)(unaff_x19 + 6);
  *(int *)(in_stack_000000a8 + 0x60) = iVar1;
  uVar2 = *(undefined4 *)((long)unaff_x19 + 0x34);
  iVar5 = 0;
  if (iVar1 != -1) {
    iVar5 = iVar1;
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
  puVar6 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
  *(undefined4 *)(in_stack_000000a8 + 0x80) = *(undefined4 *)(unaff_x19 + 0xd);
  lVar10 = *(long *)puVar6;
  *(undefined4 *)(in_stack_000000a8 + 0x84) = *(undefined4 *)((long)unaff_x19 + 0x6c);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  bVar9 = FUN_05fce98c(&stack0x000000b0,iVar5,uVar2,uVar3,uVar4);
  puVar6 = Method_System_Span<FrameTiming>__ctor__;
  *(byte *)(in_stack_000000a8 + 0x88) = bVar9 & 1;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar6 = PTR_DAT_06a0f5d8;
  if (*(char *)(unaff_x27 + 0x285) == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    *(undefined1 *)(unaff_x27 + 0x285) = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (*(char *)(unaff_x26 + 0x286) == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    *(undefined1 *)(unaff_x26 + 0x286) = 1;
  }
  puVar7 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
  iVar5 = (uint)*(ushort *)((long)unaff_x19 + 2) << 0x10;
  if (*(ushort *)((long)unaff_x19 + 2) != 0) {
    lVar10 = *(long *)puVar6;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar10 = *(long *)puVar6;
    }
    piVar13 = *(int **)(lVar10 + 0xb8);
    if (iVar5 != *piVar13) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar13 = *(int **)(*(long *)puVar6 + 0xb8);
      }
      if (iVar5 != piVar13[1]) goto LAB_05fcfaf8;
    }
    plVar8 = in_stack_00000138;
    if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar14 = *in_stack_00000138;
    lVar10 = *(long *)puVar7;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05fcfae4;
        }
        uVar15 = uVar15 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02dd004c(in_stack_00000138,lVar10,0);
LAB_05fcfae4:
    (*(code *)*puVar11)(plVar8);
  }
LAB_05fcfaf8:
  plVar8 = in_stack_00000138;
  if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar14 = *in_stack_00000138;
  lVar10 = *(long *)puVar7;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar10) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
        goto Unity_Services_Vivox_vx_device_t___ctor;
      }
      uVar15 = uVar15 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_02dd004c(in_stack_00000138,lVar10,0);
Unity_Services_Vivox_vx_device_t___ctor:
  (*(code *)*puVar11)(plVar8,unaff_x19 + 2,2,puVar11[1]);
  plVar8 = in_stack_00000138;
  puVar6 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
  ;
  lVar10 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
  ;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar10 = *(long *)puVar6;
  }
  puVar11 = *(undefined8 **)(lVar10 + 0xb8);
  lVar14 = puVar11[3];
  if (lVar14 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar11 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    }
    uVar16 = *puVar11;
    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputDeviceMatcher_MatcherJson_Capability>__
                               );
    FUN_04444ef4(lVar14,uVar16,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                 ,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
    *plVar12 = lVar14;
    LeanTween__value(plVar12,lVar14);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *plVar8;
  lVar17 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputControl,_InputControlList<InputControl>>__
  ;
  uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar15 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x20)) {
        lVar10 = lVar10 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
        goto LAB_05fcfc44;
      }
      uVar15 = uVar15 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar15 != 0);
  }
  lVar10 = FUN_02dd004c(plVar8);
LAB_05fcfc44:
  lVar10 = thunk_FUN_02db5310(*(undefined8 *)(lVar10 + 8),lVar17);
  (**(code **)(lVar10 + 8))(plVar8,lVar14,lVar10);
  plVar8 = in_stack_00000138;
  if (in_stack_00000138 != (long *)0x0) {
    lVar10 = *in_stack_00000138;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05fcfcc8;
        }
        uVar15 = uVar15 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02dd004c(in_stack_00000138,*(long *)PTR_DAT_069fbff0,0);
LAB_05fcfcc8:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  return;
}


