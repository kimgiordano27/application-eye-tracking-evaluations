/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToColliders
ENTRY_POINT: 034fb884
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_Collisions__ClosestPointToColliders(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *unaff_x20;
  undefined4 uVar4;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x22 + 0xec1) = 1;
  uVar1 = *unaff_x20;
  if (DAT_048317e1 == '\0') {
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
    DAT_048317e1 = '\x01';
  }
  puVar2 = Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__;
  if (unaff_x21 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_0340ce04();
    uVar4 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035669e4(uVar1,uVar3,uVar4);
  return;
}


