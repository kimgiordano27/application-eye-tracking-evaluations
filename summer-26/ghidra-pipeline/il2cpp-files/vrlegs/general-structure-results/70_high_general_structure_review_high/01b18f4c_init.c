/*
FUNCTION_NAME: init
ENTRY_POINT: 01b18f4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* std::__ndk1::moneypunct_byname<wchar_t, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::init
          (moneypunct_byname<wchar_t,true> *this,char *param_1)

{
  uint uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  char cVar3;
  long lVar4;
  mbstate_t *pmVar5;
  __locale_t __dataset;
  __locale_t p_Var6;
  size_t sVar7;
  mbstate_t *pmVar8;
  ulong uVar9;
  wchar_t wVar10;
  ulong uVar11;
  moneypunct_byname<wchar_t,true> *pmVar12;
  moneypunct_byname<wchar_t,true> *pmVar13;
  _union_27 *p_Var14;
  mbstate_t *pmVar15;
  ulong uVar16;
  mbstate_t *pmVar17;
  void *__dest;
  char *pcVar18;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this_00;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar19;
  mbstate_t mVar20;
  mbstate_t mVar21;
  mbstate_t mVar22;
  char *local_218;
  mbstate_t mStack_210;
  ulong local_208;
  ulong local_200;
  void *local_1f8;
  mbstate_t local_1f0 [51];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    uVar11 = strlen(param_1);
    if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
  }
  else {
    p_Var6 = uselocale(__dataset);
    param_1 = (char *)localeconv();
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    pcVar18 = ((lconv *)param_1)->mon_decimal_point;
    if (*pcVar18 == '\0') {
LAB_01b19008:
      wVar10 = L'\xffffffff';
    }
    else {
      local_1f0[0].__count = 0;
      local_1f0[0].__value = (_union_27)0x0;
      sVar7 = __strlen_chk(pcVar18,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
      sVar7 = mbrtowc((wchar_t *)&local_208,pcVar18,sVar7,local_1f0);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_01b19008;
      wVar10 = (wchar_t)local_208;
    }
    *(wchar_t *)(this + 0x10) = wVar10;
    pcVar18 = ((lconv *)param_1)->mon_thousands_sep;
    if (*pcVar18 == '\0') {
LAB_01b19070:
      wVar10 = L'\xffffffff';
    }
    else {
      local_1f0[0].__count = 0;
      local_1f0[0].__value = (_union_27)0x0;
      sVar7 = __strlen_chk(pcVar18,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
      sVar7 = mbrtowc((wchar_t *)&local_208,pcVar18,sVar7,local_1f0);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_01b19070;
      wVar10 = (wchar_t)local_208;
    }
    *(wchar_t *)(this + 0x14) = wVar10;
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),((lconv *)param_1)->mon_grouping);
    local_218 = ((lconv *)param_1)->int_curr_symbol;
    mStack_210.__count = 0;
    mStack_210.__value = (_union_27)0x0;
    p_Var6 = uselocale(__dataset);
    sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 != 0xffffffffffffffff) {
      this_00 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(this + 0x30);
      bVar2 = *this_00;
      uVar11 = (ulong)(byte)bVar2;
      if (((byte)bVar2 & 1) == 0) {
        if (4 < sVar7) {
          uVar11 = (ulong)((byte)bVar2 >> 1);
          uVar9 = 4;
LAB_01b19104:
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(this_00,uVar9,sVar7 - uVar9,uVar11,0,uVar11,0);
          uVar11 = (ulong)(byte)*this_00;
        }
      }
      else {
        uVar11 = *(ulong *)this_00;
        uVar9 = (uVar11 & 0xfffffffffffffffe) - 1;
        if (uVar9 < sVar7) {
          uVar11 = *(ulong *)(this + 0x38);
          goto LAB_01b19104;
        }
      }
      if ((uVar11 & 1) == 0) {
        pmVar12 = this + 0x34;
      }
      else {
        pmVar12 = *(moneypunct_byname<wchar_t,true> **)(this + 0x40);
      }
      if (sVar7 != 0) {
        uVar11 = sVar7 * 4 - 4;
        if ((uVar11 < 0x1c) ||
           ((pmVar12 < (moneypunct_byname<wchar_t,true> *)(&local_1f0[0].__count + sVar7) &&
            (local_1f0 < (mbstate_t *)(pmVar12 + sVar7 * 4))))) {
          pmVar8 = local_1f0;
          pmVar13 = pmVar12;
        }
        else {
          uVar11 = (uVar11 >> 2) + 1;
          uVar16 = uVar11 & 0x7ffffffffffffff8;
          pmVar17 = local_1f0 + 2;
          pmVar13 = pmVar12 + uVar16 * 4;
          pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar16);
          pmVar15 = (mbstate_t *)(pmVar12 + 0x10);
          uVar9 = uVar16;
          do {
            pmVar5 = pmVar17 + -1;
            mVar20 = pmVar17[-2];
            mVar22 = pmVar17[1];
            mVar21 = *pmVar17;
            pmVar17 = pmVar17 + 4;
            uVar9 = uVar9 - 8;
            pmVar15[-1] = *pmVar5;
            pmVar15[-2] = mVar20;
            pmVar15[1] = mVar22;
            *pmVar15 = mVar21;
            pmVar15 = pmVar15 + 4;
          } while (uVar9 != 0);
          pmVar12 = pmVar13;
          if (uVar11 == uVar16) goto LAB_01b19188;
        }
        do {
          p_Var14 = &pmVar8->__value;
          pmVar12 = pmVar13 + 4;
          *(int *)pmVar13 = pmVar8->__count;
          pmVar13 = pmVar12;
          pmVar8 = (mbstate_t *)p_Var14;
        } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var14);
      }
LAB_01b19188:
      *(int *)pmVar12 = 0;
      if (((byte)*this_00 & 1) == 0) {
        *this_00 = SUB41((int)sVar7 << 1,0);
      }
      else {
        *(size_t *)(this + 0x38) = sVar7;
      }
      uVar1 = 0;
      if ((byte)((lconv *)param_1)->int_frac_digits != 0xff) {
        uVar1 = (uint)(byte)((lconv *)param_1)->int_frac_digits;
      }
      *(uint *)(this + 0x78) = uVar1;
      if (((lconv *)param_1)->int_p_sign_posn == '\0') {
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(this + 0x48),L"()");
        cVar3 = ((lconv *)param_1)->int_n_sign_posn;
      }
      else {
        local_218 = ((lconv *)param_1)->positive_sign;
        mStack_210.__count = 0;
        mStack_210.__value = (_union_27)0x0;
        p_Var6 = uselocale(__dataset);
        sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
        if (p_Var6 != (__locale_t)0x0) {
          uselocale(p_Var6);
        }
        if (sVar7 == 0xffffffffffffffff)
        goto Cinemachine_CinemachineSmoothPath__UpdateControlPoints;
        pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(this + 0x48);
        bVar2 = *pbVar19;
        uVar11 = (ulong)(byte)bVar2;
        if (((byte)bVar2 & 1) == 0) {
          if (4 < sVar7) {
            uVar11 = (ulong)((byte)bVar2 >> 1);
            uVar9 = 4;
Cinemachine_CinemachinePixelPerfect__PostPipelineStageCallback:
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::__grow_by(pbVar19,uVar9,sVar7 - uVar9,uVar11,0,uVar11,0);
            uVar11 = (ulong)(byte)*pbVar19;
          }
        }
        else {
          uVar11 = *(ulong *)pbVar19;
          uVar9 = (uVar11 & 0xfffffffffffffffe) - 1;
          if (uVar9 < sVar7) {
            uVar11 = *(ulong *)(this + 0x50);
            goto Cinemachine_CinemachinePixelPerfect__PostPipelineStageCallback;
          }
        }
        if ((uVar11 & 1) == 0) {
          pmVar12 = this + 0x4c;
        }
        else {
          pmVar12 = *(moneypunct_byname<wchar_t,true> **)(this + 0x58);
        }
        pmVar13 = pmVar12;
        if (sVar7 != 0) {
          uVar11 = sVar7 * 4 - 4;
          if ((uVar11 < 0x1c) ||
             ((pmVar12 < (moneypunct_byname<wchar_t,true> *)(&local_1f0[0].__count + sVar7) &&
              (local_1f0 < (mbstate_t *)(pmVar12 + sVar7 * 4))))) {
            pmVar8 = local_1f0;
          }
          else {
            uVar11 = (uVar11 >> 2) + 1;
            uVar16 = uVar11 & 0x7ffffffffffffff8;
            pmVar17 = local_1f0 + 2;
            pmVar13 = pmVar12 + uVar16 * 4;
            pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar16);
            pmVar15 = (mbstate_t *)(pmVar12 + 0x10);
            uVar9 = uVar16;
            do {
              pmVar5 = pmVar17 + -1;
              mVar20 = pmVar17[-2];
              mVar22 = pmVar17[1];
              mVar21 = *pmVar17;
              pmVar17 = pmVar17 + 4;
              uVar9 = uVar9 - 8;
              pmVar15[-1] = *pmVar5;
              pmVar15[-2] = mVar20;
              pmVar15[1] = mVar22;
              *pmVar15 = mVar21;
              pmVar15 = pmVar15 + 4;
            } while (uVar9 != 0);
            if (uVar11 == uVar16) goto LAB_01b19330;
          }
          pmVar12 = pmVar13;
          do {
            p_Var14 = &pmVar8->__value;
            pmVar13 = pmVar12 + 4;
            *(int *)pmVar12 = pmVar8->__count;
            pmVar12 = pmVar13;
            pmVar8 = (mbstate_t *)p_Var14;
          } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var14);
        }
LAB_01b19330:
        *(int *)pmVar13 = 0;
        if (((byte)*pbVar19 & 1) == 0) {
          *pbVar19 = SUB41((int)sVar7 << 1,0);
          cVar3 = ((lconv *)param_1)->int_n_sign_posn;
        }
        else {
          *(size_t *)(this + 0x50) = sVar7;
          cVar3 = ((lconv *)param_1)->int_n_sign_posn;
        }
      }
      if (cVar3 == '\0') {
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(this + 0x60),L"()");
      }
      else {
        local_218 = ((lconv *)param_1)->negative_sign;
        mStack_210.__count = 0;
        mStack_210.__value = (_union_27)0x0;
        p_Var6 = uselocale(__dataset);
        sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
        if (p_Var6 != (__locale_t)0x0) {
          uselocale(p_Var6);
        }
        if (sVar7 == 0xffffffffffffffff) goto LAB_01b195c8;
        pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(this + 0x60);
        bVar2 = *pbVar19;
        uVar11 = (ulong)(byte)bVar2;
        if (((byte)bVar2 & 1) == 0) {
          if (4 < sVar7) {
            uVar11 = (ulong)((byte)bVar2 >> 1);
            uVar9 = 4;
LAB_01b19388:
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::__grow_by(pbVar19,uVar9,sVar7 - uVar9,uVar11,0,uVar11,0);
            uVar11 = (ulong)(byte)*pbVar19;
          }
        }
        else {
          uVar11 = *(ulong *)pbVar19;
          uVar9 = (uVar11 & 0xfffffffffffffffe) - 1;
          if (uVar9 < sVar7) {
            uVar11 = *(ulong *)(this + 0x68);
            goto LAB_01b19388;
          }
        }
        if ((uVar11 & 1) == 0) {
          pmVar12 = this + 100;
        }
        else {
          pmVar12 = *(moneypunct_byname<wchar_t,true> **)(this + 0x70);
        }
        pmVar13 = pmVar12;
        if (sVar7 != 0) {
          uVar11 = sVar7 * 4 - 4;
          if ((uVar11 < 0x1c) ||
             ((pmVar12 < (moneypunct_byname<wchar_t,true> *)(&local_1f0[0].__count + sVar7) &&
              (local_1f0 < (mbstate_t *)(pmVar12 + sVar7 * 4))))) {
            pmVar8 = local_1f0;
          }
          else {
            uVar11 = (uVar11 >> 2) + 1;
            uVar16 = uVar11 & 0x7ffffffffffffff8;
            pmVar17 = local_1f0 + 2;
            pmVar13 = pmVar12 + uVar16 * 4;
            pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar16);
            pmVar15 = (mbstate_t *)(pmVar12 + 0x10);
            uVar9 = uVar16;
            do {
              pmVar5 = pmVar17 + -1;
              mVar20 = pmVar17[-2];
              mVar22 = pmVar17[1];
              mVar21 = *pmVar17;
              pmVar17 = pmVar17 + 4;
              uVar9 = uVar9 - 8;
              pmVar15[-1] = *pmVar5;
              pmVar15[-2] = mVar20;
              pmVar15[1] = mVar22;
              *pmVar15 = mVar21;
              pmVar15 = pmVar15 + 4;
            } while (uVar9 != 0);
            if (uVar11 == uVar16) goto LAB_01b1940c;
          }
          pmVar12 = pmVar13;
          do {
            p_Var14 = &pmVar8->__value;
            pmVar13 = pmVar12 + 4;
            *(int *)pmVar12 = pmVar8->__count;
            pmVar12 = pmVar13;
            pmVar8 = (mbstate_t *)p_Var14;
          } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var14);
        }
LAB_01b1940c:
        *(int *)pmVar13 = 0;
        if (((byte)*pbVar19 & 1) == 0) {
          *pbVar19 = SUB41((int)sVar7 << 1,0);
        }
        else {
          *(size_t *)(this + 0x68) = sVar7;
        }
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *)&local_208,(basic_string *)this_00);
      FUN_01b189c0(this + 0x7c,&local_208,1,((lconv *)param_1)->int_p_cs_precedes,
                   ((lconv *)param_1)->int_p_sep_by_space,((lconv *)param_1)->int_p_sign_posn);
      FUN_01b189c0(this + 0x80,this_00,1,((lconv *)param_1)->int_n_cs_precedes,
                   ((lconv *)param_1)->int_n_sep_by_space,((lconv *)param_1)->int_n_sign_posn);
      if ((local_208 & 1) != 0) {
        operator_delete(local_1f8);
      }
      freelocale(__dataset);
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
      goto LAB_01b19660;
    }
    __throw_runtime_error("locale not supported");
Cinemachine_CinemachineSmoothPath__UpdateControlPoints:
    __throw_runtime_error("locale not supported");
LAB_01b195c8:
    uVar11 = __throw_runtime_error("locale not supported");
  }
  if (uVar11 < 0x17) {
    __dest = (void *)((ulong)&local_208 | 1);
    local_208 = CONCAT71(local_208._1_7_,(char)((int)uVar11 << 1));
    if (uVar11 != 0) goto LAB_01b19618;
  }
  else {
    uVar9 = uVar11 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    local_208 = uVar9 | 1;
    local_200 = uVar11;
    local_1f8 = __dest;
LAB_01b19618:
    memcpy(__dest,param_1,uVar11);
  }
  *(undefined1 *)((long)__dest + uVar11) = 0;
  pmVar8 = (mbstate_t *)
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_208,0,"moneypunct_byname failed to construct for ");
  local_1f0[2] = pmVar8[2];
  local_1f0[1] = pmVar8[1];
  local_1f0[0] = *pmVar8;
  pmVar8[1].__count = 0;
  pmVar8[1].__value = (_union_27)0x0;
  pmVar8[2].__count = 0;
  pmVar8[2].__value = (_union_27)0x0;
  pmVar8->__count = 0;
  pmVar8->__value = (_union_27)0x0;
  FUN_01b0b13c(local_1f0);
LAB_01b19660:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


