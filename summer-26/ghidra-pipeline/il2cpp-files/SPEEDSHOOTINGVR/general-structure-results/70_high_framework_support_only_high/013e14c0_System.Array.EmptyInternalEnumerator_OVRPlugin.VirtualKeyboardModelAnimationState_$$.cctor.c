/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 013e14c0
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
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor
          (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  byte in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  ulong unaff_x19;
  int *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  long unaff_x25;
  undefined8 unaff_x26;
  uint uVar7;
  ulong unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x013e14c0:
  uVar7 = (uint)unaff_x27;
  uVar6 = (uint)unaff_x19;
  if ((in_w8 & 1) == 0) {
    param_2 = FUN_0103c244(param_2);
  }
  lVar3 = *unaff_x22;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_2) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_013e155c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0103c348(unaff_x22,param_2,0);
LAB_013e155c:
  uVar4 = (*(code *)*puVar1)(unaff_x22,in_stack_00000018,unaff_x26,unaff_x28,unaff_x23,puVar1[1]);
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar6 < 0) {
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
        if (uVar6 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + (ulong)uVar6 * 0x30 + 0x24) =
               *(undefined4 *)(unaff_x29 + unaff_x21 * 0x30 + 0x24);
LAB_013e1630:
          lVar3 = unaff_x29 + unaff_x21 * 0x30;
          uVar9 = *(undefined8 *)(lVar3 + 0x40);
          uVar8 = *(undefined8 *)(lVar3 + 0x38);
          in_stack_00000008[2] = *(undefined8 *)(lVar3 + 0x48);
          in_stack_00000008[1] = uVar9;
          *in_stack_00000008 = uVar8;
          *unaff_x20 = -1;
          *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(unaff_x25 + 0x24);
          *(uint *)(unaff_x25 + 0x24) = uVar7;
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
      uVar7 = *(uint *)(unaff_x29 + unaff_x21 * 0x30 + 0x24);
      unaff_x21 = (ulong)uVar7;
      unaff_x19 = unaff_x27 & 0xffffffff;
      uVar6 = (uint)unaff_x27;
      if ((int)uVar7 < 0) {
        *in_stack_00000008 = 0;
        in_stack_00000008[1] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x29 = *(long *)(unaff_x25 + 0x18);
      if (unaff_x29 == 0) goto LAB_013e1678;
      if (*(uint *)(unaff_x29 + 0x18) <= uVar7) goto LAB_013e167c;
      unaff_x20 = (int *)(unaff_x29 + unaff_x21 * 0x30 + 0x20);
      unaff_x27 = unaff_x21;
    } while (*unaff_x20 != unaff_w24);
    unaff_x22 = *(long **)(unaff_x25 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar2 = (long *)FUN_012274ec(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_013e1678;
    lVar3 = unaff_x29 + unaff_x21 * 0x30;
    uVar4 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30),
                       in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_013e1678:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  lVar3 = unaff_x29 + unaff_x21 * 0x30;
  in_stack_00000018 = *(undefined8 *)(lVar3 + 0x28);
  unaff_x26 = *(undefined8 *)(lVar3 + 0x30);
  in_w8 = *(byte *)(param_2 + 0x135);
  unaff_x23 = in_stack_00000028;
  unaff_x28 = in_stack_00000020;
  goto code_r0x013e14c0;
}


