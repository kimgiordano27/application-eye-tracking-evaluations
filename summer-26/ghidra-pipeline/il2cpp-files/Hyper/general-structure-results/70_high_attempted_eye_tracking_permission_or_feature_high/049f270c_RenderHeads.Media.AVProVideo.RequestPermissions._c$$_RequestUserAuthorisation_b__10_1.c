/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions.<>c$$<RequestUserAuthorisation>b__10_1
ENTRY_POINT: 049f270c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void RenderHeads_Media_AVProVideo_RequestPermissions_<>c__<RequestUserAuthorisation>b__10_1
               (long param_1)

{
  ulong *puVar1;
  int iVar2;
  long in_x9;
  undefined4 *in_x10;
  undefined4 in_w11;
  undefined8 *in_x12;
  ulong uVar3;
  long in_x13;
  undefined8 in_x14;
  long in_x15;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long in_stack_00000008;
  
  while( true ) {
    in_x13 = in_x13 + -1;
    *(undefined8 *)(in_x10 + -2) = in_x14;
    *in_x10 = in_w11;
    if (in_x13 == 0) break;
    in_x14 = *in_x12;
    in_x10 = in_x10 + 4;
    in_x12 = in_x12 + 1;
  }
  uVar3 = *(ulong *)(in_x15 + param_1 * 8);
  puVar1 = (ulong *)(in_x9 + (param_1 + unaff_x22) * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = uVar3 & 0xffffffffffffffffU >> (-in_stack_00000008 & 0x3fU);
  iVar2 = *(int *)(unaff_x24 + 0x728);
  *(long *)(unaff_x27 + 0xf38) = *(long *)(unaff_x27 + 0xf38) + unaff_x25;
  if (iVar2 != 0) {
    *unaff_x21 = 0;
  }
  return;
}


