/*
FUNCTION_NAME: FUN_05fcf460
ENTRY_POINT: 05fcf460
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_14;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fcfd58) */

void FUN_05fcf460(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar14;
  int *piVar15;
  ulong uVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_178 [4];
  int local_174;
  int iStack_170;
  int local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_f8;
  undefined8 local_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puVar13;
  
  puVar13 = Method_System_Span<FrameTiming>__ctor__;
                    /* try { // try from 05fcf490 to 060cf497 has its CatchHandler @ 05fce880 */
                    /* try { // try from 05fcf498 to 060cf49b has its CatchHandler @ 05fcf4f4 */
                    /* try { // try from 05fcf49c to 060cf49f has its CatchHandler @ 05fcf4ec */
                    /* try { // try from 05fcf4a0 to 060cf4a3 has its CatchHandler @ 05fcf4e8 */
                    /* try { // try from 05fcf4a4 to 060cf4a7 has its CatchHandler @ 05fcf4e4 */
  if ((DAT_06dc481a & 1) == 0) {
                    /* try { // try from 05fcf4a8 to 060cf4b3 has its CatchHandler @ 05fce880 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputDeviceMatcher_MatcherJson_Capability>__
                );
                    /* try { // try from 05fcf4b4 to 060cf4b7 has its CatchHandler @ 05fcf4dc */
                    /* try { // try from 05fcf4b8 to 060cf4bb has its CatchHandler @ 05fcf4d4 */
                    /* try { // try from 05fcf4bc to 060cf4bf has its CatchHandler @ 05fcf4cc */
    FUN_02d965b8(Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
                    /* try { // try from 05fcf4c0 to 060cf4c3 has its CatchHandler @ 05fcf4c8 */
                    /* catch() { ... } // from try @ 05fcf30c with catch @ 05fcf4c4
                       try { // try from 05fcf4c4 to 060cf51f has its CatchHandler @ 05fce880 */
                    /* catch() { ... } // from try @ 05fcf4c0 with catch @ 05fcf4c8 */
    FUN_02d965b8(PTR_DAT_069fbff0);
                    /* catch() { ... } // from try @ 05fcf4bc with catch @ 05fcf4cc */
                    /* catch() { ... } // from try @ 05fcf288 with catch @ 05fcf4d0 */
                    /* catch() { ... } // from try @ 05fcf4b8 with catch @ 05fcf4d4 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputControl,_InputControlList<InputControl>>__
                );
                    /* catch() { ... } // from try @ 05fcf270 with catch @ 05fcf4d8 */
                    /* catch() { ... } // from try @ 05fcf4b4 with catch @ 05fcf4dc */
                    /* catch() { ... } // from try @ 05fcf31c with catch @ 05fcf4e0 */
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
                    /* catch() { ... } // from try @ 05fcf4a4 with catch @ 05fcf4e4 */
                    /* catch() { ... } // from try @ 05fcf4a0 with catch @ 05fcf4e8 */
                    /* catch() { ... } // from try @ 05fcf49c with catch @ 05fcf4ec */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputDevice,_ReadOnlyArray<InputDevice>>__
                );
                    /* catch() { ... } // from try @ 05fcf3fc with catch @ 05fcf4f0 */
                    /* catch() { ... } // from try @ 05fcf498 with catch @ 05fcf4f4 */
                    /* catch() { ... } // from try @ 05fcf418 with catch @ 05fcf4f8 */
    FUN_02d965b8(Method_System_Span<FrameTiming>__ctor__);
                    /* catch() { ... } // from try @ 05fcf3d8 with catch @ 05fcf4fc */
                    /* catch() { ... } // from try @ 05fcf22c with catch @ 05fcf500 */
                    /* catch() { ... } // from try @ 05fcf1c8 with catch @ 05fcf504 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
                );
    DAT_06dc481a = 1;
  }
                    /* try { // try from 05fcf520 to 060cf523 has its CatchHandler @ 05fcf530 */
                    /* try { // try from 05fcf524 to 060cf533 has its CatchHandler @ 05fce880 */
  local_f8 = 0;
                    /* catch() { ... } // from try @ 05fcf520 with catch @ 05fcf530 */
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
                    /* try { // try from 05fcf534 to 060cf53b has its CatchHandler @ 05fcf694 */
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
                    /* try { // try from 05fcf53c to 060cf55b has its CatchHandler @ 05fce880 */
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
                    /* catch() { ... } // from try @ 05fcf458 with catch @ 05fcf540 */
  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4285 == '\0') {
                    /* try { // try from 05fcf55c to 060cf55f has its CatchHandler @ 05fcf680 */
    FUN_02d965b8(PTR_DAT_06a0f5d8);
                    /* try { // try from 05fcf560 to 060cf683 has its CatchHandler @ 05fce880 */
    DAT_06dc4285 = '\x01';
  }
  puVar13 = PTR_DAT_06a0f5d8;
  if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4286 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4286 = '\x01';
  }
  iVar17 = (uint)*(ushort *)((long)param_2 + 0x12) << 0x10;
  if (*(ushort *)((long)param_2 + 0x12) == 0) {
LAB_05fcfcfc:
    uVar18 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar13 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Finger>__;
    goto LAB_05fcfda8;
  }
  lVar7 = *(long *)puVar13;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar7 = *(long *)puVar13;
  }
  piVar15 = *(int **)(lVar7 + 0xb8);
  if (iVar17 != *piVar15) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      piVar15 = *(int **)(*(long *)puVar13 + 0xb8);
    }
    if (iVar17 != piVar15[1]) goto LAB_05fcfcfc;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05fb45b0(auStack_178,param_1,param_2[2],param_2[3],0);
  memcpy(&stack0xffffffffffffff10,auStack_178,0x80);
  iVar1 = uStack_e8._4_4_;
  iVar17 = iStack_ec;
  if (iStack_ec <= (int)uStack_e8) {
    iVar17 = (int)uStack_e8;
  }
  if (iVar17 <= uStack_e8._4_4_) {
    iVar17 = uStack_e8._4_4_;
  }
  if (DAT_06dc486c == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06dc486c = '\x01';
  }
  puVar13 = PTR_DAT_069fbb48;
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  dVar20 = (double)FUN_054e8f58((double)iVar17,0x4000000000000000,0);
  iVar17 = -0x7fffffff;
  if ((float)dVar20 != INFINITY) {
    iVar17 = (int)dVar20 + 1;
  }
  if (*(int *)(param_2 + 7) == -1) {
    *(int *)(param_2 + 7) = iVar1 - *(int *)((long)param_2 + 0x34);
  }
  if (*(int *)((long)param_2 + 0x44) == -1) {
    *(int *)((long)param_2 + 0x44) = iVar17 - *(int *)(param_2 + 8);
  }
  if (*(int *)(*(long *)Method_System_Span<FrameTiming>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4285 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4285 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4286 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4286 = '\x01';
  }
  puVar5 = PTR_DAT_06a0f5d8;
  iVar14 = (uint)*(ushort *)((long)param_2 + 2) << 0x10;
  if (*(ushort *)((long)param_2 + 2) != 0) {
    lVar7 = *(long *)PTR_DAT_06a0f5d8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar5;
    }
    piVar15 = *(int **)(lVar7 + 0xb8);
    if (iVar14 != *piVar15) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar15 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
      }
      if (iVar14 != piVar15[1]) goto LAB_05fcf87c;
    }
    FUN_05fb45b0(auStack_178,param_1,*param_2,param_2[1],0);
    if (local_174 <= iStack_170) {
      local_174 = iStack_170;
    }
    iVar14 = local_174;
    if (local_174 <= local_16c) {
      iVar14 = local_16c;
    }
    if (DAT_06dc486c == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06dc486c = '\x01';
    }
    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    dVar20 = (double)FUN_054e8f58((double)iVar14,0x4000000000000000,0);
    iVar14 = -0x7fffffff;
    if ((float)dVar20 != INFINITY) {
      iVar14 = (int)dVar20 + 1;
    }
    if ((*(int *)(param_2 + 6) != -1) && (local_16c - *(int *)(param_2 + 6) < *(int *)(param_2 + 7))
       ) {
      uVar18 = thunk_FUN_02dfd288(
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                                 );
      puVar13 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputBindingComposite>__
      ;
      goto LAB_05fcfda8;
    }
    if ((*(int *)((long)param_2 + 0x3c) != -1) &&
       (iVar14 - *(int *)((long)param_2 + 0x3c) < *(int *)((long)param_2 + 0x44))) {
      uVar18 = thunk_FUN_02dfd288(
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                                 );
      puVar13 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputControl>__;
      goto LAB_05fcfda8;
    }
  }
