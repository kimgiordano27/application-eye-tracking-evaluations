/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions$$GetAndroidSDKLevel
ENTRY_POINT: 049f2030
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8 *
RenderHeads_Media_AVProVideo_RequestPermissions__GetAndroidSDKLevel
          (long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar2;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  ulong uVar3;
  
  do {
    uVar3 = param_1 - 9U & 0xfffffffffffffff8;
    memset(param_2,param_3,uVar3 + 8);
    param_2 = (undefined8 *)((long)unaff_x27 + uVar3);
    puVar2 = unaff_x22;
    do {
      while( true ) {
        unaff_x22 = param_2;
        unaff_x26 = unaff_x26 + unaff_x25;
        if (unaff_x24 < unaff_x22) {
          *unaff_x19 = *unaff_x19 + unaff_x23;
          return puVar2;
        }
        if ((*(ulong *)(unaff_x21 + (unaff_x26 >> 6) * 8 + 0x40) >> (unaff_x26 & 0x3f) & 1) == 0)
        break;
        param_2 = (undefined8 *)((long)unaff_x22 + unaff_x20);
      }
      puVar1 = (undefined8 *)((long)unaff_x22 + unaff_x20);
      unaff_x23 = unaff_x23 + unaff_x20;
      param_2 = unaff_x22 + 1;
      *unaff_x22 = puVar2;
      puVar2 = unaff_x22;
    } while (puVar1 <= param_2);
    unaff_x27 = unaff_x22 + 2;
    param_3 = 0;
    if (puVar1 <= unaff_x27) {
      puVar1 = unaff_x27;
    }
    param_1 = (long)puVar1 - (long)unaff_x22;
  } while( true );
}


