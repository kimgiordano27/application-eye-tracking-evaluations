/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04929870
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
          (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w23;
  uint uVar8;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar9;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x04929870:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x29;
  uVar1 = *(undefined4 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28);
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_02d9a2e0(param_2);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_2) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04929918;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x21,param_2,0);
LAB_04929918:
  uVar4 = (*(code *)*puVar2)(unaff_x21,uVar1,unaff_w23,puVar2[1]);
  uVar6 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_04929a08;
        if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x24 + 0x24) + 1;
          goto FUN_049299d4;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_04929a08;
        if (uVar9 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar9 * 0x24 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x24 + 0x24);
FUN_049299d4:
          *unaff_x25 = -1;
          *(undefined4 *)(unaff_x26 + unaff_x24 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_04929a0c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    do {
      uVar8 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar8;
      unaff_x29 = uVar6 & 0xffffffff;
      uVar9 = (uint)uVar6;
      if ((int)uVar8 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_04929a08;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_04929a0c;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar6 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar3 = (long *)FUN_03642a0c(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_04929a08;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  if (unaff_x21 == (long *)0x0) {
LAB_04929a08:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_x28 = unaff_x24;
  unaff_w23 = in_stack_00000018._4_4_;
  goto code_r0x04929870;
}


