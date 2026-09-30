/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 05131044
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


void OVRPlugin__get_nativeSDKVersion(void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
                    /* try { // try from 05131048 to 0523104f has its CatchHandler @ 051313b4 */
  thunk_FUN_02dd37b4();
  do {
                    /* try { // try from 05131058 to 0523105b has its CatchHandler @ 05131318 */
    plVar6 = (long *)(unaff_x19 + 0x12);
                    /* try { // try from 0513105c to 0523106f has its CatchHandler @ 05131304 */
    plVar9 = (long *)*plVar6;
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06780c40 + 0x130);
                    /* try { // try from 05131084 to 0523108f has its CatchHandler @ 051312dc */
                    /* try { // try from 05131090 to 05231093 has its CatchHandler @ 05131310 */
                    /* try { // try from 05131094 to 05231097 has its CatchHandler @ 051313bc */
      if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06780c40))
      {
                    /* try { // try from 05131098 to 0523109b has its CatchHandler @ 051312f4 */
                    /* try { // try from 0513109c to 0523109f has its CatchHandler @ 05131308 */
        if (plVar9[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
                    /* try { // try from 051310a0 to 052310a3 has its CatchHandler @ 051312e8 */
                    /* try { // try from 051310a4 to 052310bb has its CatchHandler @ 051312ec */
        if (*(long *)(plVar9[0xb] + 0x10) != 0) {
          if (plVar9 == unaff_x20) break;
          *plVar6 = plVar9[2];
                    /* try { // try from 051310bc to 052310c3 has its CatchHandler @ 051312d8 */
          thunk_FUN_02dd37b4(plVar6);
        }
      }
    }
    plVar9 = *(long **)(unaff_x19 + 8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 051310c8 to 052310db has its CatchHandler @ 051312d4 */
    uVar2 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
                    /* try { // try from 051310e0 to 05231133 has its CatchHandler @ 051312d0 */
    switch(uVar2) {
    case 0:
      break;
    case 1:
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780528);
      FUN_0512f970();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar9 = (long *)*plVar6;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar4,*(undefined8 *)(*plVar9 + 0x6f0));
      *plVar6 = lVar4;
      thunk_FUN_02dd37b4(plVar6,lVar4);
      break;
    case 2:
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780ff8);
      FUN_0512753c(lVar4,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar9 = (long *)*plVar6;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar4,*(undefined8 *)(*plVar9 + 0x6f0));
      *plVar6 = lVar4;
      thunk_FUN_02dd37b4(plVar6,lVar4);
      break;
    case 3:
      plVar9 = *(long **)(unaff_x19 + 8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067810c0);
      FUN_0512a614(lVar4,uVar5);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar9 = (long *)*plVar6;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar4,*(undefined8 *)(*plVar9 + 0x6f0));
      *plVar6 = lVar4;
      thunk_FUN_02dd37b4(plVar6,lVar4);
      break;
    case 4:
      lVar4 = FUN_0512f9d4(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                           *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x12));
      if (lVar4 == 0) {
        if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar4 = FUN_05094914(*(long *)(unaff_x19 + 8),0,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        auVar10 = FUN_0507b064(lVar4,0,0);
        _in_stack_00000010 = auVar10;
        uVar3 = FUN_04f2d31c(&stack0x00000010,0);
        if ((uVar3 & 1) == 0) {
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
        *plVar6 = lVar4;
        thunk_FUN_02dd37b4(plVar6);
      }
      break;
    case 5:
                    /* catch() { ... } // from try @ 05131264 with catch @ 051312c8 */
                    /* catch() { ... } // from try @ 051311e0 with catch @ 051312cc */
                    /* catch() { ... } // from try @ 051310e0 with catch @ 051312d0 */
                    /* catch() { ... } // from try @ 051310c8 with catch @ 051312d4 */
                    /* catch() { ... } // from try @ 051310bc with catch @ 051312d8 */
      if ((*(long *)(unaff_x19 + 0xc) != 0) && (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x10) == 1)) {
                    /* catch() { ... } // from try @ 05131084 with catch @ 051312dc
                       catch() { ... } // from try @ 051311cc with catch @ 051312dc
                       catch() { ... } // from try @ 0513123c with catch @ 051312dc */
        plVar9 = *(long **)(unaff_x19 + 8);
                    /* catch() { ... } // from try @ 05130c50 with catch @ 051312e0 */
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
                    /* catch() { ... } // from try @ 05130fac with catch @ 051312e4 */
                    /* catch() { ... } // from try @ 051310a0 with catch @ 051312e8 */
                    /* catch() { ... } // from try @ 05130c10 with catch @ 051312ec
                       catch() { ... } // from try @ 051310a4 with catch @ 051312ec */
                    /* catch() { ... } // from try @ 0513103c with catch @ 051312f0
                       catch() { ... } // from try @ 05131198 with catch @ 051312f0
                       catch() { ... } // from try @ 051311d8 with catch @ 051312f0 */
        plVar9 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
                    /* catch() { ... } // from try @ 05131098 with catch @ 051312f4 */
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
                    /* catch() { ... } // from try @ 05130c14 with catch @ 051312f8 */
                    /* catch() { ... } // from try @ 05130f5c with catch @ 051312fc */
                    /* catch() { ... } // from try @ 05130c30 with catch @ 05131300 */
        uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                    /* catch() { ... } // from try @ 0513105c with catch @ 05131304 */
        lVar4 = FUN_05146a1c(uVar5,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x6f0));
      }
      break;
    default:
      lVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f8e414(0);
      plVar6 = *(long **)(unaff_x19 + 8);
      if (plVar6 != (long *)0x0) {
        uStack000000000000002c =
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
        uVar7 = thunk_FUN_02d9d164(uVar7,&stack0x0000002c);
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781270);
        uVar5 = FUN_050f0ec0(uVar8,uVar5,uVar7,0);
        thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
        uVar7 = thunk_FUN_02d9d534();
        FUN_05007004(uVar7,uVar5,0);
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781340);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar7,uVar5);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      plVar9 = *(long **)(unaff_x19 + 8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar5 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067680b8);
      FUN_05148530(lVar4,uVar5,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
                    /* try { // try from 0513113c to 0523114b has its CatchHandler @ 051312bc */
      FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar6 = (long *)*plVar6;
                    /* try { // try from 05131150 to 05231187 has its CatchHandler @ 051312b8 */
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x6f0));
      break;
    case 0xb:
      lVar4 = FUN_051467e4(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x6f0));
      break;
    case 0xc:
      lVar4 = FUN_05146914(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
                    /* try { // try from 0513123c to 05231263 has its CatchHandler @ 051312dc */
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x6f0));
      break;
    case 0xd:
      plVar9 = (long *)*plVar6;
                    /* try { // try from 05131264 to 0523127b has its CatchHandler @ 051312c8 */
      if (plVar9 == unaff_x20) goto LAB_051311d0;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *plVar6 = plVar9[2];
      thunk_FUN_02dd37b4(plVar6);
      break;
    case 0xe:
                    /* try { // try from 05131280 to 052312b7 has its CatchHandler @ 051312c0 */
      plVar9 = (long *)*plVar6;
      if (plVar9 == unaff_x20) goto LAB_051311d0;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *plVar6 = plVar9[2];
      thunk_FUN_02dd37b4(plVar6);
      break;
    case 0xf:
      plVar9 = (long *)*plVar6;
      if (plVar9 == unaff_x20) goto LAB_051311d0;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
                    /* catch() { ... } // from try @ 05131150 with catch @ 051312b8
                       try { // try from 051312b8 to 05231333 has its CatchHandler @ 05130ab8 */
      *plVar6 = plVar9[2];
                    /* catch() { ... } // from try @ 0513113c with catch @ 051312bc */
                    /* catch() { ... } // from try @ 05131280 with catch @ 051312c0 */
      thunk_FUN_02dd37b4(plVar6);
                    /* catch() { ... } // from try @ 051311fc with catch @ 051312c4 */
    }
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = (**(code **)(*plVar6 + 0x188))
                      (plVar6,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar6 + 400));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar10 = FUN_042a16bc(lVar4,0,*(undefined8 *)PTR_DAT_0676aaa0);
                    /* try { // try from 05131198 to 052311bb has its CatchHandler @ 051312f0 */
    uVar3 = FUN_0467cf10();
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar10;
      thunk_FUN_02dd37b4(unaff_x19 + 0x18,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e5dbc(unaff_x19 + 2);
      return;
    }
    uVar3 = FUN_0467cf5c();
                    /* try { // try from 051311cc to 052311cf has its CatchHandler @ 051312dc */
  } while ((uVar3 & 1) != 0);
LAB_051311d0:
                    /* try { // try from 051311d8 to 052311df has its CatchHandler @ 051312f0 */
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
                    /* try { // try from 051311e0 to 052311f7 has its CatchHandler @ 051312cc */
  thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
                    /* try { // try from 051311fc to 05231233 has its CatchHandler @ 051312c4 */
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_04f2db0c(unaff_x19 + 2,0);
  return;
}


