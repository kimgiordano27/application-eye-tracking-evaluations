/*
FUNCTION_NAME: Unity.Entities.Baking.BakeDependencies.UpdateDependencies_000001D8$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0303e9e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined1  [16]
Unity_Entities_Baking_BakeDependencies_UpdateDependencies_000001D8_PostfixBurstDelegate__Invoke
          (void)

{
  undefined1 auVar1 [16];
  long lVar2;
  int in_w8;
  long unaff_x19;
  int iVar3;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uVar4;
  undefined4 uVar5;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000190;
  undefined1 in_stack_00000198;
  undefined7 uStack0000000000000199;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x20;
  }
  if (SQRT(unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13) <= **(float **)(lVar2 + 0xb8)) {
    if (unaff_x19 != 0) {
LAB_0303eae4:
      if (0 < *(int *)(unaff_x19 + 0x18)) {
        iVar3 = 0;
        do {
          FUN_02215a88();
          FUN_02215b6c();
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(unaff_x19 + 0x18));
      }
      in_stack_00000190 = 0;
      in_stack_00000198 = 0;
      uStack0000000000000199 = 0;
      in_stack_00000190 = FUN_022195a8();
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (&stack0x00000190,in_stack_00000190);
      auVar1[8] = 1;
      auVar1._0_8_ = in_stack_00000190;
      auVar1._9_7_ = uStack0000000000000199;
      return auVar1;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x1e3) == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbeb70);
      lVar2 = *unaff_x20;
      *(undefined1 *)(unaff_x21 + 0x1e3) = 1;
    }
    uVar4 = **(undefined4 **)(*unaff_x22 + 0xb8);
    uVar5 = (*(undefined4 **)(*unaff_x22 + 0xb8))[1];
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0303d978(uVar4,uVar5,DAT_00d38ac4,DAT_00d38ac4,0x3f800000);
    lVar2 = FUN_0303df80();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19 != 0) {
        FUN_01b5f01c();
        goto LAB_0303eae4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


