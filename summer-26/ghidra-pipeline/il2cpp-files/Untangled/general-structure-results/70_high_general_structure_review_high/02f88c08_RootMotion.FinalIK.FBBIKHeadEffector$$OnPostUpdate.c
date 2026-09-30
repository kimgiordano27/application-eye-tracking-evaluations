/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$OnPostUpdate
ENTRY_POINT: 02f88c08
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_18;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void RootMotion_FinalIK_FBBIKHeadEffector__OnPostUpdate
               (wchar_t *param_1,undefined8 param_2,undefined8 param_3,mbstate_t *param_4)

{
  uint uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  char cVar3;
  undefined8 *puVar4;
  size_t sVar5;
  __locale_t p_Var6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  __locale_t unaff_x19;
  long unaff_x20;
  void *__dest;
  void *unaff_x21;
  char *unaff_x22;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this;
  __locale_t unaff_x23;
  size_t unaff_x24;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar16;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char *in_stack_00000008;
  int iStack0000000000000010;
  _union_27 _Stack0000000000000014;
  undefined4 uStack0000000000000018;
  ulong in_stack_00000020;
  void *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  sVar5 = mbrtowc(param_1,unaff_x22,unaff_x24,param_4);
  if (unaff_x23 != (__locale_t)0x0) {
    uselocale(unaff_x23);
  }
  if (sVar5 < 0xfffffffffffffffe) {
    uVar9 = uStack0000000000000018;
  }
  else {
    uVar9 = 0xffffffff;
  }
  *(undefined4 *)(unaff_x20 + 0x14) = uVar9;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (unaff_x20 + 0x18),*(char **)((long)unaff_x21 + 0x38));
  in_stack_00000008 = *(char **)((long)unaff_x21 + 0x18);
  iStack0000000000000010 = 0;
  _Stack0000000000000014 = (_union_27)0x0;
  p_Var6 = uselocale(unaff_x19);
  sVar5 = mbsrtowcs((wchar_t *)&stack0x00000030,&stack0x00000008,100,(mbstate_t *)&stack0x00000010);
  if (p_Var6 != (__locale_t)0x0) {
    uselocale(p_Var6);
  }
  if (sVar5 != 0xffffffffffffffff) {
    this = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)(unaff_x20 + 0x30);
    bVar2 = *this;
    uVar10 = (ulong)(byte)bVar2;
    if (((byte)bVar2 & 1) == 0) {
      if (4 < sVar5) {
        uVar10 = (ulong)((byte)bVar2 >> 1);
        uVar8 = 4;
LAB_02f88cc0:
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(this,uVar8,sVar5 - uVar8,uVar10,0,uVar10,0);
        uVar10 = (ulong)(byte)*this;
      }
    }
    else {
      uVar10 = *(ulong *)this;
      uVar8 = (uVar10 & 0xfffffffffffffffe) - 1;
      if (uVar8 < sVar5) {
        uVar10 = *(ulong *)(unaff_x20 + 0x38);
        goto LAB_02f88cc0;
      }
    }
    if ((uVar10 & 1) == 0) {
      puVar13 = (undefined4 *)(unaff_x20 + 0x34);
    }
    else {
      puVar13 = *(undefined4 **)(unaff_x20 + 0x40);
    }
    if (sVar5 != 0) {
      uVar10 = sVar5 * 4 - 4;
      if ((uVar10 < 0x1c) ||
         ((puVar13 < (undefined4 *)((long)&stack0x00000030 + sVar5 * 4) &&
          (&stack0x00000030 < puVar13 + sVar5)))) {
        puVar7 = &stack0x00000030;
        puVar11 = puVar13;
      }
      else {
        uVar10 = (uVar10 >> 2) + 1;
        uVar15 = uVar10 & 0x7ffffffffffffff8;
        puVar12 = &stack0x00000040;
        puVar11 = puVar13 + uVar15;
        puVar7 = (undefined8 *)((long)&stack0x00000030 + uVar15 * 4);
        puVar14 = (undefined8 *)(puVar13 + 4);
        uVar8 = uVar15;
        do {
          puVar4 = puVar12 + -1;
          uVar17 = puVar12[-2];
          uVar19 = puVar12[1];
          uVar18 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar8 = uVar8 - 8;
          puVar14[-1] = *puVar4;
          puVar14[-2] = uVar17;
          puVar14[1] = uVar19;
          *puVar14 = uVar18;
          puVar14 = puVar14 + 4;
        } while (uVar8 != 0);
        puVar13 = puVar11;
        if (uVar10 == uVar15) goto LAB_02f88d44;
      }
      do {
        puVar12 = (undefined8 *)((long)puVar7 + 4);
        puVar13 = puVar11 + 1;
        *puVar11 = *(undefined4 *)puVar7;
        puVar11 = puVar13;
        puVar7 = puVar12;
      } while ((undefined8 *)((long)&stack0x00000030 + sVar5 * 4) != puVar12);
    }
