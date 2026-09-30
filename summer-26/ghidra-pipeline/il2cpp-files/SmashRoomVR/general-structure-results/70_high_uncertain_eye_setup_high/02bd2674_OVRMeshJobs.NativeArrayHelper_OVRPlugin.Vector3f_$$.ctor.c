/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 02bd2674
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>___ctor(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  ulong uVar5;
  
  do {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x20),0);
    lVar4 = unaff_x23;
                    /* try { // try from 02bd2680 to 02cd2687 has its CatchHandler @ 02bd2758 */
LAB_02bd2698:
    do {
      unaff_x23 = lVar4 + 1;
      if ((long)*(int *)(unaff_x21 + 0x18) <= lVar4 + -3) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_02bd26c4;
      uVar5 = lVar4 - 3;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_02bd26c8;
      if (unaff_x20 == 0) goto LAB_02bd26c4;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + unaff_x23 * 8),
                         *(undefined8 *)(unaff_x20 + 0x28));
      lVar4 = unaff_x23;
    } while ((uVar2 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
LAB_02bd26c4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_02bd26c8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (unaff_x22 == 0) goto LAB_02bd26c4;
    param_2 = *(undefined8 *)(lVar3 + unaff_x23 * 8);
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_02bd26c4;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* try { // try from 02bd2688 to 02cd2737 has its CatchHandler @ 02bd249c */
      FUN_02bd1e6c();
      goto LAB_02bd2698;
    }
    param_1 = param_1 + (long)(int)uVar1 * 8;
    *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
  } while( true );
}


