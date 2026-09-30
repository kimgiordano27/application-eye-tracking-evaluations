/*
FUNCTION_NAME: FUN_0283a008
ENTRY_POINT: 0283a008
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0283a11c) */
/* WARNING: Removing unreachable block (ram,0x0283a220) */
/* WARNING: Removing unreachable block (ram,0x0283a24c) */

void FUN_0283a008(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  puVar4 = PTR_DAT_03cfeeb0;
  puVar3 = PTR_DAT_03cc5038;
  puVar2 = PTR_DAT_03cc5030;
  puVar1 = PTR_DAT_03cc5028;
  lVar5 = (**(code **)(*unaff_x21 + 0x278))();
  lVar6 = thunk_FUN_01a89e68(*unaff_x19);
  FUN_02834478();
  Animancer_FadeGroup__get_TargetWeight(param_1,&stack0x00000010,*unaff_x27);
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000020;
  while( true ) {
    do {
      uVar7 = FUN_021b51c8(&stack0x00000030,*(undefined8 *)puVar2);
      if ((uVar7 & 1) == 0) {
        FUN_021b51c4(&stack0x00000030,*(undefined8 *)puVar1);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar4;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cff290);
          FUN_021de1ac(lVar8,uVar9,*(undefined8 *)PTR_DAT_03cff298,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
          *plVar10 = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar8);
        }
        uVar9 = FUN_01f6cc94(lVar6,lVar8,*(undefined8 *)PTR_DAT_03cff280);
        FUN_01f7108c(uVar9,*(undefined8 *)PTR_DAT_03cff288);
        return;
      }
      FUN_01b7a454(&stack0x00000030,&stack0x00000010,*(undefined8 *)puVar3);
      lVar8 = (**(code **)(*unaff_x21 + 0x298))();
    } while (lVar8 == 0);
    in_stack_00000028._4_1_ = '\0';
    FUN_027e0bd8(lVar5,(long)&stack0x00000028 + 4,0);
    if (lVar5 == 0) break;
    uVar9 = FUN_027fe2d4(lVar5,*(undefined8 *)(lVar8 + 0x30),0);
    FUN_028354cc(lVar8,uVar9);
    if (in_stack_00000028._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_028345f0(lVar6,lVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


