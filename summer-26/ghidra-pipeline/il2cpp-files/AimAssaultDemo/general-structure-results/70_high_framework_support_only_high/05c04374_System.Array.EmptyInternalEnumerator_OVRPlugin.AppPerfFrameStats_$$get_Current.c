/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 05c04374
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  long unaff_x23;
  uint uVar9;
  ulong unaff_x24;
  ulong uVar10;
  int *unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  uint uVar11;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x05c04374:
  uVar9 = (uint)unaff_x24;
  uVar11 = (uint)unaff_x29;
                    /* try { // try from 05c04374 to 05d0462b has its CatchHandler @ 05c04374
                       catch() { ... } // from try @ 05c04374 with catch @ 05c04374
                       catch() { ... } // from try @ 05c046fc with catch @ 05c04374
                       catch() { ... } // from try @ 05c047a4 with catch @ 05c04374
                       catch() { ... } // from try @ 05c0484c with catch @ 05c04374 */
  plVar3 = (long *)FUN_03e0c914(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18));
  if (plVar3 == (long *)0x0) {
LAB_05c044b4:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1b8))
                    (plVar3,*(undefined8 *)(unaff_x26 + unaff_x27 * unaff_x20 + 0x28),
                     in_stack_00000018,*(undefined8 *)(*plVar3 + 0x1c0));
  uVar10 = unaff_x24;
  unaff_x24 = unaff_x27;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar11 < 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_05c044b4;
        if ((uint)in_stack_00000008 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x38 + 0x24) + 1;
          goto LAB_05c04474;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_05c044b4;
        if (uVar11 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar11 * 0x38 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x38 + 0x24);
LAB_05c04474:
          *unaff_x25 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar6 = unaff_x26 + unaff_x24 * 0x38;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x30) = 0;
          *(undefined8 *)(lVar6 + 0x48) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined8 *)(lVar6 + 0x50) = 0;
          *(undefined4 *)(lVar6 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_05c044b8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    do {
      uVar9 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar9;
      unaff_x29 = uVar10 & 0xffffffff;
      uVar11 = (uint)uVar10;
      if ((int)uVar9 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_05c044b4;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_05c044b8;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar10 = unaff_x24;
    } while (*unaff_x25 != unaff_w28);
    plVar3 = *(long **)(unaff_x19 + 0x30);
    if (plVar3 == (long *)0x0) break;
    if (plVar3 == (long *)0x0) goto LAB_05c044b4;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
    uVar8 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678(lVar6);
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05c043b8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar3,lVar6,0);
LAB_05c043b8:
    uVar4 = (*(code *)*puVar2)(plVar3,uVar8,in_stack_00000018,puVar2[1]);
    unaff_x23 = in_stack_00000010;
  } while( true );
  param_1 = *(long *)(unaff_x23 + 0x20);
  unaff_x27 = unaff_x24;
  goto code_r0x05c04374;
}


