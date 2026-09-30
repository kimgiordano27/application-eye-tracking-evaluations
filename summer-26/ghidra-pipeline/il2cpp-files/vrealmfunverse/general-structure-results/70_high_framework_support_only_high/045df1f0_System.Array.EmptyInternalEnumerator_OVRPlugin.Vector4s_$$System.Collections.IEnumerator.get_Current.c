/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045df1f0
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  uint uVar6;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  uint uVar7;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x045df1f0:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_045df1e4;
LAB_045df1fc:
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x22,param_3,0);
FUN_045df25c:
  uVar7 = (uint)unaff_x25;
  uVar6 = (uint)unaff_x20;
  uVar4 = (*(code *)*puVar2)(unaff_x22,unaff_w23,unaff_w24,puVar2[1]);
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar6 < 0) {
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
          if (uVar6 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + (ulong)uVar6 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4);
FUN_045df320:
            lVar5 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24;
            uVar9 = *(undefined8 *)(lVar5 + 0x14);
            uVar8 = *(undefined8 *)(lVar5 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar5 + 0x1c);
            in_stack_00000010[1] = uVar9;
            *in_stack_00000010 = uVar8;
            uVar1 = *(undefined4 *)(in_stack_00000018 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000018 + 0x24) = uVar7;
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
      uVar6 = (uint)unaff_x25;
      uVar7 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x25 = (ulong)uVar7;
      if ((int)uVar7 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      lVar5 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar5 == 0) goto LAB_045df368;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_045df36c;
      unaff_x27 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w26);
    unaff_x22 = *(long **)(in_stack_00000018 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar3 = (long *)FUN_03421e68(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_045df368;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8),
                       in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
  unaff_w23 = *(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8);
  if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  param_1 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_w24 = in_stack_00000028._4_4_;
  if (in_x9 == 0) goto LAB_045df1fc;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_045df1e4:
  if (*(long *)(in_x10 + -2) != param_3) goto code_r0x045df1f0;
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto FUN_045df25c;
}


