/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 045e96c4
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>___cctor
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  uint uVar6;
  ulong unaff_x24;
  uint uVar7;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x045e96c4:
  if (!(bool)in_ZR) goto LAB_045e96b0;
LAB_045e96c8:
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x21,param_3,0);
LAB_045e9728:
  uVar6 = (uint)unaff_x24;
  uVar7 = (uint)unaff_x25;
  uVar4 = (*(code *)*puVar2)(unaff_x21,unaff_w22,unaff_w23,puVar2[1]);
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar7 < 0) {
        lVar5 = *(long *)(in_stack_00000008 + 0x10);
        if (lVar5 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
            *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 100 + 4) + 1;
            goto LAB_045e97e0;
          }
          goto LAB_045e9818;
        }
      }
      else {
        lVar5 = *(long *)(in_stack_00000008 + 0x18);
        if (lVar5 != 0) {
          if (uVar7 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + (ulong)uVar7 * 100 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 100 + 4);
LAB_045e97e0:
            uVar1 = *(undefined4 *)(in_stack_00000008 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000008 + 0x24) = uVar6;
            *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 100 + 4) = uVar1;
            *(ulong *)(in_stack_00000008 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000008 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000008 + 0x28) + 1);
            return 1;
          }
LAB_045e9818:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
      }
LAB_045e9814:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    do {
      unaff_x25 = unaff_x24 & 0xffffffff;
      uVar7 = (uint)unaff_x24;
      uVar6 = *(uint *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
      unaff_x24 = (ulong)uVar6;
      if ((int)uVar6 < 0) {
        return 0;
      }
      lVar5 = *(long *)(in_stack_00000008 + 0x18);
      if (lVar5 == 0) goto LAB_045e9814;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_045e9818;
      unaff_x26 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff));
      unaff_x27 = unaff_x24;
    } while (*unaff_x28 != unaff_w29);
    unaff_x21 = *(long **)(in_stack_00000008 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar3 = (long *)FUN_03421e68(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_045e9814;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_w22 = *(undefined4 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8);
  if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  param_1 = *unaff_x21;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_w23 = in_stack_00000018._4_4_;
  if (in_x9 == 0) goto LAB_045e96c8;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_045e96b0:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
    goto code_r0x045e96c4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_045e9728;
}


