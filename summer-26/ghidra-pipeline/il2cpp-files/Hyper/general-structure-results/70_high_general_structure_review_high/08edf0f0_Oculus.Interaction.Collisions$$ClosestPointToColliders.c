/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToColliders
ENTRY_POINT: 08edf0f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void Oculus_Interaction_Collisions__ClosestPointToColliders(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 in_stack_00000018;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac0e260);
  FUN_04947ee4(PTR_DAT_0ac0e268);
  FUN_04947ee4(PTR_DAT_0ac6fec0);
  *(undefined1 *)(unaff_x20 + 0x21f) = 1;
  puVar2 = PTR_DAT_0ac6fdd0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar5 = FUN_08ed8760(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar6 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0584f47c(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar7 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0e258);
  uVar8 = FUN_08ed8980(uVar7,0);
  uVar4 = FUN_08ed8880(uVar7,0);
  uVar9 = FUN_08ed8a6c(uVar7,0);
  uVar11 = *(undefined8 *)(unaff_x19 + 8);
  uVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6fec0);
  FUN_08edd49c(uVar10,uVar4 & 1,uVar9,uVar7,uVar8,uVar11);
  puVar3 = PTR_DAT_0ac6feb8;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar10,*(undefined8 *)puVar3);
  return;
}


