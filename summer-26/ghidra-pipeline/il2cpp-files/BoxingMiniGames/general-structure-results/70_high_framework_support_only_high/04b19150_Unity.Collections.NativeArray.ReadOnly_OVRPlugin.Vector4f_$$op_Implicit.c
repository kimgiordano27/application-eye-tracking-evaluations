/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$op_Implicit
ENTRY_POINT: 04b19150
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__op_Implicit
               (undefined8 param_1,undefined8 param_2)

{
  void *__src;
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  long lVar7;
  long unaff_x29;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  if (unaff_x24 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    __src = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x20) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x21,__src,unaff_x23);
    lVar7 = *(long *)(lVar7 + 0xc0);
    puVar3 = *(undefined8 **)(lVar7 + 0x50);
    uVar1 = *puVar3;
    puVar5 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x21;
    }
    pcVar6 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
    auVar8 = (*pcVar6)(uVar1);
    uVar4 = *(undefined4 *)(unaff_x29 + -0x14);
  }
  if (unaff_x19 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18(auVar8._0_8_,auVar8._8_8_,uVar4);
    }
  }
  else {
    FUN_0315dc8c();
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x20) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x21,unaff_x22,unaff_x23);
    lVar7 = *(long *)(lVar7 + 0xc0);
    puVar5 = *(undefined8 **)(lVar7 + 0x58);
    uVar1 = *puVar5;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    pcVar6 = (code *)puVar5[2];
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
    (*pcVar6)(uVar1);
    piVar2 = (int *)thunk_FUN_036a1ed0();
    if (*piVar2 != unaff_w26) {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
          == 0) {
        FUN_0367c9fc();
      }
      FUN_0744f048();
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


