/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 02bf2edc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  int in_w8;
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
  
  if (0 < in_w8) {
    uVar6 = 0;
                    /* try { // try from 02bf2ee8 to 02cf2efb has its CatchHandler @ 02bf2f08 */
    lVar7 = 0x20;
    do {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_02bf3038;
                    /* try { // try from 02bf2efc to 02cf2f1f has its CatchHandler @ 02bf2ea8 */
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_02bf303c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      puVar1 = (undefined8 *)(lVar4 + lVar7);
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bf2ee8 with catch @ 02bf2f08
                        */
      if (unaff_x20 == 0) goto LAB_02bf3038;
                    /* try { // try from 02bf2f20 to 02cf2f37 has its CatchHandler @ 02bf2f70 */
                    /* try { // try from 02bf2f38 to 02cf2f5f has its CatchHandler @ 02bf2ea8 */
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(unaff_x21 + 0x10);
        if (lVar4 == 0) goto LAB_02bf3038;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_02bf303c;
        puVar1 = (undefined8 *)(lVar4 + lVar7);
        uVar5 = puVar1[2];
        uVar9 = puVar1[1];
        uVar8 = *puVar1;
        if (unaff_x22 == 0) {
LAB_02bf3038:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar4 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_02bf3038;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          lVar4 = lVar4 + (long)(int)uVar2 * 0x18;
          *(undefined8 *)(lVar4 + 0x30) = uVar5;
          *(undefined8 *)(lVar4 + 0x28) = uVar9;
          *(undefined8 *)(lVar4 + 0x20) = uVar8;
          thunk_FUN_01b4f09c(lVar4 + 0x20,0);
        }
        else {
          in_stack_00000040 = uVar8;
          in_stack_00000048 = uVar9;
          in_stack_00000050 = uVar5;
          FUN_02bf25d0();
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((long)uVar6 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


