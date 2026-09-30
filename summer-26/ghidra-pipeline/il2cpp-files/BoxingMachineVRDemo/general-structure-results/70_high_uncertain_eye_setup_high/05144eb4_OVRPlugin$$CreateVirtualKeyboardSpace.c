/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboardSpace
ENTRY_POINT: 05144eb4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateVirtualKeyboardSpace(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  long *unaff_x23;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  _in_stack_00000050 = FUN_042a16bc(param_1,0,*(undefined8 *)PTR_DAT_0676aaa0);
  uVar5 = FUN_0467cf10(&stack0x00000050,*(undefined8 *)PTR_DAT_0676aa98);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000050;
    thunk_FUN_02dd37b4(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0301edec(unaff_x19 + 2,&stack0x00000050);
  }
  else {
    uVar5 = FUN_0467cf5c(&stack0x00000050,*(undefined8 *)PTR_DAT_0676aa90);
    if ((uVar5 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 8);
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06781a20);
      uVar3 = FUN_05095eec(uVar9,uVar3,0);
      uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781be0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3,uVar9);
    }
    uVar3 = thunk_FUN_02d9d438(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_0677d968);
    plVar4 = *(long **)(unaff_x19 + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
    switch(uVar2) {
    case 1:
      lVar6 = FUN_051321c0(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                           *(undefined8 *)(unaff_x19 + 0xc));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      _in_stack_00000040 = FUN_042a90e8(lVar6,0,*(undefined8 *)PTR_DAT_06781bc0);
      uVar5 = FUN_0467d5c0(&stack0x00000040,*(undefined8 *)PTR_DAT_06781ba0);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000040;
        thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_030206e4(unaff_x19 + 2,&stack0x00000040);
        return;
      }
      lVar6 = FUN_0467d60c(&stack0x00000040,*(undefined8 *)PTR_DAT_06781b88);
      break;
    case 2:
      lVar6 = FUN_051273fc(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                           *(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      _in_stack_00000030 = FUN_042a90e8(lVar6,0,*(undefined8 *)PTR_DAT_06781bd0);
      uVar5 = FUN_0467d5c0(&stack0x00000030,*(undefined8 *)PTR_DAT_06781ba8);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000030;
        thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_030206e4(unaff_x19 + 2,&stack0x00000030);
        return;
      }
      lVar6 = FUN_0467d60c(&stack0x00000030,*(undefined8 *)PTR_DAT_06781b80);
      break;
    case 3:
      lVar6 = FUN_05129050(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                           *(undefined8 *)(unaff_x19 + 0xc));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      _in_stack_00000020 = FUN_042a90e8(lVar6,0,*(undefined8 *)PTR_DAT_06781bc8);
      uVar5 = FUN_0467d5c0(&stack0x00000020,*(undefined8 *)PTR_DAT_06781bb0);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 3;
        *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000020;
        thunk_FUN_02dd37b4(unaff_x19 + 0x1a,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_030206e4(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      lVar6 = FUN_0467d60c(&stack0x00000020,*(undefined8 *)PTR_DAT_06781b90);
      break;
    case 4:
      lVar6 = FUN_05136d4c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                           *(undefined8 *)(unaff_x19 + 0xc));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      _in_stack_00000010 = FUN_042a90e8(lVar6,0,*(undefined8 *)PTR_DAT_06781bd8);
      uVar5 = FUN_0467d5c0(&stack0x00000010,*(undefined8 *)PTR_DAT_06781bb8);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x1e) = _in_stack_00000010;
        thunk_FUN_02dd37b4(unaff_x19 + 0x1e,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_030206e4(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      lVar6 = FUN_0467d60c(&stack0x00000010,*(undefined8 *)PTR_DAT_06781b98);
      break;
    case 5:
      plVar4 = *(long **)(unaff_x19 + 8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
      uVar9 = 0;
      if (plVar4 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      lVar6 = FUN_05146a1c(uVar9,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar6,uVar3,*(undefined8 *)(unaff_x19 + 10));
      break;
    default:
      uVar3 = *(undefined8 *)(unaff_x19 + 8);
      lVar6 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_04f8e414(0);
      plVar4 = *(long **)(unaff_x19 + 8);
      if (plVar4 != (long *)0x0) {
        uStack000000000000000c =
             (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
        uVar7 = thunk_FUN_02d9d164(uVar7,&stack0x0000000c);
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781a30);
        uVar9 = FUN_050f0ec0(uVar8,uVar9,uVar7,0);
        uVar3 = FUN_05095eec(uVar3,uVar9,0);
        uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781be0);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar3,uVar9);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      plVar4 = *(long **)(unaff_x19 + 8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
      lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067680b8);
      FUN_05148530(lVar6,uVar9,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar6,uVar3,*(undefined8 *)(unaff_x19 + 10));
      break;
    case 0xb:
      lVar6 = FUN_051467e4(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar6,uVar3,*(undefined8 *)(unaff_x19 + 10));
      break;
    case 0xc:
      lVar6 = FUN_05146914(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0512b384(lVar6,uVar3,*(undefined8 *)(unaff_x19 + 10));
    }
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_06781b58;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03ded864(unaff_x19 + 2,lVar6,*(undefined8 *)puVar1);
  }
  return;
}


