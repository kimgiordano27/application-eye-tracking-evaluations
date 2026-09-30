/*
FUNCTION_NAME: OVRKeyboard$$GetSystemKeyboardInfo
ENTRY_POINT: 0606d99c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 118
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRKeyboard__GetSystemKeyboardInfo(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7be0);
    FUN_031f20f4(PTR_DAT_0759bb00);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(PTR_DAT_075f89e0);
    FUN_031f20f4(PTR_DAT_075f89e8);
    *(undefined1 *)(unaff_x21 + 0xc24) = 1;
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a3ca89 == '\0') {
    FUN_031f20f4(PTR_DAT_0759bb00);
    DAT_07a3ca89 = '\x01';
  }
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x20;
  }
  puVar2 = PTR_DAT_075f89e8;
  puVar1 = PTR_DAT_075f89e0;
  pcVar6 = *(char **)(lVar3 + 0xb8);
  if (*pcVar6 == '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      pcVar6 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06deed24(uVar5,0);
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_075f7be0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported();
    uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
    FUN_04fd7708(uVar5,uVar4,*(undefined8 *)puVar1);
  }
  return uVar5;
}


