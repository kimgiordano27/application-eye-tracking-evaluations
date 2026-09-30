/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 012ba8b0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_VirtualKeyboardModelAnimationState>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  __locale_t p_Var5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar9;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  FUN_012cff34();
  lVar6 = *unaff_x20;
  p_Var4 = *(__shared_count **)(lVar6 + unaff_x22 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined8 *)(lVar6 + unaff_x22 * 8) = unaff_x21;
  puVar1 = PTR_id_027e6850;
  DAT_02b5e0b0 = PTR_vtable_027e6910 + 0x10;
  in_stack_00000010 = PTR_id_027e6850;
  DAT_02b5e0b8 = 0;
  if (*(long *)PTR_id_027e6850 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6850,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0b0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e0b0;
  puVar1 = PTR_id_027e6920;
  DAT_02b5e0c0 = PTR_vtable_027e6918 + 0x10;
  in_stack_00000010 = PTR_id_027e6920;
  DAT_02b5e0c8 = 0;
  if (*(long *)PTR_id_027e6920 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6920,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0c0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e0c0;
  puVar1 = PTR_id_027e6930;
  DAT_02b5e0d0 = PTR_vtable_027e6928 + 0x10;
  in_stack_00000010 = PTR_id_027e6930;
  DAT_02b5e0d8 = 0;
  if (*(long *)PTR_id_027e6930 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6930,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0d0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e0d0;
  puVar1 = PTR_id_027e6940;
  DAT_02b5e0e0 = PTR_vtable_027e6938 + 0x10;
  in_stack_00000010 = PTR_id_027e6940;
  DAT_02b5e0e8 = 0;
  if (*(long *)PTR_id_027e6940 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6940,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0e0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e0e0;
  puVar1 = PTR_id_027e6950;
  DAT_02b5e0f0 = PTR_vtable_027e6948 + 0x10;
  in_stack_00000010 = PTR_id_027e6950;
  DAT_02b5e0f8 = 0;
  if (*(long *)PTR_id_027e6950 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6950,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0f0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e0f0;
  puVar1 = PTR_id_027e6960;
  DAT_02b5e100 = PTR_vtable_027e6958 + 0x10;
  DAT_02b5e110 = PTR_vtable_027e6958 + 0x70;
  in_stack_00000010 = PTR_id_027e6960;
  DAT_02b5e108 = 0;
  if (*(long *)PTR_id_027e6960 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6960,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e100);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e100;
  puVar1 = PTR_id_027e6970;
  DAT_02b5e120 = PTR_vtable_027e6968 + 0x10;
  DAT_02b5e130 = PTR_vtable_027e6968 + 0x70;
  in_stack_00000010 = PTR_id_027e6970;
  DAT_02b5e128 = 0;
  if (*(long *)PTR_id_027e6970 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6970,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e120);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e120;
  puVar1 = PTR_vtable_027e6978;
  DAT_02b5e140 = PTR_vtable_027e6978 + 0x10;
  DAT_02b5e148 = 0;
  if (((DAT_02b5d570 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02b5d570), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0x568) = p_Var5;
    __cxa_guard_release(&DAT_02b5d570);
  }
  puVar2 = PTR_id_027e6988;
  DAT_02b5e150 = *(undefined8 *)(unaff_x28 + 0x568);
  DAT_02b5e140 = PTR_vtable_027e6980 + 0x10;
  in_stack_00000010 = PTR_id_027e6988;
  if (*(long *)PTR_id_027e6988 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6988,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e140);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e140;
  DAT_02b5e160 = puVar1 + 0x10;
  DAT_02b5e168 = 0;
  if (((DAT_02b5d570 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02b5d570), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0x568) = p_Var5;
    __cxa_guard_release(&DAT_02b5d570);
  }
  puVar1 = PTR_id_027e6998;
  DAT_02b5e170 = *(undefined8 *)(unaff_x28 + 0x568);
  DAT_02b5e160 = PTR_vtable_027e6990 + 0x10;
  in_stack_00000010 = PTR_id_027e6998;
  if (*(long *)PTR_id_027e6998 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6998,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e160);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e160;
  puVar1 = PTR_id_027e69a8;
  DAT_02b5e180 = PTR_vtable_027e69a0 + 0x10;
  in_stack_00000010 = PTR_id_027e69a8;
  DAT_02b5e188 = 0;
  if (*(long *)PTR_id_027e69a8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e69a8,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e180);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e180;
  puVar1 = PTR_id_027e69b8;
  DAT_02b5e190 = PTR_vtable_027e69b0 + 0x10;
  in_stack_00000010 = PTR_id_027e69b8;
  DAT_02b5e198 = 0;
  if (*(long *)PTR_id_027e69b8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e69b8,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e190);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_02b5e190;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


