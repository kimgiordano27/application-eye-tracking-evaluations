/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 053aef84
PROGRAM: ZombiesMRFree-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
          (void)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar7;
  long unaff_x23;
  uint uVar8;
  ulong unaff_x24;
  ulong uVar9;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar10;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x053aef84:
  uVar8 = (uint)unaff_x24;
  uVar10 = (uint)unaff_x29;
  plVar2 = (long *)FUN_040052a8(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
  if (plVar2 == (long *)0x0) {
LAB_053af0bc:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar3 = (**(code **)(*plVar2 + 0x1b8))
                    (plVar2,*(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28),
                     in_stack_00000018,*(undefined8 *)(*plVar2 + 0x1c0));
  uVar9 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar10 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_053af0bc;
        if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x14 + 0x24) + 1;
          goto LAB_053af088;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_053af0bc;
        if (uVar10 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar10 * 0x14 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x14 + 0x24);
LAB_053af088:
          *unaff_x25 = -1;
          *(undefined4 *)(unaff_x26 + unaff_x24 * 0x14 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_053af0c0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    do {
      uVar8 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar8;
      unaff_x29 = uVar9 & 0xffffffff;
      uVar10 = (uint)uVar9;
      if ((int)uVar8 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_053af0bc;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_053af0c0;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar9 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    plVar2 = *(long **)(unaff_x19 + 0x30);
    unaff_x28 = unaff_x24;
    if (plVar2 == (long *)0x0) goto code_r0x053aef84;
    if (plVar2 == (long *)0x0) goto LAB_053af0bc;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
    uVar7 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar4 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar5) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_053aefcc;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(plVar2,lVar5,0);
LAB_053aefcc:
    uVar3 = (*(code *)*puVar1)(plVar2,uVar7,in_stack_00000018,puVar1[1]);
    unaff_x23 = in_stack_00000010;
  } while( true );
}


