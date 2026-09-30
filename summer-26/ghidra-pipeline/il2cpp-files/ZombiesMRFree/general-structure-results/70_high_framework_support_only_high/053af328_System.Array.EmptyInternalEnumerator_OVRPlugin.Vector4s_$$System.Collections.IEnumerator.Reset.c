/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 053af328
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_Reset(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar8;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  uint uVar10;
  long unaff_x27;
  int unaff_w28;
  int *piVar11;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    while( true ) {
      do {
        uVar9 = unaff_x25;
        uVar1 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
        unaff_x20 = (ulong)uVar1;
        if ((int)uVar1 < 0) {
          *in_stack_00000008 = 0;
          return 0;
        }
        unaff_x27 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x27 == 0) goto LAB_053af410;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar1) goto LAB_053af414;
        piVar11 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
        unaff_x25 = unaff_x20;
      } while (*piVar11 != unaff_w28);
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 != (long *)0x0) break;
      plVar4 = (long *)FUN_040052a8(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
      if (plVar4 == (long *)0x0) goto LAB_053af410;
      uVar6 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28),
                         in_stack_00000018,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((uVar6 & 1) != 0) goto LAB_053af36c;
    }
    if (plVar4 == (long *)0x0) goto LAB_053af410;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
    uVar8 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_053af30c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar4,lVar3,0);
LAB_053af30c:
    uVar6 = (*(code *)*puVar2)(plVar4,uVar8,in_stack_00000018,puVar2[1]);
    unaff_x24 = in_stack_00000010;
  } while ((uVar6 & 1) == 0);
LAB_053af36c:
  uVar10 = (uint)uVar9;
  if ((int)uVar10 < 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_053af410;
    if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_053af414;
    *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
         *(int *)(unaff_x27 + unaff_x20 * 0x14 + 0x24) + 1;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 == 0) {
LAB_053af410:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar10) {
LAB_053af414:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined4 *)(lVar3 + (uVar9 & 0xffffffff) * 0x14 + 0x24) =
         *(undefined4 *)(unaff_x27 + unaff_x20 * 0x14 + 0x24);
  }
  lVar3 = unaff_x27 + unaff_x20 * 0x14;
  *in_stack_00000008 = *(undefined4 *)(lVar3 + 0x30);
  *piVar11 = -1;
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(uint *)(unaff_x19 + 0x24) = uVar1;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


