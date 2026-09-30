/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 02c20280
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c2030c) */

void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x22;
  
  FUN_02c26218();
  FUN_02c262d8();
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02c202e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 02c202d4 to 02d202ef has its CatchHandler @ 02c203bc */
  puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c202e8:
  (*(code *)*puVar1)();
                    /* try { // try from 02c20304 to 02d2031f has its CatchHandler @ 02c203c4 */
  return;
}


