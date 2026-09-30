/*
FUNCTION_NAME: FUN_07542ecc
ENTRY_POINT: 07542ecc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_07542ecc(undefined8 param_1)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000009848060 == (code *)0x0) {
    pcStack_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    pcStack_40 = "MetaGetFoveationEyeTracked";
    uStack_38 = 0x1a;
    uStack_28 = 8;
    uStack_30 = DAT_019112b8;
    uStack_24 = 0;
    pcRam0000000009848060 = (code *)thunk_FUN_03d2f1fc(&pcStack_50);
  }
  pcStack_50 = (char *)((ulong)pcStack_50 & 0xffffffff00000000);
  (*pcRam0000000009848060)(&pcStack_50);
  *(bool *)param_1 = (int)pcStack_50 != 0;
  return;
}


