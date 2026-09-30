/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp_Internal
ENTRY_POINT: 057329ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp_Internal(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long *unaff_x22;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar1 = (**(code **)(param_1 + 0x268))();
  plVar3 = *(long **)(unaff_x19 + 8);
  unaff_x19[0x10] = uVar1;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = (**(code **)(*plVar3 + 0x188))
                    (plVar3,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar3 + 400));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  _in_stack_00000010 = FUN_04697d3c(lVar4,0,*(undefined8 *)PTR_DAT_06d3b5f8);
  uVar5 = FUN_04a8bd80(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5f0);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000010;
    thunk_FUN_02f411dc(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_03787354(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    uVar5 = FUN_04a8bdcc(&stack0x00000010,*(undefined8 *)PTR_DAT_06d3b5e8);
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    if ((uVar5 & 1) == 0) {
      lVar4 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar6 = FUN_055b5920(0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar3 = (long *)thunk_FUN_02ebbee0();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar7 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d58808);
      uVar6 = FUN_056f1630(uVar8,uVar6,uVar7,0);
      uVar9 = FUN_05695e04(uVar9,uVar6,0);
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d589f0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,uVar6);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = FUN_0572d310();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    auVar10 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar4,0,0);
    uVar5 = FUN_0551f17c();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar10;
      thunk_FUN_02f411dc(unaff_x19 + 0x16,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_037893cc(unaff_x19 + 2);
    }
    else {
      FUN_0551f198();
      plVar3 = *(long **)(unaff_x19 + 8);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      iVar2 = (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
      if ((int)unaff_x19[0x10] < iVar2) {
        uVar9 = *(undefined8 *)(unaff_x19 + 8);
        lVar4 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar6 = FUN_055b5920(0);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar3 = (long *)thunk_FUN_02ebbee0();
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar7 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d58810);
        uVar6 = FUN_056f1630(uVar8,uVar6,uVar7,0);
        uVar9 = FUN_05695e04(uVar9,uVar6,0);
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d589f0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar9,uVar6);
      }
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0551fb78(unaff_x19 + 2,0);
    }
  }
  return;
}


