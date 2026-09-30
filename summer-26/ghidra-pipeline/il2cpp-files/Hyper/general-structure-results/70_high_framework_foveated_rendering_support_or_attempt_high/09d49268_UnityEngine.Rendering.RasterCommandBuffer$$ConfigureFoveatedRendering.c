/*
FUNCTION_NAME: UnityEngine.Rendering.RasterCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 09d49268
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_6;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  long unaff_x19;
  int unaff_w21;
  
  lVar6 = FUN_09d5fe68(param_1,unaff_w21);
  lVar7 = FUN_09d5fa60(lVar6,0);
  puVar4 = PTR_DAT_0ac40278;
  if (lVar7 == 0) {
LAB_09d4945c:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar8 = *(long *)PTR_DAT_0ac40278;
  *(undefined4 *)(lVar7 + 0x24) = **(undefined4 **)(*(long *)PTR_DAT_0acc7550 + 0xb8);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar8 = *(long *)puVar4;
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x140) = 0;
  if (lVar9 == 0) goto LAB_09d4945c;
  iVar5 = FUN_09d5fdf8(lVar9,0);
  puVar3 = (undefined8 *)(lVar6 + iVar5 + -0xc);
  iVar1 = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x13c) + 1;
  *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x13c) = iVar1;
  if (puVar3 == (undefined8 *)0x0) goto LAB_09d4945c;
  *(int *)(lVar6 + iVar5 + -4) = iVar1;
  *puVar3 = *(undefined8 *)(lVar7 + 0xc);
  bVar2 = *(byte *)(lVar7 + 0x20);
  if (bVar2 == 1) {
    *(byte *)(lVar7 + 0x23) = *(byte *)(lVar7 + 0x23) | 0x80;
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) goto LAB_09d4945c;
    if (unaff_w21 != *(int *)(lVar6 + 0x50)) {
      if (unaff_w21 == 0) {
        unaff_w21 = *(int *)(lVar6 + 0x48);
      }
      uVar10 = FUN_09d5fe68(lVar6,unaff_w21 + -1,0);
      lVar6 = FUN_09d5fa60(uVar10,0);
      if (lVar6 == 0) goto LAB_09d4945c;
      *(ulong *)(lVar7 + 0xc) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0xc) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(lVar6 + 0xc) >> 0x20),
                    (float)*(undefined8 *)(lVar7 + 0xc) - (float)*(undefined8 *)(lVar6 + 0xc));
      if (*(char *)(lVar6 + 0x23) < '\0') {
        bVar11 = 0x80;
        if (*(int *)(lVar6 + 0x24) != *(int *)(lVar7 + 0x24)) {
          bVar11 = 0;
        }
      }
      else {
        bVar11 = 0;
      }
      bVar2 = *(byte *)(lVar7 + 0x20);
      *(byte *)(lVar7 + 0x23) = *(byte *)(lVar7 + 0x23) & 0x7f | bVar11;
    }
    uVar12 = (uint)bVar2;
    if (uVar12 - 3 < 2) {
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *(long *)puVar4;
      }
      lVar6 = *(long *)(lVar6 + 0xb8) + 0xc0;
      goto FUN_09d4942c;
    }
    if (uVar12 == 2) {
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *(long *)puVar4;
      }
      lVar6 = *(long *)(lVar6 + 0xb8) + 0x70;
      goto FUN_09d4942c;
    }
    if (uVar12 != 1) {
      return;
    }
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *(long *)puVar4;
  }
  lVar6 = *(long *)(lVar6 + 0xb8) + 0x20;
FUN_09d4942c:
  FUN_05b363a4(lVar6);
  return;
}


