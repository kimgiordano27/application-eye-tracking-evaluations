/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 02b194cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___ctor(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined8 uVar8;
  uint uVar9;
  ulong unaff_x25;
  uint uVar10;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000008;
  undefined4 *in_stack_00000010;
  long in_stack_00000018;
  
code_r0x02b194cc:
  uVar9 = (uint)unaff_x25;
  uVar10 = (uint)unaff_x26;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 8);
  uVar8 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8(lVar4);
  }
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02b19588;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01dde8fc(unaff_x23,lVar4,0);
LAB_02b19588:
  uVar6 = (*(code *)*puVar2)(unaff_x23,uVar8);
  do {
    if ((uVar6 & 1) != 0) {
      if ((int)uVar10 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_02b1968c;
        if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x20 * 0x18 + 0x24) + 1;
          goto LAB_02b19648;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_02b1968c;
        if (uVar10 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar10 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x20 * 0x18 + 0x24);
LAB_02b19648:
          lVar4 = unaff_x27 + unaff_x20 * 0x18;
          *in_stack_00000010 = *(undefined4 *)(lVar4 + 0x30);
          *unaff_x29 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined4 *)(lVar4 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_02b19690:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    do {
      uVar9 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
      unaff_x20 = (ulong)uVar9;
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar10 = (uint)unaff_x25;
      if ((int)uVar9 < 0) {
        *in_stack_00000010 = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_02b1968c;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9) goto LAB_02b19690;
      unaff_x29 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
      unaff_x25 = unaff_x20;
    } while (*unaff_x29 != unaff_w28);
    unaff_x23 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x23 != (long *)0x0) break;
    plVar3 = (long *)FUN_0201725c(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_02b1968c;
    uVar6 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28));
  } while( true );
  param_1 = in_stack_00000018;
  if (unaff_x23 == (long *)0x0) {
LAB_02b1968c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  goto code_r0x02b194cc;
}


