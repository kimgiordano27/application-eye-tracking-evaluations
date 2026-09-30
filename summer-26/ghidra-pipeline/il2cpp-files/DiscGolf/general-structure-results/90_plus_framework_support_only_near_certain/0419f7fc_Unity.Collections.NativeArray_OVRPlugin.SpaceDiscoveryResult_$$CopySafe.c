/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 0419f7fc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_x4;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  
  FUN_0550b264(param_1,unaff_w21,param_1,unaff_w22 + unaff_w21,in_x4,0);
  if (unaff_x23 == unaff_x19) {
    FUN_0550b264(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
    FUN_0550b264(unaff_x19[2],unaff_w22 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                 (int)unaff_x19[3] - unaff_w21,0);
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 0419f834 to 0429f843 has its CatchHandler @ 0419f844 */
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar3 = *unaff_x23;
                    /* catch() { ... } // from try @ 0419f7c0 with catch @ 0419f844
                       catch() { ... } // from try @ 0419f834 with catch @ 0419f844 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0419f848 to 0429f84b has its CatchHandler @ 0419f854 */
    if (uVar4 != 0) {
                    /* try { // try from 0419f84c to 0429f857 has its CatchHandler @ 0419f6a8 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0419f848 with catch @ 0419f854
                        */
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_0419f8cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c();
LAB_0419f8cc:
    (*(code *)*puVar1)();
  }
  *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + unaff_w22;
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


