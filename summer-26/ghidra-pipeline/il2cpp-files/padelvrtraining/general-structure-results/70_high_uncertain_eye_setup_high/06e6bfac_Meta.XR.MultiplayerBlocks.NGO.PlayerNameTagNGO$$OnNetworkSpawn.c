/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagNGO$$OnNetworkSpawn
ENTRY_POINT: 06e6bfac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e6c124) */

undefined4 Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagNGO__OnNetworkSpawn(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  undefined4 uVar7;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_071e78b0();
  puVar2 = PTR_DAT_091aeba0;
  lVar3 = *(long *)PTR_DAT_091aeba0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *(long *)puVar2;
  }
  lVar5 = *(long *)(unaff_x22 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  uVar6 = *(uint *)(unaff_x20 + 0x18);
  lVar3 = **(long **)(lVar3 + 0xb8);
  do {
    if ((int)(uVar1 - 1) <= (int)uVar6) {
      uVar7 = 0;
      goto LAB_06e6c0ec;
    }
    uVar6 = uVar6 + 1;
    *(uint *)(unaff_x20 + 0x18) = uVar6;
    if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar4 = lVar5 + (long)(int)uVar6 * 0x10;
    lVar8 = *(long *)(lVar4 + 0x20);
  } while ((lVar8 == 0) || (lVar3 == lVar8));
  lVar5 = *(long *)(lVar4 + 0x28);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c(lVar3);
  }
  lVar4 = thunk_FUN_03d2ee44(lVar8,lVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(lVar8,lVar3);
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c(lVar3);
  }
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_03d2ee44(lVar5,lVar3);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(lVar5,lVar3);
    }
  }
  FUN_05814d54(&stack0x00000008,lVar4,lVar8,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000008;
  thunk_FUN_03d1023c(unaff_x20 + 0x20,0);
  uVar7 = 1;
LAB_06e6c0ec:
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return uVar7;
}


