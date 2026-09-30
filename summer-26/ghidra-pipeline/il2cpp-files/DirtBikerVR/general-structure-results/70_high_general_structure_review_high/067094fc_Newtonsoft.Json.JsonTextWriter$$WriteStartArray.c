/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 067094fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_0667aa84(&stack0x00000030,0);
  if (*(char *)((long)unaff_x19 + 0x69) != '\0') {
    plVar1 = *(long **)(unaff_x19 + 0xe);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = (**(code **)(*plVar1 + 0x2b8))
                      (plVar1,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar1 + 0x2c0));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    _in_stack_00000020 = FUN_067c4c10(lVar2,0,0);
    uVar3 = FUN_0666ef78(&stack0x00000020,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000020;
      thunk_FUN_03afed3c(unaff_x19 + 0x20,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043eb808(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    FUN_0666ef90(&stack0x00000020,0);
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


