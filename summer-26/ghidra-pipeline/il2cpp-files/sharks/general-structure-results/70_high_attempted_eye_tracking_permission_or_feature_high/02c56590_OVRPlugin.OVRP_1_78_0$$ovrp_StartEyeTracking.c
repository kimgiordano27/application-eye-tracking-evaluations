/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 02c56590
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380cca8);
    *(undefined1 *)(unaff_x20 + 0x16b) = 1;
  }
  uVar1 = System_Convert__ToSingle(param_3,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0380cca8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c5662c(param_3);
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f3900);
  uVar2 = thunk_FUN_01861bbc();
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380ccb0);
  FUN_033ea810(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380ccb8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar3);
}


