/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$.ctor
ENTRY_POINT: 06352180
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature___ctor(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *in_x9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  uVar1 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x240));
  in_stack_00000018 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
  in_stack_00000020 = 0xffffffffffffffff;
  in_stack_00000028 = uVar1;
  uVar2 = FUN_06278b80(&stack0x00000018,0);
  uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
  System_Convert__ToInt32(uVar3,uVar2,0);
  uVar2 = FUN_062d5fcc();
  uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,uVar3);
}


