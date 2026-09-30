/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 028db188
PROGRAM: gunraiders-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___cctor
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  uint uVar7;
  ulong unaff_x24;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  int *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x028db188:
  uVar9 = (uint)unaff_x25;
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_028db204;
    }
    in_x9 = in_x9 - 1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
LAB_028db1a4:
  uVar9 = (uint)unaff_x25;
  puVar2 = (undefined8 *)FUN_01c72498(unaff_x21,param_3,0);
LAB_028db204:
  uVar7 = (uint)unaff_x24;
  uVar4 = (*(code *)*puVar2)(unaff_x21,unaff_w22,unaff_w23,puVar2[1]);
  uVar8 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_028db300;
        if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x28 + 0x24) + 1;
          goto LAB_028db2c0;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 == 0) goto LAB_028db300;
        if (uVar9 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar9 * 0x28 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x28 + 0x24);
LAB_028db2c0:
          *unaff_x29 = -1;
          lVar5 = unaff_x26 + unaff_x24 * 0x28;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined4 *)(lVar5 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar7;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_028db304:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    do {
      uVar7 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar7;
      unaff_x25 = uVar8 & 0xffffffff;
      uVar9 = (uint)uVar8;
      if ((int)uVar7 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_028db300;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_028db304;
      unaff_x29 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar8 = unaff_x24;
    } while (*unaff_x29 != unaff_w27);
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar3 = (long *)FUN_022cb868(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_028db300;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  if (unaff_x21 == (long *)0x0) {
LAB_028db300:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_w22 = *(undefined4 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_01c72394(param_3);
  }
  param_1 = *unaff_x21;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x28 = unaff_x24;
  unaff_w23 = in_stack_00000018._4_4_;
  if (in_x9 != 0) goto code_r0x028db184;
  goto LAB_028db1a4;
code_r0x028db184:
  in_x10 = *(long *)(param_1 + 0xb0);
  goto code_r0x028db188;
}


