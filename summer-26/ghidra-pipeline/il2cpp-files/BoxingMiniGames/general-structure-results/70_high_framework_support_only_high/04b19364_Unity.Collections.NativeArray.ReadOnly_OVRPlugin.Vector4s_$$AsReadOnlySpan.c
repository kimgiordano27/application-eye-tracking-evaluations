/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$AsReadOnlySpan
ENTRY_POINT: 04b19364
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__AsReadOnlySpan
               (long param_1,undefined8 param_2)

{
  void *__src;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  long unaff_x23;
  long lVar6;
  long unaff_x25;
  long lVar7;
  long unaff_x29;
  undefined1 auVar8 [16];
  
  auVar8 = thunk_FUN_036a1ed0(param_2,param_1 + 0x40);
  lVar6 = *auVar8._0_8_;
  if (lVar6 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar7 = *(long *)(unaff_x23 + 0x20);
    __src = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x20) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x20,__src,unaff_x22);
    lVar7 = *(long *)(lVar7 + 0xc0);
    puVar2 = *(undefined8 **)(lVar7 + 0x50);
    uVar1 = *puVar2;
    puVar4 = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x20;
    }
    pcVar5 = (code *)puVar2[2];
    *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
    auVar8 = (*pcVar5)(uVar1,puVar2,lVar6,unaff_x29 + -0x10,unaff_x29 + -0x14);
    uVar3 = *(undefined4 *)(unaff_x29 + -0x14);
  }
  if (unaff_x19 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18(auVar8._0_8_,auVar8._8_8_,uVar3);
    }
  }
  else {
    FUN_0315dc8c();
    lVar6 = *(long *)(unaff_x23 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x20) + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x20,unaff_x21,unaff_x22);
    lVar6 = *(long *)(lVar6 + 0xc0);
    puVar4 = *(undefined8 **)(lVar6 + 0x78);
    uVar1 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x20) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    pcVar5 = (code *)puVar4[2];
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x20;
    (*pcVar5)(uVar1);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