LAB_05fcf87c:
  if (iVar1 - *(int *)((long)param_2 + 0x34) < *(int *)(param_2 + 7)) {
    uVar18 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar13 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Gamepad>__;
  }
  else {
    if (*(int *)((long)param_2 + 0x44) <= iVar17 - *(int *)(param_2 + 8)) {
      plVar8 = (long *)FUN_037fefa4(param_1,param_3,&local_f8,param_4,param_5,
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputDevice,_ReadOnlyArray<InputDevice>>__
                                   );
      lVar7 = local_f8;
      if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(local_f8 + 0x10) = *(undefined4 *)(param_2 + 0xc);
      uVar18 = *param_2;
      *(undefined8 *)(local_f8 + 0x1c) = param_2[1];
      *(undefined8 *)(local_f8 + 0x14) = uVar18;
      memcpy(auStack_178,param_2,0x78);
      *(undefined8 *)(lVar7 + 0x2c) = uStack_160;
      *(undefined8 *)(lVar7 + 0x24) = local_168;
      *(undefined8 *)(lVar7 + 0x34) = param_2[4];
      *(undefined8 *)(lVar7 + 0x3c) = param_2[5];
      *(undefined8 *)(lVar7 + 0x48) = param_2[9];
      LeanTween__value((undefined8 *)(lVar7 + 0x48));
      if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(local_f8 + 0x50) = *(undefined4 *)(param_2 + 10);
      *(undefined8 *)(local_f8 + 0x58) = param_2[0xb];
      LeanTween__value();
      lVar7 = local_f8;
      if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar1 = *(int *)(param_2 + 6);
      *(int *)(local_f8 + 0x60) = iVar1;
      uVar2 = *(undefined4 *)((long)param_2 + 0x34);
      iVar17 = 0;
      if (iVar1 != -1) {
        iVar17 = iVar1;
      }
      *(undefined4 *)(local_f8 + 100) = uVar2;
      uVar3 = *(undefined4 *)(param_2 + 7);
      *(undefined4 *)(local_f8 + 0x68) = uVar3;
      *(undefined4 *)(local_f8 + 0x6c) = *(undefined4 *)((long)param_2 + 0x3c);
      *(undefined4 *)(local_f8 + 0x70) = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined4 *)((long)param_2 + 0x44);
      *(undefined4 *)(local_f8 + 0x74) = uVar4;
      *(undefined4 *)(local_f8 + 0x78) = *(undefined4 *)(param_2 + 0xe);
      *(undefined4 *)(local_f8 + 0x7c) = *(undefined4 *)((long)param_2 + 100);
      puVar13 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
      *(undefined4 *)(local_f8 + 0x80) = *(undefined4 *)(param_2 + 0xd);
      lVar9 = *(long *)puVar13;
      *(undefined4 *)(local_f8 + 0x84) = *(undefined4 *)((long)param_2 + 0x6c);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar6 = FUN_05fce98c(&stack0xffffffffffffff10,iVar17,uVar2,uVar3,uVar4);
      puVar13 = Method_System_Span<FrameTiming>__ctor__;
      *(byte *)(lVar7 + 0x88) = bVar6 & 1;
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar13 = PTR_DAT_06a0f5d8;
      if (DAT_06dc4285 == '\0') {
        FUN_02d965b8(PTR_DAT_06a0f5d8);
        DAT_06dc4285 = '\x01';
      }
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc4286 == '\0') {
        FUN_02d965b8(PTR_DAT_06a0f5d8);
        DAT_06dc4286 = '\x01';
      }
      puVar5 = Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__;
      iVar17 = (uint)*(ushort *)((long)param_2 + 2) << 0x10;
      if (*(ushort *)((long)param_2 + 2) != 0) {
        lVar7 = *(long *)puVar13;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar13;
        }
        piVar15 = *(int **)(lVar7 + 0xb8);
        if (iVar17 != *piVar15) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            piVar15 = *(int **)(*(long *)puVar13 + 0xb8);
          }
          if (iVar17 != piVar15[1]) goto LAB_05fcfaf8;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = *plVar8;
        lVar7 = *(long *)puVar5;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05fcfae4;
            }
            uVar16 = uVar16 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar8,lVar7,0);
