/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner$$GetRandomName
ENTRY_POINT: 06e2a390
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner__GetRandomName
               (ulong param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  long unaff_x20;
  long lVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e93970);
    FUN_03c8f898(PTR_DAT_08e78268);
    FUN_03c8f898(PTR_DAT_08e780e8);
    FUN_03c8f898(PTR_DAT_08e93960);
    FUN_03c8f898(PTR_DAT_08e929d0);
    FUN_03c8f898(PTR_DAT_08e929d8);
    FUN_03c8f898(PTR_DAT_08e929e0);
    *(undefined1 *)(unaff_x20 + 0xa7) = 1;
  }
  puVar1 = PTR_DAT_08e780e8;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  lVar5 = *(long *)(param_2 + 8);
  if (*param_2 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_2 + 10);
    param_2[10] = 0;
    param_2[0xb] = 0;
    *param_2 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = FUN_06e0bd08(*(long *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05b9625c(lVar3,*(undefined8 *)PTR_DAT_08e929e0);
    uVar4 = FUN_05ac29c8(&stack0x00000008,*(undefined8 *)PTR_DAT_08e929d8);
    if ((uVar4 & 1) == 0) {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 10) = in_stack_00000008;
      thunk_FUN_03d233cc(param_2 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0416e580(param_2 + 2,&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_08e93970);
      return;
    }
  }
  FUN_05ac2a0c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e929d0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar5 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(lVar5 + 0x20) + 0x88);
    if (lVar3 != 0) {
      FUN_0675af18(lVar3,*(undefined8 *)(lVar5 + 0x28),&stack0x00000018,
                   *(undefined8 *)PTR_DAT_08e93960);
      *param_2 = -2;
      puVar2 = PTR_DAT_08e78268;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_063c7630(param_2 + 2,extraout_x1,*(undefined8 *)puVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


