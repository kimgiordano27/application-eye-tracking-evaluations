/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions.<Start>d__0$$.ctor
ENTRY_POINT: 049f2008
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8 *
RenderHeads_Media_AVProVideo_RequestPermissions_<Start>d__0___ctor
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *__s;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar2;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar3;
  
  do {
    puVar2 = unaff_x22;
    puVar1 = (undefined8 *)((long)puVar2 + unaff_x20);
    unaff_x23 = unaff_x23 + unaff_x20;
    __s = param_1 + 1;
    *param_1 = param_4;
    param_1 = __s;
    if (__s < puVar1) {
      param_1 = puVar2 + 2;
      if (puVar1 <= param_1) {
        puVar1 = param_1;
      }
      uVar3 = (long)puVar1 + (-9 - (long)puVar2) & 0xfffffffffffffff8;
      memset(__s,0,uVar3 + 8);
      param_1 = (undefined8 *)((long)param_1 + uVar3);
    }
    while( true ) {
      unaff_x26 = unaff_x26 + unaff_x25;
      if (unaff_x24 < param_1) {
        *unaff_x19 = *unaff_x19 + unaff_x23;
        return puVar2;
      }
      param_4 = puVar2;
      unaff_x22 = param_1;
      if ((*(ulong *)(unaff_x21 + (unaff_x26 >> 6) * 8 + 0x40) >> (unaff_x26 & 0x3f) & 1) == 0)
      break;
      param_1 = (undefined8 *)((long)param_1 + unaff_x20);
    }
  } while( true );
}


