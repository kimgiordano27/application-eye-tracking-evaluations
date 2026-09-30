/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$op_Implicit
ENTRY_POINT: 04b193ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__op_Implicit
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_x9;
  code *pcVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  long unaff_x23;
  long lVar4;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar5 [16];
  
  uVar1 = *param_3;
  if (-1 < *(int *)(in_x9 + 0x28)) {
    param_1 = *unaff_x20;
  }
  pcVar3 = (code *)param_3[2];
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  auVar5 = (*pcVar3)(uVar1);
  if (unaff_x19 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18(auVar5._0_8_,auVar5._8_8_,*(undefined4 *)(unaff_x29 + -0x14));
    }
  }
  else {
    FUN_0315dc8c();
    lVar4 = *(long *)(unaff_x23 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x20,unaff_x21,unaff_x22);
    lVar4 = *(long *)(lVar4 + 0xc0);
    puVar2 = *(undefined8 **)(lVar4 + 0x78);
    uVar1 = *puVar2;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x20) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    pcVar3 = (code *)puVar2[2];
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x20;
    (*pcVar3)(uVar1);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


