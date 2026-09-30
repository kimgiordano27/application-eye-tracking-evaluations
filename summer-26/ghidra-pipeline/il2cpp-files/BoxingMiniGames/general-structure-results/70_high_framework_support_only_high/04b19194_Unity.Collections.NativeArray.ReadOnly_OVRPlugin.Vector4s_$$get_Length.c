/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 04b19194
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__get_Length
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int in_w9;
  code *pcVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  long lVar5;
  long unaff_x25;
  int unaff_w26;
  long unaff_x29;
  undefined1 auVar6 [16];
  
  if (-1 < in_w9) {
    param_1 = *unaff_x21;
  }
  pcVar4 = *(code **)(param_3 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  auVar6 = (*pcVar4)();
  if (unaff_x19 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18(auVar6._0_8_,auVar6._8_8_,*(undefined4 *)(unaff_x29 + -0x14));
    }
  }
  else {
    FUN_0315dc8c();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x21,unaff_x22,unaff_x23);
    lVar5 = *(long *)(lVar5 + 0xc0);
    puVar3 = *(undefined8 **)(lVar5 + 0x58);
    uVar1 = *puVar3;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    pcVar4 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
    (*pcVar4)(uVar1);
    piVar2 = (int *)thunk_FUN_036a1ed0();
    if (*piVar2 != unaff_w26) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
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


