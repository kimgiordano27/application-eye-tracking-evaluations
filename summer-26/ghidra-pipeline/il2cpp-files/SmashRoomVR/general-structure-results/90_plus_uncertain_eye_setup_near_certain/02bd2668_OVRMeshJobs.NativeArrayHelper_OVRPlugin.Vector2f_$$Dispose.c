/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 02bd2668
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  ulong uVar5;
  
code_r0x02bd2668:
  *(int *)(unaff_x22 + 0x18) = (int)in_x10 + 1;
  puVar2 = (undefined8 *)(param_1 + in_x10 * 8 + 0x20);
  *puVar2 = param_3;
  thunk_FUN_01b4f09c(puVar2,0);
  lVar4 = unaff_x23;
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
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + unaff_x23 * 8),
                       *(undefined8 *)(unaff_x20 + 0x28));
    lVar4 = unaff_x23;
  } while ((uVar1 & 1) == 0);
  lVar3 = *(long *)(unaff_x21 + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_02bd26c8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (unaff_x22 != 0) {
      param_3 = *(undefined8 *)(lVar3 + unaff_x23 * 8);
      param_1 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (param_1 != 0) {
        in_x10 = (long)(int)*(uint *)(unaff_x22 + 0x18);
        if (*(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x22 + 0x18)) {
          FUN_02bd1e6c();
          goto LAB_02bd2698;
        }
        goto code_r0x02bd2668;
      }
    }
  }
LAB_02bd26c4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


