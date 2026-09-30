/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$CreateColocatedSpaceInternal
ENTRY_POINT: 06e2adc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__CreateColocatedSpaceInternal
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  long in_x9;
  long in_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000008;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -8) == param_2) goto LAB_06e2ae04;
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 0x10;
    in_ZR = in_x9 == 0;
  }
  FUN_03cf1348();
LAB_06e2ae04:
  FUN_06dfc8c8();
  if (*(long *)(unaff_x26 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x26 + 0x20) + 0x78);
  uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93870);
  FUN_06df980c(uVar2,uVar5,*(undefined8 *)PTR_DAT_08e93888,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = FUN_06e0ba6c();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_05b9625c(lVar3,*(undefined8 *)PTR_DAT_08e929e0);
  uVar4 = FUN_05ac29c8(&stack0x00000008,*(undefined8 *)PTR_DAT_08e929d8);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0416e794(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    FUN_05ac2a0c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e929d0);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(unaff_x26 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *(long *)(*(long *)(unaff_x26 + 0x28) + 0x88);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0675af18(lVar3,*(undefined8 *)(unaff_x26 + 0x30),&stack0x00000018,
                 *(undefined8 *)PTR_DAT_08e93960);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_08e78268;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,extraout_x1,*(undefined8 *)puVar1);
  }
  return;
}


