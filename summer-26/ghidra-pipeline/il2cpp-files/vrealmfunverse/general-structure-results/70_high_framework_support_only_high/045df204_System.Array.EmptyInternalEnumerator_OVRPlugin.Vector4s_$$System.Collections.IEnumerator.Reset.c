/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 045df204
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_Reset
          (long *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
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
  
code_r0x045df204:
  puVar2 = (undefined8 *)FUN_02b7654c(param_1,param_2,param_3);
  param_1 = unaff_x22;
FUN_045df25c:
  uVar8 = (uint)unaff_x25;
  uVar7 = (uint)unaff_x20;
  uVar4 = (*(code *)*puVar2)(param_1,unaff_w23,unaff_w24,puVar2[1]);
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar7 < 0) {
        lVar5 = *(long *)(in_stack_00000018 + 0x10);
        if (lVar5 != 0) {
          if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
            *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4) + 1;
            goto FUN_045df320;
          }
          goto LAB_045df36c;
        }
      }
      else {
        lVar5 = *(long *)(in_stack_00000018 + 0x18);
        if (lVar5 != 0) {
          if (uVar7 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + (ulong)uVar7 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4);
FUN_045df320:
            lVar5 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24;
            uVar10 = *(undefined8 *)(lVar5 + 0x14);
            uVar9 = *(undefined8 *)(lVar5 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar5 + 0x1c);
            in_stack_00000010[1] = uVar10;
            *in_stack_00000010 = uVar9;
            uVar1 = *(undefined4 *)(in_stack_00000018 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000018 + 0x24) = uVar8;
            *(undefined4 *)(lVar5 + 4) = uVar1;
            *(ulong *)(in_stack_00000018 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
            return 1;
          }
LAB_045df36c:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
      }
LAB_045df368:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
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
      lVar5 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar5 == 0) goto LAB_045df368;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_045df36c;
      unaff_x27 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w26);
    param_1 = *(long **)(in_stack_00000018 + 0x30);
    if (param_1 != (long *)0x0) break;
    plVar3 = (long *)FUN_03421e68(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_045df368;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8),
                       in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
  unaff_w23 = *(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8);
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_02b76218(param_2);
  }
  lVar5 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  unaff_w24 = in_stack_00000028._4_4_;
  if (uVar4 == 0) goto LAB_045df1fc;
  piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  while (*(long *)(piVar6 + -2) != param_2) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) goto LAB_045df1fc;
  }
  puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  goto FUN_045df25c;
LAB_045df1fc:
  param_3 = 0;
  unaff_x22 = param_1;
  goto code_r0x045df204;
}


