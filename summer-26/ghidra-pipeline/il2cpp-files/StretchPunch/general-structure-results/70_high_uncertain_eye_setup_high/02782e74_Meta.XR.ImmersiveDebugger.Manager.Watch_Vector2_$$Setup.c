/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$Setup
ENTRY_POINT: 02782e74
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__Setup(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_033b2d60();
  lVar3 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 02782e7c to 02882e9b has its CatchHandler @ 02782f04 */
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x20);
    if (0 < (int)uVar1) {
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) goto LAB_02782f04;
      uVar2 = *(uint *)(lVar3 + 0x18);
      uVar4 = 0;
                    /* try { // try from 02782e9c to 02882f1b has its CatchHandler @ 02782cec */
      puVar5 = (undefined4 *)(lVar3 + 0x38);
      do {
        if (uVar2 <= uVar4) {
LAB_02782eec:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < (int)puVar5[-6]) {
          if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_02782eec;
          lVar3 = (long)(int)unaff_w19;
          unaff_w19 = unaff_w19 + 1;
          *(undefined4 *)(unaff_x20 + lVar3 * 4 + 0x20) = *puVar5;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 8;
      } while (uVar1 != uVar4);
    }
    return;
  }
LAB_02782f04:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 02782e7c with catch @ 02782f04
                        */
  FUN_01d7db70();
}


