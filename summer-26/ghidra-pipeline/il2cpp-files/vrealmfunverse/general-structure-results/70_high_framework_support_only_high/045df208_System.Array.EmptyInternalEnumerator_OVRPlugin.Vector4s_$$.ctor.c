/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 045df208
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  uint uVar8;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
FUN_045df25c:
  uVar8 = (uint)unaff_x25;
  uVar7 = (uint)unaff_x20;
  uVar3 = (*(code *)*param_1)(unaff_x22,unaff_w23,unaff_w24,param_1[1]);
  if ((uVar3 & 1) == 0) {
    while( true ) {
      do {
        unaff_x20 = unaff_x25 & 0xffffffff;
        uVar7 = (uint)unaff_x25;
        uVar8 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
        unaff_x25 = (ulong)uVar8;
        if ((int)uVar8 < 0) {
          *in_stack_00000010 = 0;
          in_stack_00000010[1] = 0;
          in_stack_00000010[2] = 0;
          return 0;
        }
        lVar4 = *(long *)(in_stack_00000018 + 0x18);
        if (lVar4 == 0) goto LAB_045df368;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_045df36c;
        unaff_x27 = lVar4 + 0x20;
        unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
        unaff_x29 = unaff_x25;
      } while (*unaff_x28 != unaff_w26);
      unaff_x22 = *(long **)(in_stack_00000018 + 0x30);
      if (unaff_x22 != (long *)0x0) break;
      plVar2 = (long *)FUN_03421e68(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar2 == (long *)0x0) goto LAB_045df368;
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined4 *)
                                 (unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8),
                         in_stack_00000028._4_4_,*(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) != 0) goto LAB_045df2c0;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
    unaff_w23 = *(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar5 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    unaff_w24 = in_stack_00000028._4_4_;
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_045df25c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_02b7654c(unaff_x22,lVar4,0);
    goto FUN_045df25c;
  }
LAB_045df2c0:
  if ((int)uVar7 < 0) {
    lVar4 = *(long *)(in_stack_00000018 + 0x10);
    if (lVar4 == 0) goto LAB_045df368;
    if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000008) goto LAB_045df36c;
    *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
         *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4) + 1;
  }
  else {
    lVar4 = *(long *)(in_stack_00000018 + 0x18);
    if (lVar4 == 0) {
LAB_045df368:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_045df36c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined4 *)(lVar4 + (ulong)uVar7 * 0x24 + 0x24) =
         *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4);
  }
  lVar4 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24;
  uVar10 = *(undefined8 *)(lVar4 + 0x14);
  uVar9 = *(undefined8 *)(lVar4 + 0xc);
  in_stack_00000010[2] = *(undefined8 *)(lVar4 + 0x1c);
  in_stack_00000010[1] = uVar10;
  *in_stack_00000010 = uVar9;
  uVar1 = *(undefined4 *)(in_stack_00000018 + 0x24);
  *unaff_x28 = -1;
  *(uint *)(in_stack_00000018 + 0x24) = uVar8;
  *(undefined4 *)(lVar4 + 4) = uVar1;
  *(ulong *)(in_stack_00000018 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
  return 1;
}


