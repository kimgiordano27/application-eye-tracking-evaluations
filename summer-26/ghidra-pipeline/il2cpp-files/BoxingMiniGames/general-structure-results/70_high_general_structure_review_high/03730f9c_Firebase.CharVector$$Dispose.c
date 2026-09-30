/*
FUNCTION_NAME: Firebase.CharVector$$Dispose
ENTRY_POINT: 03730f9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


void Firebase_CharVector__Dispose
               (undefined1 param_1 [16],undefined8 *param_2,ulong param_3,uint param_4,long param_5,
               undefined8 param_6,long param_7)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 in_w8;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *extraout_x9;
  ulong uVar18;
  ulong *unaff_x19;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong unaff_x22;
  undefined8 uVar24;
  byte *pbVar25;
  long lVar26;
  long unaff_x29;
  uint uStack000000000000000c;
  ulong uStack0000000000000010;
  long lStack0000000000000020;
  undefined *puStack_70;
  byte *pbStack_68;
  
  *(undefined4 *)(param_2 + 5) = in_w8;
  param_2[1] = param_1._8_8_;
  *param_2 = param_1._0_8_;
  param_2[3] = param_1._8_8_;
  param_2[2] = param_1._0_8_;
  uVar23 = (uint)unaff_x22;
  if ((param_3 & 1) == 0) {
    if ((uVar23 >> 1 & 1) == 0) {
      return;
    }
    if (((uVar23 ^ 0xffffffff) & 0xc) == 0) {
      uVar15 = 2;
      goto LAB_03731358;
    }
  }
  else if ((unaff_x22 & 0xe) != 0) {
    return;
  }
  lStack0000000000000020 = param_5;
  pcVar6 = (char *)FUN_03732be4(param_6);
  if (pcVar6 != (char *)0x0) {
    unaff_x19[2] = (ulong)pcVar6;
    uStack000000000000000c = param_4;
    uVar7 = FUN_03732c70(param_6);
    uVar8 = FUN_03732c18(param_6);
    cVar1 = *pcVar6;
    *(char **)(unaff_x29 + -0x10) = pcVar6 + 1;
    if (cVar1 == -1) {
      pbVar25 = (byte *)(pcVar6 + 2);
      bVar2 = pcVar6[1];
      *(byte **)(unaff_x29 + -0x10) = pbVar25;
      uVar9 = uVar8;
    }
    else {
      uVar9 = FUN_03731710(unaff_x29 + -0x10,cVar1,0);
      pbVar25 = *(byte **)(unaff_x29 + -0x10) + 1;
      bVar2 = **(byte **)(unaff_x29 + -0x10);
      *(byte **)(unaff_x29 + -0x10) = pbVar25;
    }
    uVar4 = (ulong)bVar2;
    if (uVar4 == 0xff) {
      *(undefined8 *)(unaff_x29 + -0x20) = 0;
    }
    else {
      uVar18 = 0;
      uVar17 = 0;
      pbVar20 = pbVar25;
      do {
        pbVar25 = pbVar20 + 1;
        bVar2 = *pbVar20;
        uVar16 = uVar18 & 0x3f;
        uVar18 = uVar18 + 7;
        uVar17 = ((ulong)bVar2 & 0x7f) << uVar16 | uVar17;
        pbVar20 = pbVar25;
      } while ((char)bVar2 < '\0');
      *(byte **)(unaff_x29 + -0x20) = pbVar25 + uVar17;
    }
    uVar18 = 0;
    uVar17 = 0;
    *(byte **)(unaff_x29 + -0x10) = pbVar25 + 1;
    uVar8 = uVar7 + ~uVar8;
    bVar2 = *pbVar25;
    pbVar25 = pbVar25 + 1;
    do {
      pbVar20 = pbVar25 + 1;
      bVar5 = *pbVar25;
      uVar16 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar17 = ((ulong)bVar5 & 0x7f) << uVar16 | uVar17;
      pbVar25 = pbVar20;
    } while ((char)bVar5 < '\0');
    *(byte **)(unaff_x29 + -0x18) = pbVar20;
    *(byte **)(unaff_x29 + -0x10) = pbVar20;
    do {
      if (pbVar20 + (uVar17 & 0xffffffff) <= pbVar25) break;
      uVar7 = FUN_03731710(unaff_x29 + -0x18,bVar2,0);
      lVar10 = FUN_03731710(unaff_x29 + -0x18,bVar2,0);
      lVar11 = FUN_03731710(unaff_x29 + -0x18,bVar2,0);
      uVar18 = 0;
      uVar16 = 0;
      pbVar21 = *(byte **)(unaff_x29 + -0x18);
      do {
        pbVar25 = pbVar21 + 1;
        bVar5 = *pbVar21;
        uVar3 = uVar18 & 0x3f;
        uVar18 = uVar18 + 7;
        uVar16 = ((ulong)bVar5 & 0x7f) << uVar3 | uVar16;
        pbVar21 = pbVar25;
      } while ((char)bVar5 < '\0');
      *(byte **)(unaff_x29 + -0x18) = pbVar25;
      if ((uVar7 <= uVar8) && (uVar8 < lVar10 + uVar7)) {
        if (lVar11 == 0) goto LAB_03731354;
        unaff_x19[3] = lVar11 + uVar9;
        if (uVar16 != 0) {
          uVar7 = (ulong)uStack000000000000000c;
          uVar8 = uVar4 & 0xf;
          pbVar20 = pbVar20 + uVar16 + (uVar17 & 0xffffffff) + -1;
          uStack0000000000000010 = lStack0000000000000020 + 0x20;
          uVar19 = 0;
          goto LAB_037311a4;
        }
        uVar15 = 6;
        if ((unaff_x22 & 1) != 0) {
          uVar15 = 8;
        }
        goto LAB_03731358;
      }
    } while (uVar7 <= uVar8);
    __cxa_begin_catch(lStack0000000000000020);
    if ((uStack000000000000000c & 1) != 0) {
      do {
        FUN_037155d0(*(undefined8 *)(lStack0000000000000020 + -0x38));
LAB_0373145c:
        __cxa_begin_catch(lStack0000000000000020);
      } while ((uVar7 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_03731354:
  uVar15 = 8;
  goto LAB_03731358;
LAB_037311a4:
  lVar10 = lStack0000000000000020;
  uVar9 = 0;
  uVar18 = 0;
  pbVar25 = pbVar20;
  do {
    pbVar21 = pbVar25 + 1;
    bVar2 = *pbVar25;
    uVar17 = uVar9 & 0x3f;
    uVar9 = uVar9 + 7;
    uVar18 = ((ulong)bVar2 & 0x7f) << uVar17 | uVar18;
    pbVar25 = pbVar21;
  } while ((char)bVar2 < '\0');
  uVar17 = -1L << (uVar9 & 0x3f);
  if (0x3f < uVar9 || bVar2 < 0x40) {
    uVar17 = 0;
  }
  uVar18 = uVar18 | uVar17;
  uVar14 = uVar19;
  if ((long)uVar18 < 1) {
    uVar14 = uVar18 == 0 | uVar19;
    if ((uVar18 != 0) && ((uVar23 >> 3 & 1) == 0)) {
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = uVar18;
        unaff_x19[1] = (ulong)pbVar20;
        goto LAB_037313f8;
      }
      lVar11 = FUN_0373021c(lStack0000000000000020);
      uVar9 = uStack0000000000000010;
      if (lVar11 == 0x434c4e47432b2b01) {
        uVar9 = *(ulong *)(lVar10 + -0x58);
      }
      if ((uVar9 == 0) || (*(long *)(lVar10 + -0x50) == 0)) {
LAB_0373147c:
        __cxa_begin_catch(lVar10);
        FUN_037155d0(*(undefined8 *)(lVar10 + -0x38));
        goto LAB_03731490;
      }
      uVar17 = FUN_037318fc(uVar18,*(undefined8 *)(unaff_x29 + -0x20),uVar4,
                            *(long *)(lVar10 + -0x50),uVar9,lVar10,0);
      param_7 = lVar10;
      uVar14 = uVar19;
      if ((uVar17 & 1) != 0) {
        if ((unaff_x22 & 1) == 0) goto LAB_037314d0;
        *unaff_x19 = uVar18;
        unaff_x19[1] = (ulong)pbVar20;
        uVar15 = 6;
        unaff_x19[4] = uVar9;
        goto LAB_03731358;
      }
    }
  }
  else {
    if (*(long *)(unaff_x29 + -0x20) == 0) goto LAB_0373145c;
    if (0xc < (uint)uVar8) goto LAB_0373145c;
    if ((0x1c1dU >> uVar8 & 1) == 0) goto LAB_0373145c;
    *(ulong *)(unaff_x29 + -8) =
         *(long *)(unaff_x29 + -0x20) + *(long *)(&DAT_01e4d508 + uVar8 * 8) * uVar18;
    plVar12 = (long *)FUN_03731710(unaff_x29 + -8,uVar4,0);
    lVar10 = lStack0000000000000020;
    if (plVar12 == (long *)0x0) {
      if ((unaff_x22 & 0xd) != 0) {
        *unaff_x19 = uVar18;
        unaff_x19[1] = (ulong)pbVar20;
LAB_037313f8:
        lVar10 = lStack0000000000000020;
        lVar11 = FUN_0373021c(lStack0000000000000020);
        if (lVar11 == 0x434c4e47432b2b01) {
          uStack0000000000000010 = *(ulong *)(lVar10 + -0x58);
        }
        unaff_x19[4] = uStack0000000000000010;
        uVar15 = 6;
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
      lVar10 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                         "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                         ,"actions & _UA_SEARCH_PHASE");
      if (lVar10 == 0) {
        __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __cxa_begin_catch();
      uVar7 = FUN_03730228(lVar10);
      if ((uVar7 & 1) == 0) {
        uVar13 = std::get_terminate();
        uVar24 = std::get_unexpected();
        uVar22 = 0;
        lVar11 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(lVar10 + -0x40);
        uVar13 = *(undefined8 *)(lVar10 + -0x38);
        lVar11 = lVar10 + -0x60;
        pbVar20 = *(byte **)(lVar10 + -0x18);
        uVar22 = *(undefined8 *)(lVar10 + -0x10);
        unaff_x22 = (ulong)*(int *)(lVar10 + -0x24);
      }
      FUN_03715584(uVar24);
      __cxa_begin_catch();
      if ((uVar7 & 1) == 0) goto LAB_0373167c;
      pbStack_68 = pbVar20 + 1;
      FUN_03731710(&pbStack_68,*pbVar20,uVar22);
      bVar2 = *pbStack_68;
      if (bVar2 != 0xff) goto LAB_03731598;
      do {
        FUN_037155d0(uVar13);
        pbStack_68 = extraout_x9;
LAB_03731598:
        uVar7 = 0;
        uVar8 = 0;
        pbVar25 = pbStack_68 + 1;
        do {
          pbVar21 = pbVar25 + 1;
          bVar5 = *pbVar25;
          uVar9 = uVar7 & 0x3f;
          uVar7 = uVar7 + 7;
          uVar8 = ((ulong)bVar5 & 0x7f) << uVar9 | uVar8;
          pbVar25 = pbVar21;
        } while ((char)bVar5 < '\0');
        pbStack_68 = pbVar21;
        plVar12 = (long *)__cxa_get_globals_fast();
        lVar26 = *plVar12;
      } while (lVar26 == 0);
      bVar5 = FUN_03730228(lVar26 + 0x60);
      if ((bVar5 & lVar26 != lVar11) == 1) {
        uVar24 = *(undefined8 *)(lVar26 + 0x10);
        lVar11 = FUN_0373021c(lVar26 + 0x60);
        if (lVar11 == 0x434c4e47432b2b01) {
          lVar11 = *(long *)(lVar26 + 8);
        }
        else {
          lVar11 = lVar26 + 0x80;
        }
        uVar7 = FUN_037318fc(unaff_x22,pbVar21 + uVar8,bVar2,uVar24,lVar11,lVar10,uVar22);
        if ((uVar7 & 1) == 0) {
          lVar10 = plVar12[1];
          *(int *)(lVar26 + 0x38) = -*(int *)(lVar26 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar10 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar26 + 0x60);
          uVar24 = __cxa_rethrow();
          std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_70);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_03732a6c(uVar24);
        }
      }
      pbVar20 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__;
      puStack_70 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__ + 0x10;
      uVar7 = FUN_037318fc(unaff_x22,pbVar21 + uVar8,bVar2,
                           Method_Oculus_Platform_Request<ChallengeList>__ctor__,&puStack_70,lVar10,
                           uVar22);
      if ((uVar7 & 1) != 0) {
        std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_70);
LAB_0373167c:
        __cxa_end_catch();
        FUN_037155d0(uVar13);
      }
      __cxa_end_catch();
      plVar12 = (long *)__cxa_allocate_exception(8);
      *plVar12 = (long)(pbVar20 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar12,Method_Oculus_Platform_Request<ChallengeList>__ctor__,
                  Method_Oculus_Platform_Request<BlockedUserList>__ctor__);
    }
    if ((uVar7 & 1) != 0) {
      lVar11 = FUN_0373021c(lStack0000000000000020);
      uVar7 = uStack0000000000000010;
      if (lVar11 == 0x434c4e47432b2b01) {
        uVar7 = *(ulong *)(lVar10 + -0x58);
      }
      *(ulong *)(unaff_x29 + -8) = uVar7;
      if ((uVar7 == 0) || (*(long *)(lVar10 + -0x50) == 0)) {
        __cxa_begin_catch(lVar10);
        FUN_037155d0(*(undefined8 *)(lVar10 + -0x38));
        lVar10 = param_7;
        goto LAB_0373147c;
      }
      uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,*(long *)(lVar10 + -0x50),unaff_x29 + -8);
      uVar7 = (ulong)uStack000000000000000c;
      if ((uVar9 & 1) != 0) {
        if ((unaff_x22 & 9) != 0) {
          uVar7 = *(ulong *)(unaff_x29 + -8);
          *unaff_x19 = uVar18;
          unaff_x19[1] = (ulong)pbVar20;
          *(undefined4 *)(unaff_x19 + 5) = 6;
          unaff_x19[4] = uVar7;
          return;
        }
        goto LAB_037314b0;
      }
    }
  }
  uVar9 = 0;
  uVar18 = 0;
  do {
    bVar2 = *pbVar25;
    uVar17 = uVar9 & 0x3f;
    uVar9 = uVar9 + 7;
    uVar18 = ((ulong)bVar2 & 0x7f) << uVar17 | uVar18;
    pbVar25 = pbVar25 + 1;
  } while ((char)bVar2 < '\0');
  uVar17 = -1L << (uVar9 & 0x3f);
  if (0x3f < uVar9 || bVar2 < 0x40) {
    uVar17 = 0;
  }
  if ((uVar18 | uVar17) == 0) goto LAB_03731394;
  pbVar20 = pbVar21 + (uVar18 | uVar17);
  uVar19 = uVar14;
  goto LAB_037311a4;
LAB_03731394:
  uVar15 = 6;
  if ((uVar14 & (uVar23 & 2) >> 1) == 0) {
    uVar15 = 8;
  }
LAB_03731358:
  *(undefined4 *)(unaff_x19 + 5) = uVar15;
  return;
}


