/*
FUNCTION_NAME: Firebase.AppUtilPINVOKE$$delete_CharVector
ENTRY_POINT: 037311b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void Firebase_AppUtilPINVOKE__delete_CharVector(ulong param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x5;
  uint uVar6;
  undefined4 uVar7;
  ulong in_x9;
  ulong uVar8;
  ulong uVar9;
  byte *extraout_x9;
  ulong in_x10;
  ulong uVar10;
  ulong in_x11;
  byte *pbVar11;
  uint in_w14;
  ulong *unaff_x19;
  uint unaff_w20;
  byte *unaff_x21;
  undefined8 uVar12;
  ulong unaff_x22;
  long unaff_x23;
  byte *unaff_x24;
  long lVar13;
  undefined8 uVar14;
  uint unaff_w27;
  byte *pbVar15;
  long unaff_x28;
  long lVar16;
  long unaff_x29;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_70;
  byte *pbStack_68;
  
  while( true ) {
    uVar8 = in_x9 & 0x3f;
    in_x9 = in_x9 + 7;
    param_1 = in_x11 << uVar8 | param_1;
    uVar6 = unaff_w20;
    if (((uint)in_x10 >> 7 & 1) == 0) break;
LAB_037311b0:
    in_x10 = (ulong)*unaff_x21;
    in_x11 = in_x10 & 0x7f;
    unaff_x21 = unaff_x21 + 1;
    unaff_w20 = uVar6;
  }
  uVar8 = unaff_x23 << (in_x9 & 0x3f);
  if (0x3f < in_x9 || (uint)in_x10 <= in_w14) {
    uVar8 = 0;
  }
  param_1 = param_1 | uVar8;
  if ((long)param_1 < 1) {
    uVar6 = param_1 == 0 | unaff_w20;
    if ((param_1 == 0) || (((uint)unaff_x22 >> 3 & 1) != 0)) {
LAB_0373130c:
      uVar8 = 0;
      uVar9 = 0;
      pbVar11 = unaff_x21;
      do {
        bVar1 = *pbVar11;
        uVar10 = uVar8 & 0x3f;
        uVar8 = uVar8 + 7;
        uVar9 = ((ulong)bVar1 & 0x7f) << uVar10 | uVar9;
        pbVar11 = pbVar11 + 1;
      } while ((char)bVar1 < '\0');
      uVar10 = unaff_x23 << (uVar8 & 0x3f);
      if (0x3f < uVar8 || (bVar1 < in_w14 || bVar1 == in_w14)) {
        uVar10 = 0;
      }
      if ((uVar9 | uVar10) != 0) {
        unaff_x21 = unaff_x21 + (uVar9 | uVar10);
        in_x9 = 0;
        param_1 = 0;
        unaff_x24 = unaff_x21;
        goto LAB_037311b0;
      }
      uVar7 = 6;
      if ((uVar6 & ((uint)unaff_x22 & 2) >> 1) == 0) {
        uVar7 = 8;
      }
LAB_03731358:
      *(undefined4 *)(unaff_x19 + 5) = uVar7;
      return;
    }
    if ((unaff_w27 & 1) == 0) {
      *unaff_x19 = param_1;
      unaff_x19[1] = (ulong)unaff_x24;
      goto LAB_037313f8;
    }
    lVar4 = FUN_0373021c(in_stack_00000020);
    uVar8 = in_stack_00000010;
    if (lVar4 == 0x434c4e47432b2b01) {
      uVar8 = *(ulong *)(in_stack_00000020 + -0x58);
    }
    if ((uVar8 == 0) || (*(long *)(in_stack_00000020 + -0x50) == 0)) goto LAB_0373147c;
    in_x5 = in_stack_00000020;
    uVar9 = FUN_037318fc(param_1,*(undefined8 *)(unaff_x29 + -0x20),in_stack_00000028,
                         *(long *)(in_stack_00000020 + -0x50),uVar8,in_stack_00000020,0);
    in_w14 = 0x3f;
    uVar6 = unaff_w20;
    if ((uVar9 & 1) == 0) goto LAB_0373130c;
    if ((unaff_x22 & 1) != 0) {
      *unaff_x19 = param_1;
      unaff_x19[1] = (ulong)unaff_x24;
      uVar7 = 6;
      unaff_x19[4] = uVar8;
      goto LAB_03731358;
    }
  }
  else {
    if (((*(long *)(unaff_x29 + -0x20) == 0) || (0xc < (uint)unaff_x28)) ||
       (in_stack_00000018._4_4_ == 0)) {
      while (__cxa_begin_catch(in_stack_00000020), (unaff_w27 & 1) != 0) {
        FUN_037155d0(*(undefined8 *)(in_stack_00000020 + -0x38));
      }
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *(ulong *)(unaff_x29 + -8) =
         *(long *)(unaff_x29 + -0x20) + *(long *)(&DAT_01e4d508 + unaff_x28 * 8) * param_1;
    plVar3 = (long *)FUN_03731710(unaff_x29 + -8,in_stack_00000028,0);
    if (plVar3 == (long *)0x0) {
      if ((unaff_x22 & 0xd) != 0) {
        *unaff_x19 = param_1;
        unaff_x19[1] = (ulong)unaff_x24;
LAB_037313f8:
        lVar4 = FUN_0373021c(in_stack_00000020);
        if (lVar4 == 0x434c4e47432b2b01) {
          in_stack_00000010 = *(ulong *)(in_stack_00000020 + -0x58);
        }
        unaff_x19[4] = in_stack_00000010;
        uVar7 = 6;
        goto LAB_03731358;
      }
LAB_03731490:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
    }
    else {
      if ((unaff_w27 & 1) == 0) {
LAB_03731288:
        in_w14 = 0x3f;
        goto LAB_0373130c;
      }
      lVar4 = FUN_0373021c(in_stack_00000020);
      uVar8 = in_stack_00000010;
      if (lVar4 == 0x434c4e47432b2b01) {
        uVar8 = *(ulong *)(in_stack_00000020 + -0x58);
      }
      *(ulong *)(unaff_x29 + -8) = uVar8;
      if ((uVar8 == 0) || (*(long *)(in_stack_00000020 + -0x50) == 0)) {
        __cxa_begin_catch(in_stack_00000020);
        FUN_037155d0(*(undefined8 *)(in_stack_00000020 + -0x38));
        in_stack_00000020 = in_x5;
LAB_0373147c:
        __cxa_begin_catch(in_stack_00000020);
        FUN_037155d0(*(undefined8 *)(in_stack_00000020 + -0x38));
        goto LAB_03731490;
      }
      uVar8 = (**(code **)(*plVar3 + 0x20))
                        (plVar3,*(long *)(in_stack_00000020 + -0x50),unaff_x29 + -8);
      unaff_w27 = in_stack_00000008._4_4_;
      if ((uVar8 & 1) == 0) goto LAB_03731288;
      if ((unaff_x22 & 9) != 0) {
        uVar8 = *(ulong *)(unaff_x29 + -8);
        *unaff_x19 = param_1;
        unaff_x19[1] = (ulong)unaff_x24;
        *(undefined4 *)(unaff_x19 + 5) = 6;
        unaff_x19[4] = uVar8;
        return;
      }
    }
    __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
              "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
              ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
  }
  lVar4 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                    "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                    ,"actions & _UA_SEARCH_PHASE");
  if (lVar4 == 0) {
    __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  __cxa_begin_catch();
  uVar8 = FUN_03730228(lVar4);
  if ((uVar8 & 1) == 0) {
    uVar5 = std::get_terminate();
    uVar14 = std::get_unexpected();
    uVar12 = 0;
    lVar13 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar4 + -0x40);
    uVar5 = *(undefined8 *)(lVar4 + -0x38);
    lVar13 = lVar4 + -0x60;
    unaff_x24 = *(byte **)(lVar4 + -0x18);
    uVar12 = *(undefined8 *)(lVar4 + -0x10);
    unaff_x22 = (ulong)*(int *)(lVar4 + -0x24);
  }
  FUN_03715584(uVar14);
  __cxa_begin_catch();
  if ((uVar8 & 1) != 0) {
    pbStack_68 = unaff_x24 + 1;
    FUN_03731710(&pbStack_68,*unaff_x24,uVar12);
    bVar1 = *pbStack_68;
    if (bVar1 != 0xff) goto LAB_03731598;
    do {
      FUN_037155d0(uVar5);
      pbStack_68 = extraout_x9;
LAB_03731598:
      uVar8 = 0;
      uVar9 = 0;
      pbVar11 = pbStack_68 + 1;
      do {
        pbVar15 = pbVar11 + 1;
        bVar2 = *pbVar11;
        uVar10 = uVar8 & 0x3f;
        uVar8 = uVar8 + 7;
        uVar9 = ((ulong)bVar2 & 0x7f) << uVar10 | uVar9;
        pbVar11 = pbVar15;
      } while ((char)bVar2 < '\0');
      pbStack_68 = pbVar15;
      plVar3 = (long *)__cxa_get_globals_fast();
      lVar16 = *plVar3;
    } while (lVar16 == 0);
    bVar2 = FUN_03730228(lVar16 + 0x60);
    if ((bVar2 & lVar16 != lVar13) == 1) {
      uVar14 = *(undefined8 *)(lVar16 + 0x10);
      lVar13 = FUN_0373021c(lVar16 + 0x60);
      if (lVar13 == 0x434c4e47432b2b01) {
        lVar13 = *(long *)(lVar16 + 8);
      }
      else {
        lVar13 = lVar16 + 0x80;
      }
      uVar8 = FUN_037318fc(unaff_x22,pbVar15 + uVar9,bVar1,uVar14,lVar13,lVar4,uVar12);
      if ((uVar8 & 1) == 0) {
        lVar4 = plVar3[1];
        *(int *)(lVar16 + 0x38) = -*(int *)(lVar16 + 0x38);
        *(int *)(plVar3 + 1) = (int)lVar4 + 1;
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar16 + 0x60);
        uVar14 = __cxa_rethrow();
        std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_70);
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_03732a6c(uVar14);
      }
    }
    unaff_x24 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__;
    puStack_70 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__ + 0x10;
    uVar8 = FUN_037318fc(unaff_x22,pbVar15 + uVar9,bVar1,
                         Method_Oculus_Platform_Request<ChallengeList>__ctor__,&puStack_70,lVar4,
                         uVar12);
    if ((uVar8 & 1) == 0) goto LAB_03731688;
    std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_70);
  }
  __cxa_end_catch();
  FUN_037155d0(uVar5);
LAB_03731688:
  __cxa_end_catch();
  plVar3 = (long *)__cxa_allocate_exception(8);
  *plVar3 = (long)(unaff_x24 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar3,Method_Oculus_Platform_Request<ChallengeList>__ctor__,
              Method_Oculus_Platform_Request<BlockedUserList>__ctor__);
}


