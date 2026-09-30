/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 05c0436c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar9;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar10;
  int *piVar11;
  long unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  uint uVar12;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    while( true ) {
      do {
        uVar10 = unaff_x24;
        uVar1 = *(uint *)(unaff_x26 + unaff_x27 * unaff_x20 + 0x24);
        unaff_x27 = (ulong)uVar1;
        if ((int)uVar1 < 0) {
          return 0;
        }
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x26 == 0) goto LAB_05c044b4;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_05c044b8;
        piVar11 = (int *)(unaff_x26 + unaff_x27 * (unaff_x20 & 0xffffffff) + 0x20);
        unaff_x24 = unaff_x27;
      } while (*piVar11 != unaff_w28);
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) break;
      if (plVar5 == (long *)0x0) goto LAB_05c044b4;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
      uVar9 = *(undefined8 *)(unaff_x26 + unaff_x27 * unaff_x20 + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678(lVar4);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05c043b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar5,lVar4,0);
LAB_05c043b8:
      uVar7 = (*(code *)*puVar3)(plVar5,uVar9,in_stack_00000018,puVar3[1]);
      unaff_x23 = in_stack_00000010;
      if ((uVar7 & 1) != 0) goto LAB_05c04410;
    }
    plVar5 = (long *)FUN_03e0c914(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
    if (plVar5 == (long *)0x0) goto LAB_05c044b4;
    uVar7 = (**(code **)(*plVar5 + 0x1b8))
                      (plVar5,*(undefined8 *)(unaff_x26 + unaff_x27 * unaff_x20 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar5 + 0x1c0));
  } while ((uVar7 & 1) == 0);
LAB_05c04410:
  uVar12 = (uint)uVar10;
  if ((int)uVar12 < 0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_05c044b4;
    if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000008) goto LAB_05c044b8;
    *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
         *(int *)(unaff_x26 + unaff_x27 * 0x38 + 0x24) + 1;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) {
LAB_05c044b4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar12) {
LAB_05c044b8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(undefined4 *)(lVar4 + (uVar10 & 0xffffffff) * 0x38 + 0x24) =
         *(undefined4 *)(unaff_x26 + unaff_x27 * 0x38 + 0x24);
  }
  *piVar11 = -1;
  uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
  lVar4 = unaff_x26 + unaff_x27 * 0x38;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined4 *)(lVar4 + 0x24) = uVar2;
  *(uint *)(unaff_x19 + 0x24) = uVar1;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


