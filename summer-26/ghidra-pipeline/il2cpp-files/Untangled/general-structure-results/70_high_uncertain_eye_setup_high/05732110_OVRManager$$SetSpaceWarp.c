/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 05732110
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp(long param_1,long *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *in_x9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
code_r0x05732110:
  (*in_x9)(param_2,unaff_x22,*(undefined8 *)(param_1 + 0x6f0));
switchD_057320ac_caseD_0:
  plVar3 = *(long **)(unaff_x19 + 8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = (**(code **)(*plVar3 + 0x188))
                    (plVar3,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar3 + 400));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  auVar9 = FUN_04697d3c(lVar4,0,*(undefined8 *)PTR_DAT_06d3b5f8);
  uVar5 = FUN_04a8bd80();
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar9;
    thunk_FUN_02f411dc(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_037872d8(unaff_x19 + 2);
    return;
  }
  uVar5 = FUN_04a8bdcc();
  if ((uVar5 & 1) == 0) goto LAB_05732184;
  param_2 = (long *)(unaff_x19 + 0x12);
  plVar3 = (long *)*param_2;
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d58308 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d58308)) {
      if (plVar3[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(plVar3[0xb] + 0x10) != 0) {
        if (plVar3 == unaff_x20) goto LAB_05732184;
        *param_2 = plVar3[2];
        thunk_FUN_02f411dc(param_2);
      }
    }
  }
  plVar3 = *(long **)(unaff_x19 + 8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar2 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
  switch(uVar2) {
  case 0:
    goto switchD_057320ac_caseD_0;
  case 1:
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57c10);
    FUN_057308f8();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar3 = (long *)*param_2;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*plVar3 + 0x6e8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x6f0));
    *param_2 = lVar4;
    thunk_FUN_02f411dc(param_2,lVar4);
    goto switchD_057320ac_caseD_0;
  case 2:
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d586b0);
    FUN_0572844c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar3 = (long *)*param_2;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*plVar3 + 0x6e8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x6f0));
    *param_2 = lVar4;
    thunk_FUN_02f411dc(param_2,lVar4);
    goto switchD_057320ac_caseD_0;
  case 3:
    plVar3 = *(long **)(unaff_x19 + 8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58778);
    FUN_0572b548(lVar4,uVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    plVar3 = (long *)*param_2;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*plVar3 + 0x6e8))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x6f0));
    *param_2 = lVar4;
    thunk_FUN_02f411dc(param_2,lVar4);
    goto switchD_057320ac_caseD_0;
  case 4:
    lVar4 = FUN_0573095c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x12));
    if (lVar4 == 0) {
      if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar4 = FUN_05694828(*(long *)(unaff_x19 + 8),0,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      auVar9 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar4,0,0);
      _in_stack_00000010 = auVar9;
      uVar5 = FUN_0551f17c(&stack0x00000010,0);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
        thunk_FUN_02f411dc(unaff_x19 + 0x14,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_03789350(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      FUN_0551f198(&stack0x00000010,0);
    }
    else {
      *param_2 = lVar4;
      thunk_FUN_02f411dc(param_2);
    }
    goto switchD_057320ac_caseD_0;
  case 5:
    if ((*(long *)(unaff_x19 + 0xc) != 0) && (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x10) == 1)) {
      plVar3 = *(long **)(unaff_x19 + 8);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      lVar4 = FUN_05747b08(uVar6,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0572c2dc(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*param_2 + 0x6e8))(param_2,lVar4,*(undefined8 *)(*param_2 + 0x6f0));
    }
    goto switchD_057320ac_caseD_0;
  default:
    lVar4 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar6 = FUN_055b5920(0);
    plVar3 = *(long **)(unaff_x19 + 8);
    if (plVar3 != (long *)0x0) {
      uStack000000000000002c =
           (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
      uVar7 = thunk_FUN_02ef1438(uVar7,&stack0x0000002c);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d58910);
      uVar6 = FUN_056f1630(uVar8,uVar6,uVar7,0);
      thunk_FUN_02f239f0(PTR_DAT_06d021a0);
      uVar7 = thunk_FUN_02ef1808();
      FUN_05601bec(uVar7,uVar6,0);
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d589d8);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar7,uVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    goto switchD_057320ac_caseD_7;
  case 0xb:
    lVar4 = FUN_057478d0(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*param_2 + 0x6e8))(param_2,lVar4,*(undefined8 *)(*param_2 + 0x6f0));
    goto switchD_057320ac_caseD_0;
  case 0xc:
    lVar4 = FUN_05747a00(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0572c2dc(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*param_2 + 0x6e8))(param_2,lVar4,*(undefined8 *)(*param_2 + 0x6f0));
    goto switchD_057320ac_caseD_0;
  case 0xd:
    plVar3 = (long *)*param_2;
    if (plVar3 != unaff_x20) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *param_2 = plVar3[2];
      thunk_FUN_02f411dc(param_2);
      goto switchD_057320ac_caseD_0;
    }
    break;
  case 0xe:
    plVar3 = (long *)*param_2;
    if (plVar3 != unaff_x20) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *param_2 = plVar3[2];
      thunk_FUN_02f411dc(param_2);
      goto switchD_057320ac_caseD_0;
    }
    break;
  case 0xf:
    plVar3 = (long *)*param_2;
    if (plVar3 != unaff_x20) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *param_2 = plVar3[2];
      thunk_FUN_02f411dc(param_2);
      goto switchD_057320ac_caseD_0;
    }
  }
LAB_05732184:
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  thunk_FUN_02f411dc(unaff_x19 + 0x12,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0551fb78(unaff_x19 + 2,0);
  return;
switchD_057320ac_caseD_7:
  plVar3 = *(long **)(unaff_x19 + 8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar6 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
  unaff_x22 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
  FUN_057497d8(unaff_x22,uVar6,0);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_0572c2dc(unaff_x22,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  param_1 = *param_2;
  in_x9 = *(code **)(param_1 + 0x6e8);
  goto code_r0x05732110;
}


