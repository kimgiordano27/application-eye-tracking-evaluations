/*
FUNCTION_NAME: OVRPlugin$$get_initialized
ENTRY_POINT: 05131598
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


void OVRPlugin__get_initialized(void)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
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
  
switchD_051310f8_caseD_0:
  plVar3 = *(long **)(unaff_x19 + 8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = (**(code **)(*plVar3 + 0x188))
                    (plVar3,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar3 + 400));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  auVar10 = FUN_042a16bc(lVar4,0,*(undefined8 *)PTR_DAT_0676aaa0);
  uVar5 = FUN_0467cf10();
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e5dbc(unaff_x19 + 2);
    return;
  }
  uVar5 = FUN_0467cf5c();
  if ((uVar5 & 1) == 0) goto LAB_051311d0;
  plVar3 = (long *)(unaff_x19 + 0x12);
  plVar9 = (long *)*plVar3;
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06780c40 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06780c40)) {
      if (plVar9[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(plVar9[0xb] + 0x10) != 0) {
        if (plVar9 == unaff_x20) goto LAB_051311d0;
        *plVar3 = plVar9[2];
        thunk_FUN_02dd37b4(plVar3);
      }
    }
  }
  plVar9 = *(long **)(unaff_x19 + 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
  switch(uVar2) {
  case 0:
    goto switchD_051310f8_caseD_0;
  case 1:
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780528);
    FUN_0512f970();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar9 = (long *)*plVar3;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar4,*(undefined8 *)(*plVar9 + 0x6f0));
    *plVar3 = lVar4;
    thunk_FUN_02dd37b4(plVar3,lVar4);
    goto switchD_051310f8_caseD_0;
  case 2:
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780ff8);
    FUN_0512753c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar9 = (long *)*plVar3;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar4,*(undefined8 *)(*plVar9 + 0x6f0));
    *plVar3 = lVar4;
    thunk_FUN_02dd37b4(plVar3,lVar4);
    goto switchD_051310f8_caseD_0;
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
    uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067810c0);
    FUN_0512a614(lVar4,uVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar9 = (long *)*plVar3;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar4,*(undefined8 *)(*plVar9 + 0x6f0));
    *plVar3 = lVar4;
    thunk_FUN_02dd37b4(plVar3,lVar4);
    goto switchD_051310f8_caseD_0;
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
      uVar5 = FUN_04f2d31c(&stack0x00000010,0);
      if ((uVar5 & 1) == 0) {
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
      *plVar3 = lVar4;
      thunk_FUN_02dd37b4(plVar3);
    }
    goto switchD_051310f8_caseD_0;
  case 5:
    if ((*(long *)(unaff_x19 + 0xc) != 0) && (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x10) == 1)) {
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
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      lVar4 = FUN_05146a1c(uVar6,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar3 + 0x6e8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x6f0));
    }
    goto switchD_051310f8_caseD_0;
  default:
    goto switchD_051310f8_caseD_6;
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
    uVar6 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067680b8);
    FUN_05148530(lVar4,uVar6,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar3 + 0x6e8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xb:
    lVar4 = FUN_051467e4(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar3 + 0x6e8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xc:
    lVar4 = FUN_05146914(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0512b384(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar3 + 0x6e8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x6f0));
    goto switchD_051310f8_caseD_0;
  case 0xd:
    plVar9 = (long *)*plVar3;
    if (plVar9 != unaff_x20) {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *plVar3 = plVar9[2];
      thunk_FUN_02dd37b4(plVar3);
      goto switchD_051310f8_caseD_0;
    }
    break;
  case 0xe:
    plVar9 = (long *)*plVar3;
    if (plVar9 != unaff_x20) {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *plVar3 = plVar9[2];
      thunk_FUN_02dd37b4(plVar3);
      goto switchD_051310f8_caseD_0;
    }
    break;
  case 0xf:
    plVar9 = (long *)*plVar3;
    if (plVar9 != unaff_x20) {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *plVar3 = plVar9[2];
      thunk_FUN_02dd37b4(plVar3);
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
switchD_051310f8_caseD_6:
  lVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_04f8e414(0);
  plVar3 = *(long **)(unaff_x19 + 8);
  if (plVar3 != (long *)0x0) {
    uStack000000000000002c = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240))
    ;
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
}


