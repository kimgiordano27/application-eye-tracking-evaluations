/*
FUNCTION_NAME: _Common.Gameplay.Scripts.TagGame.TagGameManager$$OnPlayerLeaved
ENTRY_POINT: 01d2dfe8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d2e17c) */
/* WARNING: Removing unreachable block (ram,0x01d2e18c) */

undefined8 _Common_Gameplay_Scripts_TagGame_TagGameManager__OnPlayerLeaved(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long in_x9;
  long lVar10;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar10 = **(long **)(in_x9 + 0xb38);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  uVar8 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
  if ((uVar8 & 1) == 0) {
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(unaff_x21 + 0x10),0,iVar1,0);
    }
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(unaff_x20 + 0x10),&stack0x00000008,*(undefined8 *)PTR_DAT_03cca8a8);
    puVar6 = PTR_DAT_03ccab30;
    puVar5 = PTR_DAT_03ccab28;
    puVar4 = PTR_DAT_03ccaae0;
    puVar3 = PTR_DAT_03cca8a0;
    puVar2 = PTR_DAT_03cca898;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar8 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar2);
      if ((uVar8 & 1) == 0) {
        FUN_021b51c4(&stack0x00000020,*(undefined8 *)PTR_DAT_03cca890);
        if (in_stack_00000038._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
        return 1;
      }
      FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar3);
      uVar7 = in_stack_00000008;
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
      FUN_02060754();
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_01d2e274(lVar10,uVar7,uVar9);
      if (*(long *)(unaff_x20 + 0x28) == 0) break;
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x28),lVar10,*(undefined8 *)puVar6);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01d2e324(lVar10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


