/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 02bd25e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  
  if (in_NG == in_OV) {
    lVar6 = 4;
    do {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_02bd26c4;
                    /* try { // try from 02bd25f0 to 02cd264f has its CatchHandler @ 02bd2768 */
      if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar6 - 4U) {
LAB_02bd26c8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (unaff_x20 == 0) goto LAB_02bd26c4;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + lVar6 * 8),
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        if (lVar5 == 0) goto LAB_02bd26c4;
        if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar6 - 4U) goto LAB_02bd26c8;
        if (unaff_x22 == 0) {
LAB_02bd26c4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar4 = *(undefined8 *)(lVar5 + lVar6 * 8);
        lVar5 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_02bd26c4;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar3 = uVar4;
          thunk_FUN_01b4f09c(puVar3,0);
        }
        else {
          FUN_02bd1e6c();
        }
      }
      lVar5 = lVar6 + -3;
      lVar6 = lVar6 + 1;
    } while (lVar5 < *(int *)(unaff_x21 + 0x18));
  }
  return;
}