LAB_02f88d44:
    *puVar13 = 0;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)sVar5 << 1,0);
    }
    else {
      *(size_t *)(unaff_x20 + 0x38) = sVar5;
    }
    uVar1 = 0;
    if (*(byte *)((long)unaff_x21 + 0x50) != 0xff) {
      uVar1 = (uint)*(byte *)((long)unaff_x21 + 0x50);
    }
    *(uint *)(unaff_x20 + 0x78) = uVar1;
    if (*(char *)((long)unaff_x21 + 0x5c) == '\0') {
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(unaff_x20 + 0x48),L"()");
      cVar3 = *(char *)((long)unaff_x21 + 0x5d);
    }
    else {
      in_stack_00000008 = *(char **)((long)unaff_x21 + 0x40);
      iStack0000000000000010 = 0;
      _Stack0000000000000014 = (_union_27)0x0;
      p_Var6 = uselocale(unaff_x19);
      sVar5 = mbsrtowcs((wchar_t *)&stack0x00000030,&stack0x00000008,100,
                        (mbstate_t *)&stack0x00000010);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (sVar5 == 0xffffffffffffffff) goto LAB_02f89178;
      pbVar16 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(unaff_x20 + 0x48);
      bVar2 = *pbVar16;
      uVar10 = (ulong)(byte)bVar2;
      if (((byte)bVar2 & 1) == 0) {
        if (4 < sVar5) {
          uVar10 = (ulong)((byte)bVar2 >> 1);
          uVar8 = 4;
LAB_02f88e68:
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar16,uVar8,sVar5 - uVar8,uVar10,0,uVar10,0);
          uVar10 = (ulong)(byte)*pbVar16;
        }
      }
      else {
        uVar10 = *(ulong *)pbVar16;
        uVar8 = (uVar10 & 0xfffffffffffffffe) - 1;
        if (uVar8 < sVar5) {
          uVar10 = *(ulong *)(unaff_x20 + 0x50);
          goto LAB_02f88e68;
        }
      }
      if ((uVar10 & 1) == 0) {
        puVar13 = (undefined4 *)(unaff_x20 + 0x4c);
      }
      else {
        puVar13 = *(undefined4 **)(unaff_x20 + 0x58);
      }
      puVar11 = puVar13;
      if (sVar5 != 0) {
        uVar10 = sVar5 * 4 - 4;
        if ((uVar10 < 0x1c) ||
           ((puVar13 < (undefined4 *)((long)&stack0x00000030 + sVar5 * 4) &&
            (&stack0x00000030 < puVar13 + sVar5)))) {
          puVar7 = &stack0x00000030;
        }
        else {
          uVar10 = (uVar10 >> 2) + 1;
          uVar15 = uVar10 & 0x7ffffffffffffff8;
          puVar12 = &stack0x00000040;
          puVar11 = puVar13 + uVar15;
          puVar7 = (undefined8 *)((long)&stack0x00000030 + uVar15 * 4);
          puVar14 = (undefined8 *)(puVar13 + 4);
          uVar8 = uVar15;
          do {
            puVar4 = puVar12 + -1;
            uVar17 = puVar12[-2];
            uVar19 = puVar12[1];
            uVar18 = *puVar12;
            puVar12 = puVar12 + 4;
            uVar8 = uVar8 - 8;
            puVar14[-1] = *puVar4;
            puVar14[-2] = uVar17;
            puVar14[1] = uVar19;
            *puVar14 = uVar18;
            puVar14 = puVar14 + 4;
          } while (uVar8 != 0);
          if (uVar10 == uVar15) goto LAB_02f88eec;
        }
        puVar13 = puVar11;
        do {
          puVar12 = (undefined8 *)((long)puVar7 + 4);
          puVar11 = puVar13 + 1;
          *puVar13 = *(undefined4 *)puVar7;
          puVar13 = puVar11;
          puVar7 = puVar12;
        } while ((undefined8 *)((long)&stack0x00000030 + sVar5 * 4) != puVar12);
      }
