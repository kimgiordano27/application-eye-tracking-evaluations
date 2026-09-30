/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions$$HasUserAuthorisation
ENTRY_POINT: 049f2140
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void RenderHeads_Media_AVProVideo_RequestPermissions__HasUserAuthorisation(ulong param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    *(ulong *)(unaff_x29 + param_1 * 8) = unaff_x20;
    *(int *)(unaff_x28 + 0xf18) = (int)param_1 + 1;
    FUN_049ee6ac(unaff_x20);
    do {
      do {
        unaff_x20 = unaff_x20 + unaff_x19;
        unaff_x23 = unaff_x23 + unaff_x24;
        if (unaff_x22 < unaff_x20) {
          return;
        }
      } while (((*(ulong *)(unaff_x21 + (unaff_x23 >> 6) * 8 + 0x40) >> (unaff_x23 & 0x3f) & 1) != 0
               ) || ((*(int *)(unaff_x25 + 0xc70) != 0 &&
                     (iVar2 = FUN_049ee5bc(unaff_x20), iVar2 == 0))));
      uVar1 = *(uint *)(unaff_x28 + 0xf18);
      param_1 = (ulong)uVar1;
      *(undefined4 *)(unaff_x26 + 0xc30) = unaff_w27;
    } while (0x27 < uVar1);
  } while( true );
}


