/*
FUNCTION_NAME: Firebase.StringList.StringListEnumerator$$Dispose
ENTRY_POINT: 03730e50
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


ulong * Firebase_StringList_StringListEnumerator__Dispose(int param_1)

{
  byte bVar1;
  ulong *puVar2;
  byte bVar3;
  char *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 in_x4;
  ulong *in_x5;
  ulong *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *extraout_x9;
  ulong uVar18;
  long unaff_x19;
  ulong *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  byte *pbVar27;
  ulong *puVar28;
  long lVar29;
  undefined1 auVar30 [16];
  long in_stack_00000000;
  undefined *puStack_120;
  byte *pbStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  uint uStack_a4;
  ulong *puStack_a0;
  uint uStack_94;
  ulong *puStack_90;
  ulong uStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  ulong *puStack_68;
  
  if (param_1 == 6) {
    thunk_FUN_03732dd4();
    thunk_FUN_03732dd4();
    FUN_03732ca0();
    if (in_stack_00000000 < 0) {
      *(undefined8 *)(unaff_x19 + -0x10) = 0;
    }
    return (ulong *)0x7;
  }
  uStack_a4 = 0x168696f;
  pcVar4 = "results.reason == _URC_HANDLER_FOUND";
  auVar30 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3db);
  uVar11 = auVar30._8_8_;
  puVar19 = auVar30._0_8_;
  uVar24 = uVar11 & 0xffffffff;
  puVar19[4] = 0;
  *(undefined4 *)(puVar19 + 5) = 3;
  puVar19[1] = 0;
  *puVar19 = 0;
  puVar19[3] = 0;
  puVar19[2] = 0;
  uVar23 = auVar30._8_4_;
  if ((uVar11 & 1) == 0) {
    if ((uVar23 >> 1 & 1) == 0) {
      return puVar19;
    }
    if (((uVar23 ^ 0xffffffff) & 0xc) == 0) {
      uVar15 = 2;
      puVar9 = puVar19;
      goto LAB_03731358;
    }
  }
  else if ((uVar11 & 0xe) != 0) {
    return puVar19;
  }
  puStack_90 = (ulong *)pcVar4;
  pcVar4 = (char *)FUN_03732be4(in_x4);
  puVar9 = (ulong *)0x0;
  if (pcVar4 != (char *)0x0) {
    puVar19[2] = (ulong)pcVar4;
    puVar5 = (ulong *)FUN_03732c70(in_x4);
    uVar6 = FUN_03732c18(in_x4);
    pbStack_70 = (byte *)(pcVar4 + 1);
    if (*pcVar4 == -1) {
      pbVar27 = (byte *)(pcVar4 + 2);
      bVar1 = *pbStack_70;
      uVar7 = uVar6;
    }
    else {
      uVar7 = FUN_03731710(&pbStack_70,*pcVar4,0);
      pbVar27 = pbStack_70 + 1;
      bVar1 = *pbStack_70;
    }
    uStack_88 = (ulong)bVar1;
    if (uStack_88 == 0xff) {
      pbStack_80 = (byte *)0x0;
    }
    else {
      uVar18 = 0;
      uVar16 = 0;
      pbVar20 = pbVar27;
      do {
        pbVar27 = pbVar20 + 1;
        bVar1 = *pbVar20;
        uVar17 = uVar18 & 0x3f;
        uVar18 = uVar18 + 7;
        uVar16 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar16;
        pbVar20 = pbVar27;
      } while ((char)bVar1 < '\0');
      pbStack_80 = pbVar27 + uVar16;
    }
    uVar18 = 0;
    uVar16 = 0;
    puVar14 = (ulong *)((long)puVar5 + ~uVar6);
    puVar28 = (ulong *)(ulong)*pbVar27;
    pbVar27 = pbVar27 + 1;
    do {
      pbVar20 = pbVar27 + 1;
      bVar1 = *pbVar27;
      uVar6 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar16 = ((ulong)bVar1 & 0x7f) << uVar6 | uVar16;
      pbVar27 = pbVar20;
    } while ((char)bVar1 < '\0');
    pbStack_78 = pbVar20;
    pbStack_70 = pbVar20;
    do {
      if (pbVar20 + (uVar16 & 0xffffffff) <= pbStack_78) break;
      puVar5 = (ulong *)FUN_03731710(&pbStack_78,puVar28,0);
      lVar8 = FUN_03731710(&pbStack_78,puVar28,0);
      puVar9 = (ulong *)FUN_03731710(&pbStack_78,puVar28,0);
      uVar6 = 0;
      uVar18 = 0;
      pbVar27 = pbStack_78;
      do {
        pbStack_78 = pbVar27 + 1;
        bVar1 = *pbVar27;
        uVar17 = uVar6 & 0x3f;
        uVar6 = uVar6 + 7;
        uVar18 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar18;
        pbVar27 = pbStack_78;
      } while ((char)bVar1 < '\0');
      if ((puVar5 <= puVar14) && (puVar14 < (ulong *)(lVar8 + (long)puVar5))) {
        if (puVar9 == (ulong *)0x0) goto LAB_03731354;
        puVar19[3] = (ulong)((long)puVar9 + uVar7);
        if (uVar18 != 0) {
          puVar5 = (ulong *)(ulong)uStack_a4;
          uVar7 = uStack_88 & 0xf;
          pbVar20 = pbVar20 + uVar18 + (uVar16 & 0xffffffff) + -1;
          puStack_a0 = puStack_90 + 4;
          uStack_94 = 0x1c1dU >> uVar7 & 1;
          uVar6 = 0;
          goto LAB_037311a4;
        }
        uVar15 = 6;
        if ((uVar11 & 1) != 0) {
          uVar15 = 8;
        }
        goto LAB_03731358;
      }
    } while (puVar5 <= puVar14);
    __cxa_begin_catch(puStack_90);
    if ((uStack_a4 & 1) != 0) {
      do {
        FUN_037155d0(puStack_90[-7]);
LAB_0373145c:
        __cxa_begin_catch(puStack_90);
      } while (((ulong)puVar5 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_03731354:
  uVar15 = 8;
LAB_03731358:
  *(undefined4 *)(puVar19 + 5) = uVar15;
  return puVar9;
LAB_037311a4:
  puVar14 = puStack_90;
  uVar18 = 0;
  uVar16 = 0;
  pbVar27 = pbVar20;
  do {
    pbVar21 = pbVar27 + 1;
    bVar1 = *pbVar27;
    uVar17 = uVar18 & 0x3f;
    uVar18 = uVar18 + 7;
    uVar16 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar16;
    pbVar27 = pbVar21;
  } while ((char)bVar1 < '\0');
  uVar17 = -1L << (uVar18 & 0x3f);
  if (0x3f < uVar18 || bVar1 < 0x40) {
    uVar17 = 0;
  }
  uVar16 = uVar16 | uVar17;
  uVar18 = uVar6;
  if ((long)uVar16 < 1) {
    uVar18 = (ulong)((uint)(uVar16 == 0) | (uint)uVar6);
    if ((uVar16 != 0) && ((uVar23 >> 3 & 1) == 0)) {
      if (((ulong)puVar5 & 1) == 0) {
        *puVar19 = uVar16;
        puVar19[1] = (ulong)pbVar20;
        goto LAB_037313f8;
      }
      lVar8 = FUN_0373021c(puStack_90);
      puVar10 = puStack_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar14[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar14[-10] == 0)) {
LAB_0373147c:
        __cxa_begin_catch(puVar14);
        FUN_037155d0(puVar14[-7]);
        puVar19 = puVar14;
        goto LAB_03731490;
      }
      puVar9 = (ulong *)FUN_037318fc(uVar16,pbStack_80,uStack_88,puVar14[-10],puVar10,puVar14,0);
      in_x5 = puVar14;
      uVar18 = uVar6;
      puVar28 = puVar10;
      if (((ulong)puVar9 & 1) != 0) {
        if ((uVar11 & 1) == 0) goto LAB_037314d0;
        *puVar19 = uVar16;
        puVar19[1] = (ulong)pbVar20;
        uVar15 = 6;
        puVar19[4] = (ulong)puVar10;
        goto LAB_03731358;
      }
    }
  }
  else {
    if (pbStack_80 == (byte *)0x0) goto LAB_0373145c;
    if (0xc < (uint)uVar7) goto LAB_0373145c;
    if (uStack_94 == 0) goto LAB_0373145c;
    puStack_68 = (ulong *)(pbStack_80 + *(long *)(&DAT_01e4d508 + uVar7 * 8) * uVar16);
    puVar10 = (ulong *)FUN_03731710(&puStack_68,uStack_88,0);
    puVar2 = puStack_90;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar28;
      if ((uVar11 & 0xd) != 0) {
        *puVar19 = uVar16;
        puVar19[1] = (ulong)pbVar20;
LAB_037313f8:
        puVar5 = puStack_90;
        puVar9 = (ulong *)FUN_0373021c(puStack_90);
        if (puVar9 == (ulong *)0x434c4e47432b2b01) {
          puStack_a0 = (ulong *)puVar5[-0xb];
        }
        puVar19[4] = (ulong)puStack_a0;
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
      lVar8 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                        "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                        ,"actions & _UA_SEARCH_PHASE");
      pcStack_108 = __cxa_call_unexpected;
      uStack_d8 = 0xffffffffffffffff;
      puStack_110 = &stack0xffffffffffffffa0;
      uStack_100 = uVar7;
      puStack_f8 = puVar5;
      puStack_f0 = puVar10;
      uStack_e8 = uVar16;
      pbStack_e0 = pbVar20;
      uStack_d0 = uVar24;
      pbStack_c8 = pbVar21;
      uStack_c0 = uVar6;
      puStack_b8 = puVar19;
      if (lVar8 == 0) {
        __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __cxa_begin_catch();
      uVar11 = FUN_03730228(lVar8);
      if ((uVar11 & 1) == 0) {
        uVar12 = std::get_terminate();
        uVar26 = std::get_unexpected();
        uVar22 = 0;
        lVar25 = 0;
      }
      else {
        uVar26 = *(undefined8 *)(lVar8 + -0x40);
        uVar12 = *(undefined8 *)(lVar8 + -0x38);
        lVar25 = lVar8 + -0x60;
        pbVar20 = *(byte **)(lVar8 + -0x18);
        uVar22 = *(undefined8 *)(lVar8 + -0x10);
        uVar24 = (ulong)*(int *)(lVar8 + -0x24);
      }
      FUN_03715584(uVar26);
      __cxa_begin_catch();
      if ((uVar11 & 1) == 0) goto LAB_0373167c;
      pbStack_118 = pbVar20 + 1;
      FUN_03731710(&pbStack_118,*pbVar20,uVar22);
      bVar1 = *pbStack_118;
      if (bVar1 != 0xff) goto LAB_03731598;
      do {
        FUN_037155d0(uVar12);
        pbStack_118 = extraout_x9;
LAB_03731598:
        uVar11 = 0;
        uVar6 = 0;
        pbVar27 = pbStack_118 + 1;
        do {
          pbVar21 = pbVar27 + 1;
          bVar3 = *pbVar27;
          uVar7 = uVar11 & 0x3f;
          uVar11 = uVar11 + 7;
          uVar6 = ((ulong)bVar3 & 0x7f) << uVar7 | uVar6;
          pbVar27 = pbVar21;
        } while ((char)bVar3 < '\0');
        pbStack_118 = pbVar21;
        plVar13 = (long *)__cxa_get_globals_fast();
        lVar29 = *plVar13;
      } while (lVar29 == 0);
      bVar3 = FUN_03730228(lVar29 + 0x60);
      if ((bVar3 & lVar29 != lVar25) == 1) {
        uVar26 = *(undefined8 *)(lVar29 + 0x10);
        lVar25 = FUN_0373021c(lVar29 + 0x60);
        if (lVar25 == 0x434c4e47432b2b01) {
          lVar25 = *(long *)(lVar29 + 8);
        }
        else {
          lVar25 = lVar29 + 0x80;
        }
        uVar11 = FUN_037318fc(uVar24,pbVar21 + uVar6,bVar1,uVar26,lVar25,lVar8,uVar22);
        if ((uVar11 & 1) == 0) {
          lVar8 = plVar13[1];
          *(int *)(lVar29 + 0x38) = -*(int *)(lVar29 + 0x38);
          *(int *)(plVar13 + 1) = (int)lVar8 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar29 + 0x60);
          uVar26 = __cxa_rethrow();
          std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_120);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_03732a6c(uVar26);
        }
      }
      pbVar20 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__;
      puStack_120 = Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__ + 0x10;
      uVar11 = FUN_037318fc(uVar24,pbVar21 + uVar6,bVar1,
                            Method_Oculus_Platform_Request<ChallengeList>__ctor__,&puStack_120,lVar8
                            ,uVar22);
      if ((uVar11 & 1) != 0) {
        std::bad_alloc::~bad_alloc((bad_alloc *)&puStack_120);
LAB_0373167c:
        __cxa_end_catch();
        FUN_037155d0(uVar12);
      }
      __cxa_end_catch();
      plVar13 = (long *)__cxa_allocate_exception(8);
      *plVar13 = (long)(pbVar20 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar13,Method_Oculus_Platform_Request<ChallengeList>__ctor__,
                  Method_Oculus_Platform_Request<BlockedUserList>__ctor__);
    }
    puVar9 = puVar10;
    if (((ulong)puVar5 & 1) != 0) {
      lVar8 = FUN_0373021c(puStack_90);
      puStack_68 = puStack_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        puStack_68 = (ulong *)puVar2[-0xb];
      }
      if ((puStack_68 == (ulong *)0x0) || (puVar2[-10] == 0)) {
        __cxa_begin_catch(puVar2);
        FUN_037155d0(puVar2[-7]);
        puVar14 = in_x5;
        puVar5 = puVar2;
        goto LAB_0373147c;
      }
      puVar9 = (ulong *)(**(code **)(*puVar10 + 0x20))(puVar10,puVar2[-10],&puStack_68);
      puVar5 = (ulong *)(ulong)uStack_a4;
      puVar28 = puVar10;
      if (((ulong)puVar9 & 1) != 0) {
        if ((uVar11 & 9) != 0) {
          *puVar19 = uVar16;
          puVar19[1] = (ulong)pbVar20;
          *(undefined4 *)(puVar19 + 5) = 6;
          puVar19[4] = (ulong)puStack_68;
          return puVar9;
        }
        goto LAB_037314b0;
      }
    }
  }
  uVar6 = 0;
  uVar16 = 0;
  do {
    bVar1 = *pbVar27;
    uVar17 = uVar6 & 0x3f;
    uVar6 = uVar6 + 7;
    uVar16 = ((ulong)bVar1 & 0x7f) << uVar17 | uVar16;
    pbVar27 = pbVar27 + 1;
  } while ((char)bVar1 < '\0');
  uVar17 = -1L << (uVar6 & 0x3f);
  if (0x3f < uVar6 || bVar1 < 0x40) {
    uVar17 = 0;
  }
  if ((uVar16 | uVar17) == 0) goto LAB_03731394;
  pbVar20 = pbVar21 + (uVar16 | uVar17);
  uVar6 = uVar18;
  goto LAB_037311a4;
LAB_03731394:
  uVar15 = 6;
  if (((uint)uVar18 & (uVar23 & 2) >> 1) == 0) {
    uVar15 = 8;
  }
  goto LAB_03731358;
}


