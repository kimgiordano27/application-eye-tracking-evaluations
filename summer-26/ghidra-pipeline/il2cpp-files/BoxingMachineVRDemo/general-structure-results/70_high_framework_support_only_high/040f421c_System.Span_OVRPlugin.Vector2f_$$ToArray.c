/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 040f421c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Span<OVRPlugin_Vector2f>__ToArray(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar10;
  long unaff_x22;
  undefined1 auVar11 [16];
  
  uVar5 = FUN_05015c2c();
  uVar6 = FUN_05015c2c(*(long *)(unaff_x22 + 0x88) + 0x20,0);
  uVar7 = FUN_0501ed54(uVar5,uVar6,0);
  plVar10 = (long *)*unaff_x20;
  if ((uVar7 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_040f44ac;
  }
  else {
    if (plVar10 == (long *)0x0) {
LAB_040f44ac:
      uVar7 = 0;
      lVar8 = 0;
      goto LAB_040f44b4;
    }
    if (*plVar10 == *(long *)(unaff_x22 + 0x90)) {
      lVar8 = FUN_04e8a8a0(plVar10,0);
      lVar9 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(uint *)(plVar10 + 2);
      uVar4 = *(ushort *)(lVar9 + 0x135);
      if ((uVar4 & 1) == 0) {
        FUN_02d9a2e0(lVar9);
        lVar9 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(uint *)(unaff_x20 + 1);
      uVar2 = *(uint *)((long)unaff_x20 + 0xc);
      uVar7 = (ulong)uVar2;
      if ((uVar4 & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x80);
      if ((uVar3 < uVar1) || (uVar3 - uVar1 < uVar2)) {
        FUN_05027268(0);
      }
      if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d9a2e0();
      }
      lVar8 = lVar8 + (int)uVar1;
      goto LAB_040f44b4;
    }
  }
  lVar8 = *(long *)(unaff_x19 + 0x20);
  uVar3 = *(uint *)(unaff_x20 + 1);
  uVar1 = *(uint *)((long)unaff_x20 + 0xc);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d9a2e0();
  }
  lVar8 = **(long **)(lVar8 + 0xc0);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
  }
  lVar9 = thunk_FUN_02d9d438(plVar10,lVar8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(plVar10,lVar8);
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar7 = (ulong)uVar1 & 0x7fffffff;
  if ((*(uint *)(lVar9 + 0x18) < uVar3) || (*(uint *)(lVar9 + 0x18) - uVar3 < (uint)uVar7)) {
    FUN_05027268(0);
  }
  lVar8 = lVar9 + (int)uVar3 + 0x20;
LAB_040f44b4:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = lVar8;
  return auVar11;
}


