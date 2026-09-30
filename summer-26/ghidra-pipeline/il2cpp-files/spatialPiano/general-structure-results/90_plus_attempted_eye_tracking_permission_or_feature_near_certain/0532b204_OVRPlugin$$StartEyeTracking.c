/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 0532b204
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  
  FUN_03abf904(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  lVar4 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
  iVar1 = *(int *)(lVar4 + 0xe4);
  *(undefined4 *)(unaff_x19 + 0x48) = 0x3d4ccccd;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *unaff_x22;
  }
  puVar3 = OVR_OpenVR_EVRScreenshotPropertyFilenames_TypeInfo;
  puVar2 = OVR_OpenVR_EVRScreenshotError_TypeInfo;
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_UIElements_StyleValuePropertyBag<StyleList<StylePropertyName>,_List<StylePropertyName>>_TypeInfo
                              );
    FUN_04df8988(lVar6,uVar7,*(undefined8 *)OVR_OpenVR_EVRSettingsError_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar6;
  }
  uVar7 = *(undefined8 *)puVar3;
  *(long *)(unaff_x19 + 0x50) = lVar6;
  uVar7 = thunk_FUN_02f45270(uVar7);
  FUN_0494904c(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar7;
  thunk_FUN_060ed17c();
  return;
}


