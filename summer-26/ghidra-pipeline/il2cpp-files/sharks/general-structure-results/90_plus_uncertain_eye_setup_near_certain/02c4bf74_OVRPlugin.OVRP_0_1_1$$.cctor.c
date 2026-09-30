/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$.cctor
ENTRY_POINT: 02c4bf74
PROGRAM: sharks-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02c4c010) */
/* WARNING: Removing unreachable block (ram,0x02c4c08c) */
/* WARNING: Removing unreachable block (ram,0x02c4c028) */
/* WARNING: Removing unreachable block (ram,0x02c4c02c) */

void OVRPlugin_OVRP_0_1_1___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  if (unaff_x22 != (long *)0x0) {
    lVar2 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_037f3288) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose:
    (*(code *)*puVar1)();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0();
  }
  if (unaff_x21 != 0) {
    if (*(int *)(unaff_x21 + 0x18) < 1) {
      return;
    }
    FUN_02c4c1b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


