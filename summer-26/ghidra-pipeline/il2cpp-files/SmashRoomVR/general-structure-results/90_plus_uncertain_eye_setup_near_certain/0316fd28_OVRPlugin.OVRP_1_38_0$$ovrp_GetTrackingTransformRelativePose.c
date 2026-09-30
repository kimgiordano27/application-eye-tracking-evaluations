/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 0316fd28
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  ulong unaff_x25;
  long lVar2;
  
  do {
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(char *)(unaff_x23 + 0x256) == '\0') {
      thunk_FUN_01ad9084();
      *(undefined1 *)(unaff_x23 + 0x256) = unaff_w24;
    }
    if (lVar2 == 0) {
LAB_0316fd80:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) {
LAB_0316fd9c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar1 = **(undefined8 **)(*unaff_x20 + 0xb8);
    lVar2 = lVar2 + unaff_x25 * 0x10;
    unaff_x25 = unaff_x25 + 1;
    *(undefined8 *)(lVar2 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
    if ((long)*(int *)(unaff_x19 + 0x80) <= (long)unaff_x25) {
      do {
        lVar2 = *(long *)(unaff_x19 + 0x88);
        unaff_x21 = unaff_x21 + 1;
        if (lVar2 == 0) goto LAB_0316fd80;
        if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x21) {
          return;
        }
        uVar1 = FUN_01b47fd0(*unaff_x22,*(undefined4 *)(unaff_x19 + 0x80));
        if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_0316fd9c;
        *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20) = uVar1;
        thunk_FUN_01b4f09c();
      } while (*(int *)(unaff_x19 + 0x80) < 1);
      unaff_x25 = 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x88);
    if (param_1 == 0) goto LAB_0316fd80;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_0316fd9c;
    param_1 = param_1 + unaff_x21 * 8;
  } while( true );
}


