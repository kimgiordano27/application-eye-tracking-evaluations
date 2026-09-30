/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvySplineSegment$$SetRotation
ENTRY_POINT: 02ece824
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ecea28) */
/* WARNING: Removing unreachable block (ram,0x02ece96c) */
/* WARNING: Removing unreachable block (ram,0x02ecea90) */

byte FluffyUnderware_Curvy_CurvySplineSegment__SetRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  int unaff_w27;
  undefined8 *unaff_x28;
  undefined1 unaff_w29;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char cStack0000000000000050;
  int iStack0000000000000054;
  undefined8 in_stack_00000058;
  
  plVar6 = (long *)__cxa_begin_catch();
  lVar9 = *plVar6;
  __cxa_end_catch();
  bVar3 = 0;
  while( true ) {
    FUN_021b51c4(&stack0x00000030,*unaff_x24);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar9);
    }
    if ((bVar3 != 0xf) && (bVar3 != 0)) goto LAB_02ece974;
    *(undefined1 *)(unaff_x19 + 0x30) = unaff_w29;
    FUN_027e1070(*(undefined8 *)(unaff_x19 + 0x20),100,0);
    puVar1 = PTR_DAT_03d1f708;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar9 + 0x18) < 1) break;
    if (unaff_w27 == 10) {
      lVar9 = *(long *)PTR_DAT_03d1f708;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar1;
      }
      if (**(char **)(lVar9 + 0xb8) != '\0') {
        plVar6 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0ad8);
        FUN_025d4bdc(plVar6,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_025d6b18(plVar6,*(undefined8 *)PTR_DAT_03d20660,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        Animancer_FadeGroup__get_TargetWeight
                  (*(long *)(unaff_x19 + 0x20),&stack0x00000018,*unaff_x22);
        puVar2 = PTR_DAT_03d20658;
        puVar1 = PTR_DAT_03d20650;
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        while( true ) {
          uVar5 = FUN_021b51c8(&stack0x00000030,*unaff_x25);
          if ((uVar5 & 1) == 0) {
            FUN_021b51c4(&stack0x00000030,*unaff_x24);
            FUN_025d6af8(plVar6,0);
            uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
            uVar7 = thunk_FUN_01a89e68();
            FUN_027a794c(uVar7,uVar8,0);
            uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d20668);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar7,uVar8);
          }
          FUN_01b7a454(&stack0x00000030,&stack0x00000018,*unaff_x26);
          plVar4 = in_stack_00000018;
          FUN_025d6b18(plVar6,*(undefined8 *)puVar2,0);
          if (*(long *)(unaff_x19 + 0x28) == 0) break;
          FUN_0219b634(*(long *)(unaff_x19 + 0x28),plVar4,&stack0x00000018,*(undefined8 *)puVar1);
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar8 = (**(code **)(*in_stack_00000018 + 0x168))
                            (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
          FUN_025d6b18(plVar6,uVar8,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      break;
    }
    if (*(int *)(lVar9 + 0x18) == 1) {
      FUN_02215a88(lVar9,0,&stack0x00000018,*unaff_x28);
      plVar6 = in_stack_00000018;
      plVar4 = (long *)FUN_027df29c(0);
      if (plVar6 == plVar4) break;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    Animancer_FadeGroup__get_TargetWeight(lVar9,&stack0x00000018,*unaff_x22);
    unaff_w27 = unaff_w27 + 1;
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    while (uVar5 = FUN_021b51c8(&stack0x00000030,*unaff_x25), (uVar5 & 1) != 0) {
      FUN_01b7a454(&stack0x00000030,&stack0x00000058,*unaff_x26);
      uVar8 = in_stack_00000058;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a3c9d0(uVar8,0);
    }
    lVar9 = 0;
    bVar3 = 0xf;
  }
  bVar3 = 2;
LAB_02ece974:
  if (cStack0000000000000050 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  bVar3 = bVar3 | 2;
  if (bVar3 == 2) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    thunk_FUN_01a3b22c(uVar8,(long)&stack0x00000050 + 4,0);
    bVar3 = iStack0000000000000054 == 0;
  }
  return bVar3 & 1;
}


