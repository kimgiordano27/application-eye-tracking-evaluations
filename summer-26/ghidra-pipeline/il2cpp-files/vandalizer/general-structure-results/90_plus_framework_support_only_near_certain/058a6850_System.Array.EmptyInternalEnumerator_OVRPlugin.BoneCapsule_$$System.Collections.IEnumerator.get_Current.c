/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 058a6850
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  uint uVar5;
  ulong unaff_x24;
  ulong uVar6;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar7;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x058a6850:
  uVar7 = (uint)unaff_x29;
  if ((bool)in_ZR) {
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_058a68c0;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_058a6860:
    uVar7 = (uint)unaff_x29;
    puVar1 = (undefined8 *)FUN_0322c1e8(unaff_x21,param_3,0);
LAB_058a68c0:
    uVar5 = (uint)unaff_x24;
    uVar3 = (*(code *)*puVar1)(unaff_x21,unaff_w22,unaff_w23,puVar1[1]);
    uVar6 = unaff_x24;
    unaff_x24 = unaff_x28;
    do {
      if ((uVar3 & 1) != 0) {
        if ((int)uVar7 < 0) {
          lVar4 = *(long *)(unaff_x19 + 0x10);
          if (lVar4 == 0) goto LAB_058a69b0;
          if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(unaff_x26 + unaff_x24 * 0x24 + 0x24) + 1;
            goto LAB_058a697c;
          }
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) goto LAB_058a69b0;
          if (uVar7 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (ulong)uVar7 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x26 + unaff_x24 * 0x24 + 0x24);
LAB_058a697c:
            *unaff_x25 = -1;
            *(undefined4 *)(unaff_x26 + unaff_x24 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24)
            ;
            *(uint *)(unaff_x19 + 0x24) = uVar5;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
LAB_058a69b4:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      do {
        uVar5 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
        unaff_x24 = (ulong)uVar5;
        unaff_x29 = uVar6 & 0xffffffff;
        uVar7 = (uint)uVar6;
        if ((int)uVar5 < 0) {
          return 0;
        }
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x26 == 0) goto LAB_058a69b0;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar5) goto LAB_058a69b4;
        unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
        uVar6 = unaff_x24;
      } while (*unaff_x25 != unaff_w27);
      unaff_x21 = *(long **)(unaff_x19 + 0x30);
      if (unaff_x21 != (long *)0x0)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__MoveNext;
      plVar2 = (long *)FUN_03e98388(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar2 == (long *)0x0) goto LAB_058a69b0;
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined4 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar2 + 0x1c0));
    } while( true );
  }
  goto LAB_058a6848;
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__MoveNext:
  if (unaff_x21 == (long *)0x0) {
LAB_058a69b0:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_w22 = *(undefined4 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_0322bef4(param_3);
  }
  param_1 = *unaff_x21;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x28 = unaff_x24;
  unaff_w23 = in_stack_00000018._4_4_;
  if (in_x9 != 0) goto code_r0x058a6840;
  goto LAB_058a6860;
code_r0x058a6840:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_058a6848:
  in_ZR = *(long *)(in_x10 + -2) == param_3;
  goto code_r0x058a6850;
}


