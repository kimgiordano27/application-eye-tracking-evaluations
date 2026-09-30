/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0513aef4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_04f8e414(0);
  uVar2 = thunk_FUN_02d709fc();
  uVar3 = thunk_FUN_02dc61f4(PTR_DAT_067686c8);
  uVar1 = FUN_050f0ec0(uVar3,uVar1,uVar2,0);
  thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
  uVar2 = thunk_FUN_02d9d534();
  FUN_05007004(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02dc61f4(PTR_DAT_067817c8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,uVar1);
}


