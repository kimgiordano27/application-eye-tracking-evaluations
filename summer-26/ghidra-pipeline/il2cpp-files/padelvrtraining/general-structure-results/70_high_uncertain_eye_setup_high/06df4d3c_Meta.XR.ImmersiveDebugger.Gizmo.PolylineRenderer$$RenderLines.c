/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 06df4d3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar7;
  
  lVar6 = *(long *)(param_1 + 0x48);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  uVar7 = unaff_w19 + (unaff_w24 >> 1);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06df4718();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06df4718();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_06df4718();
  if (unaff_x20 == 0) {
LAB_06df4fa0:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (uVar7 < *(uint *)(unaff_x20 + 0x18)) {
    lVar6 = unaff_x20 + (long)(int)uVar7 * 0x10;
    uVar1 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    uVar7 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_06df4860();
    if ((int)uVar7 <= (int)unaff_w19) {
LAB_06df4f2c:
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03d8f26c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03d8f26c();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_06df4860();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_06df4fa0;
      lVar6 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
      uVar2 = *(undefined8 *)(lVar6 + 0x20);
      uVar4 = *(undefined8 *)(lVar6 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      iVar5 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar2,uVar4,uVar1,uVar3,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar5) {
        do {
          uVar7 = uVar7 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_06df4f9c;
          lVar6 = unaff_x20 + (long)(int)uVar7 * 0x10;
          uVar2 = *(undefined8 *)(lVar6 + 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x28);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          iVar5 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar3,uVar2,uVar4,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar5 < 0);
        if ((int)uVar7 <= (int)unaff_w19) goto LAB_06df4f2c;
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03d8f26c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03d8f26c();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        FUN_06df4860();
      }
    }
  }
LAB_06df4f9c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


