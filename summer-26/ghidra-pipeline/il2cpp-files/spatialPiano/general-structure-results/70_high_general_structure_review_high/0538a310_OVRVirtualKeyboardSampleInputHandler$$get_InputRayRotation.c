/*
FUNCTION_NAME: OVRVirtualKeyboardSampleInputHandler$$get_InputRayRotation
ENTRY_POINT: 0538a310
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRVirtualKeyboardSampleInputHandler__get_InputRayRotation(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  
  FUN_02f08768(Unity_Burst_FloatMode_TypeInfo);
                    /* try { // try from 0538a320 to 0548a323 has its CatchHandler @ 0538a38c */
                    /* try { // try from 0538a324 to 0548a33b has its CatchHandler @ 0538a39c */
  FUN_02f08768(System_Net_IWebRequestCreate_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x597) = 1;
  puVar1 = System_Net_IWebRequestCreate_TypeInfo;
                    /* try { // try from 0538a33c to 0548a383 has its CatchHandler @ 0538a0d8 */
  FUN_05116b38();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_0535d9e0();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  uVar2 = FUN_0535da5c();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  uVar2 = FUN_0535db30();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
                    /* try { // try from 0538a384 to 0548a387 has its CatchHandler @ 0538a398 */
                    /* try { // try from 0538a388 to 0548a3bb has its CatchHandler @ 0538a0d8 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0538a320 with catch @ 0538a38c
                        */
  uVar2 = FUN_0535dc04();
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0538a2e0 with catch @ 0538a390
                        */
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0538a2f4 with catch @ 0538a394
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0538a384 with catch @ 0538a398
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0538a324 with catch @ 0538a39c
                        */
  uVar2 = FUN_0535dcd8();
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0538a2d0 with catch @ 0538a3a0
                        */
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  lVar3 = FUN_0535ddac();
                    /* try { // try from 0538a3bc to 0548a3bf has its CatchHandler @ 0538a3d8 */
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* try { // try from 0538a3c0 to 0548a3db has its CatchHandler @ 0538a0d8 */
  FUN_0538a40c(uVar4,lVar3);
  lVar5 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
                    /* catch() { ... } // from try @ 0538a3bc with catch @ 0538a3d8 */
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = uVar4;
  }
                    /* try { // try from 0538a3dc to 0548a3e3 has its CatchHandler @ 0538a3ec */
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
                    /* try { // try from 0538a3e4 to 0548a3ef has its CatchHandler @ 0538a0d8 */
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0538a3dc with catch @ 0538a3ec
                        */
  uVar2 = FUN_0535de28();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return;
}


