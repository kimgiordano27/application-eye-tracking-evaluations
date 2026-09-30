/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$centerControllerToEye
ENTRY_POINT: 01cb8dcc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 VRReady_Scripts_OVR_OVRManagerHelper__centerControllerToEye(void)

{
  size_t __size;
  undefined *puVar1;
  __shared_count *p_Var2;
  char *__ptr;
  bool bVar3;
  int iVar4;
  char *__ptr_00;
  char *__ptr_01;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x22;
  undefined8 unaff_x23;
  size_t __size_00;
  byte unaff_w26;
  char *pcVar9;
  ctype *pcVar10;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000050;
  char *in_stack_00000060;
  char *in_stack_00000068;
  undefined8 in_stack_00000070;
  basic_string bStack0000000000000078;
  ulong in_stack_00000080;
  void *in_stack_00000088;
  basic_string bStack0000000000000090;
  ulong in_stack_00000098;
  void *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  void *in_stack_000000b8;
  char cStack00000000000000c0;
  char cStack00000000000000c4;
  __shared_count *in_stack_000000c8;
  char *in_stack_000000d0;
  undefined *in_stack_000000e0;
  undefined *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  __cxa_guard_release();
  iVar4 = std::__ndk1::__libcpp_asprintf_l
                    (&stack0x000000d0,*(__locale_t **)(unaff_x19 + 0x5b8),"%.0Lf",in_stack_00000050)
  ;
  __ptr = in_stack_000000d0;
  if (in_stack_000000d0 == (char *)0x0) {
    std::__throw_bad_alloc();
  }
  else {
    __size_00 = (size_t)iVar4;
    __ptr_00 = malloc(__size_00);
    if (__ptr_00 != (char *)0x0) {
      std::__ndk1::ios_base::getloc();
      p_Var2 = in_stack_000000c8;
      puVar1 = StringLiteral_16841;
      in_stack_000000f0 = 0;
      in_stack_000000e0 = StringLiteral_16841;
      in_stack_000000e8 = StringLiteral_16877;
      if (*(long *)StringLiteral_16841 != -1) {
        in_stack_000000a8 = &stack0x000000e0;
        _bStack0000000000000090 = &stack0x000000a8;
        std::__ndk1::__call_once((ulong *)StringLiteral_16841,&stack0x00000090,FUN_01cd10f4);
      }
      lVar8 = *(long *)(p_Var2 + 0x10);
      if (((ulong)(*(long *)(p_Var2 + 0x18) - lVar8 >> 3) <= (long)*(int *)(puVar1 + 8) - 1U) ||
         (pcVar10 = *(ctype **)(lVar8 + ((long)*(int *)(puVar1 + 8) - 1U) * 8),
         pcVar10 == (ctype *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c6efd0();
      }
      (**(code **)(*(long *)pcVar10 + 0x40))
                (pcVar10,in_stack_000000d0,in_stack_000000d0 + __size_00,__ptr_00);
      if (__size_00 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *in_stack_000000d0 == '-';
      }
      in_stack_000000a8 = (undefined8 *)0x0;
      in_stack_000000b0 = 0;
      in_stack_000000b8 = (void *)0x0;
      _bStack0000000000000090 = (undefined8 *)0x0;
      in_stack_00000098 = 0;
      in_stack_000000a0 = (void *)0x0;
      _bStack0000000000000078 = 0;
      in_stack_00000080 = 0;
      in_stack_00000088 = (void *)0x0;
      std::__ndk1::__money_put<char>::__gather_info
                ((bool)(unaff_w26 & 1),bVar3,(locale *)&stack0x000000c8,(pattern *)&stack0x000000d8,
                 (char *)((long)&stack0x000000c0 + 4),&stack0x000000c0,
                 (basic_string *)&stack0x000000a8,&stack0x00000090,&stack0x00000078,
                 (int *)((long)&stack0x00000070 + 4));
      if (in_stack_00000070._4_4_ < iVar4) {
        uVar6 = (ulong)((byte)bStack0000000000000078 >> 1);
        if ((_bStack0000000000000078 & 1) != 0) {
          uVar6 = in_stack_00000080;
        }
        uVar7 = (ulong)((byte)bStack0000000000000090 >> 1);
        if (((ulong)_bStack0000000000000090 & 1) != 0) {
          uVar7 = in_stack_00000098;
        }
        lVar8 = (__size_00 * 2 - (long)in_stack_00000070._4_4_) + 1;
      }
      else {
        uVar6 = (ulong)((byte)bStack0000000000000078 >> 1);
        if ((_bStack0000000000000078 & 1) != 0) {
          uVar6 = in_stack_00000080;
        }
        uVar7 = (ulong)((byte)bStack0000000000000090 >> 1);
        if (((ulong)_bStack0000000000000090 & 1) != 0) {
          uVar7 = in_stack_00000098;
        }
        lVar8 = (long)in_stack_00000070._4_4_ + 2;
      }
      __size = lVar8 + uVar6 + uVar7;
      if (__size < 0x65) {
LAB_01cb8c88:
        __ptr_01 = (char *)0x0;
        pcVar9 = (char *)&stack0x000000e0;
      }
      else {
        __ptr_01 = malloc(__size);
        pcVar9 = __ptr_01;
        if (__ptr_01 == (char *)0x0) {
          std::__throw_bad_alloc();
          goto LAB_01cb8c88;
        }
      }
      std::__ndk1::__money_put<char>::__format
                (pcVar9,&stack0x00000068,&stack0x00000060,*(uint *)(unaff_x22 + 8),__ptr_00,
                 __ptr_00 + __size_00,pcVar10,bVar3,(pattern *)&stack0x000000d8,
                 cStack00000000000000c4,cStack00000000000000c0,(basic_string *)&stack0x000000a8,
                 &stack0x00000090,&stack0x00000078,in_stack_00000070._4_4_);
      uVar5 = FUN_01c6f40c(unaff_x23,pcVar9,in_stack_00000068,in_stack_00000060);
      if (__ptr_01 != (char *)0x0) {
        free(__ptr_01);
      }
      if ((_bStack0000000000000078 & 1) != 0) {
        operator_delete(in_stack_00000088);
      }
      if (((ulong)_bStack0000000000000090 & 1) != 0) {
        operator_delete(in_stack_000000a0);
      }
      if (((ulong)in_stack_000000a8 & 1) != 0) {
        operator_delete(in_stack_000000b8);
      }
      std::__ndk1::__shared_count::__release_shared(in_stack_000000c8);
      if (__ptr_00 != (char *)0x0) {
        free(__ptr_00);
      }
      if (__ptr != (char *)0x0) {
        free(__ptr);
      }
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar5;
      }
      goto LAB_01cb8ddc;
    }
  }
  std::__throw_bad_alloc();
LAB_01cb8ddc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


