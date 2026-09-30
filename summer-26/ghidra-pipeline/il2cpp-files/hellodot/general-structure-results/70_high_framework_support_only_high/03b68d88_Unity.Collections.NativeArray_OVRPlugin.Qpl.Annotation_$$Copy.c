/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 03b68d88
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  int in_w8;
  long lVar1;
  long in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (in_x9 != 0) {
    if (in_w8 == *(int *)(in_x9 + 0x18)) {
      FUN_03b684f0();
      in_w8 = *(int *)(unaff_x19 + 0x18);
    }
    if (in_w8 - unaff_w20 != 0 && (int)unaff_w20 <= in_w8) {
      FUN_04f53d58(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                   unaff_w20 + 1,in_w8 - unaff_w20,0);
    }
    lVar1 = *(long *)(unaff_x19 + 0x10);
    uVar3 = unaff_x21[1];
    uVar2 = *unaff_x21;
    if (lVar1 != 0) {
      if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)unaff_w20 * 0x18;
        *(undefined8 *)(lVar1 + 0x30) = unaff_x21[2];
        *(undefined8 *)(lVar1 + 0x28) = uVar3;
        *(undefined8 *)(lVar1 + 0x20) = uVar2;
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


