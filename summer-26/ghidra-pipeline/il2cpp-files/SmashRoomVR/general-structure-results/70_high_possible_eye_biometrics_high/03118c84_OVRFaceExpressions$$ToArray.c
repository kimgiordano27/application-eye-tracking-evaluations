/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 03118c84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined4 uVar5;
  
                    /* try { // try from 03118c84 to 03218c87 has its CatchHandler @ 03118c8c */
  piVar4 = (int *)(in_x10 + 8);
  do {
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03118c20 with catch @ 03118c88
                       try { // try from 03118c88 to 03218ca3 has its CatchHandler @ 03118c00 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03118c44 with catch @ 03118c8c
                       catch(type#1 @ 03b4f5b8) { ... } // from try @ 03118c84 with catch @ 03118c8c
                        */
    if (*(long *)(piVar4 + -2) == param_3) {
                    /* catch() { ... } // from try @ 03118ca4 with catch @ 03118cb4 */
      puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_03118cbc;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
                    /* try { // try from 03118ca4 to 03218ca7 has its CatchHandler @ 03118cb4 */
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_03118cbc:
                    /* try { // try from 03118cc0 to 03218ccb has its CatchHandler @ 03118ce0 */
  (*(code *)*puVar1)();
                    /* try { // try from 03118ccc to 03218cd7 has its CatchHandler @ 03118c00 */
                    /* try { // try from 03118cd8 to 03218cdf has its CatchHandler @ 03118ce0 */
  uVar2 = thunk_FUN_01afaadc(*unaff_x22);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03118cc0 with catch @ 03118ce0
                       catch(type#2 @ 00000000) { ... } // from try @ 03118cd8 with catch @ 03118ce0
                        */
                    /* catch() { ... } // from try @ 03118d2c with catch @ 03118ce4
                       catch() { ... } // from try @ 03118d6c with catch @ 03118ce4
                       catch() { ... } // from try @ 03118db8 with catch @ 03118ce4 */
  FUN_0311b0cc();
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
  thunk_FUN_01b4f09c(unaff_x19 + 0x1a0,uVar2);
  uVar2 = thunk_FUN_01afaadc(*unaff_x24);
  FUN_03179658(uVar2,0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar2;
  thunk_FUN_01b4f09c(unaff_x19 + 0x1a8,uVar2);
  uVar2 = thunk_FUN_01afaadc(*unaff_x24);
  FUN_03179658(uVar2,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar2;
  thunk_FUN_01b4f09c(unaff_x19 + 0x1b0,uVar2);
  uVar2 = thunk_FUN_01afaadc(*unaff_x24);
  FUN_03179658(uVar2,0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar2;
  thunk_FUN_01b4f09c(unaff_x19 + 0x1b8,uVar2);
  FUN_0317a03c(*(undefined8 *)(unaff_x19 + 0x1a8),*(undefined8 *)(unaff_x19 + 0x120),0,0);
  FUN_0317a03c(*(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x120),0,0);
  lVar3 = *(long *)(unaff_x19 + 0x1c0);
  if (lVar3 != 0) {
    uVar5 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    *(undefined4 *)(unaff_x19 + 0x1cc) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x1d0) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


