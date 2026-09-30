/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Bone>
ENTRY_POINT: 012b9d5c
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


void System_Array__InternalArray__set_Item<OVRPlugin_Bone>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  std::__ndk1::__call_once
            ((ulong *)PTR_id_027e6648,(void *)(unaff_x29 + -0x18),System_Array__Reverse<XRNodeState>
            );
  uVar5 = (ulong)*(int *)(unaff_x21 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5df60);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined8 **)(lVar6 + uVar8 * 8) = &DAT_02b5df60;
  puVar1 = PTR_id_027e6798;
  DAT_02b5df80 = PTR_vtable_027e6888 + 0x10;
  in_stack_00000010 = PTR_id_027e6798;
  DAT_02b5df88 = 0;
  if (*(long *)PTR_id_027e6798 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6798,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5df80);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5df80;
  puVar1 = PTR_id_027e6630;
  DAT_02b5df90 = PTR_vtable_027e6890 + 0x10;
  in_stack_00000010 = PTR_id_027e6630;
  DAT_02b5df98 = 0;
  if (*(long *)PTR_id_027e6630 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6630,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5df90);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5df90;
  DAT_02b5dfa0 = PTR_vtable_027e6898 + 0x10;
  DAT_02b5dfa8 = 0;
  if (((DAT_02b5d570 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02b5d570), iVar3 != 0)) {
    DAT_02b5d568 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_02b5d570);
  }
  puVar1 = PTR_id_027e68a0;
  DAT_02b5dfb0 = DAT_02b5d568;
  in_stack_00000010 = PTR_id_027e68a0;
  if (*(long *)PTR_id_027e68a0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e68a0,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5dfa0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5dfa0;
  puVar1 = PTR_id_027e68b0;
  DAT_02b5dfc0 = PTR_vtable_027e68a8 + 0x10;
  in_stack_00000010 = PTR_id_027e68b0;
  DAT_02b5dfc8 = 0;
  if (*(long *)PTR_id_027e68b0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e68b0,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5dfc0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5dfc0;
  puVar1 = PTR_id_027e68c0;
  DAT_02b5dfd0 = PTR_vtable_027e68b8 + 0x10;
  in_stack_00000010 = PTR_id_027e68c0;
  DAT_02b5dfd8 = 0;
  if (*(long *)PTR_id_027e68c0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e68c0,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5dfd0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5dfd0;
  puVar1 = PTR_id_027e6808;
  DAT_02b5dff0 = 0x2c2e;
  DAT_02b5dfe0 = PTR_vtable_027e68c8 + 0x10;
  DAT_02b5e000 = 0;
  DAT_02b5e008 = 0;
  DAT_02b5dff8 = 0;
  in_stack_00000010 = PTR_id_027e6808;
  DAT_02b5dfe8 = 0;
  if (*(long *)PTR_id_027e6808 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6808,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5dfe0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5dfe0;
  puVar1 = PTR_id_027e6818;
  DAT_02b5e010 = PTR_vtable_027e68d0 + 0x10;
  DAT_02b5e030 = 0;
  DAT_02b5e038 = 0;
  DAT_02b5e028 = 0;
  in_stack_00000010 = PTR_id_027e6818;
  DAT_02b5e018 = 0;
  DAT_02b5e020 = DAT_007458f8;
  if (*(long *)PTR_id_027e6818 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6818,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e010);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e010;
  puVar1 = PTR_id_027e6788;
  DAT_02b5e040 = PTR_vtable_027e68d8 + 0x10;
  in_stack_00000010 = PTR_id_027e6788;
  DAT_02b5e048 = 0;
  if (*(long *)PTR_id_027e6788 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6788,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e040);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e040;
  puVar1 = PTR_id_027e67a0;
  DAT_02b5e050 = PTR_vtable_027e68e0 + 0x10;
  in_stack_00000010 = PTR_id_027e67a0;
  DAT_02b5e058 = 0;
  if (*(long *)PTR_id_027e67a0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e67a0,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e050);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e050;
  puVar1 = PTR_id_027e67b0;
  DAT_02b5e060 = PTR_vtable_027e68e8 + 0x10;
  in_stack_00000010 = PTR_id_027e67b0;
  DAT_02b5e068 = 0;
  if (*(long *)PTR_id_027e67b0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e67b0,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e060);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e060;
  puVar1 = PTR_id_027e67c0;
  DAT_02b5e070 = PTR_vtable_027e68f0 + 0x10;
  in_stack_00000010 = PTR_id_027e67c0;
  DAT_02b5e078 = 0;
  if (*(long *)PTR_id_027e67c0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e67c0,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e070);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e070;
  puVar1 = PTR_id_027e6848;
  DAT_02b5e080 = PTR_vtable_027e68f8 + 0x10;
  in_stack_00000010 = PTR_id_027e6848;
  DAT_02b5e088 = 0;
  if (*(long *)PTR_id_027e6848 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6848,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e080);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e080;
  puVar1 = PTR_id_027e6840;
  DAT_02b5e090 = PTR_vtable_027e6900 + 0x10;
  in_stack_00000010 = PTR_id_027e6840;
  DAT_02b5e098 = 0;
  if (*(long *)PTR_id_027e6840 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6840,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e090);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e090;
  puVar1 = PTR_id_027e6858;
  DAT_02b5e0a0 = PTR_vtable_027e6908 + 0x10;
  in_stack_00000010 = PTR_id_027e6858;
  DAT_02b5e0a8 = 0;
  if (*(long *)PTR_id_027e6858 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6858,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0a0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e0a0;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0b0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e0b0;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0c0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e0c0;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0d0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e0d0;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0e0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e0e0;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e0f0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e0f0;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e100);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e100;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e120);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e120;
  puVar1 = PTR_vtable_027e6978;
  DAT_02b5e140 = PTR_vtable_027e6978 + 0x10;
  DAT_02b5e148 = 0;
  if (((DAT_02b5d570 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02b5d570), iVar3 != 0)) {
    DAT_02b5d568 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_02b5d570);
  }
  puVar2 = PTR_id_027e6988;
  DAT_02b5e150 = DAT_02b5d568;
  DAT_02b5e140 = PTR_vtable_027e6980 + 0x10;
  in_stack_00000010 = PTR_id_027e6988;
  if (*(long *)PTR_id_027e6988 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6988,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar2 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e140);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e140;
  DAT_02b5e160 = puVar1 + 0x10;
  DAT_02b5e168 = 0;
  if (((DAT_02b5d570 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02b5d570), iVar3 != 0)) {
    DAT_02b5d568 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_02b5d570);
  }
  puVar1 = PTR_id_027e6998;
  DAT_02b5e170 = DAT_02b5d568;
  DAT_02b5e160 = PTR_vtable_027e6990 + 0x10;
  in_stack_00000010 = PTR_id_027e6998;
  if (*(long *)PTR_id_027e6998 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)PTR_id_027e6998,(void *)(unaff_x29 + -0x18),
               System_Array__Reverse<XRNodeState>);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e160);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e160;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e180);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e180;
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
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_02b5e190);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_012cff34();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_02b5e190;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


