/*
FUNCTION_NAME: Cinemachine.CinemachinePath$$RollAroundForward
ENTRY_POINT: 01b191c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Cinemachine_CinemachinePath__RollAroundForward(__locale_t param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  undefined8 *puVar2;
  __locale_t p_Var3;
  size_t sVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  __locale_t unaff_x19;
  long unaff_x20;
  void *__dest;
  void *unaff_x21;
  basic_string *unaff_x22;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar13;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *in_stack_00000008;
  int iStack0000000000000010;
  _union_27 _Stack0000000000000014;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  void *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  p_Var3 = uselocale(param_1);
  sVar4 = mbsrtowcs((wchar_t *)&stack0x00000030,&stack0x00000008,100,(mbstate_t *)&stack0x00000010);
  if (p_Var3 != (__locale_t)0x0) {
    uselocale(p_Var3);
  }
  if (sVar4 != 0xffffffffffffffff) {
    pbVar13 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(unaff_x20 + 0x48);
    bVar1 = *pbVar13;
    uVar7 = (ulong)(byte)bVar1;
    if (((byte)bVar1 & 1) == 0) {
      if (4 < sVar4) {
        uVar7 = (ulong)((byte)bVar1 >> 1);
        uVar6 = 4;
Cinemachine_CinemachinePixelPerfect__PostPipelineStageCallback:
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar13,uVar6,sVar4 - uVar6,uVar7,0,uVar7,0);
        uVar7 = (ulong)(byte)*pbVar13;
      }
    }
    else {
      uVar7 = *(ulong *)pbVar13;
      uVar6 = (uVar7 & 0xfffffffffffffffe) - 1;
      if (uVar6 < sVar4) {
        uVar7 = *(ulong *)(unaff_x20 + 0x50);
        goto Cinemachine_CinemachinePixelPerfect__PostPipelineStageCallback;
      }
    }
    if ((uVar7 & 1) == 0) {
      puVar10 = (undefined4 *)(unaff_x20 + 0x4c);
    }
    else {
      puVar10 = *(undefined4 **)(unaff_x20 + 0x58);
    }
    puVar8 = puVar10;
    if (sVar4 != 0) {
      uVar7 = sVar4 * 4 - 4;
      if ((uVar7 < 0x1c) ||
         ((puVar10 < (undefined4 *)((long)&stack0x00000030 + sVar4 * 4) &&
          (&stack0x00000030 < puVar10 + sVar4)))) {
        puVar5 = &stack0x00000030;
      }
      else {
        uVar7 = (uVar7 >> 2) + 1;
        uVar12 = uVar7 & 0x7ffffffffffffff8;
        puVar9 = &stack0x00000040;
        puVar8 = puVar10 + uVar12;
        puVar5 = (undefined8 *)((long)&stack0x00000030 + uVar12 * 4);
        puVar11 = (undefined8 *)(puVar10 + 4);
        uVar6 = uVar12;
        do {
          puVar2 = puVar9 + -1;
          uVar14 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar6 = uVar6 - 8;
          puVar11[-1] = *puVar2;
          puVar11[-2] = uVar14;
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11 = puVar11 + 4;
        } while (uVar6 != 0);
        if (uVar7 == uVar12) goto LAB_01b19330;
      }
      puVar10 = puVar8;
      do {
        puVar9 = (undefined8 *)((long)puVar5 + 4);
        puVar8 = puVar10 + 1;
        *puVar10 = *(undefined4 *)puVar5;
        puVar10 = puVar8;
        puVar5 = puVar9;
      } while ((undefined8 *)((long)&stack0x00000030 + sVar4 * 4) != puVar9);
    }
LAB_01b19330:
    *puVar8 = 0;
    if (((byte)*pbVar13 & 1) == 0) {
      *pbVar13 = SUB41((int)sVar4 << 1,0);
      if (*(char *)((long)unaff_x21 + 0x5d) == '\0') goto LAB_01b1935c;
LAB_01b19234:
      in_stack_00000008 = *(char **)((long)unaff_x21 + 0x48);
      iStack0000000000000010 = 0;
      _Stack0000000000000014 = (_union_27)0x0;
      p_Var3 = uselocale(unaff_x19);
      sVar4 = mbsrtowcs((wchar_t *)&stack0x00000030,&stack0x00000008,100,
                        (mbstate_t *)&stack0x00000010);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (sVar4 == 0xffffffffffffffff) goto LAB_01b195c8;
      pbVar13 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(unaff_x20 + 0x60);
      bVar1 = *pbVar13;
      uVar7 = (ulong)(byte)bVar1;
      if (((byte)bVar1 & 1) == 0) {
        if (4 < sVar4) {
          uVar7 = (ulong)((byte)bVar1 >> 1);
          uVar6 = 4;
LAB_01b19388:
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar13,uVar6,sVar4 - uVar6,uVar7,0,uVar7,0);
          uVar7 = (ulong)(byte)*pbVar13;
        }
      }
      else {
        uVar7 = *(ulong *)pbVar13;
        uVar6 = (uVar7 & 0xfffffffffffffffe) - 1;
        if (uVar6 < sVar4) {
          uVar7 = *(ulong *)(unaff_x20 + 0x68);
          goto LAB_01b19388;
        }
      }
      if ((uVar7 & 1) == 0) {
        puVar10 = (undefined4 *)(unaff_x20 + 100);
      }
      else {
        puVar10 = *(undefined4 **)(unaff_x20 + 0x70);
      }
      if (sVar4 != 0) {
        uVar7 = sVar4 * 4 - 4;
        if ((uVar7 < 0x1c) ||
           ((puVar10 < (undefined4 *)((long)&stack0x00000030 + sVar4 * 4) &&
            (&stack0x00000030 < puVar10 + sVar4)))) {
          puVar5 = &stack0x00000030;
          puVar8 = puVar10;
        }
        else {
          uVar7 = (uVar7 >> 2) + 1;
          uVar12 = uVar7 & 0x7ffffffffffffff8;
          puVar9 = &stack0x00000040;
          puVar8 = puVar10 + uVar12;
          puVar5 = (undefined8 *)((long)&stack0x00000030 + uVar12 * 4);
          puVar11 = (undefined8 *)(puVar10 + 4);
          uVar6 = uVar12;
          do {
            puVar2 = puVar9 + -1;
            uVar14 = puVar9[-2];
            uVar16 = puVar9[1];
            uVar15 = *puVar9;
            puVar9 = puVar9 + 4;
            uVar6 = uVar6 - 8;
            puVar11[-1] = *puVar2;
            puVar11[-2] = uVar14;
            puVar11[1] = uVar16;
            *puVar11 = uVar15;
            puVar11 = puVar11 + 4;
          } while (uVar6 != 0);
          puVar10 = puVar8;
          if (uVar7 == uVar12) goto LAB_01b1940c;
        }
        do {
          puVar9 = (undefined8 *)((long)puVar5 + 4);
          puVar10 = puVar8 + 1;
          *puVar8 = *(undefined4 *)puVar5;
          puVar8 = puVar10;
          puVar5 = puVar9;
        } while ((undefined8 *)((long)&stack0x00000030 + sVar4 * 4) != puVar9);
      }
LAB_01b1940c:
      *puVar10 = 0;
      if (((byte)*pbVar13 & 1) == 0) {
        *pbVar13 = SUB41((int)sVar4 << 1,0);
      }
      else {
        *(size_t *)(unaff_x20 + 0x68) = sVar4;
      }
    }
    else {
      *(size_t *)(unaff_x20 + 0x50) = sVar4;
      if (*(char *)((long)unaff_x21 + 0x5d) != '\0') goto LAB_01b19234;
LAB_01b1935c:
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(unaff_x20 + 0x60),L"()");
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  *)&stack0x00000018,unaff_x22);
    FUN_01b189c0(unaff_x20 + 0x7c,&stack0x00000018,1,*(undefined1 *)((long)unaff_x21 + 0x58),
                 *(undefined1 *)((long)unaff_x21 + 0x59),*(undefined1 *)((long)unaff_x21 + 0x5c));
    FUN_01b189c0(unaff_x20 + 0x80);
    if ((in_stack_00000018 & 1) != 0) {
      operator_delete(in_stack_00000028);
    }
    freelocale(unaff_x19);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto LAB_01b19660;
  }
  std::__ndk1::__throw_runtime_error("locale not supported");
LAB_01b195c8:
  uVar7 = std::__ndk1::__throw_runtime_error("locale not supported");
  if (uVar7 < 0x17) {
    __dest = (void *)((ulong)&stack0x00000018 | 1);
    in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)((int)uVar7 << 1));
    if (uVar7 != 0) goto LAB_01b19618;
  }
  else {
    uVar6 = uVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    in_stack_00000018 = uVar6 | 1;
    in_stack_00000020 = uVar7;
    in_stack_00000028 = __dest;
LAB_01b19618:
    memcpy(__dest,unaff_x21,uVar7);
  }
  *(undefined1 *)((long)__dest + uVar7) = 0;
  puVar5 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&stack0x00000018,0,"moneypunct_byname failed to construct for ");
  in_stack_00000040 = puVar5[2];
  in_stack_00000038 = puVar5[1];
  in_stack_00000030 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_01b0b13c(&stack0x00000030);
LAB_01b19660:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


