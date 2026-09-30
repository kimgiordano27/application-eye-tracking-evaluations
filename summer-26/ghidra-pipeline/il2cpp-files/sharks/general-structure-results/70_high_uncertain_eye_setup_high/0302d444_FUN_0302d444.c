/*
FUNCTION_NAME: FUN_0302d444
ENTRY_POINT: 0302d444
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0302d444(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
                    /* try { // try from 0302d444 to 0312d447 has its CatchHandler @ 0302ddc0 */
  puVar1 = PTR_DAT_037f45f0;
                    /* try { // try from 0302d448 to 0312d453 has its CatchHandler @ 0302ddd4 */
                    /* try { // try from 0302d464 to 0312d46f has its CatchHandler @ 0302ddd8 */
  if ((DAT_03a2b33d & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f9758);
    FUN_017fc350(PTR_DAT_037fa0b8);
    FUN_017fc350(PTR_DAT_037fe668);
                    /* try { // try from 0302d494 to 0312d497 has its CatchHandler @ 0302ddb4 */
                    /* try { // try from 0302d498 to 0312d4a3 has its CatchHandler @ 0302ddc4 */
    FUN_017fc350(PTR_DAT_03822528);
    FUN_017fc350(PTR_DAT_037f8790);
    FUN_017fc350(PTR_DAT_037f45f0);
                    /* try { // try from 0302d4b4 to 0312d4bf has its CatchHandler @ 0302ddc8 */
    FUN_017fc350(PTR_DAT_03822530);
    FUN_017fc350(PTR_DAT_03822538);
    DAT_03a2b33d = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  thunk_FUN_0181f594();
                    /* try { // try from 0302d4e4 to 0312d4e7 has its CatchHandler @ 0302dda8 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 0302d4e8 to 0312d4f3 has its CatchHandler @ 0302ddb8 */
    thunk_FUN_01843fdc();
  }
  if (DAT_03a226ba == '\0') {
    FUN_017fc350(PTR_DAT_037f45f0);
                    /* try { // try from 0302d504 to 0312d50f has its CatchHandler @ 0302ddbc */
    DAT_03a226ba = '\x01';
  }
  puVar2 = PTR_DAT_03822538;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc(lVar5);
    lVar5 = *(long *)puVar1;
  }
  lVar3 = *(long *)puVar2;
                    /* try { // try from 0302d534 to 0312d537 has its CatchHandler @ 0302dd9c */
                    /* try { // try from 0302d538 to 0312d543 has its CatchHandler @ 0302ddac */
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_037f9758;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
                    /* try { // try from 0302d554 to 0312d55f has its CatchHandler @ 0302ddb0 */
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar3 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037fa0b8);
                    /* try { // try from 0302d584 to 0312d587 has its CatchHandler @ 0302dd90 */
                    /* try { // try from 0302d588 to 0312d593 has its CatchHandler @ 0302dda0 */
    FUN_0245e010(lVar7,uVar8,*(undefined8 *)PTR_DAT_03822530,0);
                    /* try { // try from 0302d5a4 to 0312d5af has its CatchHandler @ 0302dda4 */
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar7;
    thunk_FUN_0188fd20(plVar4,lVar7);
  }
  puVar2 = PTR_DAT_037f8790;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar8 = FUN_02c303d4(0);
                    /* try { // try from 0302d5d4 to 0312d5d7 has its CatchHandler @ 0302dd84 */
                    /* try { // try from 0302d5d8 to 0312d5e3 has its CatchHandler @ 0302dd94 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar2);
  }
                    /* try { // try from 0302d5f4 to 0312d5ff has its CatchHandler @ 0302dd98 */
  if (DAT_03a226b9 == '\0') {
    FUN_017fc350(PTR_DAT_037f8790);
    DAT_03a226b9 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar3 = *(long *)puVar2;
  }
                    /* try { // try from 0302d624 to 0312d627 has its CatchHandler @ 0302dd78 */
                    /* try { // try from 0302d628 to 0312d633 has its CatchHandler @ 0302dd88 */
                    /* try { // try from 0302d644 to 0312d64f has its CatchHandler @ 0302dd8c */
  if (((lVar5 != 0) &&
      (FUN_01bc7f38(lVar5,lVar7,lVar6,uVar8,1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),
                    *(undefined8 *)PTR_DAT_03822528), lVar6 != 0)) && (*(long *)(lVar6 + 0x10) != 0)
     ) {
    OVRPlugin_Media__SetMrcHeadsetControllerPose(*(long *)(lVar6 + 0x10),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0302d674 to 0312d677 has its CatchHandler @ 0302dd6c */
  FUN_017fc5a8();
}


