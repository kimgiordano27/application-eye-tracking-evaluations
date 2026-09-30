/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 01e381c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BodyJointLocation>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  bool bVar7;
  int iVar8;
  wchar_t *__ptr;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  char *__ptr_00;
  char *pcVar13;
  wchar_t *pwVar14;
  long unaff_x29;
  __shared_count *in_stack_00000000;
  wchar_t *in_stack_00000008;
  wchar_t *in_stack_00000010;
  char *pcStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  lVar5 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(lVar5 + 0x28);
  uStack0000000000000020 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&stack0x00000020 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&stack0x00000020 | 2);
    uStack0000000000000020 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((long)puVar10 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 == 0x104) {
    pcStack0000000000000018 = (char *)(unaff_x29 + -0x40);
    uVar12 = 0x61;
    if ((uVar3 & 0x4000) != 0) {
      uVar12 = 0x41;
    }
    *(undefined1 *)puVar10 = uVar12;
    if (((DAT_046c9300 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_046c9300), iVar8 != 0)) {
      DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_046c9300);
    }
    iVar8 = std::__ndk1::__libcpp_snprintf_l
                      ((char *)(unaff_x29 + -0x40),0x1e,(__locale_t *)DAT_046c92f8,
                       (char *)&stack0x00000020,param_1);
    if (iVar8 < 0x1e) goto LAB_01e3835c;
    if (((DAT_046c9300 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_046c9300), iVar8 != 0)) {
      DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_046c9300);
    }
    iVar8 = std::__ndk1::__libcpp_asprintf_l
                      (&stack0x00000018,(__locale_t *)DAT_046c92f8,(char *)&stack0x00000020,param_1)
    ;
LAB_01e38350:
    __ptr_00 = pcStack0000000000000018;
    if (pcStack0000000000000018 == (char *)0x0) {
      iVar8 = std::__throw_bad_alloc();
      goto LAB_01e3835c;
    }
  }
  else {
    *puVar10 = 0x2a2e;
    if (uVar2 == 0x100) {
      bVar7 = (uVar3 & 0x4000) == 0;
      uVar11 = 0x45;
      uVar12 = 0x65;
    }
    else if (uVar2 == 4) {
      bVar7 = (uVar3 & 0x4000) == 0;
      uVar11 = 0x46;
      uVar12 = 0x66;
    }
    else {
      bVar7 = (uVar3 & 0x4000) == 0;
      uVar11 = 0x47;
      uVar12 = 0x67;
    }
    if (!bVar7) {
      uVar12 = uVar11;
    }
    *(undefined1 *)(puVar10 + 1) = uVar12;
    pcStack0000000000000018 = (char *)(unaff_x29 + -0x40);
    if (((DAT_046c9300 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_046c9300), iVar8 != 0)) {
      DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_046c9300);
    }
    iVar8 = std::__ndk1::__libcpp_snprintf_l
                      ((char *)(unaff_x29 + -0x40),0x1e,(__locale_t *)DAT_046c92f8,
                       (char *)&stack0x00000020,param_1,(ulong)*(uint *)(param_4 + 0x10));
    if (0x1d < iVar8) {
      if (((DAT_046c9300 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_046c9300), iVar8 != 0)) {
        DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_046c9300);
      }
      iVar8 = std::__ndk1::__libcpp_asprintf_l
                        (&stack0x00000018,(__locale_t *)DAT_046c92f8,(char *)&stack0x00000020,
                         param_1,(ulong)*(uint *)(param_4 + 0x10));
      goto LAB_01e38350;
    }
LAB_01e3835c:
    __ptr_00 = (char *)0x0;
  }
  pcVar6 = pcStack0000000000000018;
  pcVar1 = pcStack0000000000000018 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar13 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar13 = pcStack0000000000000018, uVar3 == 0x10)) {
    cVar4 = *pcStack0000000000000018;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar13 = pcStack0000000000000018 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(pcStack0000000000000018[1] | 0x20U) == 0x78)
            ) {
      pcVar13 = pcStack0000000000000018 + 2;
    }
  }
  if (pcStack0000000000000018 != (char *)(unaff_x29 + -0x40)) {
    __ptr = malloc((long)iVar8 << 3);
    pwVar14 = __ptr;
    if (__ptr != (wchar_t *)0x0) goto LAB_01e383fc;
    std::__throw_bad_alloc();
  }
  __ptr = (wchar_t *)0x0;
  pwVar14 = (wchar_t *)&stack0x0000002c;
LAB_01e383fc:
  std::__ndk1::ios_base::getloc();
  std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
            (pcVar6,pcVar13,pcVar1,pwVar14,&stack0x00000010,&stack0x00000008,
             (locale *)&stack0x00000000);
  std::__ndk1::__shared_count::__release_shared(in_stack_00000000);
  uVar9 = FUN_01e37828(param_3,pwVar14,in_stack_00000010,in_stack_00000008,param_4,param_5);
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


