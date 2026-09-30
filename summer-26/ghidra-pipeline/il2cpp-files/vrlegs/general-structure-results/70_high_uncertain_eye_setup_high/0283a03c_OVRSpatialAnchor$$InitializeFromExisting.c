/*
FUNCTION_NAME: OVRSpatialAnchor$$InitializeFromExisting
ENTRY_POINT: 0283a03c
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

void OVRSpatialAnchor__InitializeFromExisting(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  code *in_x9;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  lVar1 = (*in_x9)();
  lVar2 = thunk_FUN_01a89e68(*unaff_x19);
  FUN_02834478();
  Animancer_FadeGroup__get_TargetWeight();
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000020;
  while( true ) {
    do {
      uVar3 = FUN_021b51c8(&stack0x00000030,*unaff_x25);
      if ((uVar3 & 1) == 0) {
        FUN_021b51c4(&stack0x00000030,*unaff_x29);
        lVar1 = *unaff_x28;
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar1 = *unaff_x28;
        }
        lVar4 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
        if (lVar4 == 0) {
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar1 = *unaff_x28;
          }
          uVar5 = **(undefined8 **)(lVar1 + 0xb8);
          lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cff290);
          FUN_021de1ac(lVar4,uVar5,*(undefined8 *)PTR_DAT_03cff298,0);
          plVar6 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x30);
          *plVar6 = lVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar4);
        }
        uVar5 = FUN_01f6cc94(lVar2,lVar4,*(undefined8 *)PTR_DAT_03cff280);
        FUN_01f7108c(uVar5,*(undefined8 *)PTR_DAT_03cff288);
        return;
      }
      FUN_01b7a454(&stack0x00000030,&stack0x00000010,*unaff_x26);
      lVar4 = (**(code **)(*unaff_x21 + 0x298))();
    } while (lVar4 == 0);
    in_stack_00000028._4_1_ = '\0';
    FUN_027e0bd8(lVar1,(long)&stack0x00000028 + 4,0);
    if (lVar1 == 0) break;
    uVar5 = FUN_027fe2d4(lVar1,*(undefined8 *)(lVar4 + 0x30),0);
    FUN_028354cc(lVar4,uVar5);
    if (in_stack_00000028._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar1,0);
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_028345f0(lVar2,lVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


