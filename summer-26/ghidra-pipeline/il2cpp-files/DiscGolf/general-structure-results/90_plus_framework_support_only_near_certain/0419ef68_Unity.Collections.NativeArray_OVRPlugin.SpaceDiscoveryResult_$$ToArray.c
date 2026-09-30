/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 0419ef68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
code_r0x0419ef68:
  FUN_0419e728();
LAB_0419ef7c:
  do {
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    lVar6 = *(long *)(unaff_x21 + 0x10);
    if (lVar6 == 0) goto LAB_0419efa8;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_0419efac;
    if (unaff_x20 == 0) goto LAB_0419efa8;
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar6 + unaff_x23 + 0x20),
                       *(undefined8 *)(lVar6 + unaff_x23 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar4 & 1) == 0);
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) {
LAB_0419efac:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x22 != 0) {
      uVar1 = *(undefined8 *)(lVar6 + unaff_x23 + 0x20);
      uVar2 = *(undefined8 *)(lVar6 + unaff_x23 + 0x28);
      lVar6 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
          *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
          puVar5 = (undefined8 *)(lVar6 + 0x20);
          *puVar5 = uVar1;
          *(undefined8 *)(lVar6 + 0x28) = uVar2;
          LeanTween__value(puVar5,0);
          goto LAB_0419ef7c;
        }
        goto code_r0x0419ef68;
      }
    }
  }
LAB_0419efa8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


