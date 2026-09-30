/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToColliders
ENTRY_POINT: 059eaf00
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void Oculus_Interaction_Collisions__ClosestPointToColliders(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar4;
  long lStack0000000000000008;
  long lStack0000000000000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  puVar4 = *(undefined8 **)(unaff_x21 + 0x128);
  lStack0000000000000008 = 0;
  lStack0000000000000010 = 0;
  FUN_059eaff4();
  if (in_stack_00000028 != 0) {
    if (unaff_x19 == 0) goto LAB_059eaff0;
    uVar3 = FUN_059f21a8();
    FUN_03a2875c(uVar3,in_stack_00000028,*puVar4);
  }
  if (in_stack_00000020 != 0) {
    if (unaff_x19 == 0) goto LAB_059eaff0;
    uVar3 = FUN_059f2130();
    FUN_03a2875c(uVar3,in_stack_00000020,*puVar4);
  }
  if (in_stack_00000018 != 0) {
    if (unaff_x19 == 0) goto LAB_059eaff0;
    uVar3 = FUN_059f20b8();
    FUN_03a2875c(uVar3,in_stack_00000018,*puVar4);
  }
  lVar2 = lStack0000000000000010;
  if (lStack0000000000000010 != 0) {
    if (unaff_x19 == 0) goto LAB_059eaff0;
    uVar3 = FUN_059f2040();
    FUN_03a2875c(uVar3,lVar2,*puVar4);
  }
  lVar2 = lStack0000000000000008;
  puVar1 = PTR_DAT_0710a130;
  if (lStack0000000000000008 == 0) {
    return;
  }
  if (unaff_x19 != 0) {
    uVar3 = FUN_059f2220();
    FUN_03a2875c(uVar3,lVar2,*(undefined8 *)puVar1);
    return;
  }
LAB_059eaff0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


