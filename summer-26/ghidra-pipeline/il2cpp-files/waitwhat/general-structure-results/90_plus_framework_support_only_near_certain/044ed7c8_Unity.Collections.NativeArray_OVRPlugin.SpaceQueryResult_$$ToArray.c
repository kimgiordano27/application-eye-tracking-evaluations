/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 044ed7c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_w21) {
LAB_044ed838:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 044ed744 with catch @ 044ed838
                        */
      FUN_03188ce0();
    }
    if (unaff_x20 == 0) goto LAB_044ed834;
    uVar5 = unaff_x22 & 0xffffffff;
    param_1 = param_1 + uVar5 * 0x10;
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + 0x20),
                       *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    unaff_x22 = unaff_x22 - 1;
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_044ed838;
        lVar4 = lVar4 + uVar5 * 0x10;
        uVar2 = *(undefined8 *)(lVar4 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + 0x28);
LAB_044ed824:
                    /* try { // try from 044ed824 to 045ed827 has its CatchHandler @ 044ed834 */
        auVar6._8_8_ = uVar3;
        auVar6._0_8_ = uVar2;
                    /* try { // try from 044ed828 to 045ed85f has its CatchHandler @ 044ed354 */
        return auVar6;
      }
      goto LAB_044ed834;
    }
    unaff_w21 = unaff_w21 - 1;
    if ((int)unaff_w21 < 0) {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_044ed824;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_044ed834:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 044ed824 with catch @ 044ed834
                        */
      FUN_03188cd8();
    }
  } while( true );
}


