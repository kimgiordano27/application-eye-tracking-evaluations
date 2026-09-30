/*
FUNCTION_NAME: Cinemachine.CinemachinePath$$EvaluateLocalOrientation
ENTRY_POINT: 01b18f6c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Cinemachine_CinemachinePath__EvaluateLocalOrientation(long param_1,lconv *param_2)

{
  uint uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  __locale_t __dataset;
  __locale_t p_Var6;
  size_t sVar7;
  mbstate_t *pmVar8;
  ulong uVar9;
  wchar_t wVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  void *__dest;
  char *pcVar18;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar19;
  long unaff_x29;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char *in_stack_00000008;
  int iStack0000000000000010;
  _union_27 _Stack0000000000000014;
  wchar_t wStack0000000000000018;
  ulong in_stack_00000020;
  void *in_stack_00000028;
  int iStack0000000000000030;
  _union_27 _Stack0000000000000034;
  mbstate_t in_stack_00000038;
  mbstate_t in_stack_00000040;
  
  lVar4 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar4 + 0x28);
  __dataset = newlocale(0x1fbf,(char *)param_2,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    uVar11 = strlen((char *)param_2);
    if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
  }
  else {
    p_Var6 = uselocale(__dataset);
    param_2 = localeconv();
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    pcVar18 = param_2->mon_decimal_point;
    if (*pcVar18 == '\0') {
LAB_01b19008:
      wVar10 = L'\xffffffff';
    }
    else {
      iStack0000000000000030 = 0;
      _Stack0000000000000034 = (_union_27)0x0;
      sVar7 = __strlen_chk(pcVar18,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
      sVar7 = mbrtowc(&stack0x00000018,pcVar18,sVar7,(mbstate_t *)&stack0x00000030);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_01b19008;
      wVar10 = wStack0000000000000018;
    }
    *(wchar_t *)(param_1 + 0x10) = wVar10;
    pcVar18 = param_2->mon_thousands_sep;
    if (*pcVar18 == '\0') {
LAB_01b19070:
      wVar10 = L'\xffffffff';
    }
    else {
      iStack0000000000000030 = 0;
      _Stack0000000000000034 = (_union_27)0x0;
      sVar7 = __strlen_chk(pcVar18,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
      sVar7 = mbrtowc(&stack0x00000018,pcVar18,sVar7,(mbstate_t *)&stack0x00000030);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_01b19070;
      wVar10 = wStack0000000000000018;
    }
    *(wchar_t *)(param_1 + 0x14) = wVar10;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x18),param_2->mon_grouping);
    in_stack_00000008 = param_2->int_curr_symbol;
    iStack0000000000000010 = 0;
    _Stack0000000000000014 = (_union_27)0x0;
    p_Var6 = uselocale(__dataset);
    sVar7 = mbsrtowcs(&stack0x00000030,&stack0x00000008,100,(mbstate_t *)&stack0x00000010);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 != 0xffffffffffffffff) {
      this = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(param_1 + 0x30);
      bVar2 = *this;
      uVar11 = (ulong)(byte)bVar2;
      if (((byte)bVar2 & 1) == 0) {
        if (4 < sVar7) {
          uVar11 = (ulong)((byte)bVar2 >> 1);
          uVar9 = 4;
LAB_01b19104:
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(this,uVar9,sVar7 - uVar9,uVar11,0,uVar11,0);
          uVar11 = (ulong)(byte)*this;
        }
      }
      else {
        uVar11 = *(ulong *)this;
        uVar9 = (uVar11 & 0xfffffffffffffffe) - 1;
        if (uVar9 < sVar7) {
          uVar11 = *(ulong *)(param_1 + 0x38);
          goto LAB_01b19104;
        }
      }
      if ((uVar11 & 1) == 0) {
        puVar15 = (undefined4 *)(param_1 + 0x34);
      }
      else {
        puVar15 = *(undefined4 **)(param_1 + 0x40);
      }
      if (sVar7 != 0) {
        uVar11 = sVar7 * 4 - 4;
        if ((uVar11 < 0x1c) ||
           ((puVar15 < (undefined4 *)((long)&stack0x00000030 + sVar7 * 4) &&
            (&stack0x00000030 < puVar15 + sVar7)))) {
          puVar14 = (undefined8 *)&stack0x00000030;
          puVar12 = puVar15;
        }
        else {
          uVar11 = (uVar11 >> 2) + 1;
          uVar17 = uVar11 & 0x7ffffffffffffff8;
          puVar13 = &stack0x00000040;
          puVar12 = puVar15 + uVar17;
          puVar14 = (undefined8 *)((long)&stack0x00000030 + uVar17 * 4);
          puVar16 = (undefined8 *)(puVar15 + 4);
          uVar9 = uVar17;
          do {
            puVar5 = puVar13 + -1;
            uVar20 = puVar13[-2];
            uVar22 = puVar13[1];
            uVar21 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar9 = uVar9 - 8;
            puVar16[-1] = *puVar5;
            puVar16[-2] = uVar20;
            puVar16[1] = uVar22;
            *puVar16 = uVar21;
            puVar16 = puVar16 + 4;
          } while (uVar9 != 0);
          puVar15 = puVar12;
          if (uVar11 == uVar17) goto LAB_01b19188;
        }
        do {
          puVar13 = (undefined8 *)((long)puVar14 + 4);
          puVar15 = puVar12 + 1;
          *puVar12 = *(undefined4 *)puVar14;
          puVar12 = puVar15;
          puVar14 = puVar13;
        } while ((undefined8 *)((long)&stack0x00000030 + sVar7 * 4) != puVar13);
      }
LAB_01b19188:
      *puVar15 = 0;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)sVar7 << 1,0);
      }
      else {
        *(size_t *)(param_1 + 0x38) = sVar7;
      }
      uVar1 = 0;
      if ((byte)param_2->int_frac_digits != 0xff) {
        uVar1 = (uint)(byte)param_2->int_frac_digits;
      }
      *(uint *)(param_1 + 0x78) = uVar1;
      if (param_2->int_p_sign_posn == '\0') {
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(param_1 + 0x48),L"()");
        cVar3 = param_2->int_n_sign_posn;
      }
      else {
        in_stack_00000008 = param_2->positive_sign;
        iStack0000000000000010 = 0;
        _Stack0000000000000014 = (_union_27)0x0;
        p_Var6 = uselocale(__dataset);
        sVar7 = mbsrtowcs(&stack0x00000030,&stack0x00000008,100,(mbstate_t *)&stack0x00000010);
        if (p_Var6 != (__locale_t)0x0) {
          uselocale(p_Var6);
        }
        if (sVar7 == 0xffffffffffffffff)
        goto Cinemachine_CinemachineSmoothPath__UpdateControlPoints;
        pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(param_1 + 0x48);
        bVar2 = *pbVar19;
        uVar11 = (ulong)(byte)bVar2;
        if (((byte)bVar2 & 1) == 0) {
          if (4 < sVar7) {
            uVar11 = (ulong)((byte)bVar2 >> 1);
            uVar9 = 4;
Cinemachine_CinemachinePixelPerfect__PostPipelineStageCallback:
            std::__ndk1::
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::__grow_by(pbVar19,uVar9,sVar7 - uVar9,uVar11,0,uVar11,0);
            uVar11 = (ulong)(byte)*pbVar19;
          }
        }
        else {
          uVar11 = *(ulong *)pbVar19;
          uVar9 = (uVar11 & 0xfffffffffffffffe) - 1;
          if (uVar9 < sVar7) {
            uVar11 = *(ulong *)(param_1 + 0x50);
            goto Cinemachine_CinemachinePixelPerfect__PostPipelineStageCallback;
          }
        }
        if ((uVar11 & 1) == 0) {
          puVar15 = (undefined4 *)(param_1 + 0x4c);
        }
        else {
          puVar15 = *(undefined4 **)(param_1 + 0x58);
        }
        puVar12 = puVar15;
        if (sVar7 != 0) {
          uVar11 = sVar7 * 4 - 4;
          if ((uVar11 < 0x1c) ||
             ((puVar15 < (undefined4 *)((long)&stack0x00000030 + sVar7 * 4) &&
              (&stack0x00000030 < puVar15 + sVar7)))) {
            puVar14 = (undefined8 *)&stack0x00000030;
          }
          else {
            uVar11 = (uVar11 >> 2) + 1;
            uVar17 = uVar11 & 0x7ffffffffffffff8;
            puVar13 = &stack0x00000040;
            puVar12 = puVar15 + uVar17;
            puVar14 = (undefined8 *)((long)&stack0x00000030 + uVar17 * 4);
            puVar16 = (undefined8 *)(puVar15 + 4);
            uVar9 = uVar17;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              puVar13 = puVar13 + 4;
              uVar9 = uVar9 - 8;
              puVar16[-1] = *puVar5;
              puVar16[-2] = uVar20;
              puVar16[1] = uVar22;
              *puVar16 = uVar21;
              puVar16 = puVar16 + 4;
            } while (uVar9 != 0);
            if (uVar11 == uVar17) goto LAB_01b19330;
          }
          puVar15 = puVar12;
          do {
            puVar13 = (undefined8 *)((long)puVar14 + 4);
            puVar12 = puVar15 + 1;
            *puVar15 = *(undefined4 *)puVar14;
            puVar15 = puVar12;
            puVar14 = puVar13;
          } while ((undefined8 *)((long)&stack0x00000030 + sVar7 * 4) != puVar13);
        }
LAB_01b19330:
        *puVar12 = 0;
        if (((byte)*pbVar19 & 1) == 0) {
          *pbVar19 = SUB41((int)sVar7 << 1,0);
          cVar3 = param_2->int_n_sign_posn;
        }
        else {
          *(size_t *)(param_1 + 0x50) = sVar7;
          cVar3 = param_2->int_n_sign_posn;
        }
      }
      if (cVar3 == '\0') {
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(param_1 + 0x60),L"()");
      }
      else {
        in_stack_00000008 = param_2->negative_sign;
        iStack0000000000000010 = 0;
        _Stack0000000000000014 = (_union_27)0x0;
        p_Var6 = uselocale(__dataset);
        sVar7 = mbsrtowcs(&stack0x00000030,&stack0x00000008,100,(mbstate_t *)&stack0x00000010);
        if (p_Var6 != (__locale_t)0x0) {
          uselocale(p_Var6);
        }
        if (sVar7 == 0xffffffffffffffff) goto LAB_01b195c8;
        pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(param_1 + 0x60);
        bVar2 = *pbVar19;
        uVar11 = (ulong)(byte)bVar2;
        if (((byte)bVar2 & 1) == 0) {
          if (4 < sVar7) {
            uVar11 = (ulong)((byte)bVar2 >> 1);
            uVar9 = 4;
LAB_01b19388:
            std::__ndk1::
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::__grow_by(pbVar19,uVar9,sVar7 - uVar9,uVar11,0,uVar11,0);
            uVar11 = (ulong)(byte)*pbVar19;
          }
        }
        else {
          uVar11 = *(ulong *)pbVar19;
          uVar9 = (uVar11 & 0xfffffffffffffffe) - 1;
          if (uVar9 < sVar7) {
            uVar11 = *(ulong *)(param_1 + 0x68);
            goto LAB_01b19388;
          }
        }
        if ((uVar11 & 1) == 0) {
          puVar15 = (undefined4 *)(param_1 + 100);
        }
        else {
          puVar15 = *(undefined4 **)(param_1 + 0x70);
        }
        puVar12 = puVar15;
        if (sVar7 != 0) {
          uVar11 = sVar7 * 4 - 4;
          if ((uVar11 < 0x1c) ||
             ((puVar15 < (undefined4 *)((long)&stack0x00000030 + sVar7 * 4) &&
              (&stack0x00000030 < puVar15 + sVar7)))) {
            puVar14 = (undefined8 *)&stack0x00000030;
          }
          else {
            uVar11 = (uVar11 >> 2) + 1;
            uVar17 = uVar11 & 0x7ffffffffffffff8;
            puVar13 = &stack0x00000040;
            puVar12 = puVar15 + uVar17;
            puVar14 = (undefined8 *)((long)&stack0x00000030 + uVar17 * 4);
            puVar16 = (undefined8 *)(puVar15 + 4);
            uVar9 = uVar17;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              puVar13 = puVar13 + 4;
              uVar9 = uVar9 - 8;
              puVar16[-1] = *puVar5;
              puVar16[-2] = uVar20;
              puVar16[1] = uVar22;
              *puVar16 = uVar21;
              puVar16 = puVar16 + 4;
            } while (uVar9 != 0);
            if (uVar11 == uVar17) goto LAB_01b1940c;
          }
          puVar15 = puVar12;
          do {
            puVar13 = (undefined8 *)((long)puVar14 + 4);
            puVar12 = puVar15 + 1;
            *puVar15 = *(undefined4 *)puVar14;
            puVar15 = puVar12;
            puVar14 = puVar13;
          } while ((undefined8 *)((long)&stack0x00000030 + sVar7 * 4) != puVar13);
        }
LAB_01b1940c:
        *puVar12 = 0;
        if (((byte)*pbVar19 & 1) == 0) {
          *pbVar19 = SUB41((int)sVar7 << 1,0);
        }
        else {
          *(size_t *)(param_1 + 0x68) = sVar7;
        }
      }
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *)&stack0x00000018,(basic_string *)this);
      FUN_01b189c0(param_1 + 0x7c,&stack0x00000018,1,param_2->int_p_cs_precedes,
                   param_2->int_p_sep_by_space,param_2->int_p_sign_posn);
      FUN_01b189c0(param_1 + 0x80,this,1,param_2->int_n_cs_precedes,param_2->int_n_sep_by_space,
                   param_2->int_n_sign_posn);
      if ((_wStack0000000000000018 & 1) != 0) {
        operator_delete(in_stack_00000028);
      }
      freelocale(__dataset);
      if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_01b19660;
    }
    std::__ndk1::__throw_runtime_error("locale not supported");
Cinemachine_CinemachineSmoothPath__UpdateControlPoints:
    std::__ndk1::__throw_runtime_error("locale not supported");
LAB_01b195c8:
    uVar11 = std::__ndk1::__throw_runtime_error("locale not supported");
  }
  if (uVar11 < 0x17) {
    __dest = (void *)((ulong)&stack0x00000018 | 1);
    _wStack0000000000000018 = CONCAT71(stack0x00000019,(char)((int)uVar11 << 1));
    if (uVar11 != 0) goto LAB_01b19618;
  }
  else {
    uVar9 = uVar11 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    _wStack0000000000000018 = uVar9 | 1;
    in_stack_00000020 = uVar11;
    in_stack_00000028 = __dest;
LAB_01b19618:
    memcpy(__dest,param_2,uVar11);
  }
  *(undefined1 *)((long)__dest + uVar11) = 0;
  pmVar8 = (mbstate_t *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&stack0x00000018,0,"moneypunct_byname failed to construct for ");
  in_stack_00000040 = pmVar8[2];
  in_stack_00000038 = pmVar8[1];
  _iStack0000000000000030 = *pmVar8;
  pmVar8[1].__count = 0;
  pmVar8[1].__value = (_union_27)0x0;
  pmVar8[2].__count = 0;
  pmVar8[2].__value = (_union_27)0x0;
  pmVar8->__count = 0;
  pmVar8->__value = (_union_27)0x0;
  FUN_01b0b13c(&stack0x00000030);
LAB_01b19660:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