LAB_05fcfae4:
        (*(code *)*puVar10)(plVar8,param_2,1,puVar10[1]);
      }
LAB_05fcfaf8:
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar8;
      lVar7 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto Unity_Services_Vivox_vx_device_t___ctor;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar8,lVar7,0);
Unity_Services_Vivox_vx_device_t___ctor:
      (*(code *)*puVar10)(plVar8,param_2 + 2,2,puVar10[1]);
      puVar13 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      lVar7 = *(long *)
               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar13;
      }
      puVar10 = *(undefined8 **)(lVar7 + 0xb8);
      lVar9 = puVar10[3];
      if (lVar9 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar10 = *(undefined8 **)(*(long *)puVar13 + 0xb8);
        }
        uVar18 = *puVar10;
        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputDeviceMatcher_MatcherJson_Capability>__
                                  );
        FUN_04444ef4(lVar9,uVar18,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                     ,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar13 + 0xb8) + 0x18);
        *plVar11 = lVar9;
        LeanTween__value(plVar11,lVar9);
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar8;
      lVar19 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputControl,_InputControlList<InputControl>>__
      ;
      uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)(lVar19 + 0x20)) {
            lVar7 = lVar7 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 + 0x138;
            goto LAB_05fcfc44;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      lVar7 = FUN_02dd004c(plVar8);
LAB_05fcfc44:
      lVar7 = thunk_FUN_02db5310(*(undefined8 *)(lVar7 + 8),lVar19);
      (**(code **)(lVar7 + 8))(plVar8,lVar9,lVar7);
      if (plVar8 != (long *)0x0) {
        lVar7 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar16 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05fcfcc8;
            }
            uVar16 = uVar16 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_05fcfcc8:
        (*(code *)*puVar10)(plVar8,puVar10[1]);
      }
      return;
    }
    uVar18 = thunk_FUN_02dfd288(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    puVar13 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputActionMap>__;
  }
LAB_05fcfda8:
  uVar12 = thunk_FUN_02dfd288(puVar13);
  uVar18 = FUN_0536d554(uVar18,param_3,uVar12,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar12 = thunk_FUN_02dd3144();
  FUN_05452924(uVar12,uVar18,0);
  uVar18 = thunk_FUN_02dfd288(
                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar12,uVar18);
}


