/*
FUNCTION_NAME: OVRPlugin$$SetLogCallback2
ENTRY_POINT: 05131314
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetLogCallback2(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
code_r0x05131314:
                    /* catch() { ... } // from try @ 05130eb8 with catch @ 05131314 */
                    /* catch() { ... } // from try @ 05131058 with catch @ 05131318 */
  FUN_0512b384(unaff_x22,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
  plVar5 = (long *)*unaff_x21;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 05131334 to 0523134b has its CatchHandler @ 05131388 */
  (**(code **)(*plVar5 + 0x6e8))(plVar5,unaff_x22,*(undefined8 *)(*plVar5 + 0x6f0));
switchD_051310f8_caseD_0:
  plVar5 = *(long **)(unaff_x19 + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar3 = (**(code **)(*plVar5 + 0x188))
                    (plVar5,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar5 + 400));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar9 = FUN_042a16bc(lVar3,0,*(undefined8 *)PTR_DAT_0676aaa0);
  uVar4 = FUN_0467cf10();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar9;
    thunk_FUN_02dd37b4(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e5dbc(unaff_x19 + 2);
    return;
  }
  uVar4 = FUN_0467cf5c();
  if ((uVar4 & 1) == 0) goto LAB_051311d0;
  unaff_x21 = (long *)(unaff_x19 + 0x12);
  plVar5 = (long *)*unaff_x21;
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06780c40 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06780c40)) {
      if (plVar5[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(plVar5[0xb] + 0x10) != 0) {
        if (plVar5 == unaff_x20) goto LAB_051311d0;
        *unaff_x21 = plVar5[2];
        thunk_FUN_02dd37b4(unaff_x21);
      }
    }
  }
  plVar5 = *(long **)(unaff_x19 + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  switch(uVar2) {
  case 0:
    goto switchD_051310f8_caseD_0;
  case 1:
                    /* catch() { ... } // from try @ 05131054 with catch @ 051313a4 */
                    /* catch() { ... } // from try @ 05130cbc with catch @ 051313a8 */
                    /* catch() { ... } // from try @ 05131050 with catch @ 051313ac */
                    /* catch() { ... } // from try @ 05130c70 with catch @ 051313b0 */
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780528);
                    /* catch() { ... } // from try @ 05131048 with catch @ 051313b4 */
                    /* catch() { ... } // from try @ 05131014 with catch @ 051313b8 */
    FUN_0512f970();
                    /* catch() { ... } // from try @ 05130f08 with catch @ 051313bc
                       catch() { ... } // from try @ 05131094 with catch @ 051313bc */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* catch() { ... } // from try @ 05130c90 with catch @ 051313c0 */
                    /* catch() { ... } // from try @ 05130d9c with catch @ 051313c4 */
                    /* catch() { ... } // from try @ 05130e34 with catch @ 051313c8 */
                    /* catch() { ... } // from try @ 05130dd0 with catch @ 051313cc */
    FUN_0512b384(lVar3,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
                    /* catch() { ... } // from try @ 05130ff0 with catch @ 051313d0 */
    plVar5 = (long *)*unaff_x21;
                    /* catch() { ... } // from try @ 05130fec with catch @ 051313d4 */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* catch() { ... } // from try @ 05130fe8 with catch @ 051313d8 */
                    /* catch() { ... } // from try @ 05130fe0 with catch @ 051313dc */
                    /* catch() { ... } // from try @ 05130ffc with catch @ 051313e0 */
                    /* catch() { ... } // from try @ 05130ff4 with catch @ 051313e4
                       catch() { ... } // from try @ 05131008 with catch @ 051313e4 */
                    /* catch() { ... } // from try @ 05130cfc with catch @ 051313e8 */
    (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x6f0));
    *unaff_x21 = lVar3;
    thunk_FUN_02dd37b4(unaff_x21,lVar3);
    goto switchD_051310f8_caseD_0;
  case 2:
                    /* try { // try from 05131350 to 05231353 has its CatchHandler @ 05131384 */
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780ff8);
                    /* try { // try from 05131354 to 0523136f has its CatchHandler @ 05130ab8 */
    FUN_0512753c(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 05131370 to 0523137f has its CatchHandler @ 05131388 */
    FUN_0512b384(lVar3,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar5 = (long *)*unaff_x21;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* catch() { ... } // from try @ 05131350 with catch @ 05131384 */
                    /* catch() { ... } // from try @ 05131334 with catch @ 05131388
                       catch() { ... } // from try @ 05131370 with catch @ 05131388 */
    (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x6f0));
                    /* try { // try from 05131390 to 05231393 has its CatchHandler @ 05131460 */
    *unaff_x21 = lVar3;
                    /* try { // try from 05131394 to 05231403 has its CatchHandler @ 05130ab8 */
                    /* catch() { ... } // from try @ 05130ee4 with catch @ 05131398 */
                    /* catch() { ... } // from try @ 05130e8c with catch @ 0513139c */
    thunk_FUN_02dd37b4(unaff_x21,lVar3);
                    /* catch() { ... } // from try @ 05130e74 with catch @ 051313a0 */
    goto switchD_051310f8_caseD_0;
  case 3:
    plVar5 = *(long **)(unaff_x19 + 8);
                    /* try { // try from 05131404 to 0523141b has its CatchHandler @ 05131450 */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067810c0);
    FUN_0512a614(lVar3,uVar6);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar3,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar5 = (long *)*unaff_x21;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x6f0));
    *unaff_x21 = lVar3;
    thunk_FUN_02dd37b4(unaff_x21,lVar3);
    goto switchD_051310f8_caseD_0;
  case 4:
    lVar3 = FUN_0512f9d4(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x12));
    if (lVar3 == 0) {
      if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = FUN_05094914(*(long *)(unaff_x19 + 8),0,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar9 = FUN_0507b064(lVar3,0,0);
      _in_stack_00000010 = auVar9;
      uVar4 = FUN_04f2d31c(&stack0x00000010,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
        thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_032e8290(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      FUN_04f2d338(&stack0x00000010,0);
    }
    else {
      *unaff_x21 = lVar3;
      thunk_FUN_02dd37b4(unaff_x21);
    }
    goto switchD_051310f8_caseD_0;
  case 5:
    goto switchD_051310f8_caseD_5;
  default:
    lVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_04f8e414(0);
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 != (long *)0x0) {
      uStack000000000000002c =
           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
      uVar7 = thunk_FUN_02d9d164(uVar7,&stack0x0000002c);
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781270);
      uVar6 = FUN_050f0ec0(uVar8,uVar6,uVar7,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar7 = thunk_FUN_02d9d534();
      FUN_05007004(uVar7,uVar6,0);
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781340);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067680b8);
    FUN_05148530(lVar3,uVar6,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar3,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar5 = (long *)*unaff_x21;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xb:
    lVar3 = FUN_051467e4(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar3,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar5 = (long *)*unaff_x21;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xc:
    lVar3 = FUN_05146914(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar3,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar5 = (long *)*unaff_x21;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xd:
    plVar5 = (long *)*unaff_x21;
    if (plVar5 != unaff_x20) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *unaff_x21 = plVar5[2];
      thunk_FUN_02dd37b4(unaff_x21);
      goto switchD_051310f8_caseD_0;
    }
    break;
  case 0xe:
    plVar5 = (long *)*unaff_x21;
    if (plVar5 != unaff_x20) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *unaff_x21 = plVar5[2];
      thunk_FUN_02dd37b4(unaff_x21);
      goto switchD_051310f8_caseD_0;
    }
    break;
  case 0xf:
    plVar5 = (long *)*unaff_x21;
    if (plVar5 != unaff_x20) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *unaff_x21 = plVar5[2];
      thunk_FUN_02dd37b4(unaff_x21);
      goto switchD_051310f8_caseD_0;
    }
  }
LAB_051311d0:
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_04f2db0c(unaff_x19 + 2,0);
  return;
switchD_051310f8_caseD_5:
  if ((*(long *)(unaff_x19 + 0xc) == 0) || (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x10) != 1))
  goto switchD_051310f8_caseD_0;
  plVar5 = *(long **)(unaff_x19 + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  unaff_x22 = FUN_05146a1c(uVar6,0);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  goto code_r0x05131314;
}


