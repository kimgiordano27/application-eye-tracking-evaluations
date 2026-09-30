/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 06352104
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 120
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if (param_1 == 0xd) {
    return;
  }
  FUN_031a5e18();
  uVar1 = (**(code **)(*unaff_x19 + 0x238))();
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


