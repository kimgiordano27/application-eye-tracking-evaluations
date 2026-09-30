/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 0516ed2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_02dc61f4(PTR_DAT_06782930);
  uVar1 = FUN_050d5cd4(param_1,uVar1,0,0);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0516ed20 with catch @ 0516ed58
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0516ed10 with catch @ 0516ed5c
                        */
  uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06782940);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar1,uVar2);
}


