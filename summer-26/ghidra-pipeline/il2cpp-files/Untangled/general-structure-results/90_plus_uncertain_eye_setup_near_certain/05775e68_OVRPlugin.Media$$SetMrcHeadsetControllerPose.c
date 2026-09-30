/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 05775e68
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetMrcHeadsetControllerPose(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *unaff_x25;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
                    /* try { // try from 05775e68 to 05875e6f has its CatchHandler @ 0577605c */
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  uVar4 = thunk_FUN_02ef1ac4();
  *(undefined8 *)(unaff_x25 + 0xba8) = uVar4;
                    /* try { // try from 05775e7c to 05875e7f has its CatchHandler @ 05776058 */
  uVar4 = thunk_FUN_02ef1de4();
  if (unaff_x19 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
                    /* try { // try from 05775e88 to 05875e93 has its CatchHandler @ 05776054 */
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    pvVar5 = malloc(uVar8 * 0x28);
    if (0 < (int)uVar8) {
                    /* try { // try from 05775eb0 to 05875eb7 has its CatchHandler @ 0577606c */
      lVar10 = 0;
      do {
        lVar1 = unaff_x19 + lVar10;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
                    /* try { // try from 05775ec8 to 05875eef has its CatchHandler @ 05776070 */
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_02ef1de4(*(undefined8 *)(lVar1 + 0x20));
        puVar7 = (undefined8 *)((long)pvVar5 + lVar10);
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_02ef1de4(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
      unaff_x25 = &DAT_071c3000;
    }
  }
                    /* try { // try from 05775f18 to 05875f1b has its CatchHandler @ 05776040 */
                    /* try { // try from 05775f20 to 05875f2f has its CatchHandler @ 0577607c */
  uVar6 = (**(code **)(unaff_x25 + 0xba8))();
  thunk_FUN_02ef1dd8(uVar4);
  if (pvVar5 != (void *)0x0) {
    if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar5 + 0x10);
      do {
                    /* try { // try from 05775f4c to 05875f4f has its CatchHandler @ 0577604c */
        thunk_FUN_02ef1dd8(puVar7[-2]);
                    /* try { // try from 05775f58 to 05875f63 has its CatchHandler @ 05776048 */
        puVar7[-2] = 0;
        thunk_FUN_02ef1dd8(*puVar7);
        *puVar7 = 0;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
                    /* try { // try from 05775f70 to 05875f97 has its CatchHandler @ 05776064 */
    thunk_FUN_02ef1dd8(pvVar5);
  }
                    /* try { // try from 05775f98 to 05875fd3 has its CatchHandler @ 05775db0 */
  return uVar6;
}


