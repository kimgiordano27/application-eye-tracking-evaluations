/*
FUNCTION_NAME: Oculus.Interaction.InteractorUnityEventWrapper$$HandlePostprocessed
ENTRY_POINT: 05ea6de4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Interaction_InteractorUnityEventWrapper__HandlePostprocessed(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x27;
  char in_stack_00000008;
  char in_stack_00000010;
  char in_stack_00000018;
  char in_stack_00000020;
  char in_stack_00000028;
  
  FUN_05ef14b8();
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_05ea6e48;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05ea6e48:
    (*(code *)*puVar1)();
    if (in_stack_00000028 != '\0') {
      if (unaff_x19 == 0) goto LAB_05ea6f28;
      FUN_05e9f2f4();
    }
    if (in_stack_00000020 != '\0') {
      if (unaff_x19 == 0) goto LAB_05ea6f28;
      FUN_05ea6f2c();
    }
    if (in_stack_00000018 != '\0') {
      if (unaff_x19 == 0) goto LAB_05ea6f28;
      FUN_05ea6f8c();
    }
    if (in_stack_00000010 != '\0') {
      if (unaff_x19 == 0) goto LAB_05ea6f28;
      FUN_05ea6fec();
    }
    if (in_stack_00000008 != '\0') {
      if (unaff_x19 == 0) goto LAB_05ea6f28;
      Oculus_Interaction_PhysicsGrabbable__Reset();
    }
    if (*(char *)(unaff_x20 + 0xd0) != '\0') {
      if (unaff_x19 == 0) goto LAB_05ea6f28;
      *(undefined8 *)(unaff_x19 + 0x50) = unaff_x24;
      thunk_FUN_0329bf60();
    }
    if (unaff_x23 != 0) {
      if (unaff_x19 == 0) goto LAB_05ea6f28;
      *(long *)(unaff_x19 + 0x58) = unaff_x23;
      thunk_FUN_0329bf60((long *)(unaff_x19 + 0x58));
    }
    return;
  }
LAB_05ea6f28:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


