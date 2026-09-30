/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 045df1a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__get_Current(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w24;
  uint uVar9;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x045df1a8:
  uVar9 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto FUN_045df25c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x22,lVar4,0);
FUN_045df25c:
  uVar6 = (*(code *)*puVar2)(unaff_x22,uVar1,unaff_w24,puVar2[1]);
  do {
    if ((uVar6 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar4 = *(long *)(in_stack_00000018 + 0x10);
        if (lVar4 != 0) {
          if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4) + 1;
            goto FUN_045df320;
          }
          goto LAB_045df36c;
        }
      }
      else {
        lVar4 = *(long *)(in_stack_00000018 + 0x18);
        if (lVar4 != 0) {
          if (uVar8 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (ulong)uVar8 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4);
FUN_045df320:
            lVar4 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24;
            uVar11 = *(undefined8 *)(lVar4 + 0x14);
            uVar10 = *(undefined8 *)(lVar4 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar4 + 0x1c);
            in_stack_00000010[1] = uVar11;
            *in_stack_00000010 = uVar10;
            uVar1 = *(undefined4 *)(in_stack_00000018 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000018 + 0x24) = uVar9;
            *(undefined4 *)(lVar4 + 4) = uVar1;
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
      uVar8 = (uint)unaff_x25;
      uVar9 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x25 = (ulong)uVar9;
      if ((int)uVar9 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      lVar4 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar4 == 0) goto LAB_045df368;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_045df36c;
      unaff_x27 = lVar4 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w26);
    unaff_x19 = *(long **)(in_stack_00000018 + 0x30);
    if (unaff_x19 != (long *)0x0) break;
    plVar3 = (long *)FUN_03421e68(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_045df368;
    uVar6 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8),
                       in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  param_1 = *(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0);
  unaff_x22 = unaff_x19;
  unaff_w24 = in_stack_00000028._4_4_;
  goto code_r0x045df1a8;
}


