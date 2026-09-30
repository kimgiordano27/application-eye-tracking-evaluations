/*
FUNCTION_NAME: OVRPlugin$$IsOrientationValid
ENTRY_POINT: 056686a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__IsOrientationValid(long param_1)

{
  uint uVar1;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((*(byte *)(unaff_x21 + 0x612) & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<DebugUIPrefabBundle>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<Destination>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x612) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_0433dbf0((char *)(param_1 + 0x60),
                 *(undefined8 *)System_Collections_Generic_List<Destination>_TypeInfo);
    if (in_stack_00000018 != 0) {
      FUN_05695d7c();
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000030 = in_stack_00000010;
      uVar1 = (**(code **)(in_stack_00000018 + 0x18))
                        (*(undefined8 *)(in_stack_00000018 + 0x40),&stack0x00000020,
                         in_stack_00000000,*(undefined8 *)(in_stack_00000018 + 0x28));
      FUN_05695e18();
      goto LAB_05668754;
    }
  }
  uVar1 = 0;
LAB_05668754:
  return uVar1 & 1;
}


