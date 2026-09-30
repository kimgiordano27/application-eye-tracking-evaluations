/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01e38538
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
          (undefined8 param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  wchar_t *__ptr;
  undefined8 uVar6;
  long unaff_x20;
  char *__ptr_00;
  long unaff_x23;
  char *pcVar7;
  wchar_t *pwVar8;
  long unaff_x28;
  long unaff_x29;
  __shared_count *in_stack_00000000;
  wchar_t *in_stack_00000008;
  wchar_t *in_stack_00000010;
  char *in_stack_00000018;
  
  *(undefined8 *)(unaff_x23 + 0x2f8) = param_1;
  __cxa_guard_release(&DAT_046c9300);
  iVar5 = std::__ndk1::__libcpp_asprintf_l
                    (&stack0x00000018,*(__locale_t **)(unaff_x23 + 0x2f8),&stack0x00000020);
  __ptr_00 = in_stack_00000018;
  if (in_stack_00000018 == (char *)0x0) {
    iVar5 = std::__throw_bad_alloc();
    __ptr_00 = (char *)0x0;
  }
  pcVar4 = in_stack_00000018;
  pcVar1 = in_stack_00000018 + iVar5;
  uVar2 = *(uint *)(unaff_x20 + 8) & 0xb0;
  pcVar7 = pcVar1;
  if ((uVar2 != 0x20) && (pcVar7 = in_stack_00000018, uVar2 == 0x10)) {
    cVar3 = *in_stack_00000018;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar7 = in_stack_00000018 + 1;
    }
    else if (((1 < iVar5) && (cVar3 == '0')) && ((byte)(in_stack_00000018[1] | 0x20U) == 0x78)) {
      pcVar7 = in_stack_00000018 + 2;
    }
  }
  if (in_stack_00000018 != (char *)(unaff_x29 + -0x40)) {
    __ptr = malloc((long)iVar5 << 3);
    pwVar8 = __ptr;
    if (__ptr != (wchar_t *)0x0) goto LAB_01e383fc;
    std::__throw_bad_alloc();
  }
  __ptr = (wchar_t *)0x0;
  pwVar8 = (wchar_t *)&stack0x0000002c;
LAB_01e383fc:
  std::__ndk1::ios_base::getloc();
  std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
            (pcVar4,pcVar7,pcVar1,pwVar8,&stack0x00000010,&stack0x00000008,
             (locale *)&stack0x00000000);
  std::__ndk1::__shared_count::__release_shared(in_stack_00000000);
  uVar6 = FUN_01e37828();
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x20)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


