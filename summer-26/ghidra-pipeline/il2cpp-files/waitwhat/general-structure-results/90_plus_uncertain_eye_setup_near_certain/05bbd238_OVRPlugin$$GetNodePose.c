/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 05bbd238
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  float unaff_s8;
  float unaff_s9;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
                    /* try { // try from 05bbd23c to 05cbd24b has its CatchHandler @ 05bbd250 */
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbd1ec with catch @ 05bbd24c
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbd1b8 with catch @ 05bbd250
                       catch(type#1 @ 06cdc248) { ... } // from try @ 05bbd23c with catch @ 05bbd250
                        */
      puVar1 = (undefined8 *)FUN_031c0d08();
                    /* try { // try from 05bbd258 to 05cbd25b has its CatchHandler @ 05bbd2a8 */
      goto LAB_05bbd26c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
                    /* try { // try from 05bbd25c to 05cbd27f has its CatchHandler @ 05bbd0b0 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbd1f0 with catch @ 05bbd264
                        */
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
LAB_05bbd26c:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 == 0) {
    FUN_05bbd3b8();
  }
  else {
                    /* try { // try from 05bbd280 to 05cbd283 has its CatchHandler @ 05bbd290 */
                    /* try { // try from 05bbd284 to 05cbd29f has its CatchHandler @ 05bbd0b0 */
                    /* catch() { ... } // from try @ 05bbd280 with catch @ 05bbd290 */
    if ((unaff_s9 <= 0.0) || (lVar3 = FUN_05bc6e50(lVar2,0), lVar3 == 0)) {
      FUN_05bbd3b8();
    }
    else {
      FUN_05bc6e50(lVar2,0);
                    /* try { // try from 05bbd2a0 to 05cbd2a7 has its CatchHandler @ 05bbd2a8 */
      lVar2 = *unaff_x20;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bbd258 with catch @ 05bbd2a8
                       catch(type#2 @ 00000000) { ... } // from try @ 05bbd2a0 with catch @ 05bbd2a8
                        */
                    /* try { // try from 05bbd2ac to 05cbd363 has its CatchHandler @ 05bbd2ac
                       catch() { ... } // from try @ 05bbd2ac with catch @ 05bbd2ac
                       catch() { ... } // from try @ 05bbd388 with catch @ 05bbd2ac
                       catch() { ... } // from try @ 05bbd420 with catch @ 05bbd2ac
                       catch() { ... } // from try @ 05bbd458 with catch @ 05bbd2ac
                       catch() { ... } // from try @ 05bbd480 with catch @ 05bbd2ac */
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
            goto LAB_05bbd30c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bbd30c:
      (*(code *)*puVar1)();
      FUN_05bbd444(unaff_s9);
      *(undefined1 *)(unaff_x19 + 0x38) = 0;
    }
    if (0.0 < unaff_s8) {
      FUN_05bc8008(&stack0x00000024);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 05bbd364 to 05cbd387 has its CatchHandler @ 05bbd39c */
        uStack0000000000000014 = in_stack_00000038;
        uStack000000000000000c = in_stack_00000030;
        FUN_05be9e68(unaff_s8);
        *(undefined1 *)(unaff_x19 + 0x39) = 0;
                    /* try { // try from 05bbd388 to 05cbd3b3 has its CatchHandler @ 05bbd2ac */
        return;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05bbd3b4 to 05cbd3cb has its CatchHandler @ 05bbd44c */
      FUN_03188cd8();
    }
  }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbd364 with catch @ 05bbd39c
                        */
  FUN_05bbd3fc();
  return;
}


