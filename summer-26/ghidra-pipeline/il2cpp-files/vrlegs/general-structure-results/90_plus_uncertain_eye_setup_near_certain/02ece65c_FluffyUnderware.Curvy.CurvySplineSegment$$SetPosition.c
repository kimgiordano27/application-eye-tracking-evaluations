/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvySplineSegment$$SetPosition
ENTRY_POINT: 02ece65c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ecea14) */
/* WARNING: Removing unreachable block (ram,0x02ece96c) */
/* WARNING: Removing unreachable block (ram,0x02ece7fc) */
/* WARNING: Removing unreachable block (ram,0x02ece970) */
/* WARNING: Removing unreachable block (ram,0x02ecea90) */
/* WARNING: Removing unreachable block (ram,0x02ecea28) */

bool FluffyUnderware_Curvy_CurvySplineSegment__SetPosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long *unaff_x23;
  int iVar14;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000050;
  int iStack0000000000000054;
  undefined8 in_stack_00000058;
  
                    /* catch() { ... } // from try @ 02ece5d4 with catch @ 02ece65c
                       catch() { ... } // from try @ 02ece64c with catch @ 02ece65c */
                    /* try { // try from 02ece660 to 02fce663 has its CatchHandler @ 02ece66c */
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xa88));
                    /* try { // try from 02ece664 to 02fce66f has its CatchHandler @ 02ece158 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02ece660 with catch @ 02ece66c
                        */
  FUN_01ab69ac(PTR_DAT_03cc0ad8);
  FUN_01ab69ac(PTR_DAT_03d20658);
  FUN_01ab69ac(PTR_DAT_03d20660);
  *(undefined1 *)(unaff_x20 + 0x738) = 1;
  in_stack_00000050 = '\0';
  in_stack_00000030 = (long *)0x0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  iStack0000000000000054 = 0;
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02ec3158(uVar13,0,&stack0x00000054,0);
  thunk_FUN_01a3c554(*(undefined8 *)(unaff_x19 + 0x10),2,&stack0x00000054,0);
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (lVar7 != 0) {
    in_stack_00000050 = '\0';
    FUN_027e0bd8(lVar7,&stack0x00000050,0);
    puVar5 = PTR_DAT_03d087a0;
    puVar4 = PTR_DAT_03d08790;
    puVar3 = PTR_DAT_03d08788;
    puVar2 = PTR_DAT_03d08780;
    puVar1 = PTR_DAT_03d08750;
    iVar14 = 0;
    while( true ) {
      puVar6 = PTR_DAT_03d1f708;
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar8 + 0x18) < 1) break;
      if (iVar14 == 10) {
        lVar8 = *(long *)PTR_DAT_03d1f708;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar6;
        }
        if (**(char **)(lVar8 + 0xb8) != '\0') {
          plVar11 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0ad8);
          FUN_025d4bdc(plVar11,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_025d6b18(plVar11,*(undefined8 *)PTR_DAT_03d20660,0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            Animancer_FadeGroup__get_TargetWeight
                      (*(long *)(unaff_x19 + 0x20),&stack0x00000018,*(undefined8 *)puVar5);
            puVar5 = PTR_DAT_03d20658;
            puVar1 = PTR_DAT_03d20650;
            in_stack_00000038 = in_stack_00000020;
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000040 = in_stack_00000028;
            while( true ) {
              uVar10 = FUN_021b51c8(&stack0x00000030,*(undefined8 *)puVar3);
              if ((uVar10 & 1) == 0) {
                FUN_021b51c4(&stack0x00000030,*(undefined8 *)puVar2);
                FUN_025d6af8(plVar11,0);
                uVar13 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
                uVar12 = thunk_FUN_01a89e68();
                FUN_027a794c(uVar12,uVar13,0);
                uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d20668);
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar12,uVar13);
              }
              FUN_01b7a454(&stack0x00000030,&stack0x00000018,*(undefined8 *)puVar4);
              plVar9 = in_stack_00000018;
              FUN_025d6b18(plVar11,*(undefined8 *)puVar5,0);
              if (*(long *)(unaff_x19 + 0x28) == 0) break;
              FUN_0219b634(*(long *)(unaff_x19 + 0x28),plVar9,&stack0x00000018,*(undefined8 *)puVar1
                          );
              if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar13 = (**(code **)(*in_stack_00000018 + 0x168))
                                 (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
              FUN_025d6b18(plVar11,uVar13,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        break;
      }
      if (*(int *)(lVar8 + 0x18) == 1) {
        FUN_02215a88(lVar8,0,&stack0x00000018,*(undefined8 *)puVar1);
        plVar11 = in_stack_00000018;
        plVar9 = (long *)FUN_027df29c(0);
        if (plVar11 == plVar9) break;
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      Animancer_FadeGroup__get_TargetWeight(lVar8,&stack0x00000018,*(undefined8 *)puVar5);
      iVar14 = iVar14 + 1;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000028;
      while (uVar10 = FUN_021b51c8(&stack0x00000030,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
        FUN_01b7a454(&stack0x00000030,&stack0x00000058,*(undefined8 *)puVar4);
        uVar13 = in_stack_00000058;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        thunk_FUN_01a3c9d0(uVar13,0);
      }
      FUN_021b51c4(&stack0x00000030,*(undefined8 *)puVar2);
      *(undefined1 *)(unaff_x19 + 0x30) = 1;
      FUN_027e1070(*(undefined8 *)(unaff_x19 + 0x20),100,0);
    }
    if (in_stack_00000050 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
    }
  }
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  thunk_FUN_01a3b22c(uVar13,&stack0x00000054,0);
  return iStack0000000000000054 == 0;
}


