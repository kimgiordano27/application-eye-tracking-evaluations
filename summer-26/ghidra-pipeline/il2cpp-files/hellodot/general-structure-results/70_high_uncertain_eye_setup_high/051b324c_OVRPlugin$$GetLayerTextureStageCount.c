/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 051b324c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTextureStageCount(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  puVar3 = PTR_DAT_066089e0;
  puVar2 = PTR_DAT_066089d8;
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_03a7b590(&stack0x00000078,*unaff_x21,*(undefined8 *)PTR_DAT_066089f8);
  in_stack_000000d8 = *(undefined8 *)(unaff_x24 + 0x18);
  in_stack_000000d0 = *(undefined8 *)(unaff_x24 + 0x10);
  in_stack_000000e8 = *(undefined8 *)(unaff_x24 + 0x28);
  in_stack_000000e0 = *(undefined8 *)(unaff_x24 + 0x20);
  in_stack_000000f8 = *(undefined8 *)(unaff_x24 + 0x38);
  in_stack_000000f0 = *(undefined8 *)(unaff_x24 + 0x30);
  in_stack_000000c8 = in_stack_00000080;
  in_stack_000000c0 = in_stack_00000078;
  while( true ) {
    uVar4 = FUN_04843c40(&stack0x000000c0,*(undefined8 *)puVar3);
    if ((uVar4 & 1) == 0) {
      FUN_04843c3c(&stack0x000000c0,*(undefined8 *)puVar2);
      *(long *)(unaff_x19 + 0x130) = unaff_x20;
      return;
    }
    uVar5 = FUN_051b33d0();
    if (unaff_x20 == 0) break;
    lVar6 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_039683cc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