LAB_02f88eec:
      *puVar11 = 0;
      if (((byte)*pbVar16 & 1) == 0) {
        *pbVar16 = SUB41((int)sVar5 << 1,0);
        cVar3 = *(char *)((long)unaff_x21 + 0x5d);
      }
      else {
        *(size_t *)(unaff_x20 + 0x50) = sVar5;
        cVar3 = *(char *)((long)unaff_x21 + 0x5d);
      }
    }
    if (cVar3 == '\0') {
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(unaff_x20 + 0x60),L"()");
    }
    else {
      in_stack_00000008 = *(char **)((long)unaff_x21 + 0x48);
      iStack0000000000000010 = 0;
      _Stack0000000000000014 = (_union_27)0x0;
      p_Var6 = uselocale(unaff_x19);
      sVar5 = mbsrtowcs((wchar_t *)&stack0x00000030,&stack0x00000008,100,
                        (mbstate_t *)&stack0x00000010);
      if (p_Var6 != (__locale_t)0x0) {
        uselocale(p_Var6);
      }
      if (sVar5 == 0xffffffffffffffff) goto LAB_02f89184;
      pbVar16 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(unaff_x20 + 0x60);
      bVar2 = *pbVar16;
      uVar10 = (ulong)(byte)bVar2;
      if (((byte)bVar2 & 1) == 0) {
        if (4 < sVar5) {
          uVar10 = (ulong)((byte)bVar2 >> 1);
          uVar8 = 4;
LAB_02f88f44:
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar16,uVar8,sVar5 - uVar8,uVar10,0,uVar10,0);
          uVar10 = (ulong)(byte)*pbVar16;
        }
      }
      else {
        uVar10 = *(ulong *)pbVar16;
        uVar8 = (uVar10 & 0xfffffffffffffffe) - 1;
        if (uVar8 < sVar5) {
          uVar10 = *(ulong *)(unaff_x20 + 0x68);
          goto LAB_02f88f44;
        }
      }
      if ((uVar10 & 1) == 0) {
        puVar13 = (undefined4 *)(unaff_x20 + 100);
      }
      else {
        puVar13 = *(undefined4 **)(unaff_x20 + 0x70);
      }
      puVar11 = puVar13;
      if (sVar5 != 0) {
        uVar10 = sVar5 * 4 - 4;
        if ((uVar10 < 0x1c) ||
           ((puVar13 < (undefined4 *)((long)&stack0x00000030 + sVar5 * 4) &&
            (&stack0x00000030 < puVar13 + sVar5)))) {
          puVar7 = &stack0x00000030;
        }
        else {
          uVar10 = (uVar10 >> 2) + 1;
          uVar15 = uVar10 & 0x7ffffffffffffff8;
          puVar12 = &stack0x00000040;
          puVar11 = puVar13 + uVar15;
          puVar7 = (undefined8 *)((long)&stack0x00000030 + uVar15 * 4);
          puVar14 = (undefined8 *)(puVar13 + 4);
          uVar8 = uVar15;
          do {
            puVar4 = puVar12 + -1;
            uVar17 = puVar12[-2];
            uVar19 = puVar12[1];
            uVar18 = *puVar12;
            puVar12 = puVar12 + 4;
            uVar8 = uVar8 - 8;
            puVar14[-1] = *puVar4;
            puVar14[-2] = uVar17;
            puVar14[1] = uVar19;
            *puVar14 = uVar18;
            puVar14 = puVar14 + 4;
          } while (uVar8 != 0);
          if (uVar10 == uVar15) goto LAB_02f88fc8;
        }
        puVar13 = puVar11;
        do {
          puVar12 = (undefined8 *)((long)puVar7 + 4);
          puVar11 = puVar13 + 1;
          *puVar13 = *(undefined4 *)puVar7;
          puVar13 = puVar11;
          puVar7 = puVar12;
        } while ((undefined8 *)((long)&stack0x00000030 + sVar5 * 4) != puVar12);
      }
LAB_02f88fc8:
      *puVar11 = 0;
      if (((byte)*pbVar16 & 1) == 0) {
        *pbVar16 = SUB41((int)sVar5 << 1,0);
      }
      else {
        *(size_t *)(unaff_x20 + 0x68) = sVar5;
      }
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  *)&stack0x00000018,(basic_string *)this);
    FUN_02f8857c(unaff_x20 + 0x7c,&stack0x00000018,1,*(undefined1 *)((long)unaff_x21 + 0x58),
                 *(undefined1 *)((long)unaff_x21 + 0x59),*(undefined1 *)((long)unaff_x21 + 0x5c));
    FUN_02f8857c(unaff_x20 + 0x80,this,1,*(undefined1 *)((long)unaff_x21 + 0x5a),
                 *(undefined1 *)((long)unaff_x21 + 0x5b),*(undefined1 *)((long)unaff_x21 + 0x5d));
    if ((_uStack0000000000000018 & 1) != 0) {
      operator_delete(in_stack_00000028);
    }
    freelocale(unaff_x19);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto LAB_02f8921c;
  }
  std::__ndk1::__throw_runtime_error("locale not supported");
LAB_02f89178:
  std::__ndk1::__throw_runtime_error("locale not supported");
LAB_02f89184:
  uVar10 = std::__ndk1::__throw_runtime_error("locale not supported");
  if (uVar10 < 0x17) {
    __dest = (void *)((ulong)&stack0x00000018 | 1);
    _uStack0000000000000018 = CONCAT71(stack0x00000019,(char)((int)uVar10 << 1));
    if (uVar10 != 0) goto LAB_02f891d4;
  }
  else {
    uVar8 = uVar10 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    _uStack0000000000000018 = uVar8 | 1;
    in_stack_00000020 = uVar10;
    in_stack_00000028 = __dest;
LAB_02f891d4:
    memcpy(__dest,unaff_x21,uVar10);
  }
  *(undefined1 *)((long)__dest + uVar10) = 0;
  puVar7 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&stack0x00000018,0,"moneypunct_byname failed to construct for ");
  in_stack_00000040 = puVar7[2];
  in_stack_00000038 = puVar7[1];
  in_stack_00000030 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_02f7acf8(&stack0x00000030);
LAB_02f8921c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


