/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 038b0bf4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector4s>(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *in_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  int unaff_w22;
  int unaff_w23;
  undefined8 unaff_x24;
  int unaff_w26;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x80) = **(undefined8 **)(unaff_x29 + -0x80);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xf8);
  if (-1 < unaff_w22) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar2 = *(undefined8 **)(unaff_x20 + 0x30);
  if (-1 < unaff_w23) {
    in_x10 = (undefined8 *)*in_x10;
  }
  uVar1 = *puVar2;
  if (-1 < *(int *)(unaff_x29 + -0xc0)) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  if (-1 < unaff_w26) {
    unaff_x28 = (undefined8 *)*unaff_x28;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = param_1;
  *(undefined8 **)(unaff_x29 + -0x30) = in_x10;
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x28;
  pcVar3 = (code *)puVar2[2];
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
  (*pcVar3)(uVar1,puVar2,0,unaff_x29 + -0x48,unaff_x29 + -0x18);
  if (*(long *)(unaff_x29 + -0x100) == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    *(undefined8 *)(*(long *)(unaff_x29 + -0x100) + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
    thunk_FUN_036b7ad0();
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


