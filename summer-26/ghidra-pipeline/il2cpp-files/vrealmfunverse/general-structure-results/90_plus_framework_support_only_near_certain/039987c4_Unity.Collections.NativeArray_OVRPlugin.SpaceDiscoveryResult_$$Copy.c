/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 039987c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  undefined4 unaff_s8;
  
  if (in_NG == in_OV) {
    lVar3 = 0;
                    /* try { // try from 039987cc to 03a9882f has its CatchHandler @ 039986f8 */
    uVar4 = 0;
    do {
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 == 0) goto LAB_03998864;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_03998868:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (unaff_x20 == 0) {
LAB_03998864:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar2 = lVar2 + lVar3;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                         *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c),
                         *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 03998830 to 03a9883f has its CatchHandler @ 03998840 */
        if (lVar2 != 0) {
          if ((uint)uVar4 < *(uint *)(lVar2 + 0x18)) {
            return *(undefined4 *)(lVar2 + lVar3 + 0x20);
          }
          goto LAB_03998868;
        }
        goto LAB_03998864;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x18));
  }
  return unaff_s8;
}


