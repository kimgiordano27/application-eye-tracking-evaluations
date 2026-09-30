/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 04f68ab8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector4f>___cctor(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w24;
  long unaff_x25;
  undefined4 *unaff_x27;
  uint unaff_w28;
  
  if ((int)unaff_w28 < 0) {
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) goto LAB_04f68b8c;
    if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x25) goto LAB_04f68b90;
    *(int *)(lVar2 + unaff_x25 * 4 + 0x20) = unaff_x27[1] + 1;
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 == 0) {
LAB_04f68b8c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w28) {
LAB_04f68b90:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(undefined4 *)(lVar2 + (ulong)unaff_w28 * 0x10 + 0x24) = unaff_x27[1];
  }
  uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w24;
  *unaff_x27 = 0xffffffff;
  unaff_x27[1] = uVar1;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


