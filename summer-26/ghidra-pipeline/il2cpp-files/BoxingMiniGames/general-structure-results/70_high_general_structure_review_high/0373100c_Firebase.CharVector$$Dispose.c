/*
FUNCTION_NAME: Firebase.CharVector$$Dispose
ENTRY_POINT: 0373100c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


void Firebase_CharVector__Dispose(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long in_x5;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *extraout_x9;
  ulong uVar16;
  ulong *unaff_x19;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  ulong unaff_x22;
  ulong unaff_x24;
  undefined8 uVar21;
  byte *unaff_x26;
  byte *pbVar22;
  ulong unaff_x27;
  long lVar23;
  long unaff_x29;
  ulong in_stack_00000008;
  ulong uStack0000000000000010;
  long in_stack_00000020;
  undefined *puStack_70;
  byte *pbStack_68;
  
  uVar13 = in_stack_00000008 >> 0x20;
  if ((int)param_2 == 0xff) {
    pbVar22 = unaff_x26 + 1;
    bVar1 = *unaff_x26;
    *(byte **)(unaff_x29 + -0x10) = pbVar22;
    uVar5 = unaff_x24;
  }
  else {
    uVar5 = FUN_03731710(unaff_x29 + -0x10,param_2,0);
    pbVar22 = *(byte **)(unaff_x29 + -0x10) + 1;
    bVar1 = **(byte **)(unaff_x29 + -0x10);
    *(byte **)(unaff_x29 + -0x10) = pbVar22;
  }
  uVar3 = (ulong)bVar1;
  if (uVar3 == 0xff) {
    *(undefined8 *)(unaff_x29 + -0x20) = 0;
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    pbVar18 = pbVar22;
    do {
      pbVar22 = pbVar18 + 1;
      bVar1 = *pbVar18;
      uVar15 = uVar16 & 0x3f;
      uVar16 = uVar16 + 7;
      uVar14 = ((ulong)bVar1 & 0x7f) << uVar15 | uVar14;
      pbVar18 = pbVar22;
    } while ((char)bVar1 < '\0');
    *(byte **)(unaff_x29 + -0x20) = pbVar22 + uVar14;
  }
  uVar16 = 0;
  uVar15 = 0;
  *(byte **)(unaff_x29 + -0x10) = pbVar22 + 1;
  uVar14 = unaff_x27 + ~unaff_x24;
  bVar1 = *pbVar22;
  pbVar22 = pbVar22 + 1;
  do {
    pbVar18 = pbVar22 + 1;
    bVar4 = *pbVar22;
    uVar12 = uVar16 & 0x3f;
    uVar16 = uVar16 + 7;
    uVar15 = ((ulong)bVar4 & 0x7f) << uVar12 | uVar15;
    pbVar22 = pbVar18;
  } while ((char)bVar4 < '\0');
  *(byte **)(unaff_x29 + -0x18) = pbVar18;
  *(byte **)(unaff_x29 + -0x10) = pbVar18;
  do {
    if (pbVar18 + (uVar15 & 0xffffffff) <= pbVar22) break;
    unaff_x27 = FUN_03731710(unaff_x29 + -0x18,bVar1,0);
    lVar6 = FUN_03731710(unaff_x29 + -0x18,bVar1,0);
    lVar7 = FUN_03731710(unaff_x29 + -0x18,bVar1,0);
    uVar16 = 0;
    uVar12 = 0;
    pbVar19 = *(byte **)(unaff_x29 + -0x18);
    do {
      pbVar22 = pbVar19 + 1;
      bVar4 = *pbVar19;
      uVar2 = uVar16 & 0x3f;
      uVar16 = uVar16 + 7;
      uVar12 = ((ulong)bVar4 & 0x7f) << uVar2 | uVar12;
      pbVar19 = pbVar22;
    } while ((char)bVar4 < '\0');
    *(byte **)(unaff_x29 + -0x18) = pbVar22;
    if ((unaff_x27 <= uVar14) && (uVar14 < lVar6 + unaff_x27)) {
      if (lVar7 == 0) {
        uVar11 = 8;
        goto LAB_03731358;
      }
      unaff_x19[3] = lVar7 + uVar5;
      if (uVar12 != 0) {
        uVar5 = uVar3 & 0xf;
        pbVar18 = pbVar18 + uVar12 + (uVar15 & 0xffffffff) + -1;
        uStack0000000000000010 = in_stack_00000020 + 0x20;
        uVar17 = 0;
        goto LAB_037311a4;
      }
      uVar11 = 6;
      if ((unaff_x22 & 1) != 0) {
        uVar11 = 8;
      }
      goto LAB_03731358;
    }
  } while (unaff_x27 <= uVar14);
  __cxa_begin_catch(in_stack_00000020);
  in_stack_00000008 = in_stack_00000008 & 0x100000000;
  uVar13 = unaff_x27;
  while (in_stack_00000008 != 0) {
    FUN_037155d0(*(undefined8 *)(in_stack_00000020 + -0x38));
LAB_0373145c:
    __cxa_begin_catch(in_stack_00000020);
    in_stack_00000008 = uVar13 & 1;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
LAB_037311a4:
  uVar16 = 0;
  uVar14 = 0;
  pbVar22 = pbVar18;
  do {
    pbVar19 = pbVar22 + 1;
    bVar1 = *pbVar22;
    uVar15 = uVar16 & 0x3f;
    uVar16 = uVar16 + 7;
    uVar14 = ((ulong)bVar1 & 0x7f) << uVar15 | uVar14;
    pbVar22 = pbVar19;
  } while ((char)bVar1 < '\0');
  uVar15 = -1L << (uVar16 & 0x3f);
  if (0x3f < uVar16 || bVar1 < 0x40) {
    uVar15 = 0;
  }
  uVar14 = uVar14 | uVar15;
  uVar10 = uVar17;
  if ((long)uVar14 < 1) {
    uVar10 = uVar14 == 0 | uVar17;
    if ((uVar14 != 0) && (((uint)unaff_x22 >> 3 & 1) == 0)) {
      if ((in_stack_00000008 & 0x100000000) == 0) {
        *unaff_x19 = uVar14;
        unaff_x19[1] = (ulong)pbVar18;
        goto LAB_037313f8;
      }
      lVar6 = FUN_0373021c(in_stack_00000020);
      uVar16 = uStack0000000000000010;
      if (lVar6 == 0x434c4e47432b2b01) {
        uVar16 = *(ulong *)(in_stack_00000020 + -0x58);
      }
      if ((uVar16 == 0) || (*(long *)(in_stack_00000020 + -0x50) == 0)) {
LAB_0373147c:
        __cxa_begin_catch(in_stack_00000020);
        FUN_037155d0(*(undefined8 *)(in_stack_00000020 + -0x38));
        goto LAB_03731490;
      }
      in_x5 = in_stack_00000020;
      uVar15 = FUN_037318fc(uVar14,*(undefined8 *)(unaff_x29 + -0x20),uVar3,
                            *(long *)(in_stack_00000020 + -0x50),uVar16,in_stack_00000020,0);
      uVar10 = uVar17;
      if ((uVar15 & 1) != 0) {
        if ((unaff_x22 & 1) == 0) goto LAB_037314d0;
        *unaff_x19 = uVar14;
        unaff_x19[1] = (ulong)pbVar18;
        uVar11 = 6;
        unaff_x19[4] = uVar16;
        goto LAB_03731358;
      }
    }
  }
  else {
    if (*(long *)(unaff_x29 + -0x20) == 0) goto LAB_0373145c;
    if (0xc < (uint)uVar5) goto LAB_0373145c;
    if ((0x1c1dU >> uVar5 & 1) == 0) goto LAB_0373145c;
    *(ulong *)(unaff_x29 + -8) =
         *(long *)(unaff_x29 + -0x20) + *(long *)(&DAT_01e4d508 + uVar5 * 8) * uVar14;
    plVar8 = (long *)FUN_03731710(unaff_x29 + -8,uVar3,0);
    if (plVar8 == (long *)0x0) {
      if ((unaff_x22 & 0xd) != 0) {
        *unaff_x19 = uVar14;
        unaff_x19[1] = (ulong)pbVar18;
LAB_037313f8:
        lVar6 = FUN_0373021c(in_stack_00000020);
        if (lVar6 == 0x434c4e47432b2b01) {
          uStack0000000000000010 = *(ulong *)(in_stack_00000020 + -0x58);
        }
        unaff_x19[4] = uStack0000000000000010;
        uVar11 = 6;
        goto LAB_03731358;
      }
LAB_03731490:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
LAB_037314b0:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
LAB_037314d0:
      lVar6 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                        "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                        ,"actions & _UA_SEARCH_PHASE");
      if (lVar6 == 0) {
        __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __cxa_begin_catch();
      uVar13 = FUN_03730228(lVar6);
      if ((uVar13 & 1) == 0) {
        uVar9 = std::get_terminate();
        uVar21 = std::get_unexpected();
        uVar20 = 0;
        lVar7 = 0;
      }
      else {
        uVar21 = *(undefined8 *)(lVar6 + -0x40);
        uVar9 = *(undefined8 *)(lVar6 + -0x38);
        lVar7 = lVar6 + -0x60;
        pbVar18 = *(byte **)(lVar6 + -0x18);
        uVar20 = *(undefined8 *)(lVar6 + -0x10);
        unaff_x22 = (ulong)*(int *)(lVar6 + -0x24);
      }
      FUN_03715584(uVar21);
      __cxa_begin_catch();
      if ((uVar13 & 1) == 0) goto LAB_0373167c;
      pbStack_68 = pbVar18 + 1;
      FUN_03731710(&pbStack_68,*pbVar18,uVar20);
      bVar1 = *pbStack_68;
      if (bVar1 != 0xff) goto LAB_03731598;
      do {
        FUN_037155d0(uVar9);
        pbStack_68 = extraout_x9;
LAB_03731598:
        uVar13 = 0;
        uVar5 = 0;
        pbVar22 = pbStack_68 + 1;
        do {
          pbVar19 = pbVar22 + 1;
          bVar4 = *pbVar22;
          uVar3 = uVar13 & 0x3f;
          uVar13 = uVar13 + 7;
          uVar5 = ((ulong)bVar4 & 0x7f) << uVar3 | uVar5;
          pbVar22 = pbVar19;
        } while ((char)bVar4 < '\0');
        pbStack_68 = pbVar19;
        plVar8 = (long *)__cxa_get_globals_fast();
        lVar23 = *plVar8;
      } while (lVar23 == 0);
      bVar4 = FUN_03730228(lVar23 + 0x60);
      if ((bVar4 & lVar23 != lVar7) == 1) {
        uVar21 = *(undefined8 *)(lVar23 + 0x10);
        lVar7 = FUN_0373021c(lVar23 + 0x60);
        if (lVar7 == 0x434c4e47432b2b01) {
          lVar7 = *(long *)(lVar23 + 8);
        }
        else {
          lVar7 = lVar23 + 0x80;
        }
        uVar13 = FUN_037318fc(unaff_x22,pbVar19 + uVar5,bVar1,uVar21,lVar7,lVar6,uVar20);
        if ((uVar13 & 1) == 0) {
          lVar6 = plVar8[1];
          *(int *)(lVar23 + 0x38) = -*(int *)(lVar23 + 0x38);
          *(int *)(plVar8 + 1) = (int)lVar6 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar23 + 0x60);
          uVar21 = __cxa_rethrow();
          std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_70);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_03732a6c(uVar21);
        }
      }
      pbVar18 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__;
      puStack_70 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__ + 0x10;
      uVar13 = FUN_037318fc(unaff_x22,pbVar19 + uVar5,bVar1,
                            Method_Oculus_Platform_Request<ChallengeList>__ctor__,&puStack_70,lVar6,
                            uVar20);
      if ((uVar13 & 1) != 0) {
        std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_70);
LAB_0373167c:
        __cxa_end_catch();
        FUN_037155d0(uVar9);
      }
      __cxa_end_catch();
      plVar8 = (long *)__cxa_allocate_exception(8);
      *plVar8 = (long)(pbVar18 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar8,Method_Oculus_Platform_Request<ChallengeList>__ctor__,
                  Method_Oculus_Platform_Request<BlockedUserList>__ctor__);
    }
    if ((in_stack_00000008 & 0x100000000) != 0) {
      lVar6 = FUN_0373021c(in_stack_00000020);
      uVar16 = uStack0000000000000010;
      if (lVar6 == 0x434c4e47432b2b01) {
        uVar16 = *(ulong *)(in_stack_00000020 + -0x58);
      }
      *(ulong *)(unaff_x29 + -8) = uVar16;
      if ((uVar16 == 0) || (*(long *)(in_stack_00000020 + -0x50) == 0)) {
        __cxa_begin_catch(in_stack_00000020);
        FUN_037155d0(*(undefined8 *)(in_stack_00000020 + -0x38));
        in_stack_00000020 = in_x5;
        goto LAB_0373147c;
      }
      uVar16 = (**(code **)(*plVar8 + 0x20))
                         (plVar8,*(long *)(in_stack_00000020 + -0x50),unaff_x29 + -8);
      if ((uVar16 & 1) != 0) {
        if ((unaff_x22 & 9) != 0) {
          uVar13 = *(ulong *)(unaff_x29 + -8);
          *unaff_x19 = uVar14;
          unaff_x19[1] = (ulong)pbVar18;
          *(undefined4 *)(unaff_x19 + 5) = 6;
          unaff_x19[4] = uVar13;
          return;
        }
        goto LAB_037314b0;
      }
    }
  }
  uVar16 = 0;
  uVar14 = 0;
  do {
    bVar1 = *pbVar22;
    uVar15 = uVar16 & 0x3f;
    uVar16 = uVar16 + 7;
    uVar14 = ((ulong)bVar1 & 0x7f) << uVar15 | uVar14;
    pbVar22 = pbVar22 + 1;
  } while ((char)bVar1 < '\0');
  uVar15 = -1L << (uVar16 & 0x3f);
  if (0x3f < uVar16 || bVar1 < 0x40) {
    uVar15 = 0;
  }
  if ((uVar14 | uVar15) == 0) {
    uVar11 = 6;
    if ((uVar10 & ((uint)unaff_x22 & 2) >> 1) == 0) {
      uVar11 = 8;
    }
LAB_03731358:
    *(undefined4 *)(unaff_x19 + 5) = uVar11;
    return;
  }
  pbVar18 = pbVar19 + (uVar14 | uVar15);
  uVar17 = uVar10;
  goto LAB_037311a4;
}


