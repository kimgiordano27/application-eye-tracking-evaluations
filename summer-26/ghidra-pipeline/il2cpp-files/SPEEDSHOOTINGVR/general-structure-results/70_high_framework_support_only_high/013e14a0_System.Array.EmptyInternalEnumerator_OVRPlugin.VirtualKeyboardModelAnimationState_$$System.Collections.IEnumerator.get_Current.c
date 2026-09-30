/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 013e14a0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  ulong unaff_x19;
  int *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  int unaff_w24;
  long unaff_x25;
  uint uVar8;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x013e14a0:
  uVar8 = (uint)unaff_x27;
  uVar7 = (uint)unaff_x19;
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  lVar4 = unaff_x29 + unaff_x21 * unaff_x28;
  uStack0000000000000018 = *(undefined8 *)(lVar4 + 0x28);
  uVar9 = *(undefined8 *)(lVar4 + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_013e155c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0103c348(unaff_x22,lVar3,0);
LAB_013e155c:
  uVar5 = (*(code *)*puVar1)(unaff_x22,uStack0000000000000018,uVar9,in_stack_00000020,
                             in_stack_00000028,puVar1[1]);
  unaff_x28 = 0x30;
  do {
    if ((uVar5 & 1) != 0) {
      if ((int)uVar7 < 0) {
        lVar3 = *(long *)(unaff_x25 + 0x10);
        if (lVar3 == 0) goto LAB_013e1678;
        if ((uint)in_stack_00000000 < *(uint *)(lVar3 + 0x18)) {
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x29 + unaff_x21 * 0x30 + 0x24) + 1;
          goto LAB_013e1630;
        }
      }
      else {
        lVar3 = *(long *)(unaff_x25 + 0x18);
        if (lVar3 == 0) goto LAB_013e1678;
        if (uVar7 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + (ulong)uVar7 * 0x30 + 0x24) =
               *(undefined4 *)(unaff_x29 + unaff_x21 * 0x30 + 0x24);
LAB_013e1630:
          lVar3 = unaff_x29 + unaff_x21 * 0x30;
          uVar10 = *(undefined8 *)(lVar3 + 0x40);
          uVar9 = *(undefined8 *)(lVar3 + 0x38);
          in_stack_00000008[2] = *(undefined8 *)(lVar3 + 0x48);
          in_stack_00000008[1] = uVar10;
          *in_stack_00000008 = uVar9;
          *unaff_x20 = -1;
          *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(unaff_x25 + 0x24);
          *(uint *)(unaff_x25 + 0x24) = uVar8;
          *(ulong *)(unaff_x25 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x25 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x25 + 0x28) + 1);
          return 1;
        }
      }
LAB_013e167c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    do {
      uVar8 = *(uint *)(unaff_x29 + unaff_x21 * 0x30 + 0x24);
      unaff_x21 = (ulong)uVar8;
      unaff_x19 = unaff_x27 & 0xffffffff;
      uVar7 = (uint)unaff_x27;
      if ((int)uVar8 < 0) {
        *in_stack_00000008 = 0;
        in_stack_00000008[1] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x29 = *(long *)(unaff_x25 + 0x18);
      if (unaff_x29 == 0) goto LAB_013e1678;
      if (*(uint *)(unaff_x29 + 0x18) <= uVar8) goto LAB_013e167c;
      unaff_x20 = (int *)(unaff_x29 + unaff_x21 * 0x30 + 0x20);
      unaff_x27 = unaff_x21;
    } while (*unaff_x20 != unaff_w24);
    unaff_x22 = *(long **)(unaff_x25 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar2 = (long *)FUN_012274ec(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_013e1678;
    lVar3 = unaff_x29 + unaff_x21 * 0x30;
    uVar5 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30),
                       in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_013e1678:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  param_1 = *(long *)(in_stack_00000010 + 0x20);
  goto code_r0x013e14a0;
}


