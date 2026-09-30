/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$AsReadOnlySpan
ENTRY_POINT: 04b19108
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__AsReadOnlySpan
               (long param_1,undefined8 param_2)

{
  void *__src;
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *__dest;
  void *unaff_x22;
  size_t unaff_x23;
  long lVar8;
  long unaff_x25;
  long lVar9;
  long unaff_x29;
  undefined1 auVar10 [16];
  
  __dest = (undefined8 *)(&stack0x00000000 + -(unaff_x23 + 0xf & 0x1fffffff0));
  piVar2 = (int *)thunk_FUN_036a1ed0(param_2,*(long *)(*(long *)(param_1 + 0x48) + 0x80) + 0x20);
  iVar1 = *piVar2;
  auVar10 = thunk_FUN_036a1ed0();
  lVar8 = *auVar10._0_8_;
  if (lVar8 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar9 = *(long *)(unaff_x20 + 0x20);
    __src = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x20) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,__src,unaff_x23);
    lVar9 = *(long *)(lVar9 + 0xc0);
    puVar4 = *(undefined8 **)(lVar9 + 0x50);
    uVar3 = *puVar4;
    puVar6 = __dest;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x20) + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
    }
    pcVar7 = (code *)puVar4[2];
    *(undefined8 **)(unaff_x29 + -0x10) = puVar6;
    auVar10 = (*pcVar7)(uVar3,puVar4,lVar8,unaff_x29 + -0x10,unaff_x29 + -0x14);
    uVar5 = *(undefined4 *)(unaff_x29 + -0x14);
  }
  if (unaff_x19 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18(auVar10._0_8_,auVar10._8_8_,uVar5);
    }
  }
  else {
    FUN_0315dc8c();
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x20) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,unaff_x22,unaff_x23);
    lVar8 = *(long *)(lVar8 + 0xc0);
    puVar6 = *(undefined8 **)(lVar8 + 0x58);
    uVar3 = *puVar6;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x20) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    pcVar7 = (code *)puVar6[2];
    *(undefined8 **)(unaff_x29 + -0x10) = __dest;
    (*pcVar7)(uVar3);
    piVar2 = (int *)thunk_FUN_036a1ed0();
    if (*piVar2 != iVar1) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0367c9fc();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
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


