/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 03b686d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_03b6882c;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b6869c with catch @ 03b68700
                       try { // try from 03b68700 to 03c68717 has its CatchHandler @ 03b68654 */
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_03b68830:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      puVar1 = (undefined8 *)(lVar4 + lVar7);
                    /* try { // try from 03b68718 to 03c6872f has its CatchHandler @ 03b687a4 */
      if (unaff_x20 == 0) goto LAB_03b6882c;
                    /* try { // try from 03b68730 to 03c68793 has its CatchHandler @ 03b68654 */
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(unaff_x21 + 0x10);
        if (lVar4 == 0) goto LAB_03b6882c;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03b68830;
        puVar1 = (undefined8 *)(lVar4 + lVar7);
        uVar5 = puVar1[2];
        uVar9 = puVar1[1];
        uVar8 = *puVar1;
        if (unaff_x22 == 0) {
LAB_03b6882c:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar4 = *(long *)(unaff_x22 + 0x10);
                    /* try { // try from 03b68794 to 03c687a3 has its CatchHandler @ 03b687a4 */
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_03b6882c;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
                    /* catch() { ... } // from try @ 03b68718 with catch @ 03b687a4
                       catch() { ... } // from try @ 03b68794 with catch @ 03b687a4 */
                    /* try { // try from 03b687a8 to 03c687ab has its CatchHandler @ 03b687b4 */
                    /* try { // try from 03b687ac to 03c687b7 has its CatchHandler @ 03b68654 */
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03b687a8 with catch @ 03b687b4
                        */
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
                    /* try { // try from 03b687b8 to 03c68ab7 has its CatchHandler @ 03b687b8
                       catch() { ... } // from try @ 03b687b8 with catch @ 03b687b8
                       catch() { ... } // from try @ 03b68b7c with catch @ 03b687b8
                       catch() { ... } // from try @ 03b68c40 with catch @ 03b687b8
                       catch() { ... } // from try @ 03b68cec with catch @ 03b687b8 */
          lVar4 = lVar4 + (long)(int)uVar2 * 0x18;
          *(undefined8 *)(lVar4 + 0x30) = uVar5;
          *(undefined8 *)(lVar4 + 0x28) = uVar9;
          *(undefined8 *)(lVar4 + 0x20) = uVar8;
        }
        else {
          in_stack_00000040 = uVar8;
          in_stack_00000048 = uVar9;
          in_stack_00000050 = uVar5;
          FUN_03b67de8();
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((long)uVar6 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


