/*
FUNCTION_NAME: OVRPlugin$$IsPassthroughShape
ENTRY_POINT: 0513141c
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


void OVRPlugin__IsPassthroughShape(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
code_r0x0513141c:
                    /* try { // try from 0513141c to 0523143f has its CatchHandler @ 05130ab8 */
  uVar4 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067810c0);
  FUN_0512a614(lVar5,uVar4);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_0512b384(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
  plVar6 = (long *)*unaff_x21;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x6f0));
  *unaff_x21 = lVar5;
  thunk_FUN_02dd37b4(unaff_x21,lVar5);
switchD_051310f8_caseD_0:
  plVar6 = *(long **)(unaff_x19 + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = (**(code **)(*plVar6 + 0x188))
                    (plVar6,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar6 + 400));
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar9 = FUN_042a16bc(lVar5,0,*(undefined8 *)PTR_DAT_0676aaa0);
  uVar3 = FUN_0467cf10();
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar9;
    thunk_FUN_02dd37b4(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e5dbc(unaff_x19 + 2);
    return;
  }
  uVar3 = FUN_0467cf5c();
  if ((uVar3 & 1) == 0) goto LAB_051311d0;
  unaff_x21 = (long *)(unaff_x19 + 0x12);
  plVar6 = (long *)*unaff_x21;
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06780c40 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06780c40)) {
      if (plVar6[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(plVar6[0xb] + 0x10) != 0) {
        if (plVar6 == unaff_x20) goto LAB_051311d0;
        *unaff_x21 = plVar6[2];
        thunk_FUN_02dd37b4(unaff_x21);
      }
    }
  }
  plVar6 = *(long **)(unaff_x19 + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
  switch(uVar2) {
  case 0:
    goto switchD_051310f8_caseD_0;
  case 1:
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780528);
    FUN_0512f970();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar6 = (long *)*unaff_x21;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x6f0));
    *unaff_x21 = lVar5;
    thunk_FUN_02dd37b4(unaff_x21,lVar5);
    goto switchD_051310f8_caseD_0;
  case 2:
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780ff8);
    FUN_0512753c(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar6 = (long *)*unaff_x21;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x6f0));
    *unaff_x21 = lVar5;
    thunk_FUN_02dd37b4(unaff_x21,lVar5);
    goto switchD_051310f8_caseD_0;
  case 3:
    goto switchD_051310f8_caseD_3;
  case 4:
    lVar5 = FUN_0512f9d4(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x12));
    if (lVar5 == 0) {
      if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar5 = FUN_05094914(*(long *)(unaff_x19 + 8),0,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar9 = FUN_0507b064(lVar5,0,0);
      _in_stack_00000010 = auVar9;
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
      *unaff_x21 = lVar5;
      thunk_FUN_02dd37b4(unaff_x21);
    }
    goto switchD_051310f8_caseD_0;
  case 5:
    if ((*(long *)(unaff_x19 + 0xc) != 0) && (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x10) == 1)) {
      plVar6 = *(long **)(unaff_x19 + 8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      lVar5 = FUN_05146a1c(uVar4,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar6 = (long *)*unaff_x21;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x6f0));
    }
    goto switchD_051310f8_caseD_0;
  default:
    lVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f8e414(0);
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 != (long *)0x0) {
      uStack000000000000002c =
           (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
      uVar7 = thunk_FUN_02d9d164(uVar7,&stack0x0000002c);
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781270);
      uVar4 = FUN_050f0ec0(uVar8,uVar4,uVar7,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar7 = thunk_FUN_02d9d534();
      FUN_05007004(uVar7,uVar4,0);
      uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781340);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar4 = (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067680b8);
    FUN_05148530(lVar5,uVar4,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar6 = (long *)*unaff_x21;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xb:
    lVar5 = FUN_051467e4(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar6 = (long *)*unaff_x21;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xc:
    lVar5 = FUN_05146914(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar5,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar6 = (long *)*unaff_x21;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar6 + 0x6e8))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xd:
    plVar6 = (long *)*unaff_x21;
    if (plVar6 != unaff_x20) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *unaff_x21 = plVar6[2];
      thunk_FUN_02dd37b4(unaff_x21);
      goto switchD_051310f8_caseD_0;
    }
    break;
  case 0xe:
    plVar6 = (long *)*unaff_x21;
    if (plVar6 != unaff_x20) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *unaff_x21 = plVar6[2];
      thunk_FUN_02dd37b4(unaff_x21);
      goto switchD_051310f8_caseD_0;
    }
    break;
  case 0xf:
    plVar6 = (long *)*unaff_x21;
    if (plVar6 != unaff_x20) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *unaff_x21 = plVar6[2];
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
switchD_051310f8_caseD_3:
  plVar6 = *(long **)(unaff_x19 + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  param_1 = (long *)(**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  goto code_r0x0513141c;
}


